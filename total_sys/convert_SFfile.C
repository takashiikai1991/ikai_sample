


#include "../head.h"

//  eff_tau80_1p_data;
//  eff_tau80_1p_mc;
//  eff_tau80_1p_SYST;
//  sf_tau80_1p;
//  sf_tau80_1p_SYST;
//  sf_tau80_1p_DATA_STAT;
//  sf_tau80_1p_SIGNAL_STAT;
//  sf_tau80_1p_STAT;

// KEY: STATDATA2015_down_all_loose_1p;1
// KEY: STATDATA2015_up_all_loose_1p;1
// KEY: STATMC2015_down_all_loose_1p;1
// KEY: STATMC2015_up_all_loose_1p;1
// KEY: SYST2015_all_loose_1p;1
// KEY: sf_all_loose_1p;1
// KEY: total2015_down_all_loose_1p;1
// KEY: total2015_up_all_loose_1p;1

void LogTGraphAsymmErrors(TGraphAsymmErrors *g1){ 
  
  //g1->GetXaxis()->SetRangeUser(20,310);
  g1->GetXaxis()->SetMoreLogLabels(1);
  // g1->GtXaxis()->SetLabelOffset(-0.002);
  // g1->GetXaxis()->SetLabelSize(0.04); 
  g1->GetXaxis()->SetLabelOffset(0.004);
  g1->GetXaxis()->SetLabelSize(0.05);
  g1->GetXaxis()->SetLabelSize(0.);
  g1->GetXaxis()->SetTitleSize(0.);
  g1->GetXaxis()->SetNoExponent(1);
  return;
}

void LogTH2(TH2D *h1){ 
  
  //g1->GetXaxis()->SetRangeUser(20,310);
  h1->GetXaxis()->SetMoreLogLabels(1);
  h1->GetXaxis()->SetNoExponent(1);
  
  // g1->GtXaxis()->SetLabelOffset(-0.002);
  // g1->GetXaxis()->SetLabelSize(0.04); 
  // h1->SetLabelOffset(0.004);
  // h1->SetLabelSize(0.05);
  // h1->SetLabelSize(0.);
  // h1->SetTitleSize(0.);
  h1->SetMarkerSize(2.5);
  h1->SetXTitle("offline tau pt");
  h1->SetYTitle("offline tau Eta");
  
  //h1->SetNoExponent(1);
  return;
}





