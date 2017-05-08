

#include "head.h"  

void Trig_nom(TString req_period = "all",int req_prongs =0,int req_ETA=0,int req_ID=2 , int b_trig=25,bool OppositeSign=1)
{   
  bool all_systematic=1;  // "0"->only NOMINAL
  
  
  
  gROOT->ProcessLine("#include <vector>");
  
  treat_OF_bin=1;  // overflow  bin
  treat_UF_bin=0;  // underflow bin -> not contain
  bool fastloop=0;
  
  
  s_var="tau_0_pt";
  const int X_BINS = 14; 
  int hist_Xbin = X_BINS-1;
  double hist_Xrange[X_BINS]={25.,28,30,32,34,36,39,43,52,64,80,100,150,300}; //pt binning
  
  // s_var="tau_0_eta"; treat_UF_bin=1;
  // const int X_BINS = 13;  int hist_Xbin = X_BINS-1;
  // double hist_Xrange[X_BINS]={-3,-2.5,-2,-1.5,-1,-0.5,0,0.5,1,1.5,2,2.5,3 }; //pt binning
  
  // s_var="tau_0_phi"; treat_UF_bin=1;
  // const int X_BINS = 15;  int hist_Xbin = X_BINS-1;
  // double hist_Xrange[X_BINS]={-3.5,-3.2,-2.5,-2,-1.5,-1,-0.5,0,0.5,1,1.5,2,2.5,3.2,3.5 }; //pt binning
  
  // s_var="tau_0_decay_mode"; 
  // const int X_BINS = 7;  int hist_Xbin = X_BINS-1;
  // double hist_Xrange[X_BINS]={-0.5,0.5,1.5,2.5,3.5,4.5,5.5 }; //pt binning
  
  // s_var="n_vx"; treat_UF_bin=1;
  // const int X_BINS = 10;  int hist_Xbin = X_BINS-1;
  // double hist_Xrange[X_BINS]={0,4,6,8,10,12,14,16,18,20 }; //pt binning
  
  // s_var="n_avg_int_cor"; treat_UF_bin=1;
  // // const int X_BINS = 7;  int hist_Xbin = X_BINS-1;
  // // double hist_Xrange[X_BINS]={6,9,11,12,13,14,16 }; //pt binning
  // const int X_BINS = 10;  int hist_Xbin = X_BINS-1;
  // double hist_Xrange[X_BINS]={6,9,11,13,15,17,19,21,23,25 }; //pt binning
  
  
  TString OUTPUT=s_var;
  TString arg_s_xtitle = s_var;//"tau_0_pt";
  cout<<s_var<<endl;;
  
  vector<TString>  vec_tree; //  The number of nuisance para.
  vec_tree.push_back( "NOMINAL" );
  // vec_tree.push_back( "PRW_DATASF_1up"   );
  // vec_tree.push_back( "MU_EFF_TrigSTATup" );
  
  TString tree_NAME    ="NOMINAL";
  TString tree_NAME_sys="NOMINAL";
  TString rootfile_name
    =Form("./TrigEff/W_TrigEff_%1dprong_%1dETA_%1dBDT_%dtrig",req_prongs,req_ETA,req_ID,b_trig);
  if(s_var!="tau_0_pt") rootfile_name+="__"+s_var;
  TFile* OUTFile = new TFile(rootfile_name+".root","RECREATE");
  
  TStopwatch TIME; TIME.Start();
  
  
  for(unsigned int i_tree=0; i_tree<vec_tree.size(); i_tree++ ){//Loop systematic
    tree_NAME    =vec_tree.at(i_tree);
    tree_NAME_sys=vec_tree.at(i_tree);
    
#include "selection.h"
    
    float temp_rQCD[2][2]={0}; //trig //pt
    float temp_kwOS[2][2]={0};
    float temp_kwSS[2][2]={0};
    
    temp_rQCD[0][0]=load_rQCD[0][0];
    temp_kwOS[0][0]=load_kWOS[0][0];
    temp_kwSS[0][0]=load_kWSS[0][0];
    temp_rQCD[0][1]=load_rQCD[0][1];
    temp_kwOS[0][1]=load_kWOS[0][1];
    temp_kwSS[0][1]=load_kWSS[0][1];
    temp_rQCD[1][0]=load_rQCD[0][0]; // if you need, change first bin
    temp_kwOS[1][0]=load_kWOS[0][0]; // if you need, change first bin
    temp_kwSS[1][0]=load_kWSS[0][0]; // if you need, change first bin
    temp_rQCD[1][1]=load_rQCD[0][1]; // if you need, change first bin
    temp_kwOS[1][1]=load_kWOS[0][1]; // if you need, change first bin
    temp_kwSS[1][1]=load_kWSS[0][1]; // if you need, change first bin
    
    if( tree_NAME_sys.Contains("rQCD") ){
      if( tree_NAME_sys.Contains("up") ){
	temp_rQCD[0][0]+=load_rQCD[2][0];
	temp_rQCD[0][1]+=load_rQCD[2][1];
	temp_rQCD[1][0]+=load_rQCD[2][0]; // if you need, change first bin
	temp_rQCD[1][1]+=load_rQCD[2][1]; // if you need, change first bin
      }//up
      if( tree_NAME_sys.Contains("down") ){
	temp_rQCD[0][0]-=load_rQCD[2][0];
	temp_rQCD[0][1]-=load_rQCD[2][1];
	temp_rQCD[1][0]-=load_rQCD[2][0]; // if you need, change first bin
	temp_rQCD[1][1]-=load_rQCD[2][1]; // if you need, change first bin
      }//down
      tree_NAME="NOMINAL";
    }//rQCD
    else if( tree_NAME_sys.Contains("kW") ){
      if( tree_NAME_sys.Contains("up") ){
	temp_kwOS[0][0]+=load_kWOS[2][0];
	temp_kwSS[0][0]+=load_kWSS[2][0];
	temp_kwOS[0][1]+=load_kWOS[2][1];
	temp_kwSS[0][1]+=load_kWSS[2][1];
	temp_kwOS[1][0]+=load_kWOS[2][0]; // if you need, change first bin
	temp_kwSS[1][0]+=load_kWSS[2][0]; // if you need, change first bin
	temp_kwOS[1][1]+=load_kWOS[2][1]; // if you need, change first bin
	temp_kwSS[1][1]+=load_kWSS[2][1]; // if you need, change first bin
      }//up
      if( tree_NAME_sys.Contains("down") ){
	temp_kwOS[0][0]-=load_kWOS[2][0];
	temp_kwSS[0][0]-=load_kWSS[2][0];
	temp_kwOS[0][1]-=load_kWOS[2][1];
	temp_kwSS[0][1]-=load_kWSS[2][1];
	temp_kwOS[1][0]-=load_kWOS[2][0]; // if you need, change first bin
	temp_kwSS[1][0]-=load_kWSS[2][0]; // if you need, change first bin
	temp_kwOS[1][1]-=load_kWOS[2][1]; // if you need, change first bin
	temp_kwSS[1][1]-=load_kWSS[2][1]; // if you need, change first bin
      }
      tree_NAME="NOMINAL";
    } //kW
    
    temp_rQCD[0][0]=1;
    temp_rQCD[0][1]=1;
    
    cout<<"  i_tree: "<<i_tree<<endl;
    cout<<"  TreeName: "<<tree_NAME<<endl;
    cout<<"  Sys Name: "<<tree_NAME_sys<<endl;
    cout<<"  WEIGHT == "<<s_weight<<endl;
    printf("FACTOR (low)  INFO :: %1.3f @ %1.3f @ %1.3f \n",  temp_rQCD[0][0] , temp_kwOS[0][0], temp_kwSS[0][0]  );
    printf("FACTOR (high) INFO :: %1.3f @ %1.3f @ %1.3f \n",  temp_rQCD[0][1] , temp_kwOS[0][1], temp_kwSS[0][1]  );
    
    TString s_req=s_REQ_Z; s_req=s_REQ_W;//tikai
    if(s_var!="tau_0_pt" ) //tikai
      s_req="("+s_req+"&& tau_0_pt>30)";
    TString s_req_trigger=s_req;
    TString _OS="&& lephad_qxq==-1";
    TString _SS="&& lephad_qxq==+1";
    
    TString s_trigger="";
    if(12==b_trig)
      s_trigger="&&L1_TAU12IM_resurrected";
    else if(20==b_trig)
      s_trigger="&&L1_TAU20IM";
    else if(60==b_trig)
      s_trigger="&&L1_TAU60";
    else if(50==b_trig)
      s_trigger="&& HLT_tau50_medium1_tracktwo_L1TAU12_resurrected==1 && tau_0_trig_HLT_tau50_medium1_tracktwo_L1TAU12==1";
    else if(80==b_trig)
      s_trigger="&& HLT_tau80_medium1_tracktwo_L1TAU60_resurrected==1 && tau_0_trig_HLT_tau80_medium1_tracktwo_L1TAU60==1";    
    else if(25==b_trig || 35==b_trig || 50==b_trig || 80==b_trig || 125==b_trig || 160==b_trig )
      s_trigger=s_trigger+Form("&& HLT_tau%d_medium1_tracktwo_resurrected==1 && tau_0_trig_HLT_tau%d_medium1_tracktwo",b_trig,b_trig);



    s_req_trigger="(" + s_req + s_trigger +")";
  
    TString s_Ptlow ="&&tau_0_pt<35";   // smaller 35
    TString s_Pthigh="&&tau_0_pt>35";  // larger  35

    TH1F* h_361108f[2][2][2]; // trigger , OSSS ,Pt //FakeTau contributions from ZTT
    for(short ii=0; ii<2; ii++ ){//trigger
      for(short ll=0; ll<2; ll++ ){//OSSS
	for(short jj=0; jj<2; jj++ ){//Pt
	  h_361108f[ii][ll][jj]= new TH1F (Form("h_361108f_%d%d%d",ii,ll,jj),
					   Form("h_361108f_%d%d%d",ii,ll,jj),hist_Xbin,hist_Xrange);
	  TFile* temp_file=f_361108;
	  TTree* temp_tree = (TTree*)temp_file->Get(tree_NAME);
	  TH1D* temp_mc_derivation = (TH1D*)temp_file->Get(name_derivation); //name_derivation="h_metadata";
	  int temp_MCID=361108*2;//my definition -- fake tau from Ztt
	  
	  TString temp_req="";
	  if(0==ii)      temp_req=s_req;         //w.o trigger
	  else if(1==ii) temp_req=s_req_trigger; //w.  trigger
	  if(0==jj)      temp_req+=s_Ptlow;      //low  pt
	  else if(1==jj) temp_req+=s_Pthigh;     //high pt
	  if(0==ll)      temp_req+=_OS;          //Opposite Sign
	  else if(1==ll) temp_req+=_SS;          //  Same   Sign

	  if(s_var=="tau_0_pt")
	    if(0==jj) 
	      if( 50==b_trig || 80==b_trig || 125==b_trig || 160==b_trig )continue;	  
	  if(!fastloop)
	    set_hist( h_361108f[ii][ll][jj] , temp_tree ,temp_mc_derivation ,
		      temp_req , temp_MCID , s_var);	  
	  delete temp_tree;
	  delete temp_mc_derivation;
	  
	}}} 
    
    
    TH1F* h_36110[2][10][2][2]; // trigger , samples , OSSS ,Pt
    for(short ii=0; ii<2; ii++ ){ // trigger , samples , OSSS ,Pt
      for(short kk=0; kk<10; kk++ ){
	for(short ll=0; ll<2; ll++ ){
	  for(short jj=0; jj<2; jj++ ){
	    
	    h_36110[ii][kk][ll][jj]= new TH1F
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
	    // if(9!=kk)continue;
	    
	    TTree* temp_tree = (TTree*)temp_file->Get(tree_NAME);
	    TH1D* temp_mc_derivation = (TH1D*)temp_file->Get(name_derivation); //name_derivation="h_metadata";
	    int temp_MCID=361100+kk;
	    if(9==kk)temp_MCID=410000;
	    
	    TString temp_req="";
	    if(0==ii)      temp_req=s_req;         //w.o trigger
	    else if(1==ii) temp_req=s_req_trigger; //w.  trigger
	    if(0==jj)      temp_req+=s_Ptlow;      //low  pt
	    else if(1==jj) temp_req+=s_Pthigh;     //high pt
	    if(0==ll)      temp_req+=_OS;          //Opposite Sign
	    else if(1==ll) temp_req+=_SS;          //  Same   Sign
	    
	    if(s_var=="tau_0_pt")
	      if(0==jj) 
		if(8!=kk) 
		  if( 50==b_trig || 80==b_trig || 125==b_trig || 160==b_trig )continue;	  
	    
	    if(!fastloop)
	      set_hist( h_36110[ii][kk][ll][jj] , temp_tree ,temp_mc_derivation ,
			temp_req , temp_MCID , s_var);	  
	    else if(8==kk)
	      set_hist( h_36110[ii][kk][ll][jj] , temp_tree ,temp_mc_derivation ,
			temp_req , temp_MCID , s_var);	  
	    delete temp_tree;
	    delete temp_mc_derivation;
	    
	  }}}}
    
    
    // sum OS
    TH1F* h_W_OS  =new TH1F("h_W_OS"  ,"h_W_OS"  ,hist_Xbin,hist_Xrange);  
    TH1F* h_Zll_OS=new TH1F("h_Zll_OS","h_Zll_OS",hist_Xbin,hist_Xrange);  
    TH1F* h_sig_OS=new TH1F("h_sig_OS","h_sig_OS",hist_Xbin,hist_Xrange);  
    TH1F* h_tt_OS =new TH1F("h_tt_OS" ,"h_tt_OS" ,hist_Xbin,hist_Xrange);  
    // sum SS  
    TH1F* h_W_SS  =new TH1F("h_W_SS"  ,"h_W_SS"  ,hist_Xbin,hist_Xrange);  
    TH1F* h_Zll_SS=new TH1F("h_Zll_SS","h_Zll_SS",hist_Xbin,hist_Xrange);  
    TH1F* h_sig_SS=new TH1F("h_sig_SS","h_sig_SS",hist_Xbin,hist_Xrange);  
    TH1F* h_tt_SS =new TH1F("h_tt_SS" ,"h_tt_SS" ,hist_Xbin,hist_Xrange);    
    //sum OS-SS
    TH1F* h_W  =new TH1F("h_W"  ,"h_W"  ,hist_Xbin,hist_Xrange);  
    TH1F* h_Zll=new TH1F("h_Zll","h_Zll",hist_Xbin,hist_Xrange);  
    TH1F* h_sig=new TH1F("h_sig","h_sig",hist_Xbin,hist_Xrange);  
    TH1F* h_tt =new TH1F("h_tt" ,"h_tt" ,hist_Xbin,hist_Xrange);  
    // DATA
    TH1F* h_data    =new TH1F("h_data"    ,"h_data"    ,hist_Xbin,hist_Xrange);    
    TH1F* h_data_OS =new TH1F("h_data_OS" ,"h_data_OS" ,hist_Xbin,hist_Xrange);    
    TH1F* h_data_SS =new TH1F("h_data_SS" ,"h_data_SS" ,hist_Xbin,hist_Xrange);    
    TH1F* h_data_SS2=new TH1F("h_data_SS2" ,"h_data_SS2" ,hist_Xbin,hist_Xrange);    
    set_data(h_data_OS , tree_data  ,s_req+_OS         , s_var);	  
    if(!fastloop)
      if(s_var=="tau_0_pt")
	if( !(50==b_trig || 80==b_trig || 125==b_trig || 160==b_trig) )
	  set_data(h_data_SS , tree_data  ,s_req+_SS+s_Ptlow , s_var);	  
    if(!fastloop)
      set_data(h_data_SS2, tree_data  ,s_req+_SS+s_Pthigh, s_var);	  
    
    TH1F* h_MC  =new TH1F("h_MC"  ,"h_MC"  ,hist_Xbin,hist_Xrange);  
    TH1F* h_MC_OS  =new TH1F("h_MC_OS"  ,"h_MC_OS"  ,hist_Xbin,hist_Xrange);  
    TH1F* h_MC_SS  =new TH1F("h_MC_SS"  ,"h_MC_SS"  ,hist_Xbin,hist_Xrange);  
    
    TH1F* h_bkg  =new TH1F("h_bkg" ,"h_bkg" ,hist_Xbin,hist_Xrange);  
    
    h_MC->Sumw2();
    h_MC_OS->Sumw2();
    h_MC_SS->Sumw2();
    h_bkg->Sumw2();
    
    int temp_color=2;
    hist_custom(h_W   ,temp_color);
    hist_custom(h_W_OS,temp_color);
    hist_custom(h_W_SS,temp_color);
    temp_color=4;
    hist_custom(h_Zll   ,temp_color);
    hist_custom(h_Zll_OS,temp_color);
    hist_custom(h_Zll_SS,temp_color);
    temp_color=5;
    hist_custom(h_tt   ,temp_color);
    hist_custom(h_tt_OS,temp_color);
    hist_custom(h_tt_SS,temp_color);
    temp_color=7;
    hist_custom(h_sig   ,temp_color);
    hist_custom(h_sig_OS,temp_color);
    hist_custom(h_sig_SS,temp_color);
    temp_color=11;
    hist_custom(h_data_SS,temp_color);
    
    hist_custom(h_data,1);
    hist_custom(h_data_OS,1);
    
    //for(short ii=0; ii<2; ii++ ){ // trigger , samples , OSSS ,Pt
    for(short kk=0; kk<11; kk++ ){
      for(short ll=0; ll<2; ll++ ){ //OSSS
	for(short jj=0; jj<2; jj++ ){ // pt
	  int ii=0;
	  if(0==ll){//OS
	    if(0<=kk && kk<=5) h_W_OS   -> Add(h_36110[ii][kk][ll][jj],temp_kwOS[ii][jj]);
	    if(6<=kk && kk<=7) h_Zll_OS -> Add(h_36110[ii][kk][ll][jj],1.);
	    if(8==kk) h_sig_OS -> Add(h_36110[ii][kk][ll][jj],1.);
	    if(9==kk) h_tt_OS  -> Add(h_36110[ii][kk][ll][jj],1.);
	    if(10==kk) h_Zll_OS-> Add(h_361108f[ii][ll][jj],1.);	    
	  }
	  else if(1==ll){//OS
	    if(0<=kk && kk<=5) h_W_SS   -> Add(h_36110[ii][kk][ll][jj],temp_rQCD[ii][jj]*temp_kwSS[ii][jj]);
	    if(6<=kk && kk<=7) h_Zll_SS -> Add(h_36110[ii][kk][ll][jj],temp_rQCD[ii][jj]);
	    if(8==kk) h_sig_SS -> Add(h_36110[ii][kk][ll][jj],temp_rQCD[ii][jj]);
	    if(9==kk) h_tt_SS  -> Add(h_36110[ii][kk][ll][jj],temp_rQCD[ii][jj]);
	    if(10==kk) h_Zll_SS-> Add(h_361108f[ii][ll][jj],temp_rQCD[ii][jj]);
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
    //h_data_OS->Add(h_sig_SS,-1);  
    h_data_SS ->Scale(temp_rQCD[0][0]);
    h_data_SS2->Scale(temp_rQCD[0][1]);
    h_data_SS->Add(h_data_SS2);
    
    // h_MC_OS->Add(h_W_OS,+1);    //important!!!2
    // h_MC_SS->Add(h_W_SS,+1);    //important!!!2
    h_MC_OS->Add(h_Zll_OS,+1);  
    h_MC_SS->Add(h_Zll_SS,+1);  
    h_MC_OS->Add(h_tt_OS,+1);  
    h_MC_SS->Add(h_tt_SS,+1);  
    h_MC_OS->Add(h_sig_OS,+1);  //important!!!
    h_MC_SS->Add(h_sig_SS,+1);  //important!!!
    h_MC->Add(h_MC_OS,+1);
    h_MC->Add(h_MC_SS,-1);  
    
    TH1F* h_fiducial  =new TH1F("h_fiducial","h_fiducial" ,hist_Xbin,hist_Xrange);  //data-bkg
    if(OppositeSign){
      h_fiducial->Add(h_data_OS,+1.);
      h_fiducial->Add(h_MC_OS,-1.);
    }else{
      h_fiducial->Add(h_data_SS,+1.);
      h_fiducial->Add(h_MC_SS,-1.);
    }
    // h_fiducial->Add(h_data_OS,+1.);
    // h_fiducial->Add(h_MC,-1.);
    // h_fiducial->Add(h_data_SS,-1.);
    
    if(print_info){ 
      Double_t f_h_ev[10]={0};
      Double_t f_h_er[10]={0};
      int NN_XBIN=h_bkg->GetNbinsX();
      
      if(OppositeSign){ //OS
	f_h_ev[0]=h_bkg     ->IntegralAndError(1, NN_XBIN ,f_h_er[0]);
	f_h_ev[1]=h_data_OS ->IntegralAndError(1, NN_XBIN ,f_h_er[1]);
	f_h_ev[2]=h_W_OS    ->IntegralAndError(1, NN_XBIN ,f_h_er[2]);
	f_h_ev[3]=h_Zll_OS  ->IntegralAndError(1, NN_XBIN ,f_h_er[3]);
	f_h_ev[4]=h_tt_OS   ->IntegralAndError(1, NN_XBIN ,f_h_er[4]);
	f_h_ev[6]=h_sig_OS  ->IntegralAndError(1, NN_XBIN ,f_h_er[6]);
      }   else {//SS
	f_h_ev[0]=h_bkg     ->IntegralAndError(1, NN_XBIN ,f_h_er[0]);
	f_h_ev[1]=h_data_SS ->IntegralAndError(1, NN_XBIN ,f_h_er[1]);
	f_h_ev[2]=h_W_SS    ->IntegralAndError(1, NN_XBIN ,f_h_er[2]);
	f_h_ev[3]=h_Zll_SS  ->IntegralAndError(1, NN_XBIN ,f_h_er[3]);
	f_h_ev[4]=h_tt_SS   ->IntegralAndError(1, NN_XBIN ,f_h_er[4]);
	f_h_ev[6]=h_sig_SS  ->IntegralAndError(1, NN_XBIN ,f_h_er[6]);
      }
      
      f_h_ev[7]=h_fiducial  ->IntegralAndError(1, NN_XBIN ,f_h_er[7]);
      cout<<" ========== Yields (offline) =========="<<endl
	  <<"Total bkg :: "<<setprecision(5)<<f_h_ev[0]<<" +- "<<f_h_er[0]<<endl
	  <<"Total DATA:: "<<setprecision(5)<<f_h_ev[1]<<" +- "<<f_h_er[1]<<endl
	  <<"   Ztautau:: "<<setprecision(5)<<f_h_ev[6]<<" +- "<<f_h_er[6]<<endl
	  <<"      Zll :: "<<setprecision(5)<<f_h_ev[3]<<" +- "<<f_h_er[3]<<endl
	  <<"      tt  :: "<<setprecision(5)<<f_h_ev[4]<<" +- "<<f_h_er[4]<<endl
	  <<"      SS  :: "<<setprecision(5)<<f_h_ev[5]<<" +- "<<f_h_er[5]<<endl
	  <<"      Wjet:: "<<setprecision(5)<<f_h_ev[2]<<" +- "<<f_h_er[2]<<endl
	  <<"  Fiducial:: "<<setprecision(5)<<f_h_ev[7]<<" +- "<<f_h_er[7]<<endl
	  <<endl;
    }
    
    //############################
    //############################
    //trigger
    // sum OS
    TH1F* ht_W_OS  =new TH1F("ht_W_OS"  ,"ht_W_OS"  ,hist_Xbin,hist_Xrange);  
    TH1F* ht_Zll_OS=new TH1F("ht_Zll_OS","ht_Zll_OS",hist_Xbin,hist_Xrange);  
    TH1F* ht_sig_OS=new TH1F("ht_sig_OS","ht_sig_OS",hist_Xbin,hist_Xrange);  
    TH1F* ht_tt_OS =new TH1F("ht_tt_OS" ,"ht_tt_OS" ,hist_Xbin,hist_Xrange);  
    // sum SS  
    TH1F* ht_W_SS  =new TH1F("ht_W_SS"  ,"ht_W_SS"  ,hist_Xbin,hist_Xrange);  
    TH1F* ht_Zll_SS=new TH1F("ht_Zll_SS","ht_Zll_SS",hist_Xbin,hist_Xrange);  
    TH1F* ht_sig_SS=new TH1F("ht_sig_SS","ht_sig_SS",hist_Xbin,hist_Xrange);  
    TH1F* ht_tt_SS =new TH1F("ht_tt_SS" ,"ht_tt_SS" ,hist_Xbin,hist_Xrange);    
    //sum OS-SS   
    TH1F* ht_W  =new TH1F("ht_W"  ,"ht_W"  ,hist_Xbin,hist_Xrange);  
    TH1F* ht_Zll=new TH1F("ht_Zll","ht_Zll",hist_Xbin,hist_Xrange);  
    TH1F* ht_sig=new TH1F("ht_sig","ht_sig",hist_Xbin,hist_Xrange);  
    TH1F* ht_tt =new TH1F("ht_tt" ,"ht_tt" ,hist_Xbin,hist_Xrange);  
    // DATA
    TH1F* ht_data   =new TH1F("ht_data"    ,"ht_data"    ,hist_Xbin,hist_Xrange);    
    TH1F* ht_data_OS =new TH1F("ht_data_OS" ,"ht_data_OS" ,hist_Xbin,hist_Xrange);    
    TH1F* ht_data_SS =new TH1F("ht_data_SS" ,"ht_data_SS" ,hist_Xbin,hist_Xrange);    
    TH1F* ht_data_SS2=new TH1F("ht_data_SS2","ht_data_SS2",hist_Xbin,hist_Xrange);    
    set_data(ht_data_OS , tree_data  ,s_req_trigger+_OS         , s_var);	  
    if(!fastloop)
      set_data(ht_data_SS , tree_data  ,s_req_trigger+_SS+s_Ptlow , s_var);	  
    if(!fastloop)
      set_data(ht_data_SS2, tree_data  ,s_req_trigger+_SS+s_Pthigh, s_var);	  
    
    
    TH1F* ht_MC  =new TH1F("ht_MC"  ,"ht_MC"  ,hist_Xbin,hist_Xrange);  
    TH1F* ht_MC_OS  =new TH1F("ht_MC_OS"  ,"ht_MC_OS"  ,hist_Xbin,hist_Xrange);  
    TH1F* ht_MC_SS  =new TH1F("ht_MC_SS"  ,"ht_MC_SS"  ,hist_Xbin,hist_Xrange);  
  
    TH1F* ht_bkg  =new TH1F("ht_bkg"  ,"ht_bkg"  ,hist_Xbin,hist_Xrange);  
  
  
    ht_MC->Sumw2();
    ht_MC_OS->Sumw2();
    ht_MC_SS->Sumw2();
    ht_bkg->Sumw2();
  
    temp_color=2;
    hist_custom(ht_W,temp_color);
    hist_custom(ht_W_OS,temp_color);
    hist_custom(ht_W_SS,temp_color);
    temp_color=4;
    hist_custom(ht_Zll,temp_color);
    hist_custom(ht_Zll_OS,temp_color);
    hist_custom(ht_Zll_SS,temp_color);
    temp_color=5;
    hist_custom(ht_tt,temp_color);
    hist_custom(ht_tt_OS,temp_color);
    hist_custom(ht_tt_SS,temp_color);
    temp_color=7;
    hist_custom(ht_sig,temp_color);
    hist_custom(ht_sig_OS,temp_color);
    hist_custom(ht_sig_SS,temp_color);
    temp_color=11;
    hist_custom(ht_data_SS,temp_color);
    
    hist_custom(ht_data,1);
    hist_custom(ht_data_OS,1);

    //for(short ii=0; ii<2; ii++ ){ // trigger , samples , OSSS ,Pt
    for(short kk=0; kk<10; kk++ ){
      for(short ll=0; ll<2; ll++ ){ //OSSS
	for(short jj=0; jj<2; jj++ ){ // pt
	  int ii=1; // if you need ,ii=1
	  if(0==ll){//OSSS	    
	    if(0<=kk && kk<=5) ht_W_OS   -> Add(h_36110[ii][kk][ll][jj],temp_kwOS[ii][jj]);
	    if(6<=kk && kk<=7) ht_Zll_OS -> Add(h_36110[ii][kk][ll][jj],1.);
	    if(8==kk) ht_sig_OS -> Add(h_36110[ii][kk][ll][jj],1.);
	    if(9==kk) ht_tt_OS  -> Add(h_36110[ii][kk][ll][jj],1.);
	    if(10==kk) h_Zll_OS-> Add(h_361108f[ii][ll][jj],1);
	  }
	  else if(1==ll){//OS
	    if(0<=kk && kk<=5) ht_W_SS   -> Add(h_36110[ii][kk][ll][jj],temp_rQCD[ii][jj]*temp_kwSS[ii][jj]);
	    if(6<=kk && kk<=7) ht_Zll_SS -> Add(h_36110[ii][kk][ll][jj],temp_rQCD[ii][jj]);
	    if(8==kk) ht_sig_SS -> Add(h_36110[ii][kk][ll][jj],temp_rQCD[ii][jj]);
	    if(9==kk) ht_tt_SS  -> Add(h_36110[ii][kk][ll][jj],temp_rQCD[ii][jj]);
	    if(10==kk) h_Zll_SS-> Add(h_361108f[ii][ll][jj],temp_rQCD[ii][jj]);
	  }
	}}}    
    
    //trigger//###############
    ht_W->Add(ht_W_OS,+1);  
    ht_W->Add(ht_W_SS,-1);  
    //Z -> ll
    ht_Zll->Add(ht_Zll_OS,+1);
    ht_Zll->Add(ht_Zll_SS,-1);
    //ttbar  
    ht_tt->Add(ht_tt_OS,+1);
    ht_tt->Add(ht_tt_SS,-1);
    //Signal
    ht_sig->Add(ht_sig_OS,+1);
    ht_sig->Add(ht_sig_SS,-1);  
    //Data
    //h_data_OS->Add(h_sig_SS,-1);  
    ht_data_SS ->Scale(temp_rQCD[1][0]);
    ht_data_SS2->Scale(temp_rQCD[1][1]);
    ht_data_SS->Add(ht_data_SS2);
    
    // ht_MC_OS->Add(ht_W_OS,+1);  
    // ht_MC_SS->Add(ht_W_SS,+1);  
    ht_MC_OS->Add(ht_Zll_OS,+1);  
    ht_MC_SS->Add(ht_Zll_SS,+1);  
    ht_MC_OS->Add(ht_tt_OS,+1);  
    ht_MC_SS->Add(ht_tt_SS,+1);  
    ht_MC_OS->Add(ht_sig_OS,+1);   //important!!!
    ht_MC_SS->Add(ht_sig_SS,+1);   //important!!!
    ht_MC->Add(ht_MC_OS,+1);
    ht_MC->Add(ht_MC_SS,-1);  
    
    ht_bkg->Add(ht_MC,1);  
    ht_bkg->Add(ht_data_SS,1);  
    
    TH1F* ht_fiducial =new TH1F("ht_fiducial","h_fiducial" ,hist_Xbin,hist_Xrange);  
    if(OppositeSign){
      ht_fiducial->Add(ht_data_OS,+1.);
      ht_fiducial->Add(ht_MC_OS,-1.);
    }else{
      ht_fiducial->Add(ht_data_SS,+1.);
      ht_fiducial->Add(ht_MC_SS,-1.);
    }
    // ht_fiducial->Add(ht_data_OS,+1.);
    // ht_fiducial->Add(ht_MC,-1.);
    // ht_fiducial->Add(ht_data_SS,-1.);
    
    for(int ii=0; ii<h_fiducial->GetNbinsX()+2; ii++){
      double nbase  =  h_fiducial->GetBinContent(ii);
      double enbase =  h_fiducial->GetBinError  (ii);
      double npass  = ht_fiducial->GetBinContent(ii);    
      double enpass = ht_fiducial->GetBinError  (ii);
      if(nbase <= 0){
	std::cout<<h_fiducial->GetBinCenter(ii)<<" base <= 0"<<std::endl;
    	h_fiducial ->SetBinContent(ii, 0);
    	h_fiducial ->SetBinError  (ii, 0);
    	ht_fiducial->SetBinContent(ii, 0);
    	ht_fiducial->SetBinError  (ii, 0);
      }else if(npass < 0){
	std::cout<<h_fiducial->GetBinCenter(ii)<<" pass < 0"<<std::endl; 
    	ht_fiducial->SetBinContent(ii, 0);
    	ht_fiducial->SetBinError  (ii, 0);
      }else if(npass > nbase){
	std::cout<<h_fiducial->GetBinCenter(ii)<<" pass > base"<<std::endl;
    	ht_fiducial->SetBinContent(ii, nbase);
    	ht_fiducial->SetBinError  (ii, enpass/npass * nbase);
      }
      std::cout<<ht_fiducial->GetBinContent(ii)<<": pass : base :"<<h_fiducial->GetBinContent(ii)<<std::endl;
    }



    if(print_info){ 
      Double_t f_h_ev[10]={0};
      Double_t f_h_er[10]={0};
      int NN_XBIN=ht_bkg->GetNbinsX();

      if(OppositeSign){ //OS
	f_h_ev[0]=ht_bkg     ->IntegralAndError(1, NN_XBIN ,f_h_er[0]);
	f_h_ev[1]=ht_data_OS ->IntegralAndError(1, NN_XBIN ,f_h_er[1]);
	f_h_ev[2]=ht_W_OS    ->IntegralAndError(1, NN_XBIN ,f_h_er[2]);
	f_h_ev[3]=ht_Zll_OS  ->IntegralAndError(1, NN_XBIN ,f_h_er[3]);
	f_h_ev[4]=ht_tt_OS   ->IntegralAndError(1, NN_XBIN ,f_h_er[4]);
	f_h_ev[6]=ht_sig_OS  ->IntegralAndError(1, NN_XBIN ,f_h_er[6]);
      }   else {//SS
	f_h_ev[0]=ht_bkg     ->IntegralAndError(1, NN_XBIN ,f_h_er[0]);
	f_h_ev[1]=ht_data_SS ->IntegralAndError(1, NN_XBIN ,f_h_er[1]);
	f_h_ev[2]=ht_W_SS    ->IntegralAndError(1, NN_XBIN ,f_h_er[2]);
	f_h_ev[3]=ht_Zll_SS  ->IntegralAndError(1, NN_XBIN ,f_h_er[3]);
	f_h_ev[4]=ht_tt_SS   ->IntegralAndError(1, NN_XBIN ,f_h_er[4]);
	f_h_ev[6]=ht_sig_SS  ->IntegralAndError(1, NN_XBIN ,f_h_er[6]);
      }
      f_h_ev[7]=ht_fiducial  ->IntegralAndError(1, NN_XBIN ,f_h_er[7]);
      
      cout<<" ========== Yields (trigger) =========="<<endl
	  <<"Total bkg :: "<<setprecision(5)<<f_h_ev[0]<<" +- "<<f_h_er[0]<<endl
	  <<"Total DATA:: "<<setprecision(5)<<f_h_ev[1]<<" +- "<<f_h_er[1]<<endl
	  <<"   Ztautau:: "<<setprecision(5)<<f_h_ev[6]<<" +- "<<f_h_er[6]<<endl
	  <<"      Zll :: "<<setprecision(5)<<f_h_ev[3]<<" +- "<<f_h_er[3]<<endl
	  <<"      tt  :: "<<setprecision(5)<<f_h_ev[4]<<" +- "<<f_h_er[4]<<endl
	  <<"      SS  :: "<<setprecision(5)<<f_h_ev[5]<<" +- "<<f_h_er[5]<<endl
	  <<"      Wjet:: "<<setprecision(5)<<f_h_ev[2]<<" +- "<<f_h_er[2]<<endl
	  <<"  Fiducial:: "<<setprecision(5)<<f_h_ev[7]<<" +- "<<f_h_er[7]<<endl
	  <<endl;
    }
    
    //Draw-Option @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
    TCanvas *CAN=new TCanvas("can","can",10,10,1000/1.5,900/1.5 );      
    CAN->cd();

    TH1F* h_Wmain  =new TH1F("h_Wmain","h_Wmain",hist_Xbin,hist_Xrange);
    if(OppositeSign) h_Wmain=(TH1F*)h_W_OS->Clone();
    else  h_Wmain=(TH1F*)h_W_SS->Clone();
    TH1F* ht_Wmain  =new TH1F("ht_Wmain","ht_Wmain",hist_Xbin,hist_Xrange);
    if(OppositeSign) ht_Wmain=(TH1F*)ht_W_OS->Clone();
    else  ht_Wmain=(TH1F*)ht_W_SS->Clone();
    
    for(int ii=0; ii<h_Wmain->GetNbinsX()+2; ii++){
      double nbase  =  h_Wmain->GetBinContent(ii);
      double enbase =  h_Wmain->GetBinError  (ii);
      double npass  = ht_Wmain->GetBinContent(ii);    
      double enpass = ht_Wmain->GetBinError  (ii);
      if(nbase <= 0){
	std::cout<<h_Wmain->GetBinCenter(ii)<<" base <= 0"<<std::endl;
    	h_Wmain ->SetBinContent(ii, 0);
    	h_Wmain ->SetBinError  (ii, 0);
    	ht_Wmain->SetBinContent(ii, 0);
    	ht_Wmain->SetBinError  (ii, 0);
      }else if(npass < 0){
	std::cout<<h_Wmain->GetBinCenter(ii)<<" pass < 0"<<std::endl; 
    	ht_Wmain->SetBinContent(ii, 0);
    	ht_Wmain->SetBinError  (ii, 0);
      }else if(npass > nbase){
	std::cout<<h_Wmain->GetBinCenter(ii)<<" pass > base"<<std::endl;
    	ht_Wmain->SetBinContent(ii, nbase);
    	ht_Wmain->SetBinError  (ii, enpass/npass * nbase);
      }
      std::cout<<ht_Wmain->GetBinContent(ii)<<": pass : base :"<<h_Wmain->GetBinContent(ii)<<std::endl;
    }

    
    bool Xlog=0;
    if(s_var=="tau_0_pt" ) Xlog=1;
    if(1==Xlog)CAN ->SetLogx();
    TPad *Pad1 = new TPad("Pad1","Pad1",0,0.12,1,1);
    if(1==Xlog)Pad1->SetLogx();
    Pad1->SetFillStyle(0);
    Pad1->Draw();
    TPad *Pad2 = new TPad("Pad2","Pad2",0,0.0,1,0.25);
    if(1==Xlog)Pad2->SetLogx();
    Pad2->SetFillStyle(0);
    Pad2->Draw();
    
    Pad1->cd();
    TGraphAsymmErrors *g_eff_mc = new TGraphAsymmErrors //MC:Ztt(OS)
      (ht_Wmain,h_Wmain,"cl=0.683 b(1,1) mode");  
    g_eff_mc->SetLineStyle(1);
    g_eff_mc->SetLineColor(0);
    g_eff_mc->SetFillColor(2);//CobaltBlue
    g_eff_mc->GetXaxis()->SetTitle(arg_s_xtitle);
    g_eff_mc->GetYaxis()->SetTitle("Trigger Efficiency");
    g_eff_mc->SetMaximum(1.1);
    g_eff_mc->SetMinimum(0.);
    g_eff_mc->GetXaxis()->SetRangeUser(hist_Xrange[0],hist_Xrange[X_BINS-1]);
    g_eff_mc->Draw("a2");
    
    if(print_info){     
      for(int i_bins=0;i_bins<hist_Xbin+1;i_bins++){
	Double_t f_h_ev1= h_fiducial->GetBinContent(i_bins);
	Double_t f_h_ev2=ht_fiducial->GetBinContent(i_bins);
	if(f_h_ev1>=f_h_ev2)
	  printf(" %2d : pass %f > %f base\n",i_bins,f_h_ev1,f_h_ev2);
	else printf("\n WARNING %2d : pass %f : %f base \n",i_bins,f_h_ev2,f_h_ev1);
	
      }
    }
    
    TGraphAsymmErrors *g_eff_data = new TGraphAsymmErrors
      (ht_fiducial,h_fiducial,"cl=0.683 b(1,1) mode");  
    g_eff_data->SetLineColor(1);
    g_eff_data->SetLineWidth(3);
    g_eff_data->SetMarkerSize(1.5);
    g_eff_data->Draw("PEsames");

        
    OUTFile->cd();
    hist_name(g_eff_data ,"Eff_data__"+tree_NAME_sys);
    hist_name(g_eff_mc   ,"Eff_ZttOS_"+tree_NAME_sys);
    g_eff_mc->Write();
    g_eff_data->Write();
    hist_name(h_Wmain , "Wjet_"+tree_NAME_sys+"__off");
    hist_name(ht_Wmain, "Wjet_"+tree_NAME_sys+"_trig");
    h_Wmain ->Write();
    ht_Wmain->Write();
    hist_name(h_fiducial ,"data__"+tree_NAME_sys+"__off");
    hist_name(ht_fiducial,"data__"+tree_NAME_sys+"_trig");
    h_fiducial ->Write();
    ht_fiducial->Write();
    
    
    const int N_bins_output=X_BINS-1;
    Double_t   mc_vec_x_cen   [N_bins_output]={0};  
    Double_t   mc_vec_x_err   [N_bins_output]={0};
    Double_t   mc_vec_eff     [N_bins_output]={0};
    Double_t   mc_vec_eff_up  [N_bins_output]={0};
    Double_t   mc_vec_eff_down[N_bins_output]={0};
    Double_t data_vec_eff     [N_bins_output]={0};  
    Double_t data_vec_eff_up  [N_bins_output]={0};  
    Double_t data_vec_eff_down[N_bins_output]={0};    
    
    //  (N_bins_output,mc_vec_x_cen,data_vec_eff, mc_vec_x_err,mc_vec_x_err,data_vec_eff_down,data_vec_eff_up )
    for(int i_bins=0;i_bins<N_bins_output;i_bins++){
      Double_t XX_mc=0,YY_mc=0;//mc
      g_eff_mc ->GetPoint(i_bins,XX_mc,YY_mc );
      Double_t XX_mc_err  = g_eff_mc->GetErrorXlow (i_bins);
      Double_t YY_mc_down = g_eff_mc->GetErrorYlow (i_bins);
      Double_t YY_mc_up   = g_eff_mc->GetErrorYhigh(i_bins);
      
      Double_t XX_data=0,YY_data=0;//data      
      g_eff_data->GetPoint(i_bins,XX_data,YY_data );
      Double_t YY_data_up   = g_eff_data->GetErrorYhigh(i_bins);
      Double_t YY_data_down = g_eff_data->GetErrorYlow (i_bins);
      
      if(0==YY_mc){
	mc_vec_x_cen   [i_bins] = XX_mc;
	mc_vec_x_err   [i_bins] = XX_mc_err;
	mc_vec_eff     [i_bins] = 0;
	mc_vec_eff_up  [i_bins] = 0;
	mc_vec_eff_down[i_bins] = 0;
       
	data_vec_eff     [i_bins] = 0;
	data_vec_eff_up  [i_bins] = 0;
	data_vec_eff_down[i_bins] = 0;
	continue;
      }
	
      
      mc_vec_x_cen   [i_bins] = XX_mc;
      mc_vec_x_err   [i_bins] = XX_mc_err;
      mc_vec_eff     [i_bins] = YY_mc     /YY_mc;
      mc_vec_eff_up  [i_bins] = YY_mc_up  /YY_mc;
      mc_vec_eff_down[i_bins] = YY_mc_down/YY_mc;
      
      data_vec_eff     [i_bins] = YY_data     /YY_mc;
      data_vec_eff_up  [i_bins] = YY_data_up  /YY_mc;
      data_vec_eff_down[i_bins] = YY_data_down/YY_mc;
      
      printf(" %2dbin - region  %3.1f-%3.1f \n" , i_bins, XX_mc-XX_mc_err , XX_mc+XX_mc_err);
      printf("      MC  :: %0.4f + %0.5f - %0.5f \n",YY_mc  ,YY_mc_up  ,YY_mc_down);
      printf("     DATA :: %0.4f + %0.5f - %0.5f \n",YY_data,YY_data_up,YY_data_down);
      
    }
    
    // TLegned & TLatex ==================
    TLegend* leg = new TLegend(0.55,0.25, 0.88, 0.42); 
    leg->SetFillColor(10);
    leg->SetTextSize(0.04);
    leg->SetTextFont(42);
    leg->SetBorderSize(0);
    leg->AddEntry(g_eff_mc, "W#rightarrowl#nu+jets", "F");//LPFE
    leg->AddEntry(h_data_OS, "Data 2016", "LEP");
    leg->Draw();
    TString latex_draw="";
    if(25==b_trig) latex_draw+="HLT_tau25_medium1_tracktwo ";
    else if(12==b_trig) latex_draw+="L1_TAU12IM";
    if(1==req_prongs) latex_draw+="(1p)";
    else if(3==req_prongs) latex_draw+="(3p)";
    LABEL_NAME(50,0.6,latex_draw);  
    if(!(tree_NAME_sys.Contains("NOMINAL")))
      LABEL_NAME(50,0.22,tree_NAME_sys);  
    
    if(TotalLumi/1000>1000) //fb-1
      LABEL_DATA(50,0.6-0.16,Form("%1.2f f",TotalLumi/1000./1000) );  
    else  //pb-1
      LABEL_DATA(50,0.6-0.16,Form("%3.1f p",TotalLumi/1000.) );  
    LABEL(50,0.6-0.08); //ATLAS Intrnal
    
    Pad2->cd();  //SF draw ================================================================
    TGraphAsymmErrors *g_eff_data2 = new TGraphAsymmErrors // SF data
      (N_bins_output,mc_vec_x_cen,data_vec_eff, mc_vec_x_err,mc_vec_x_err,data_vec_eff_down,data_vec_eff_up );
    TGraphAsymmErrors *g_eff_mc2 = new TGraphAsymmErrors //SF MC -- (N X Y Xlow Xhigh Ylow Yhigh)
      (N_bins_output,mc_vec_x_cen,mc_vec_eff, mc_vec_x_err,mc_vec_x_err,mc_vec_eff_down,mc_vec_eff_up );
    
    
    g_eff_mc2->SetName("g_eff_mc2");
    hist_dataRatioSET(g_eff_mc2);
    g_eff_mc2->GetYaxis()->SetTitle(" SF ");
    g_eff_mc2->GetXaxis()->SetTitle(" Offline Tau #it{p}_{T} "); 
    if(s_var!="tau_0_pt")   g_eff_mc2->GetXaxis()->SetTitle(arg_s_xtitle);
    g_eff_mc2->SetFillColor(2);
    g_eff_mc2->SetLineColor(2);
    g_eff_mc2->SetMarkerColor(2);
    g_eff_mc2->SetFillStyle(3244);
    g_eff_mc2->SetMarkerSize(0);
    g_eff_mc2->SetMaximum(1.25);
    g_eff_mc2->SetMinimum(0.75);
    g_eff_mc2->GetXaxis()->SetRangeUser(hist_Xrange[0],hist_Xrange[X_BINS-1]);
    g_eff_mc2->Draw("A2");
    //
    g_eff_data2->SetName("g_eff_data2");
    hist_dataRatioSET(g_eff_data2);
    g_eff_data2->SetLineColor(1);
    g_eff_data2->SetLineWidth(3);
    g_eff_data2->SetMarkerColor(1);
    g_eff_data2->SetMarkerSize(1.5);
    g_eff_data2->GetXaxis()->SetRangeUser(hist_Xrange[0],hist_Xrange[X_BINS-1]);
    g_eff_data2->Draw("P");

    TLine *line = new TLine(-1000,1,1000,1);
    line->SetLineColor(2);
    line->SetLineWidth(4);
    line->SetLineStyle(2);
    // line->DrawLine(hist_Xrange[0]       ,1,
    //  		   hist_Xrange[X_BINS-1],1);
    
    g_eff_mc2  ->Draw("2");//re-draw 
    g_eff_data2->Draw("P");//re-draw
    
    // ====output file Name====================================
   TString temp_x="WSS_";//empty need
    if(OppositeSign)temp_x="WOS_";
    TString outputpdf =temp_x+"TrigEff" + Form("%d_",b_trig) + req_period;
    TString outputpdf2=temp_x+Form("_%1dp_%1dETA_%1dBDT",req_prongs,req_ETA,req_ID)+"";
    if(s_var!="tau_0_pt")  outputpdf2+=s_var;
    TString output_dir="./pdf/";
     
    if(1==vec_tree.size()){
      CAN->SaveAs(output_dir+outputpdf+outputpdf2+".pdf");  
    }
    else if(0==i_tree){//initial
      CAN->SaveAs(output_dir+outputpdf+outputpdf2+".pdf[");  
      CAN->SaveAs(output_dir+outputpdf+outputpdf2+".pdf");  
    }else if(i_tree==vec_tree.size()-1){//final
      CAN->SaveAs(output_dir+outputpdf+outputpdf2+".pdf");  
      CAN->SaveAs(output_dir+outputpdf+outputpdf2+".pdf]");  
    }else CAN->SaveAs(output_dir+outputpdf+outputpdf2+".pdf");  
    
    for(short ii=0; ii<2; ii++ ){ // trigger , samples , OSSS ,Pt
      for(short ll=0; ll<2; ll++ ){
	for(short jj=0; jj<2; jj++ ){
	  delete h_361108f[ii][ll][jj];
	  for(short kk=0; kk<10; kk++ ){
	    delete  h_36110[ii][kk][ll][jj];
	  }
	}
      }
    }
    
  } // Loop i_tree
  
  OUTFile->Close();
  TIME.Stop();
  TIME.Print();
  
  return;
} //END ALL  //##############################################

