
#include "head.h"  

void Bin13(TString req_period = "all",int req_prongs =0,int req_ETA=0,int req_ID=2
	   ,int  b_trig=0
	   //,TString s_var="tau_0_jet_bdt_score" , int hist_Xbin=25 , double hist_Xbegin=0.6 , double hist_Xend=1
	   ,TString s_var="tau_0_pt" , int hist_Xbin=20 , double hist_Xbegin=20 , double hist_Xend=70
	   ,int req_PT=0
	   )
{
  const int X_BINS = 14; 
  hist_Xbin = X_BINS-1;
  double hist_Xrange[X_BINS]={25.,28,30,32,34,36,39,43,52,64,80,100,150,300}; //pt binning
  // ===================================================================================================
  
  int  region=4;//pre,W,qcd,Z,Z(w/omass) 1-5
  //int OSSS=1;// 1=OS-SS , 2=OS , 3=SS
  
  gROOT->ProcessLine("#include <vector>");
  
  TString arg_s_xtitle = "";//"tau_0_pt";
  TString OUTPUT=s_var;
  if(s_var.Contains("lep_0_iso_"))s_var+="/lep_0_pt/1000";  //<0.15
  if("(tau_0_pt-tau_0_trig1_HLT_pt)/tau_0_pt"==s_var)OUTPUT="OnlineReso";
  
  TString tree_NAME="NOMINAL";
  //tree_NAME="TAUID_SF";
  //tree_NAME="TAU_BDTmedium_up";
  TString tree_NAME_sys=tree_NAME;
  
#include "selection.h"    
  
  TString s_req="";  
  if(1==region)      s_req=s_REQ;
  else if(2==region) s_req=s_REQ_W;
  else if(3==region) s_req=s_REQ_QCD;
  else if(4==region) s_req=s_REQ_Z;
  else if(5==region) s_req=s_REQ_Z_notmass;
  else if(7==region) s_req=s_REQ_Z_MT;  
  
  TString selection_REGION="REGION";  
  if(1==region)      selection_REGION="Pre";  
  else if(2==region) selection_REGION="W";  
  else if(3==region) selection_REGION="QCD";  
  else if(4==region) selection_REGION="Z";  
  else if(5==region) selection_REGION="PreZ_";  
  else if(7==region) selection_REGION="Z_MT_";  
  
  if(9==region) s_req= "("+s_REQ+" && TMath::Abs(lep_0_eta)<0.5)";  
  if(9==region) selection_REGION="Z_MU05_";  
  
  if(25==b_trig)
    s_req="(" +s_req +"&& HLT_tau25_medium1_tracktwo_resurrected==1 && tau_0_trig_HLT_tau25_medium1_tracktwo==1)";
  else if(35==b_trig)
    s_req="(" +s_req +"&& HLT_tau35_medium1_tracktwo_resurrected==1 && tau_0_trig_HLT_tau35_medium1_tracktwo==1)";
  
  TString _OS="&& lephad_qxq==-1";
  TString _SS="&& lephad_qxq==+1";
  TString s_Ptlow ="&&tau_0_pt<35";  // smaller 
  TString s_Pthigh="&&tau_0_pt>35";  // larger  
  
  float temp_rQCD[2][20]={0}; //trig //pt
  float temp_kwOS[2][20]={0};
  float temp_kwSS[2][20]={0};
  
  float rqcdsys[20]={0};
  float rqcdstat[20]={0};
  float rqcd[20]={0};
  
  temp_kwOS[0][0]=load_kWOS[0][0];
  temp_kwSS[0][0]=load_kWSS[0][0];
  // temp_kwOS[1][0]=load_kWOS[0][0];
  // temp_kwSS[1][0]=load_kWSS[0][0];
  temp_kwOS[0][1]=load_kWOS[0][1];
  temp_kwSS[0][1]=load_kWSS[0][1];
  // temp_kwOS[1][1]=load_kWOS[0][1];
  // temp_kwSS[1][1]=load_kWSS[0][1];
  
  int Nbin_first=51;
  int Nbin=Nbin_first+13;
  for(short pp=Nbin_first; pp<Nbin; pp++ ){
    // rqcdsys [pp-Nbin_first] = set_rQCD("sys" ,req_period,req_prongs,req_ETA,req_ID ,pp,0);
    // rqcdstat[pp-Nbin_first] = set_rQCD("stat",req_period,req_prongs,req_ETA,req_ID ,pp,0);
    temp_rQCD[0][pp-Nbin_first] = set_rQCD("mean",req_period,req_prongs,req_ETA,req_ID ,pp,0);
    temp_kwOS[0][pp-Nbin_first] = temp_kwOS[0][0];
    temp_kwSS[0][pp-Nbin_first] = temp_kwSS[0][0];
    
    if(pp-Nbin_first>=5){
      temp_kwOS[0][pp-Nbin_first] = temp_kwOS[0][1];
      temp_kwSS[0][pp-Nbin_first] = temp_kwSS[0][1];
    }
    
  }
  
  printf("FACTOR (low) = %1.3f @ %1.3f @ %1.3f \n",  temp_rQCD[0][0] , temp_kwOS[0][0], temp_kwSS[0][0]  );
  printf("FACTOR (high)= %1.3f @ %1.3f @ %1.3f \n",  temp_rQCD[0][1] , temp_kwOS[0][1], temp_kwSS[0][1]  );
  
  TH1D* h_361108f[2][2][13]; // trigger , OSSS ,Pt //FakeTau contribution from ZTT
  for(short ii=0; ii<1; ii++ ){
    for(short ll=0; ll<2; ll++ ){
      for(short jj=0; jj<13; jj++ ){
	h_361108f[ii][ll][jj]= new TH1D
	  (Form("h_361108f_%d%d%d",ii,ll,jj),
	   Form("h_361108f_%d%d%d",ii,ll,jj),hist_Xbin,hist_Xrange);
	//,hist_Xbin,hist_Xbegin,hist_Xend);  
	TFile *temp_file;
	temp_file=f_361108;
	TTree* temp_tree = (TTree*)temp_file->Get(tree_NAME);
	//TH1D* temp_mc_derivation = (TH1D*)temp_file->Get("h_mc_derivation");                       
	TH1D* temp_mc_derivation = (TH1D*)temp_file->Get("h_metadata");                       
	int temp_MCID=361108*2;
	
	
	
	TString temp_req="";
	if(0==ii)      temp_req=s_req;         //w.o trigger
	//else if(1==ii) temp_req=s_req_trigger; //w.  trigger
	// if(0==jj)      temp_req+=s_Ptlow;      //low  pt
	// else if(1==jj) temp_req+=s_Pthigh;     //high pt
	for(int rr=0; rr < 13; rr++){ //50 ={0,25} 
	  if(rr==jj){ temp_req+= Form("&& %4f<tau_0_pt && tau_0_pt<%4f",some_ptbin[rr+1],some_ptbin[rr+2]);
	    cout<<Form("&& %4f<tau_0_pt && tau_0_pt<%4f",some_ptbin[rr+1],some_ptbin[rr+2])<<endl;
	    
	  }

	}
	if(0==ll)      temp_req+=_OS;          //Opposite Sign
	else if(1==ll) temp_req+=_SS;          //  Same   Sign
	
	set_hist( h_361108f[ii][ll][jj] , temp_tree ,temp_mc_derivation ,
		  temp_req , temp_MCID , s_var);	  
	  
	}}} 
    
    
    
    
  
    TH1D* h_36110[1][10][2][13]; // trigger , samples , OSSS ,Pt
    for(short ii=0; ii<1; ii++ ){ // trigger , samples , OSSS ,Pt
      for(short kk=0; kk<10; kk++ ){
	for(short ll=0; ll<2; ll++ ){
	  for(short jj=0; jj<13; jj++ ){
	    
	    h_36110[ii][kk][ll][jj]= new TH1D
	      (Form("h_36110_%1d_%1d_%1d_%1d",ii,kk,ll,jj),Form("h_36110_%1d_%1d_%1d_%1d",ii,kk,ll,jj)
	       ,hist_Xbin,hist_Xrange);  
	    TFile *temp_file;
	    if(0==kk)temp_file=f_361100;
	    else if(1==kk)temp_file=f_361101;
	    else if(2==kk)temp_file=f_361102;
	    else if(3==kk)temp_file=f_361103;
	    else if(4==kk)temp_file=f_361104;
	    else if(5==kk)temp_file=f_361105;
	    else if(6==kk)temp_file=f_361106;
	    else if(7==kk)temp_file=f_361107;
	    else if(8==kk)temp_file=f_361108;
	    else if(9==kk)temp_file=f_410000;
	    
	    TTree* temp_tree = (TTree*)temp_file->Get(tree_NAME);
	    TH1D* temp_mc_derivation = (TH1D*)temp_file->Get("h_metadata");                       
	    int temp_MCID=361100+kk;
	    if(9==kk)temp_MCID=410000;
	    
	    TString temp_req="";
	    if(0==ii)      temp_req=s_req;         //w.o trigger
	    //else if(1==ii) temp_req=s_req_trigger; //w.  trigger
	    // if(0==jj)      temp_req+=s_Ptlow;      //low  pt
	    // else if(1==jj) temp_req+=s_Pthigh;     //high pt
	    for(int rr=0; rr < 13; rr++){ //50 ={0,25} 
	      if(rr==jj) temp_req+= Form("&& %4f<tau_0_pt && tau_0_pt<%4f",some_ptbin[rr+1],some_ptbin[rr+2]);
	    }
	    if(0==ll)      temp_req+=_OS;          //Opposite Sign
	    else if(1==ll) temp_req+=_SS;          //  Same   Sign
	    
	    set_hist( h_36110[ii][kk][ll][jj] , temp_tree ,temp_mc_derivation ,
		      temp_req , temp_MCID , s_var);	  	
	    
	  }}}}
    
    
  
  //sum   
  TH1D* h_W  =new TH1D("h_W"  ,"h_W"  ,hist_Xbin,hist_Xrange);  
  TH1D* h_Zll=new TH1D("h_Zll","h_Zll",hist_Xbin,hist_Xrange);  
  TH1D* h_sig=new TH1D("h_sig","h_sig",hist_Xbin,hist_Xrange);  
  TH1D* h_tt =new TH1D("h_tt" ,"h_tt" ,hist_Xbin,hist_Xrange);  
  // sum OS
  TH1D* h_W_OS  =new TH1D("h_W_OS"  ,"h_W_OS"  ,hist_Xbin,hist_Xrange);  
  TH1D* h_Zll_OS=new TH1D("h_Zll_OS","h_Zll_OS",hist_Xbin,hist_Xrange);  
  TH1D* h_sig_OS=new TH1D("h_sig_OS","h_sig_OS",hist_Xbin,hist_Xrange);  
  TH1D* h_tt_OS =new TH1D("h_tt_OS" ,"h_tt_OS" ,hist_Xbin,hist_Xrange);  
  // sum SS  
  TH1D* h_W_SS  =new TH1D("h_W_SS"  ,"h_W_SS"  ,hist_Xbin,hist_Xrange);  
  TH1D* h_Zll_SS=new TH1D("h_Zll_SS","h_Zll_SS",hist_Xbin,hist_Xrange);  
  TH1D* h_sig_SS=new TH1D("h_sig_SS","h_sig_SS",hist_Xbin,hist_Xrange);  
  TH1D* h_tt_SS =new TH1D("h_tt_SS" ,"h_tt_SS" ,hist_Xbin,hist_Xrange);    
  // DATA
  TH1D* h_data    =new TH1D("h_data"    ,"h_data"    ,hist_Xbin,hist_Xrange);    
  TH1D* h_data_OS =new TH1D("h_data_OS" ,"h_data_OS" ,hist_Xbin,hist_Xrange);    
  TH1D* h_data_SS =new TH1D("h_data_SS" ,"h_data_SS" ,hist_Xbin,hist_Xrange);    
  TH1D* h_data_SS2=new TH1D("h_data_SS2","h_data_SS2" ,hist_Xbin,hist_Xrange);    

  TH1D* h_data_SSbin[13];//=new TH1D("h_data_SS2","h_data_SS2" ,hist_Xbin,hist_Xrange);    
  for(short jj=0; jj<13; jj++ ){
    h_data_SSbin[jj]= new TH1D (Form("h_dataSS_%1d",jj),Form("h_dataSS_%1d",jj)
				,hist_Xbin,hist_Xrange);  
    
    TString temp_req="";
    for(int rr=0; rr < 13; rr++){ //50 ={0,25} 
      if(rr==jj) temp_req+= Form("&& %4f<tau_0_pt && tau_0_pt<%4f",some_ptbin[rr+1],some_ptbin[rr+2]);
    }
    set_data( h_data_SSbin[jj] , tree_data ,  s_req+_SS+temp_req , s_var);	  	
  }
  set_data(h_data_OS , tree_data  ,s_req+_OS         , s_var);	  
  // set_data(h_data_SS , tree_data  ,s_req+_SS+s_Ptlow , s_var);	  
  // set_data(h_data_SS2, tree_data  ,s_req+_SS+s_Pthigh, s_var);	  
  
  TH1D* h_MC  =new TH1D("h_MC"  ,"h_MC"  ,hist_Xbin,hist_Xrange);  
  TH1D* h_MC_OS  =new TH1D("h_MC_OS"  ,"h_MC_OS"  ,hist_Xbin,hist_Xrange);  
  TH1D* h_MC_SS  =new TH1D("h_MC_SS"  ,"h_MC_SS"  ,hist_Xbin,hist_Xrange);  
  
  //TH1D* h_bkg  =new TH1D("h_bkg"  ,"h_bkg"  ,hist_Xbin,hist_Xrange);  
  TH1D* h_bkg  =new TH1D("h_bkg"  ,"h_bkg"  ,hist_Xbin,hist_Xrange);  
  
  
  h_MC->Sumw2();
  h_MC_OS->Sumw2();
  h_MC_SS->Sumw2();
  h_bkg->Sumw2();
  
  int temp_color=2;
  hist_custom(h_W,temp_color);
  hist_custom(h_W_OS,temp_color);
  hist_custom(h_W_SS,temp_color);
  temp_color=4;
  hist_custom(h_Zll,temp_color);
  hist_custom(h_Zll_OS,temp_color);
  hist_custom(h_Zll_SS,temp_color);
  temp_color=5;
  hist_custom(h_tt,temp_color);
  hist_custom(h_tt_OS,temp_color);
  hist_custom(h_tt_SS,temp_color);
  temp_color=7;
  hist_custom(h_sig,temp_color);
  hist_custom(h_sig_OS,temp_color);
  hist_custom(h_sig_SS,temp_color);
  temp_color=11;
  hist_custom(h_data_SS,temp_color);
  
  hist_custom(h_data,1);
  hist_custom(h_data_OS,1);
  
  // // // // //ADD histgram
  for(short kk=0; kk<11; kk++ ){
    for(short ll=0; ll<2; ll++ ){ //OSSS
      for(short jj=0; jj<13; jj++ ){ // pt
	int ii=0;
	if(0==ll){//OS
	  if(0<=kk && kk<=5) h_W_OS   -> Add(h_36110[ii][kk][ll][jj],temp_kwOS[ii][jj]);
	  if(6<=kk && kk<=7) h_Zll_OS -> Add(h_36110[ii][kk][ll][jj],1.);
	  if(8==kk) h_sig_OS -> Add(h_36110[ii][kk][ll][jj],1.);
	  if(9==kk) h_tt_OS  -> Add(h_36110[ii][kk][ll][jj],1.);
	  if(10==kk) h_Zll_OS-> Add(h_361108f[ii][ll][jj],1.);	    
	}
	else if(1==ll){//SS
	  if(0<=kk && kk<=5) h_W_SS   -> Add(h_36110[ii][kk][ll][jj],temp_rQCD[ii][jj]*temp_kwSS[ii][jj]);
	  if(6<=kk && kk<=7) h_Zll_SS -> Add(h_36110[ii][kk][ll][jj],temp_rQCD[ii][jj]);
	  if(8==kk) h_sig_SS -> Add(h_36110[ii][kk][ll][jj],temp_rQCD[ii][jj]);
	  if(9==kk) h_tt_SS  -> Add(h_36110[ii][kk][ll][jj],temp_rQCD[ii][jj]);
	  if(10==kk){
	    h_Zll_SS-> Add(h_361108f[ii][ll][jj],temp_rQCD[ii][jj]);
	    h_data_SS->Add(h_data_SSbin[jj] , temp_rQCD[ii][jj]);
	  }
	}
      }}}
  
  //W +jets
  h_W->Add(h_W_OS,+1);  
  h_W->Add(h_W_SS,-1);  
  //Z -> ll
  h_Zll->Add(h_Zll_OS,+1);
  h_Zll->Add(h_Zll_SS,-1);
  //ttbar  
  h_tt->Add(h_tt_OS,+1);
  h_tt->Add(h_tt_SS,-1);
  //Signal
  h_sig->Add(h_sig_OS,+1);
  h_sig->Add(h_sig_SS,-1);  
  //Data
  h_data_SS ->Scale(temp_rQCD[0][0]);
  h_data_SS2->Scale(temp_rQCD[0][1]);
  h_data_SS->Add(h_data_SS2);
  //////////////////////////////////fasdasdfsdfafae
  
  h_MC_OS->Add(h_W_OS,+1);  
  h_MC_SS->Add(h_W_SS,+1);  
  h_MC_OS->Add(h_Zll_OS,+1);  
  h_MC_SS->Add(h_Zll_SS,+1);  
  h_MC_OS->Add(h_tt_OS,+1);  
  h_MC_SS->Add(h_tt_SS,+1);  
  h_MC_OS->Add(h_sig_OS,+1);  
  h_MC_SS->Add(h_sig_SS,+1);  
  h_MC->Add(h_MC_OS,+1);
  h_MC->Add(h_MC_SS,-1);  //minus !!!

  
  //h_data_SS->Scale(temp_rQCD_factor);
  h_bkg->Add(h_MC,1);  
  h_bkg->Add(h_data_SS,1);
  
  
  if(print_info){ 
    Double_t f_h_ev[10];
    Double_t f_h_er[10];
    int NN_XBIN=h_bkg->GetNbinsX();
      
    f_h_ev[0]=h_bkg     ->IntegralAndError(1, NN_XBIN ,f_h_er[0]);
    f_h_ev[1]=h_data_OS ->IntegralAndError(1, NN_XBIN ,f_h_er[1]);
    f_h_ev[2]=h_W       ->IntegralAndError(1, NN_XBIN ,f_h_er[2]);
    f_h_ev[3]=h_Zll     ->IntegralAndError(1, NN_XBIN ,f_h_er[3]);
    f_h_ev[4]=h_tt      ->IntegralAndError(1, NN_XBIN ,f_h_er[4]);
    f_h_ev[5]=h_data_SS ->IntegralAndError(1, NN_XBIN ,f_h_er[5]);
    f_h_ev[6]=h_sig     ->IntegralAndError(1, NN_XBIN ,f_h_er[6]);
    cout<<" ========== Yields  =========="<<endl
	<<"Total bkg :: "<<setprecision(5)<<f_h_ev[0]<<" +- "<<f_h_er[0]<<endl
	<<"Total DATA:: "<<setprecision(5)<<f_h_ev[1]<<" +- "<<f_h_er[1]<<endl
	<<"      Wjet:: "<<setprecision(5)<<f_h_ev[2]<<" +- "<<f_h_er[2]<<endl
	<<"      Zll :: "<<setprecision(5)<<f_h_ev[3]<<" +- "<<f_h_er[3]<<endl
	<<"      tt  :: "<<setprecision(5)<<f_h_ev[4]<<" +- "<<f_h_er[4]<<endl
	<<"      SS  :: "<<setprecision(5)<<f_h_ev[5]<<" +- "<<f_h_er[5]<<endl
	<<"    Signal:: "<<setprecision(5)<<f_h_ev[6]<<" +- "<<f_h_er[6]<<endl
	<<endl;
  }
  
  TString rootfile_name="./Rebin_triggerZtt_"+selection_REGION + "_" + req_period;
  rootfile_name = rootfile_name + Form("%1dProng_%1dEta_%1dBDTID_HLT%d",req_prongs,req_ETA,req_ID,b_trig);
  rootfile_name = rootfile_name + "__" + s_var;
  TFile* OUTFile = new TFile("Aroot/"+rootfile_name+".root","RECREATE");
  OUTFile->cd();
  h_data_OS->Write();
  h_data_SS->Write();
  h_sig->Write();
  h_W->Write();
  h_Zll->Write();
  h_tt->Write();
  h_bkg->Write();
  OUTFile->Close();


  //Draw-Option @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
  TCanvas *CAN=new TCanvas("can","can",10,10,1000/1.5,900/1.5 );      
  CAN->cd();
    
  bool Xlog=0;
  if(s_var=="tau_0_pt" ) Xlog=1;
  if(1==Xlog)CAN ->SetLogx();
  //CAN ->SetLogy();
  gStyle->SetPadTopMargin(0.05);//0.05
  gStyle->SetPadRightMargin(0.1);
  gStyle->SetPadBottomMargin(0.05);
  gStyle->SetPadLeftMargin(0.15);
    
  CAN->Divide(1,2);
  CAN->cd(1);
  gPad->SetPad(0.005,0.3525-0.03,0.995,0.995);
  //gPad->SetPad(0.005,0.3525,0.995,0.995); 
  //gPad->SetBottomMargin(0.05);        
  gPad->SetFillStyle(0);
  if(1==Xlog)CAN->cd(1)->SetLogx();
  //if(1==Xlog)CAN->cd(1)->SetLogy();

  CAN->cd(2);
  if(1==Xlog)CAN->cd(2)->SetLogx();
  gPad->SetPad(0.005,0.005,0.995,0.3525);
  gPad->SetTopMargin(0.05);
  gPad->SetBottomMargin(0.35);
  gPad->SetFillStyle(0);
  
  CAN->cd(1);
  hist_dataSET(h_data_OS);
  h_data_OS->SetXTitle(arg_s_xtitle);
  if(1>0){
    //h_data_OS->SetMaximum(1.7*h_data_OS->GetMaximum());
    h_data_OS->SetMinimum(0.);
    h_data_OS->SetMaximum(1000*1000);
    h_data_OS->SetMinimum(0.5);
    if(1==Xlog)CAN->cd(1)->SetLogy();
    h_data_OS->SetYTitle("Events");
    h_data_OS->SetTitleOffset(1.10,"Y");
    h_data_OS->SetTitleSize(0.07,"Y");
    h_data_OS->SetLabelSize(0.06,"Y");
    h_data_OS->SetTitleSize(0.0,"X");
    h_data_OS->SetLabelSize(0.0,"X");
  }
  
  
  h_data_OS->SetXTitle(arg_s_xtitle);
  //h_data_OS->SetMaximum(3*h_data_OS->GetMaximum());
  //h_data_OS->SetMinimum(0.);
  h_data_OS->Draw("");
  
  
  
  THStack *h_stack= new THStack("THstack"," test: xxx : yyy");
  h_stack->Add(h_data_SS,"hist");
  h_stack->Add(h_W,"hist");
  h_stack->Add(h_Zll,"hist");
  h_stack->Add(h_tt,"hist");
  h_stack->Add(h_sig,"hist");
  //h_stack->SetMaximum(1.7*h_data_OS->GetMaximum());
  if(1>0){
    float h_MAX=h_data_OS->GetMaximum();
    if(h_stack->GetMaximum()>1.2*h_data_OS->GetMaximum())
      h_MAX=h_stack->GetMaximum();
    h_stack->SetMaximum(2.0*h_MAX);
    h_stack->SetMinimum(0.);
  }
  //h_stack->Draw("nostack""sames");
  h_stack->Draw("sames");
  h_bkg->SetFillStyle(3244);
  h_bkg->SetFillColor(1);
  h_bkg->SetMarkerSize(0);
  h_bkg->Draw("E2sames");//MC error band
  h_data_OS->Draw("sames");//re-draw
  
  TString leg_option=" (OS-SS)";
  //TLegend* leg = new TLegend(0.45, 0.75, 0.93, 0.92);
  TLegend* leg = new TLegend(0.4, 0.75, 0.87, 0.92);
  leg-> SetNColumns(2);
  leg->SetFillColor(10);
  leg->SetTextSize(0.04);
  leg->SetTextFont(42);
  leg->SetBorderSize(0);
  leg->AddEntry(h_sig, "Z#rightarrow#tau#tau"+leg_option, "F");//LPFE
  leg->AddEntry(h_W, "W+jet"+leg_option, "F");
  leg->AddEntry(h_Zll, "Z#rightarrowll"+leg_option, "F");
  leg->AddEntry(h_tt, "Top"+leg_option, "F");
  leg->AddEntry(h_data_SS, "SS Data", "F");
  leg->AddEntry(h_data_OS, "Data 2016", "LEP");
  leg->Draw();
  
  
  if(TotalLumi/1000>1000)
    LABEL_DATA(7,0.8+0.05,TotalLumi/1000 ,1);  
  else 
    LABEL_DATA(7,0.8+0.05,Form("%3.1f p",TotalLumi/1000.) ,1);  
  LABEL(7,0.8-0.08);
  
  
  

  TString OUT_onhist="";
  if(1==req_prongs)OUT_onhist+="1p ";
  else if(3==req_prongs)OUT_onhist+="3p ";
  if(1==req_ID)OUT_onhist+="BDTloose ";
  else if(3==req_ID)OUT_onhist+="BDTtight ";
  if(1==req_ETA)OUT_onhist+=" (Barrel) ";
  else if(2==req_ETA)OUT_onhist+=" (Endcap) ";
  if(5==req_PT)OUT_onhist+=" tauPt<32GeV ";
  else if(6==req_PT)OUT_onhist+="  tauPt>32GeV ";
  if("" != OUT_onhist)
    LABEL_NAME(65,0.7,OUT_onhist);  
  
  if(25==b_trig)  LABEL_NAME(50,0.62,"HLT_tau25_medium1_tracktwo");
  else if(35==b_trig)  LABEL_NAME(50,0.62,"HLT_tau35_medium1_tracktwo");
  else if(50==b_trig)  LABEL_NAME(50,0.62,"HLT_tau50_medium1_tracktwo");
  else if(80==b_trig)  LABEL_NAME(50,0.62,"HLT_tau80_medium1_tracktwo");
  else if(125==b_trig) LABEL_NAME(50,0.62,"HLT_tau125_medium1_tracktwo");
  
  
  CAN->cd(2);  
  TH1D* h_ratio_OS2bkg  =new TH1D("h_ratio_OS2bkg","h_ratio_OS2bkg",hist_Xbin,hist_Xrange);  
  hist_custom(h_ratio_OS2bkg,1);
  h_ratio_OS2bkg->Divide(h_data_OS,h_bkg);
  hist_dataRatioSET(h_ratio_OS2bkg);
  if(1>0){
    float MAX=h_ratio_OS2bkg->GetMaximum();
    if(MAX>4)MAX=4;
    float MIN=h_ratio_OS2bkg->GetMinimum();
    if(MIN<0.2)MIN=0.2;
    h_ratio_OS2bkg->SetMaximum(MAX);
    h_ratio_OS2bkg->SetMinimum(MIN);
    h_ratio_OS2bkg->SetMaximum(1.25);
    h_ratio_OS2bkg->SetMinimum(0.75);
  }
  h_ratio_OS2bkg->SetXTitle(arg_s_xtitle);
  h_ratio_OS2bkg->SetYTitle("data/MC");
  //h_ratio_OS2bkg->Draw();
  
  TH1D* h_ratioMC  =new TH1D("h_ratioMC","h_ratioMC",hist_Xbin,hist_Xrange);  
  hist_custom(h_ratioMC,1);
  TH1D* h_ratioDA  =new TH1D("h_ratioDA","h_ratioDA",hist_Xbin,hist_Xrange);  
  hist_custom(h_ratioDA,1);
  h_ratioMC=(TH1D*)h_bkg->Clone();
  h_ratioDA=(TH1D*)h_data_OS->Clone();
  hist_dataRatioSET(h_ratioMC);
  MyRatioBand(h_ratioMC,h_ratioDA);
  h_ratioMC->SetMaximum(1.5);
  h_ratioMC->SetMinimum(0.5);
  
  if(s_var.Contains("tau_0_id_")){
    h_ratioMC->SetMaximum(1.5);
    h_ratioMC->SetMinimum(0.5);  
  }else if(s_var.Contains("tau_0_trig1_HLT_")){
    h_ratioMC->SetMaximum(2);
    h_ratioMC->SetMinimum(0);      
  }
    
  if(1>0){
    h_ratioMC->SetYTitle("data/exp.");
    h_ratioMC->SetTitleOffset(0.50,"Y");
    h_ratioMC->SetTitleSize(0.13,"Y");
    h_ratioMC->SetLabelSize(0.13,"Y");
    h_ratioMC->SetTitleOffset(1.00,"X");
    h_ratioMC->SetTitleSize(0.15,"X");
    h_ratioMC->SetLabelSize(0.0,"X");
    h_ratioMC->SetMarkerSize(1.0);
    
    h_ratioMC->GetXaxis()->SetMoreLogLabels(1);
    h_ratioMC->GetXaxis()->SetNoExponent(1);
    h_ratioMC->SetLabelOffset(0.003,"X");
    h_ratioMC->SetLabelSize(0.13,"X");
    h_ratioMC->SetTitleOffset(1.00,"X");
    h_ratioMC->SetTitleSize(0.15,"X");
    
    // h_ratioMC->GetXaxis()->SetRangeUser(100,400);
    
  }
  
 
  
  
  h_ratioMC->SetXTitle(arg_s_xtitle);
  h_ratioMC->Draw("E2");
  h_ratioDA->Draw("sames");
  
  TLine *line = new TLine(-1000,1,1000,1);
  line->SetLineColor(2);
  line->SetLineWidth(4);
  line->SetLineStyle(2);
  line->DrawLine(h_data->GetXaxis()->GetXmin(),1,
		 h_data->GetXaxis()->GetXmax(),1);
  //h_ratio_OS2bkg->Draw("sames");//re-draw
  
  
  
  TString outputpdf=
    "Rebin_"+selection_REGION + "" + req_period +
    Form("_%1.1dprong_%1.1dETA_%1.1dBDT_%1.1dtaupt_HLT%d",req_prongs,req_ETA,req_ID,req_PT,b_trig)  +"__"+OUTPUT;
  if(tree_NAME_sys!="NOMINAL")outputpdf+=tree_NAME_sys;
  
  CAN->SaveAs("./pdf/" +outputpdf+".png");
  CAN->SaveAs("./pdf/" +outputpdf+".pdf");



  return;
} //END ALL  //##############################################
