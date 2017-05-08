
#include "head.h"  

void kw2(TString req_period = "all" ,int req_prongs = 0 ,  int req_ETA=0, int req_ID=2
	 ,bool require_W_SS=1 , int Separate_PT=0 ,int b_trig=0)
{ 
  gROOT->ProcessLine("#include <vector>");
  
  s_var = "lephad_mt_lep0_met";
  TString OUTPUT=s_var;
  TString arg_s_xtitle="M_{T}(#mu,E_{T}^{miss})";
  int hist_Xbin=10;
  double hist_Xbegin=60;
  double hist_Xend=110; 
  
  
  if(require_W_SS) // kW-SS
    printf("kw(SS): %s - %2.1dp - eta%2.1d - ID%2.1d  \n",
	   req_period.Data() ,req_prongs ,req_ETA ,req_ID );
  else // kW-OS
    printf("kw(OS): %s - %2.1dp - eta%2.1d - ID%2.1d  \n",
	   req_period.Data() ,req_prongs ,req_ETA ,req_ID );
  
  TString tree_NAME="NOMINAL";
  TString tree_NAME_sys=tree_NAME;
  
#include "selection.h"    
  TString s_req=s_REQ_W;
  
  if(1==Separate_PT)
    s_req+= "&& 35>tau_0_pt"; //lower pt
  else if(2==Separate_PT)
    s_req+= "&& 35<tau_0_pt"; //higher pt
  else if(3==Separate_PT)
    s_req+= "&& 25<tau_0_pt && tau_0_pt<30"; //low
  else if(4==Separate_PT)
    s_req+= "&& 30<tau_0_pt && tau_0_pt<40"; //middle
  else if(5==Separate_PT)
    s_req+= "&& 40<tau_0_pt "; //high
  

  if(25==b_trig)
    s_req="(" +s_req +"&& HLT_tau25_medium1_tracktwo_resurrected==1 && tau_0_trig_HLT_tau25_medium1_tracktwo==1)";
  else if(35==b_trig)
    s_req+="&& HLT_tau35_medium1_tracktwo==1 && tau_0_trig_HLT_tau35_medium1_tracktwo==1";
    
  TH1F* h_361108f=new TH1F("h_361108f","h_361108f",hist_Xbin,hist_Xbegin,hist_Xend);  
  TH1F* hs_361108f=new TH1F("hs_361108f","hs_361108f",hist_Xbin,hist_Xbegin,hist_Xend);  
  
  TH1F* h_361100=new TH1F("h_361100","h_361100",hist_Xbin,hist_Xbegin,hist_Xend);
  TH1F* h_361101=new TH1F("h_361101","h_361101",hist_Xbin,hist_Xbegin,hist_Xend);
  TH1F* h_361102=new TH1F("h_361102","h_361102",hist_Xbin,hist_Xbegin,hist_Xend);
  TH1F* h_361103=new TH1F("h_361103","h_361103",hist_Xbin,hist_Xbegin,hist_Xend);
  TH1F* h_361104=new TH1F("h_361104","h_361104",hist_Xbin,hist_Xbegin,hist_Xend);
  TH1F* h_361105=new TH1F("h_361105","h_361105",hist_Xbin,hist_Xbegin,hist_Xend);
  TH1F* h_361106=new TH1F("h_361106","h_361106",hist_Xbin,hist_Xbegin,hist_Xend);
  TH1F* h_361107=new TH1F("h_361107","h_361107",hist_Xbin,hist_Xbegin,hist_Xend);
  TH1F* h_361108=new TH1F("h_361108","h_361108",hist_Xbin,hist_Xbegin,hist_Xend);
  TH1F* h_410000=new TH1F("h_410000","h_410000",hist_Xbin,hist_Xbegin,hist_Xend);
  //SS
  TH1F* hs_361100=new TH1F("hs_361100","hs_361100",hist_Xbin,hist_Xbegin,hist_Xend);
  TH1F* hs_361101=new TH1F("hs_361101","hs_361101",hist_Xbin,hist_Xbegin,hist_Xend);
  TH1F* hs_361102=new TH1F("hs_361102","hs_361102",hist_Xbin,hist_Xbegin,hist_Xend);
  TH1F* hs_361103=new TH1F("hs_361103","hs_361103",hist_Xbin,hist_Xbegin,hist_Xend);
  TH1F* hs_361104=new TH1F("hs_361104","hs_361104",hist_Xbin,hist_Xbegin,hist_Xend);
  TH1F* hs_361105=new TH1F("hs_361105","hs_361105",hist_Xbin,hist_Xbegin,hist_Xend);
  TH1F* hs_361106=new TH1F("hs_361106","hs_361106",hist_Xbin,hist_Xbegin,hist_Xend);
  TH1F* hs_361107=new TH1F("hs_361107","hs_361107",hist_Xbin,hist_Xbegin,hist_Xend);
  TH1F* hs_361108=new TH1F("hs_361108","hs_361108",hist_Xbin,hist_Xbegin,hist_Xend);
  TH1F* hs_410000=new TH1F("hs_410000","hs_410000",hist_Xbin,hist_Xbegin,hist_Xend);
  
  TString _OS="&& lephad_qxq==-1";
  TString _SS="&& lephad_qxq==+1";
  if(require_W_SS){ //SS!!!!!! 
    _OS="&& lephad_qxq==+1";
    _SS="&& lephad_qxq==-1";
  }
  cout<<s_weight<<endl;
  
  
  
  set_hist(h_361108f , tree_361108 ,h_361108_mc_derivation ,s_req+_OS , 361108*2 , s_var);
  //set_hist(hs_361108_f , tree_361108 ,h_361108_mc_derivation ,s_req+_SS , 361108*2 , s_var);
  
  set_hist(h_361100 , tree_361100 ,h_361100_mc_derivation ,s_req+_OS , 361100 , s_var);
  //set_hist(hs_361100, tree_361100 ,h_361100_mc_derivation ,s_req+_SS , 361100 , s_var);
  set_hist(h_361101 , tree_361101 ,h_361101_mc_derivation ,s_req+_OS , 361101 , s_var);
  //set_hist(hs_361101, tree_361101 ,h_361101_mc_derivation ,s_req+_SS , 361101 , s_var);
  set_hist(h_361102 , tree_361102 ,h_361102_mc_derivation ,s_req+_OS , 361102 , s_var);
  //set_hist(hs_361102, tree_361102 ,h_361102_mc_derivation ,s_req+_SS , 361102 , s_var);
  set_hist(h_361103 , tree_361103 ,h_361103_mc_derivation ,s_req+_OS , 361103 , s_var);
  //set_hist(hs_361103, tree_361103 ,h_361103_mc_derivation ,s_req+_SS , 361103 , s_var);
  set_hist(h_361104 , tree_361104 ,h_361104_mc_derivation ,s_req+_OS , 361104 , s_var);
  //set_hist(hs_361104, tree_361104 ,h_361104_mc_derivation ,s_req+_SS , 361104 , s_var);
  set_hist(h_361105 , tree_361105 ,h_361105_mc_derivation ,s_req+_OS , 361105 , s_var);
  //set_hist(hs_361105, tree_361105 ,h_361105_mc_derivation ,s_req+_SS , 361105 , s_var);
  set_hist(h_361106 , tree_361106 ,h_361106_mc_derivation ,s_req+_OS , 361106 , s_var);
  //set_hist(hs_361106, tree_361106 ,h_361106_mc_derivation ,s_req+_SS , 361106 , s_var);
  set_hist(h_361107 , tree_361107 ,h_361107_mc_derivation ,s_req+_OS , 361107 , s_var);
  //set_hist(hs_361107, tree_361107 ,h_361107_mc_derivation ,s_req+_SS , 361107 , s_var);
  set_hist(h_361108 , tree_361108 ,h_361108_mc_derivation ,s_req+_OS , 361108 , s_var);
  //set_hist(hs_361108, tree_361108 ,h_361108_mc_derivation ,s_req+_SS , 361108 , s_var);
  set_hist(h_410000 , tree_410000 ,h_410000_mc_derivation ,s_req+_OS , 410000 , s_var);
  //set_hist(hs_410000, tree_410000 ,h_410000_mc_derivation ,s_req+_SS , 410000 , s_var);
  
  
  
  
  //sum   
  TH1F* h_W  =new TH1F("h_W"  ,"h_W"  ,hist_Xbin,hist_Xbegin,hist_Xend);  
  TH1F* h_Zll=new TH1F("h_Zll","h_Zll",hist_Xbin,hist_Xbegin,hist_Xend);  
  TH1F* h_sig=new TH1F("h_sig","h_sig",hist_Xbin,hist_Xbegin,hist_Xend);  
  TH1F* h_tt =new TH1F("h_tt" ,"h_tt" ,hist_Xbin,hist_Xbegin,hist_Xend);  
  // sum OS
  TH1F* h_W_OS  =new TH1F("h_W_OS"  ,"h_W_OS"  ,hist_Xbin,hist_Xbegin,hist_Xend);  
  TH1F* h_Zll_OS=new TH1F("h_Zll_OS","h_Zll_OS",hist_Xbin,hist_Xbegin,hist_Xend);  
  TH1F* h_sig_OS=new TH1F("h_sig_OS","h_sig_OS",hist_Xbin,hist_Xbegin,hist_Xend);  
  TH1F* h_tt_OS =new TH1F("h_tt_OS" ,"h_tt_OS" ,hist_Xbin,hist_Xbegin,hist_Xend);  
  // sum SS  
  TH1F* h_W_SS  =new TH1F("h_W_SS"  ,"h_W_SS"  ,hist_Xbin,hist_Xbegin,hist_Xend);  
  TH1F* h_Zll_SS=new TH1F("h_Zll_SS","h_Zll_SS",hist_Xbin,hist_Xbegin,hist_Xend);  
  TH1F* h_sig_SS=new TH1F("h_sig_SS","h_sig_SS",hist_Xbin,hist_Xbegin,hist_Xend);  
  TH1F* h_tt_SS =new TH1F("h_tt_SS" ,"h_tt_SS" ,hist_Xbin,hist_Xbegin,hist_Xend);    
  // DATA
  TH1F* h_data   =new TH1F("h_data"    ,"h_data"    ,hist_Xbin,hist_Xbegin,hist_Xend);    
  TH1F* h_data_OS =new TH1F("h_data_OS" ,"h_data_OS" ,hist_Xbin,hist_Xbegin,hist_Xend);    
  TH1F* h_data_SS =new TH1F("h_data_SS" ,"h_data_SS" ,hist_Xbin,hist_Xbegin,hist_Xend);    
  set_data(h_data_OS , tree_data  ,s_req+_OS , s_var);
  //set_hist(h_data_SS , tree_data ,h_410000_mc_derivation ,s_req+_SS , 1 , s_var);
  
  TH1F* h_MC  =new TH1F("h_MC"  ,"h_MC"  ,hist_Xbin,hist_Xbegin,hist_Xend);  
  TH1F* h_MC_OS  =new TH1F("h_MC_OS"  ,"h_MC_OS"  ,hist_Xbin,hist_Xbegin,hist_Xend);  
  TH1F* h_MC_SS  =new TH1F("h_MC_SS"  ,"h_MC_SS"  ,hist_Xbin,hist_Xbegin,hist_Xend);  
  
  //TH1F* h_bkg  =new TH1F("h_bkg"  ,"h_bkg"  ,hist_Xbin,hist_Xbegin,hist_Xend);  
  TH1F* h_bkg  =new TH1F(""  ,""  ,hist_Xbin,hist_Xbegin,hist_Xend);  
  
  TH1F* h_data_minus_W_OS =new TH1F("h_data_minus_W_OS"  ,"h_data_minus_W_OS"  ,hist_Xbin,hist_Xbegin,hist_Xend);    
  TH1F* h_data_minus_W_SS =new TH1F("h_data_minus_W_SS"  ,"h_data_minus_W_SS"  ,hist_Xbin,hist_Xbegin,hist_Xend);    
  
  h_MC->Sumw2();
  h_MC_OS->Sumw2();
  h_MC_SS->Sumw2();
  h_bkg->Sumw2();
  
  
  int temp_color=2;
  hist_custom(h_W,temp_color);
  hist_custom(h_W_OS,temp_color);
  hist_custom(h_W_SS,temp_color);
  hist_custom(h_data_minus_W_OS,temp_color);
  hist_custom(h_data_minus_W_SS,temp_color);
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
  
  
  
  
  
  float temp_kw_factorOS=1.;
  float temp_kw_factorSS=1.;
  float temp_rQCD_factor=1.;
  
  //W +jets
  h_W_OS->Add(h_361100,temp_kw_factorOS);
  h_W_OS->Add(h_361101,temp_kw_factorOS);
  h_W_OS->Add(h_361102,temp_kw_factorOS);
  h_W_OS->Add(h_361103,temp_kw_factorOS);
  h_W_OS->Add(h_361104,temp_kw_factorOS);
  h_W_OS->Add(h_361105,temp_kw_factorOS);
  h_W_SS->Add(hs_361100,temp_kw_factorSS*temp_rQCD_factor);
  h_W_SS->Add(hs_361101,temp_kw_factorSS*temp_rQCD_factor);
  h_W_SS->Add(hs_361102,temp_kw_factorSS*temp_rQCD_factor);
  h_W_SS->Add(hs_361103,temp_kw_factorSS*temp_rQCD_factor);
  h_W_SS->Add(hs_361104,temp_kw_factorSS*temp_rQCD_factor);
  h_W_SS->Add(hs_361105,temp_kw_factorSS*temp_rQCD_factor);
  h_W->Add(h_W_OS,+1);  
  h_W->Add(h_W_SS,-1);  
  //Z -> ll
  h_Zll_OS->Add(h_361106,+1);
  h_Zll_OS->Add(h_361107,+1);
  h_Zll_SS->Add(hs_361106,temp_rQCD_factor);
  h_Zll_SS->Add(hs_361107,temp_rQCD_factor);
  h_Zll_OS->Add(h_361108f,+1);
  h_Zll_SS->Add(hs_361108f,temp_rQCD_factor);
  
  h_Zll->Add(h_Zll_OS,+1);
  h_Zll->Add(h_Zll_SS,-1);
  //ttbar  
  h_tt_OS->Add(h_410000 ,+1);
  h_tt_SS->Add(hs_410000,temp_rQCD_factor);
  h_tt->Add(h_tt_OS,+1);
  h_tt->Add(h_tt_SS,-1);
  //Signal
  h_sig_OS->Add(h_361108 ,+1);
  h_sig_SS->Add(hs_361108,temp_rQCD_factor);
  h_sig->Add(h_sig_OS,+1);
  h_sig->Add(h_sig_SS,-1);  
  //Data
  //h_data_OS->Add(h_sig_SS,-1);  
  
  h_MC_OS->Add(h_W_OS,+1);  
  h_MC_SS->Add(h_W_SS,+1);  
  h_MC_OS->Add(h_Zll_OS,+1);  
  h_MC_SS->Add(h_Zll_SS,+1);  
  h_MC_OS->Add(h_tt_OS,+1);  
  h_MC_SS->Add(h_tt_SS,+1);  
  h_MC_OS->Add(h_sig_OS,+1);  
  h_MC_SS->Add(h_sig_SS,+1);  
  h_MC->Add(h_MC_OS,+1);
  h_MC->Add(h_MC_SS,-1);  
  
  h_bkg->Add(h_MC,1);  
  h_bkg->Add(h_data_SS,1);  
  
  
  h_data_minus_W_OS=(TH1F*)h_data_OS->Clone();
  h_data_minus_W_SS=(TH1F*)h_data_SS->Clone();
  
  h_data_minus_W_OS->Add(h_Zll_OS,-1);
  h_data_minus_W_OS->Add(h_tt_OS ,-1);
  h_data_minus_W_OS->Add(h_sig_OS,-1);
  
  if(print_info){
    Double_t f_h_ev[10];
    Double_t f_h_er[10];
    f_h_ev[0]=h_data_minus_W_OS->IntegralAndError(1, h_bkg->GetNbinsX(),f_h_er[0]);
    f_h_ev[1]=h_data_OS->IntegralAndError(1, h_data_OS->GetNbinsX(),f_h_er[1]);
    f_h_ev[2]=h_W_OS->IntegralAndError(1, h_bkg->GetNbinsX(),f_h_er[2]);
    f_h_ev[3]=h_Zll_OS->IntegralAndError(1, h_bkg->GetNbinsX(),f_h_er[3]);
    f_h_ev[4]=h_tt_OS->IntegralAndError(1, h_bkg->GetNbinsX(),f_h_er[4]);
    f_h_ev[5]=h_data_SS->IntegralAndError(1, h_data_SS->GetNbinsX(),f_h_er[5]);//  
    f_h_ev[6]=h_sig_OS->IntegralAndError(1, h_bkg->GetNbinsX(),f_h_er[6]);
    
    cout<<"Total DATA:: "<<setprecision(5)<<f_h_ev[1]<<" +- "<<f_h_er[1]<<endl
	<<"      Zll :: "<<setprecision(5)<<f_h_ev[3]<<" +- "<<f_h_er[3]<<endl
	<<"      Ztt :: "<<setprecision(5)<<f_h_ev[6]<<" +- "<<f_h_er[6]<<endl
	<<"      tt  :: "<<setprecision(5)<<f_h_ev[4]<<" +- "<<f_h_er[4]<<endl
      //<<"      SS  :: "<<setprecision(5)<<f_h_ev[5]<<" +- "<<f_h_er[5]<<endl                            
	<<"  DATA-MC :: "<<setprecision(5)<<f_h_ev[0]<<" +- "<<f_h_er[0]<<endl
	<<"    W+jet :: "<<setprecision(5)<<f_h_ev[2]<<" +- "<<f_h_er[2]<<endl;
    
  }


    
  
  
  hist_INTEGRAL(h_W_OS);
  hist_INTEGRAL(h_data_minus_W_OS);
  
  //integral @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
  TCanvas *CAN=new TCanvas("can","can",10,10,1000/1.5,900/1.5 );      
  TPad *PAD = new TPad("Pad1","Pad1",0,0.12,1,1);
  PAD->Draw();
  TPad *PAD3 = new TPad("Pad2","Pad2",0,0.0,1,0.25);
  PAD3->Draw();
  
  PAD->cd();
  h_data_minus_W_OS->SetMaximum(1.2*h_data_minus_W_OS->GetMaximum());
  h_data_minus_W_OS->SetMinimum(0);
  h_data_minus_W_OS->Draw("");
  //h_data_OS->Draw("sames");
  h_W_OS->Draw("sames");
  
  //TLatex
  if(require_W_SS)
    LABEL_NAME(55,0.7,"kW-CR(SS) ");
  else LABEL_NAME(55,0.7,"kW-CR(OS) ");
  if(TotalLumi/1000.>1000)
    LABEL_DATA(55,0.8+0.05,TotalLumi/1000. );  
  else 
    LABEL_DATA(55,0.8+0.05,Form("%3.1f p",TotalLumi/1000.) );  
  LABEL(55,0.8);
  
  TString OUT_onhist="";
  if(1==req_prongs)OUT_onhist+="1p ";
  else if(3==req_prongs)OUT_onhist+="3p ";
  if(1==req_ID)OUT_onhist+="BDTloose ";
  else if(3==req_ID)OUT_onhist+="BDTtight ";
  if(1==req_ETA)OUT_onhist+=" (Barrel) ";
  else if(2==req_ETA)OUT_onhist+=" (Endcap) ";
  if("" != OUT_onhist)
    LABEL_NAME(55,0.7-0.08,OUT_onhist);  
  
  

  
  
  PAD3->cd();  
  TH1F* h_ratio_OS2bkg  =new TH1F(""  ,""  ,hist_Xbin,hist_Xbegin,hist_Xend);  //ratio plot
  hist_custom(h_ratio_OS2bkg,1);
  h_ratio_OS2bkg->SetXTitle(arg_s_xtitle);
  h_ratio_OS2bkg->SetYTitle("kW");
  h_ratio_OS2bkg->SetTitleOffset(0.25,"Y");
  h_ratio_OS2bkg->SetTitleSize(0.15,"Y");
  h_ratio_OS2bkg->SetLabelSize(0.15,"Y");
  h_ratio_OS2bkg->SetTitleOffset(0.5,"X");
  h_ratio_OS2bkg->SetTitleSize(0.1,"X");
  h_ratio_OS2bkg->SetLabelSize(0.,"X");
  
  h_ratio_OS2bkg->Divide(h_data_minus_W_OS,h_W_OS);
  double h_yMAX=h_ratio_OS2bkg->GetMaximum();  
  double h_yMIN=h_ratio_OS2bkg->GetMinimum();  
  h_ratio_OS2bkg->SetMaximum(1.03*h_yMAX);
  h_ratio_OS2bkg->SetMinimum(0.97*h_yMIN);
  h_ratio_OS2bkg->Draw();
  
  TLine *line = new TLine(-1000,1,1000,1);
  line->SetLineColor(2);
  line->SetLineWidth(4);
  line->SetLineStyle(2);
  line->DrawLine(h_data->GetXaxis()->GetXmin(),1,
		 h_data->GetXaxis()->GetXmax(),1);
  h_ratio_OS2bkg->Draw("sames");  
  
  
  
  TString outputpdf="kwOS_"+req_period+Form("_%1.1dprong_%1.1dETA_%1.1dBDT",req_prongs,req_ETA,req_ID)+"__"+s_var;
  if(require_W_SS) outputpdf="kwSS_"+req_period+Form("_%1.1dprong_%1.1dETA_%1.1dBDT",req_prongs,req_ETA,req_ID)+"__"+s_var;
  if(0==Separate_PT) outputpdf+="_All_";
  else if(1==Separate_PT) outputpdf+="_Low_";
  else if(2==Separate_PT) outputpdf+="_High";
  else if(3==Separate_PT) outputpdf+="_Pt1_";
  else if(4==Separate_PT) outputpdf+="_Pt2_";
  else if(5==Separate_PT) outputpdf+="_Pt3_";
  if(0==b_trig)        outputpdf+=Form("___%dtrig",b_trig); //0,25,35,80,125,(160) -->> _XXtrig
  else if(100>b_trig)  outputpdf+=Form("__%dtrig",b_trig); //0,25,35,80,125,(160) -->> _XXtrig
  else if(100<b_trig)  outputpdf+=Form("_%dtrig",b_trig); //0,25,35,80,125,(160) -->> _XXtrig
  
  CAN->SaveAs("./pdf/"+outputpdf+".png");       
  CAN->SaveAs("./pdf/"+outputpdf+".pdf");
  
  TString outputtext="./text/kw_os.txt";
  if(require_W_SS)outputtext="./text/kw_ss.txt";
  FILE*  pFile_kw_os = fopen(outputtext,"a");
  

  if(1>0){
    double  factor  =h_ratio_OS2bkg->GetBinContent(1);
    double  factor_E=h_ratio_OS2bkg->GetBinError(1);
    double  factor_Elow=h_ratio_OS2bkg->GetBinErrorLow(1);
    double  factor_Eup =h_ratio_OS2bkg->GetBinErrorUp(1);
    double  MAX=h_yMAX;
    double  MIN=h_yMIN;
    double  sys_error=fabs(MAX-factor);
    double  sys_error2=fabs(MIN-factor);
    sys_error=(h_yMAX-h_yMIN)/2.;
    cout<<MIN<<"..."<<MAX<<"..."<<factor_E<<endl;
    cout<<"Write here -->"<<outputtext<<endl;
    
    TString out2text="kwOS";
    if(require_W_SS) out2text="kwSS";
    if(0==Separate_PT) out2text+="_All_";
    else if(1==Separate_PT) out2text+="_Low_";
    else if(2==Separate_PT) out2text+="_High";
    else if(3==Separate_PT) out2text+="_Pt1_";
    else if(4==Separate_PT) out2text+="_Pt2_";
    else if(5==Separate_PT) out2text+="_Pt3_";
    
    //if(b_trig!=0)
    if(0==b_trig)        out2text+=Form("___%dtrig",b_trig); //0,25,35,80,125,(160) -->> _XXtrig
    else if(100>b_trig)  out2text+=Form("__%dtrig",b_trig); //0,25,35,80,125,(160) -->> _XXtrig
    else if(100<b_trig)  out2text+=Form("_%dtrig",b_trig); //0,25,35,80,125,(160) -->> _XXtrig
        
    printf (out2text + ":: %s ::prong %2.1d ::eta %2.1d ::ID%3.1d = %2.3f +- %2.3f +- %2.3f \n",
	    req_period.Data() ,req_prongs ,req_ETA ,req_ID ,factor ,factor_E,sys_error);
    fprintf(pFile_kw_os,
	    out2text + ":: %s ::prong %2.1d ::eta %2.1d ::ID%3.1d = %2.3f +- %2.3f +- %2.3f  \n",
	    req_period.Data() ,req_prongs ,req_ETA ,req_ID ,factor ,factor_E,sys_error);
    
    
  }
  
  
  return; 
}
