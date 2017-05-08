
#include "./include/myinclude.h"

void file_TGraph(int req_prongs=0,
		 int req_ETA=0,
		 int req_ID=2,
		 int b_trig=25,
		 //TString s_var="tau_0_pt"
		 //TString s_var="tau_0_jet_bdt_score"
		 //TString s_var="OnlineReso"
		 //TString s_var="TrigEff"
		 //TString s_var="n_avg_int_cor"
		 TString s_var="tau_0_pt"
		 
		 ){
  
  SetAtlasStyle();
  
  TString hist_name="h_data_OS";
  hist_name="Eff_ZttOS_NOMINAL";
  hist_name="Eff_data__NOMINAL";
  //cout<<s_weight<<endl;
  
  //text/Zbkg_0prong_0trigtau_0_jet_bdt_score.root
  //TrigEff_1prong_0ETA_2BDT_12trig.root.root
  
  //TGraphAsymmErrors

  const int n_hist=4;
  TString empty="";
  TString input_dir[n_hist];
  //input_dir[0] ="./text/2015/";
  input_dir[0] ="./TrigEff/";
  input_dir[1] ="./TrigEff/";
  if(n_hist>2){
    //input_dir[2] ="./text/2015/";
    input_dir[2] ="./TrigEff/";
    input_dir[3] ="./TrigEff/";
  }
  
  bool higheff=1;
  TString file_name="";
  // if(s_var=="TrigEff")
  file_name=empty+ Form("TrigEff_%1dprong_%1dETA_%1dBDT_%dtrig",req_prongs,req_ETA,req_ID,b_trig)+".root";
  //bin/else  file_name=empty+ Form("TrigEff_%1dprong_%1dETA_%1dBDT_%dtrig",req_prongs,req_ETA,req_ID,b_trig)+".root"+s_var;
  
  TFile* file[n_hist];
  TGraphAsymmErrors*  hist[n_hist];
  for(int ii=0; ii<n_hist; ii++){
 
    if(0==ii)file_name=empty+ Form("TrigEff_%1dprong_%1dETA_%1dBDT_%dtrig",req_prongs,req_ETA,req_ID,12)+".root";
    if(1==ii)file_name=empty+ Form("TrigEff_%1dprong_%1dETA_%1dBDT_%dtrig",req_prongs,req_ETA,req_ID,25)+".root";
    if(2==ii)file_name=empty+ Form("TrigEff_%1dprong_%1dETA_%1dBDT_%dtrig",req_prongs,req_ETA,req_ID,12)+".root";
    if(3==ii)file_name=empty+ Form("TrigEff_%1dprong_%1dETA_%1dBDT_%dtrig",req_prongs,req_ETA,req_ID,25)+".root";
    
    if(s_var!="tau_0_pt"){
      //TrigEff_0prong_0ETA_2BDT_12trig__n_avg_int_cor.root
      if(0==ii)file_name=empty+ Form("TrigEff_%1dprong_%1dETA_%1dBDT_%dtrig",req_prongs,req_ETA,req_ID,12)+"__"+s_var+".root";
      if(1==ii)file_name=empty+ Form("TrigEff_%1dprong_%1dETA_%1dBDT_%dtrig",req_prongs,req_ETA,req_ID,25)+"__"+s_var+".root";
    }
    

    file[ii] = TFile::Open(input_dir[ii]+file_name);
    
    if(ii>1.2)hist_name="Eff_ZttOS_NOMINAL";
    hist[ii] =   (TGraphAsymmErrors*)file[ii]->Get(hist_name);
    
    //hist[ii]->Scale(1./hist[ii]->GetSumOfWeights());
    
    hist[ii]->SetMinimum(0.);   //hist[ii]->SetMaximum(1.);    
    hist[ii]->SetMaximum( 3*hist[ii]->GetMaximum() );    
    if(hist_name.Contains("Eff")){
      hist[ii]->SetMaximum( 1.5 );    
      if(higheff)hist[ii]->SetMaximum( 1.05 );    
    }
    
    if(s_var=="TrigEff")           hist[ii]->GetXaxis()->SetRangeUser(10,300);
    else if(s_var=="tau_0_pt")     hist[ii]->GetXaxis()->SetRangeUser(18,310);
    else if(s_var=="n_avg_int_cor")hist[ii]->GetXaxis()->SetRangeUser(0,30);
    
    TString arg_s_xtitle=Convert_Title(s_var);
    if(s_var=="TrigEff") hist[ii]->GetXaxis()->SetTitle(" Offline Tau p_{T} [GeV] ");    
    else if(s_var=="tau_0_pt") hist[ii]->GetXaxis()->SetTitle(" Offline Tau p_{T} [GeV] ");    
    else if(s_var=="n_avg_int_cor") hist[ii]->GetXaxis()->SetTitle(" Average interactions per bunch crossing ");    
    else hist[ii]->GetXaxis()->SetTitle(arg_s_xtitle);    
    hist[ii]->GetYaxis()->SetTitle(" Trigger Efficiency ");    
    
  }
  // file[1] = TFile::Open(input_dir[1]+file_name);
  //   hist[1] = (TH1D*)file[1]->Get(hist_name);
  // TChain *tree_data = new TChain("NOMINAL");
  // tree_data->Add(input_dir+"hist-361101.root"); 
  // tree_data->Draw(s_var+">>h1",s_weight);
    
  // TString input_dir2="./text/2016/";
  // TFile*  f2 = TFile::Open(input_dir2+Form("aa")+s_var+".root");
  // TH1D*   h2 = (TH1D*)f2->Get(hist_name);
  
  hist[0]->SetMarkerSize(1.0);
  hist[0]->SetLineColor(2);
  hist[0]->SetMarkerColor(2);
  hist[0]->SetLineWidth(2);
  //
  hist[1]->SetMarkerSize(1.0);
  hist[1]->SetLineColor(4);
  hist[1]->SetMarkerColor(4);
  hist[1]->SetLineWidth(1);  
  hist[1]->SetLineWidth(2);  //tikai
  if(n_hist>2){
    hist[2]->SetFillStyle(3244);hist[2]->SetFillStyle(3003);
    hist[2]->SetFillColor(kRed);
    hist[2]->SetLineColor(kRed);hist[2]->SetLineColor(0);
    hist[2]->SetMarkerColor(kRed);
    hist[2]->SetLineWidth(2);hist[2]->SetLineWidth(0);
    //
    hist[3]->SetFillStyle(3244);
    hist[3]->SetFillStyle(3409); hist[3]->SetFillStyle(3003);
    hist[3]->SetFillColor(kBlue);
    hist[3]->SetLineColor(kBlue);hist[3]->SetLineColor(0);
    hist[3]->SetMarkerColor(kBlue);
    hist[3]->SetLineWidth(1);  hist[3]->SetLineWidth(0);  
  }
  
  hist[0]->GetXaxis()->SetMoreLogLabels(1);
  hist[0]->GetXaxis()->SetNoExponent(1);
  hist[0]->GetXaxis()->SetLabelOffset(0.01);
      

  TCanvas *CAN=new TCanvas("can","can",10,10,1000/1.5,900/1.5 );        
  CAN->SetLogx();
  if(s_var=="TrigEff")CAN->SetLogx();
  
  hist[0]->Draw("AP");
  hist[1]->Draw("Psames");
  //hist[0]->GetXaxis()->SetRangeUser(0,100);//tikai
  hist[0]->Draw("AP");
  hist[1]->Draw("Psames");
  
  if(n_hist>2){
    hist[3]->Draw("A2");
    hist[2]->Draw("2sames");
    hist[3]->Draw("2sames");
    hist[0]->Draw("Psames");
    hist[1]->Draw("Psames");
  }
  
  //TLegend* leg = new TLegend(0.5, 0.75, 0.87, 0.92);
  //TLegend* leg = new TLegend(0.6, 0.75, 0.87, 0.92);
  //TLegend* leg = new TLegend(0.6,0.35, 0.88, 0.52); // higheff=1;
  TLegend* leg = new TLegend(0.4,0.41-0.15, 1-0.2, 0.58-0.15); // higheff=1;
  //if(n_hist>2)  leg->SetNColumns(2);
  leg->SetFillColor(10);
  leg->SetFillStyle(0);
  leg->SetTextSize(0.03);
  leg->SetTextFont(42);
  leg->SetBorderSize(0);
  // leg->AddEntry(hist[0], "Data 2015", "LEP");//LPFE
  // leg->AddEntry(hist[1], "Data 2016", "LEP");//LPFE
  leg->AddEntry(hist[0], "L1_TAU12IM", "LEP");//LPFE
  leg->AddEntry(hist[1], "HLT_tau25_medium1_tracktwo", "LEP");//LPFE
  if(n_hist>2){
    leg->AddEntry(hist[2], "MC L1", "F");//LPFE
    leg->AddEntry(hist[3], "MC HLT", "F");//LPFE
  }
  leg->Draw();
  
  TString latex_draw="";
  if(25==b_trig)      latex_draw+="HLT_tau25_medium1_tracktwo ";
  else if(12==b_trig) latex_draw+="L1_TAU12IM ";
  if(1==req_prongs)      latex_draw+="(1p)";
  else if(3==req_prongs) latex_draw+="(3p)";
  
  if(higheff){
    LABEL(45,0.8*0.8,1); //ATLAS Intrna
    LABEL_NAME(45,0.8*0.7-0.0,"Z#rightarrow#tau#tau#rightarrow#mu#tau_{had} T&P");
    //LABEL_NAME(40,0.8*0.6,latex_draw);
    LABEL_DATA(45,0.8*0.6-0.02,Form("%1.1f f",8.0) ,2);
    
    // LABEL_NAME(40,0.68,"Z#rightarrow#tau#tau#rightarrow#mu#tau_{had} T&P");
    // LABEL_NAME(40,0.6,latex_draw);  
    // LABEL(45,0.36,3); //Prelimi
    // LABEL_DATA(45,0.36-0.08,7980 ,2);  
  } 
  if(!higheff){
    LABEL_NAME(1,0.6+0.32,latex_draw);  
    LABEL(1,0.6+0.25,2); //ATLAS Intrnal
    LABEL_DATA(1,0.6+0.18,7980 ,2);  
  }
  
    
  
  CAN->SaveAs(file_name+".pdf");
  //CAN->SaveAs(file_name+".C");
  
  return;
}