void convert_SFfile(TString req_period = "all",int req_prongs =1,int req_ETA=0,int req_ID=2 , int b_trig=80
		    ,TString s_year="2015", TString s_sample="ttbar"
		    )
{ 
  SetAtlasStyle();
  gStyle->SetOptStat(111);
  gStyle->SetPadRightMargin(0.2);
  
  TString s_id="loose";
  if(1==req_ID)s_id="loose";
  if(2==req_ID)s_id="medium";
  if(3==req_ID)s_id="tight";

  
  //TFile* Rfile= TFile::Open("./ROOT/tau_efficiencies_2016_"+s_id+"_Ztt_rebin.root" );
  TFile* Rfile= TFile::Open("./ROOT/tau_efficiencies_"+s_year+"_"+s_id+"_"+s_sample+".root" );
  //TFile* Rfile= TFile::Open(Form("./TrigEff_%1dprong_%1dETA_%1dBDT_%dtrig.root",req_prongs,req_ETA,req_ID,b_trig));
  
  TString OUTPUT_NAME="";//"Trigger_TrueHadTau_data2016_";
  if(1>0){
    TString OUT_onhist="Trigger_TrueHadTau_data"+s_year+"_";
    if(25==b_trig) OUT_onhist+="HLT_tau25_medium1_tracktwo_";
    if(35==b_trig) OUT_onhist+="HLT_tau35_medium1_tracktwo_";
    if(50==b_trig) OUT_onhist+="HLT_tau50_medium1_tracktwo_L1TAU12_";
    if(79==b_trig) OUT_onhist+="HLT_tau80_medium1_tracktwo_";
    if(80==b_trig) OUT_onhist+="HLT_tau80_medium1_tracktwo_L1TAU60_";
    if(125==b_trig)OUT_onhist+="HLT_tau125_medium1_tracktwo_";
    if(160==b_trig)OUT_onhist+="HLT_tau160_medium1_tracktwo_";
    
    //
    OUT_onhist+=req_period+"_";
    if(1==req_prongs)OUT_onhist+="1p_";
    else if(3==req_prongs)OUT_onhist+="3p_";
    if(1==req_ID)OUT_onhist+="Loose";
    else if(2==req_ID)OUT_onhist+="Medium";
    else if(3==req_ID)OUT_onhist+="Tight";
    //if(0==req_ETA)OUT_onhist+="_Inclusive";
    if(1==req_ETA)OUT_onhist+="_Barrel_";
    else if(2==req_ETA)OUT_onhist+="_Endcap_";
    //
    OUTPUT_NAME=OUT_onhist;
  }
  
  TFile* OUTPUT = new TFile("./ROOT2/"+OUTPUT_NAME+".root","RECREATE");
  
  
  //if(1>0){//NOMINAL MC load
  TString name_trig=Form("tau%d",b_trig);
  if(50==b_trig) name_trig=Form("tau%d_L1TAU12",b_trig);
  if(79==b_trig) name_trig=Form("tau%d",80);
  if(80==b_trig) name_trig=Form("tau%d_L1TAU60",b_trig);
    
  // TH1F* R_eff_data = (TGraphAsymmErrors*)Rfile->Get("eff_"+name_trig+"_1p_data");
  // TH1F* R_eff_mc   = (TGraphAsymmErrors*)Rfile->Get("eff_"+name_trig+"_1p_mc");
  // TH1F* R_eff_SYST = (TGraphAsymmErrors*)Rfile->Get("eff_"+name_trig+"_1p_SYST");
  
  TGraphAsymmErrors* R_sf_all         = (TGraphAsymmErrors*)Rfile->Get(Form("sf_"+name_trig+"_%dp",req_prongs));
  vector < float > v_sf_all_x_mea;
  vector < float > v_sf_all_y_mea;
  vector < float > v_sf_all_x_err;
  vector < float > v_sf_all_y_err_up;
  vector < float > v_sf_all_y_err_down;
  fill_asym_binXY( R_sf_all , v_sf_all_x_mea , v_sf_all_x_err ,
		   v_sf_all_y_mea , v_sf_all_y_err_up , v_sf_all_y_err_down);
  
  TGraphAsymmErrors* R_sf_SYST        = (TGraphAsymmErrors*)Rfile->Get(Form("sf_"+name_trig+"_%dp_SYST",req_prongs));
  vector < float > v_sf_SYST_x_mea;
  vector < float > v_sf_SYST_y_mea;
  vector < float > v_sf_SYST_x_err;
  vector < float > v_sf_SYST_y_err_up;
  vector < float > v_sf_SYST_y_err_down;
  fill_asym_binXY( R_sf_SYST , v_sf_SYST_x_mea , v_sf_SYST_x_err ,
		   v_sf_SYST_y_mea , v_sf_SYST_y_err_up , v_sf_SYST_y_err_down);

  
  TGraphAsymmErrors* R_sf_DATA_STAT   = (TGraphAsymmErrors*)Rfile->Get(Form("sf_"+name_trig+"_%dp_DATA_STAT",req_prongs));
  vector < float > v_sf_DATA_STAT_x_mea;
  vector < float > v_sf_DATA_STAT_y_mea;
  vector < float > v_sf_DATA_STAT_x_err;
  vector < float > v_sf_DATA_STAT_y_err_up;
  vector < float > v_sf_DATA_STAT_y_err_down;
  fill_asym_binXY( R_sf_DATA_STAT , v_sf_DATA_STAT_x_mea , v_sf_DATA_STAT_x_err ,
		   v_sf_DATA_STAT_y_mea , v_sf_DATA_STAT_y_err_up , v_sf_DATA_STAT_y_err_down);
  
  TGraphAsymmErrors* R_sf_SIGNAL_STAT = (TGraphAsymmErrors*)Rfile->Get(Form("sf_"+name_trig+"_%dp_SIGNAL_STAT",req_prongs));
  vector < float > v_sf_SIGNAL_STAT_x_mea;
  vector < float > v_sf_SIGNAL_STAT_y_mea;
  vector < float > v_sf_SIGNAL_STAT_x_err;
  vector < float > v_sf_SIGNAL_STAT_y_err_up;
  vector < float > v_sf_SIGNAL_STAT_y_err_down;
  fill_asym_binXY( R_sf_SIGNAL_STAT , v_sf_SIGNAL_STAT_x_mea , v_sf_SIGNAL_STAT_x_err ,
		   v_sf_SIGNAL_STAT_y_mea , v_sf_SIGNAL_STAT_y_err_up , v_sf_SIGNAL_STAT_y_err_down);
  
  //TGraphAsymmErrors* R_sf_STAT        = (TGraphAsymmErrors*)Rfile->Get(Form("sf_"+name_trig+"_%dp_STAT",req_prongs));

  
  const int nbins_x = v_sf_all_x_mea.size();
  Double_t xbins[nbins_x+1];
  for(int ii=0; ii<nbins_x ; ii++){  
    xbins[ii]=v_sf_all_x_mea.at(ii)-v_sf_all_x_err.at(ii);
    printf ("%d == %f \n",ii,xbins[ii]);
    
    if(ii!=nbins_x-1)continue;
    xbins[ii+1]=v_sf_all_x_mea.at(ii)+v_sf_all_x_err.at(ii);
    printf ("%d == %f \n",ii+1,xbins[ii+1]);
  }
  
  const int nbins_y = (0==req_ETA) ? 1 : 2 ;
  printf ("ybin %d \n",nbins_y);
  Double_t ybins[nbins_y+1];
  if(0==req_ETA){
    ybins[0]=0;  
    ybins[1]=2.47;
  }else if(0!=req_ETA){
    ybins[0]=0;  
    ybins[1]=1.5;  
    ybins[2]=2.47;  
  }
  
  TString name_region=req_period;
  
  //if(req_period == "all") name_region+="all_";
  // if(25==b_trig) name_region+="tau25";
  // else if(35==b_trig) name_region+="tau35";
  // else if(50==b_trig) name_region+="tau50_L1TAU12";
  // else if(79==b_trig) name_region+="tau80";
  // else if(80==b_trig) name_region+="tau80_L1TAU60";
  // else if(125==b_trig)name_region+="tau125";
  // else if(160==b_trig)name_region+="tau160";
  if(1==req_ID) name_region+="_loose_";
  else if(2==req_ID) name_region+="_medium_";
  else if(3==req_ID) name_region+="_tight_";
  if(1==req_prongs) name_region+="1p";
  else if(3==req_prongs) name_region+="3p";
  //
  
  TH2D*  h_sf_all      = new TH2D("sf_"           +name_region,"", nbins_x, xbins,nbins_y, ybins);
  
  //TH2D*  h_effdata       = new TH2D("2deffdata_"      +name_region,"", nbins_x, xbins,nbins_y, ybins);//y mean
  // TH2D*  h_effmc         = new TH2D("2deffmc_"        +name_region,"", nbins_x, xbins,nbins_y, ybins);//y mean
  
  TH2D*  h_STATDATA_up = new TH2D("STATDATA"+s_year+"_up_"  +name_region,"", nbins_x, xbins,nbins_y, ybins);
  TH2D*  h_STATDATA_do = new TH2D("STATDATA"+s_year+"_down_"+name_region,"", nbins_x, xbins,nbins_y, ybins);
  TH2D*  h_STATMC_up   = new TH2D("STATMC"  +s_year+"_up_"  +name_region,"", nbins_x, xbins,nbins_y, ybins);
  TH2D*  h_STATMC_do   = new TH2D("STATMC"  +s_year+"_down_"+name_region,"", nbins_x, xbins,nbins_y, ybins);
  TH2D*  h_SYST_up     = new TH2D("SYST"    +s_year+"_up_"  +name_region,"", nbins_x, xbins,nbins_y, ybins);
  TH2D*  h_SYST_do     = new TH2D("SYST"    +s_year+"_down_"+name_region,"", nbins_x, xbins,nbins_y, ybins);
  TH2D*  h_total_up    = new TH2D("total"   +s_year+"_up_"  +name_region,"", nbins_x, xbins,nbins_y, ybins);
  TH2D*  h_total_do    = new TH2D("total"   +s_year+"_down_"+name_region,"", nbins_x, xbins,nbins_y, ybins);
  
  for(int ii=0; ii<nbins_x ; ii++){  //sym error  
    int select_ETA=req_ETA;
    if(0==req_ETA) select_ETA=1;
    //double hist_Xrange[X_BINS]={25.,28,30,32,34,36,39,43,52,64,80,100,150,300}; //pt binni
    
    h_sf_all      ->SetBinContent(ii+1 ,select_ETA , 0);
    h_STATDATA_up ->SetBinContent(ii+1 ,select_ETA , 0);
    h_STATDATA_do ->SetBinContent(ii+1 ,select_ETA , 0);
    h_STATMC_up   ->SetBinContent(ii+1 ,select_ETA , 0);
    h_STATMC_do   ->SetBinContent(ii+1 ,select_ETA , 0);
    h_SYST_up     ->SetBinContent(ii+1 ,select_ETA , 0);
    h_SYST_do     ->SetBinContent(ii+1 ,select_ETA , 0);
    h_total_up    ->SetBinContent(ii+1 ,select_ETA , 0);
    h_total_do    ->SetBinContent(ii+1 ,select_ETA , 0);

    if(b_trig==25)1;
    else if(b_trig==35 && 35+1>=xbins[ii+1]) continue;
    else if(b_trig==50 && 50>=xbins[ii+1]) continue;
    else if(b_trig==79 && 80>=xbins[ii+1]) continue;
    else if(b_trig==80 && 80>=xbins[ii+1]) continue;
    else if(b_trig==125 && 125>=xbins[ii+1]) continue;
    else if(b_trig==160 && 160>=xbins[ii+1]) continue;
    
    printf("%3.0f.",xbins[ii]);
    // if(ii==nbins_x-1) 1;
    // else if(b_trig>xbins[ii+1])continue;
    
    
    h_sf_all      ->SetBinContent(ii+1 ,select_ETA , v_sf_all_y_mea.at(ii) );
    
    h_STATDATA_up ->SetBinContent(ii+1 ,select_ETA , v_sf_DATA_STAT_y_err_up.at(ii) );
    h_STATDATA_do ->SetBinContent(ii+1 ,select_ETA , v_sf_DATA_STAT_y_err_down.at(ii) );
    
    h_STATMC_up   ->SetBinContent(ii+1 ,select_ETA , v_sf_SIGNAL_STAT_y_err_up.at(ii) );
    h_STATMC_do   ->SetBinContent(ii+1 ,select_ETA , v_sf_SIGNAL_STAT_y_err_down.at(ii) );
    
    h_SYST_up     ->SetBinContent(ii+1 ,select_ETA , v_sf_SYST_y_err_up.at(ii) );
    h_SYST_do     ->SetBinContent(ii+1 ,select_ETA , v_sf_SYST_y_err_down.at(ii) );
    
    h_total_up    ->SetBinContent(ii+1 ,select_ETA , v_sf_all_y_err_up.at(ii) );
    h_total_do    ->SetBinContent(ii+1 ,select_ETA , v_sf_all_y_err_down.at(ii) );
    
    if( !(fabs(h_sf_all ->GetBinContent(ii+1 ,select_ETA))<10) || fabs(h_sf_all ->GetBinContent(ii+1 ,select_ETA))==0){
      h_sf_all ->SetBinContent(ii+1 ,select_ETA , 0. );
      h_STATDATA_up ->SetBinContent(ii+1 ,select_ETA , 0);
      h_STATDATA_do ->SetBinContent(ii+1 ,select_ETA , 0);
      h_STATMC_up   ->SetBinContent(ii+1 ,select_ETA , 0);
      h_STATMC_do   ->SetBinContent(ii+1 ,select_ETA , 0);
      h_SYST_up     ->SetBinContent(ii+1 ,select_ETA , 0);
      h_SYST_do     ->SetBinContent(ii+1 ,select_ETA , 0);
      h_total_up    ->SetBinContent(ii+1 ,select_ETA , 0);
      h_total_do    ->SetBinContent(ii+1 ,select_ETA , 0);
    }
      
      //   if(!(fabs(h_STATDATA_up ->GetBinContent(ii+1 ,select_ETA))<10) )h_STATDATA_up ->SetBinContent(ii+1 ,select_ETA , 0. );
      // if(!(fabs(h_STATDATA_do ->GetBinContent(ii+1 ,select_ETA))<10) )h_STATDATA_do ->SetBinContent(ii+1 ,select_ETA , 0. );
    // if(!(fabs(h_STATMC_up ->GetBinContent(ii+1 ,select_ETA))<10) )h_STATMC_up ->SetBinContent(ii+1 ,select_ETA , 0. );
    // if(!(fabs(h_STATMC_do ->GetBinContent(ii+1 ,select_ETA))<10) )h_STATMC_do ->SetBinContent(ii+1 ,select_ETA , 0. );
    // if(!(fabs(h_SYST_up ->GetBinContent(ii+1 ,select_ETA))<10) )h_SYST_up ->SetBinContent(ii+1 ,select_ETA , 0. );
    // if(!(fabs(h_SYST_do ->GetBinContent(ii+1 ,select_ETA))<10) )h_SYST_do ->SetBinContent(ii+1 ,select_ETA , 0. );
    // if(!(fabs(h_total_up ->GetBinContent(ii+1 ,select_ETA))<10) )h_total_up ->SetBinContent(ii+1 ,select_ETA , 0. );
    // if(!(fabs(h_total_do ->GetBinContent(ii+1 ,select_ETA))<10) )h_total_do ->SetBinContent(ii+1 ,select_ETA , 0. );
      
    
  }

    //h_STATDATA_up->Draw("");

  
  
  OUTPUT->cd();
  h_sf_all->Write();
  h_STATDATA_up->Write();
  h_STATDATA_do->Write();
  h_SYST_up->Write();
  h_SYST_do->Write();
  h_STATMC_up->Write();
  h_STATMC_do->Write();
  h_total_up->Write();
  h_total_do->Write();
  //OUTPUT->Close();  
  // h_effdata->Write();
  // h_effmc->Write();
  
  

  TCanvas *CAN=new TCanvas("CAN","CAN",20,20,1020,1020);
  
  CAN->Divide(3,3);
  CAN->SetLogx();
  
  CAN->cd(1)->SetLogx();
  h_sf_all->Draw("colz text90"); CAN->cd(2)->SetLogx();
  h_STATDATA_up->Draw("colz text90");CAN->cd(3)->SetLogx();
  h_STATDATA_do->Draw("colz text90");CAN->cd(4)->SetLogx();
  h_SYST_up->Draw("colz text90"); CAN->cd(5)->SetLogx();
  h_SYST_do->Draw("colz text90");CAN->cd(6)->SetLogx();
  h_STATMC_up->Draw("colz text90");CAN->cd(7)->SetLogx();
  h_STATMC_do->Draw("colz text90");CAN->cd(8)->SetLogx();
  h_total_up->Draw("colz text90"); CAN->cd(9)->SetLogx();
  h_total_do->Draw("colz text90"); 

  LogTH2(h_sf_all);
  LogTH2(h_STATDATA_up);
  LogTH2(h_STATDATA_do);
  LogTH2(h_SYST_up);
  LogTH2(h_SYST_do);
  LogTH2(h_STATMC_up);
  LogTH2(h_STATMC_do);
  LogTH2(h_total_up);
  LogTH2(h_total_do);

  
  CAN->SaveAs("./ROOT2/"+OUTPUT_NAME+".pdf","RECREATE");
  
  
  return;
}
