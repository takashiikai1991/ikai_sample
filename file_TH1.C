
#include "./include/myinclude.h"

void file_TH1(int req_prongs=1,
	      int req_ETA=0,
	      int req_ID=2,
	      int req_PT=2,
	      int b_trig=25,
	      TString s_var="tau_0_pt"
	      //TString s_var="tau_0_jet_bdt_score"
	      //TString s_var="OnlineReso"
	      //TString s_var="TrigEff"
	      ){
  
  SetAtlasStyle();
  gStyle->SetNdivisions(205,"X");

  
  TString hist_name="h_data_OS";
  //hist_name="h_sig";
  //cout<<s_weight<<endl;
  
  
  const int n_hist=4;
  TString empty="";
  TString input_dir[n_hist];
  input_dir[0] ="./text/2015/";
  input_dir[1] ="./text/2016/";
  if(n_hist>2){
    input_dir[2] ="./text/2015/";
    input_dir[3] ="./text/2016/";
  }
  
  TString file_name=empty+Form("Zbkg_%1dprong_%1dETA_%1dBDT_%dtaupt_%dtrig",req_prongs,req_ETA,req_ID,req_PT,b_trig) +"_"+s_var;
  //TString file_name=Form("Zbkg_%1dprong_%dtrig_",req_prongs,b_trig)+s_var;
  
  
  TFile* file[n_hist];
  TH1D*  hist[n_hist];
  for(int ii=0; ii<n_hist; ii++){
    file[ii] = TFile::Open(input_dir[ii]+file_name+".root");
    
    if(ii>1.2)hist_name="h_sig";
    hist[ii] = (TH1D*)file[ii]->Get(hist_name);
    
    hist[ii]->Scale(1./hist[ii]->GetSumOfWeights());
    
    hist[ii]->SetMinimum(0.);   //hist[ii]->SetMaximum(1.);    
    hist[ii]->SetMaximum( 1.8*hist[ii]->GetMaximum() );    
    hist[ii]->SetXTitle(s_var);    
    hist[ii]->SetYTitle("A.U.");    
    
  }
  // file[1] = TFile::Open(input_dir[1]+file_name);
  //   hist[1] = (TH1D*)file[1]->Get(hist_name);
  // TChain *tree_data = new TChain("NOMINAL");
  // tree_data->Add(input_dir+"hist-361101.root"); 
  // tree_data->Draw(s_var+">>h1",s_weight);
    
  // TString input_dir2="./text/2016/";
  // TFile*  f2 = TFile::Open(input_dir2+Form("aa")+s_var+".root");
  // TH1D*   h2 = (TH1D*)f2->Get(hist_name);
  
  hist[0]->SetLineColor(4);
  hist[0]->SetMarkerColor(4);
  hist[0]->SetMarkerSize(1.2);
  hist[0]->SetLineWidth(2);
  //
  hist[1]->SetLineColor(2);
  hist[1]->SetMarkerColor(2);
  hist[1]->SetMarkerSize(1.2);
  hist[1]->SetLineWidth(1);  
  if(n_hist>2){
    hist[2]->SetFillStyle(3244);
    hist[2]->SetFillColor(kBlue);
    hist[2]->SetLineColor(4);
    hist[2]->SetMarkerColor(4);
    hist[2]->SetLineWidth(2);
    //
    hist[3]->SetFillStyle(3244);
    hist[3]->SetFillStyle(3409);
    hist[3]->SetFillColor(kRed);
    hist[3]->SetLineColor(2);
    hist[3]->SetMarkerColor(2);
    hist[3]->SetLineWidth(1);  
  }
  
  TCanvas *CAN=new TCanvas("can","can",10,10,1000/1.5,900/1.5 );        
  hist[0]->Draw("hist");
  hist[1]->Draw("sames");
  
  if(n_hist>2){
    hist[2]->SetFillStyle(0);
    hist[3]->SetFillStyle(0);
    hist[2]->SetFillColor(0);
    hist[3]->SetFillColor(0);
    hist[3]->Draw("hist");
    hist[2]->Draw("histsames");
    hist[3]->Draw("histsames");
    // hist[3]->Draw("E2");
    // hist[2]->Draw("E2sames");
    // hist[3]->Draw("E2sames");
    hist[0]->Draw("sames");
    hist[1]->Draw("sames");
  }
  
  TLegend* leg = new TLegend(0.5, 0.75, 0.87, 0.92);
  //TLegend* leg = new TLegend(0.55,0.25, 0.88, 0.42); 
  if(n_hist>2)  leg->SetNColumns(2);
  leg->SetFillColor(10);
  leg->SetTextSize(0.04);
  leg->SetTextFont(42);
  leg->SetBorderSize(0);
  leg->AddEntry(hist[0], "Data 2015", "LEP");//LPFE
  leg->AddEntry(hist[1], "Data 2016", "LEP");//LPFE
  if(n_hist>2){
    leg->AddEntry(hist[2], "MC 2015", "F");//LPFE
    leg->AddEntry(hist[3], "MC 2016", "F");//LPFE
  }
  leg->Draw();
  
  TString latex_draw="";
  if(25==b_trig)      latex_draw+="HLT_tau25_medium1_tracktwo ";
  else if(12==b_trig) latex_draw+="L1_TAU12IM ";
  if(1==req_prongs)      latex_draw+="(1p)";
  else if(3==req_prongs) latex_draw+="(3p)";
  LABEL_NAME(1,0.6+0.32,latex_draw);  
  LABEL(1,0.6+0.24); //ATLAS Intrnal
  
  CAN->SaveAs(file_name+".pdf");
  //CAN->SaveAs(file_name+".C");
  
  return;
}
