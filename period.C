
#include "./include/myinclude.h"

void period(int req_prongs=0,
	    int req_ETA=0,
	    int req_ID=2,
	    int req_PT=0,
	    int b_trig=0,
	    //TString s_var="tau_0_pt"
	    TString s_var="n_avg_int_cor"
	    //TString s_var="tau_0_jet_bdt_score"
	    //TString s_var="OnlineReso"
	    //TString s_var="TrigEff"
	    ){
  
  
  SetAtlasStyle();
  gStyle->SetNdivisions(205,"X");
  
  
  TString hist_name="h_data_OS";
  //hist_name="h_sig";
  //cout<<s_weight<<endl;
  
  
  const int n_hist=5;
  TString empty="";
  TString input_dir[n_hist];
  input_dir[0] ="./Aroot/";
  input_dir[1] ="./Aroot/";
  if(n_hist>2){
    input_dir[2] ="./Aroot/";
    input_dir[3] ="./Aroot/";
  }
  for(int ii=0; ii<n_hist; ii++)
    input_dir[ii] ="./Aroot/";
  

  TString req_period="A";
  TString file_name=empty+Form("Zbkg_%1dprong_%1dETA_%1dBDT_%dtaupt_%dtrig",req_prongs,req_ETA,req_ID,req_PT,b_trig) +"_"+s_var;
  file_name=empty+"triggerZtt_Z_" + req_period+ Form("%1dProng_%1dEta_%1dBDTID_HLT%d",req_prongs,req_ETA,req_ID,req_PT,b_trig) +"__"+s_var;
  //triggerZtt_Z_A0Prong_0Eta_2BDTID_HLT0__tau_0_pt.root
  //TString file_name=Form("Zbkg_%1dprong_%dtrig_",req_prongs,b_trig)+s_var;
  
  
  TFile* file[n_hist];
  TH1D*  hist[n_hist];
  Double_t eve[n_hist]={0};
  Double_t err[n_hist]={0};
  TString r_period[n_hist]={""};
  Double_t TotalLumi[n_hist]={0};
  
  TotalLumi[0]=546.571*1000;//GRL 2016 1e34 727?
  TotalLumi[1]=1949.46*1000;//GRL 2016 1e34 727?
  TotalLumi[2]=2884.22*1000;//GRL 2016 1e34 727?
  //TotalLumi[]=4614.52*1000;//GRL 2016 1e34 727?
  TotalLumi[3]=(4614.52-641.14)*1000;// minus 302872
  TotalLumi[4]=9325.71*1000;//GRL 2016 1e34
  
  r_period[0]="A";r_period[1]="B";r_period[2]="C";r_period[3]="D";r_period[4]="all";
  
  TH1D* h_period =new TH1D("h_period"  ,"h_period"  ,n_hist,-0.5,-0.5+n_hist);
  
  for(int ii=0; ii<n_hist; ii++){
    file_name=empty+"triggerZtt_Z_" + r_period[ii]+ Form("%1dProng_%1dEta_%1dBDTID_HLT%d",req_prongs,req_ETA,req_ID,req_PT,b_trig) +"__"+s_var;    
    cout<<ii<<" :: "<<file_name<<endl;
    file[ii] = TFile::Open(input_dir[ii]+file_name+".root");
    //if(ii>1.2)hist_name="h_sig";
    hist[ii] = (TH1D*)file[ii]->Get(hist_name);
    
    hist[ii]->Scale(1./TotalLumi[ii]*1000*1000);
    
    hist[ii]->SetMinimum(0.);   //hist[ii]->SetMaximum(1.);    
    hist[ii]->SetMaximum( 1.8*hist[ii]->GetMaximum() );    
    hist[ii]->SetXTitle(s_var);    
    hist[ii]->SetYTitle(" Events / 1ifb ");    
    
    int NN_XBIN=hist[ii]->GetNbinsX();
    eve[ii] = hist[ii] ->IntegralAndError(1, NN_XBIN ,err[ii]);
    h_period->SetBinContent(ii+1,eve[ii]);
    h_period->SetBinError  (ii+1,err[ii]);
    h_period->GetXaxis()->SetBinLabel(ii+1,r_period[ii]+Form("(%1.2fifb)",TotalLumi[ii]/1000/1000));
    
  }
  h_period->SetMarkerSize(1.);   
  h_period->SetMinimum(0.);   //hist[ii]->SetMaximum(1.);    
  h_period->SetMaximum( 1.2*h_period->GetMaximum() );    
  h_period->SetYTitle(" Events / 1ifb ");    
  TCanvas *CAN2=new TCanvas("can2","can2",20,20,620,620);
  h_period->Draw("");
  LABEL_DATA(7,0.4+0.0,Form("%3.1f f",TotalLumi[4]/1000/1000.) ,2);  
  LABEL(7,0.4-0.08);
  
  //return;
  // file[1] = TFile::Open(input_dir[1]+file_name);
  //   hist[1] = (TH1D*)file[1]->Get(hist_name);
  // TChain *tree_data = new TChain("NOMINAL");
  // tree_data->Add(input_dir+"hist-361101.root"); 
  // tree_data->Draw(s_var+">>h1",s_weight);
    
  // TString input_dir2="./text/2016/";
  // TFile*  f2 = TFile::Open(input_dir2+Form("aa")+s_var+".root");
  // TH1D*   h2 = (TH1D*)f2->Get(hist_name);

  
  

  
  for(int ii=0; ii<n_hist; ii++){
    hist[ii]->SetLineColor(ii+1);
    hist[ii]->SetMarkerColor(ii+1);    
    hist[ii]->SetMarkerSize(1.2);
    hist[ii]->SetLineWidth(1);
  }
  
  hist[0]->SetLineColor(4);
  hist[0]->SetMarkerColor(4);
  
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
  
  for(int ii=0; ii<n_hist; ii++){
    hist[ii]->SetLineColor(ii+1);
    hist[ii]->SetMarkerColor(ii+1);    
    hist[ii]->SetFillColor(0);    
    
    hist[ii]->SetMarkerSize(1.2);
    hist[ii]->SetLineWidth(1);
  }
  
  
  TCanvas *CAN=new TCanvas("can","can",10,10,610,610 );        
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
  
  hist[4]->SetFillColor(11);
  hist[4]->SetLineColor(11);
  hist[4]->Draw("hist");
  hist[0]->Draw("sames");
  hist[1]->Draw("sames");
  hist[2]->Draw("sames");
  hist[3]->Draw("sames");
 
  
  TLegend* leg = new TLegend(0.5, 0.75, 0.87, 0.92);
  //TLegend* leg = new TLegend(0.55,0.25, 0.88, 0.42); 
  if(n_hist>2)  leg->SetNColumns(2);
  leg->SetFillColor(10);
  leg->SetFillStyle(0);
  leg->SetTextSize(0.04);
  leg->SetTextFont(42);
  leg->SetBorderSize(0);
  for(int ii=0; ii<n_hist-1; ii++){
    leg->AddEntry(hist[ii], "period "+r_period[ii], "LEP");//LPFE
  }
  leg->AddEntry(hist[4], "All ", "F");//LPFE
  // leg->AddEntry(hist[0], "Data 2015", "LEP");//LPFE
  // leg->AddEntry(hist[1], "Data 2016", "LEP");//LPFE
  // if(n_hist>2){
  //   leg->AddEntry(hist[2], "MC 2015", "F");//LPFE
  //   leg->AddEntry(hist[3], "MC 2016", "F");//LPFE
  // }
  leg->Draw();
  
  TString latex_draw="";
  if(25==b_trig)      latex_draw+="HLT_tau25_medium1_tracktwo ";
  else if(12==b_trig) latex_draw+="L1_TAU12IM ";
  if(1==req_prongs)      latex_draw+="(1p)";
  else if(3==req_prongs) latex_draw+="(3p)";
  if(latex_draw!="")LABEL_NAME(1,0.6+0.32,latex_draw);  
  //LABEL(1,0.6+0.24); //ATLAS Intrnal
  LABEL(3,0.6+0.06); //ATLAS Intrnal
  
  CAN->SaveAs(file_name+".pdf");
  //CAN->SaveAs(file_name+".C");
  
  return;
}
