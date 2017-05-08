
#include "./include/myinclude.h"
#include <sstream>  

bool print_info=1;

bool use_indivial_factors=1; // rQCD kW separate by tauPt

TString s_var="";
bool treat_OF_bin=1;
bool treat_UF_bin=1;
TString s_weight="(weight_total)";
//s_weight="(weight_mc*weight_pileup_hash)*(lep_0_NOMINAL_effSF_RecoMedium)*(lep_0_NOMINAL_HLT_mu20_iloose_L1MU15_MU_TRIG_QUAL_MEDIUM_MU_TRIG_ISO_NONE)*(bjet_sf_MVX_NOMINAL_sf*bjet_sf_MVX_NOMINAL_ineff_sf)";//
double TotalLumi=0 ;//nb-1 //run282784

TString HLTpt_threshold="-555";//Cut HLT_pt>XX (-555 is no HLT)

short req_PT=0;//25-28-35-
short req_MU_PT=0;//22-25-29- 
short req_MU_ETA=0;//0,1(barrel),2(endcap) 

/* float temp_kw_factorOS=1.;//1.15 */
/* float temp_kw_factorOS_stat=1.; */
/* float temp_kw_factorOS_sys=1.; */
/* float temp_kw_factorSS=1.;//1.13 */
/* float temp_kw_factorSS_stat=1.; */
/* float temp_kw_factorSS_sys=1.; */
/* float temp_rQCD_factor=1.;//1.19  */
/* float temp_rQCD_factor_stat=1.; */
/* float temp_rQCD_factor_sys=1.; */











void set_canvas(TCanvas *c1)
{
  gStyle->SetPadTopMargin(0.05);
  gStyle->SetPadRightMargin(0.1);
  gStyle->SetPadBottomMargin(0.05);
  gStyle->SetPadLeftMargin(0.15);
  
  c1->Divide(1,2);
  c1->cd(1);
  gPad->SetPad(0.005,0.3525-0.02,0.995,0.995);
  gPad->SetBottomMargin(0.05);
  gPad->SetFillStyle(0);
  //  double height_1 = gPad->YtoPixel(gPad->GetY1()); 
  
  c1->cd(2);
  gPad->SetPad(0.005,0.005,0.995,0.3525);
  gPad->SetTopMargin(0.05);
  gPad->SetBottomMargin(0.35);
  gPad->SetFillStyle(0);
  //  double height_2 = gPad->YtoPixel(gPad->GetY1()); 
  
}

double set_rQCD(TString value,  TString PERIOD, int  PRONG,int ETA, int ID
		,int tauPT=0, int b_trig=0){
  //ex))) rQCD:: all ::prong  0 ::eta  0 ::ID 2 = 1.147 +- 0.018 +-  0.177  
  if("mean"!=value && "stat"!=value && "sys"!=value && "err"!=value ){
    std::cout<< "choose rQCD[mean/stat/sys/err] "<<std::endl;    
    return 1;        
  }
  TString input="./text/rqcd.txt";
  std::ifstream ifs( input);
  if("mean"==value) std::cout<<"READ file : "<<input<<std::endl;
  if(ifs.fail()){
    std::cout<< "No file (rQCD) :: "<<input<<std::endl ;    
    return 1;
  }
  
  bool dublicate=0;
  double total_unce=0;
  double total_sys=0;
  float  temp_f_rqcd_stat=0,temp_f_rqcd_sys=0;
  
  //requirement ####
  string s_trig= Form("_%dtrig",b_trig); // 0 25 35 80 125         
  string s_PT= "_All_";
  if(1==tauPT) s_PT= "_Low_";
  else if(2==tauPT) s_PT= "_High_";
  else if(3==tauPT) s_PT= "_Pt1__";
  else if(4==tauPT) s_PT= "_Pt2__";
  else if(5==tauPT) s_PT= "_Pt3__";
  else if(tauPT>=10) s_PT= Form("_P%2d__",tauPT);
  
  while(!ifs.eof() ){
    std::string s_rQCD,s_period,s_prong,s_ETA,s_ID,s_rqcd,s_rqcd_stat,s_rqcd_sys;
    int  f_prong,f_ETA,f_ID;
    float  f_rqcd=1,f_rqcd_stat=0,f_rqcd_sys=0;
    
    ifs  //line_ss
      >> s_rQCD >> s_period  //period
      >> s_prong >> f_prong  //prong
      >> s_ETA >> f_ETA      //ETA
      >> s_ID >> f_ID        //ID
      >> s_rqcd >> f_rqcd 
      >> s_rqcd_stat >> f_rqcd_stat 
      >> s_rqcd_sys >> f_rqcd_sys ;
    
    
    
    if(PERIOD != s_period)continue;
    if(PRONG != f_prong)continue;
    if(ETA != f_ETA)continue;
    if(ID != f_ID)continue;
    
    
    if(use_indivial_factors){
      int i_rQCD_trig= s_rQCD.find(s_trig) ;
      int i_rQCD_PT= s_rQCD.find(s_PT) ;
      if( i_rQCD_trig<0 )continue;// if you use indivial values    
      if( i_rQCD_PT  <0 )continue;// if you use indivial values    
      /* std::cout<<" Using rQCD :: "<<  s_rQCD<<endl;  */
      /* std::cout<<" Using :: "<<b_trig<<  s_trig<<endl;  */
    }
    
    
    
    /* rQCD = f_rqcd; */
    /* rQCD_stat = f_rqcd_stat; */
    /* rQCD_sys = f_rqcd_sys; */
    if("mean"==value) 
      std::cout<<" Using rQCD :: "<<f_rqcd <<" +- "<<f_rqcd_stat 
	     <<" +- "<< f_rqcd_sys<<endl;    
    
    if("mean"==value)      return f_rqcd;      
    else if("stat"==value) return f_rqcd_stat;      
    else if(0==dublicate){
      total_unce=sqrt(pow(f_rqcd_stat,2)+ pow(f_rqcd_sys,2)); 
      total_sys= f_rqcd_sys;
      dublicate=1;    
    }
    else if(dublicate){
      if("sys"==value){//choose large one
	total_sys= sqrt(pow(total_sys,2) + pow(f_rqcd_sys,2)); 
	return total_sys; 
      }
      else if("err"==value){//choose large one
	total_unce= sqrt(pow(total_unce,2) + pow(f_rqcd_sys,2)); 
	cout<<total_unce<<endl;
	return total_unce; 
      } 
    
    }//dubl
    /* temp_f_rqcd_stat=f_rqcd_stat; */
    /* temp_f_rqcd_sys =f_rqcd_sys; */
    
    
  }//while
  
  std::cout<<" Using no rQCD !!! ";
  //rQCD = 1.; rQCD_stat = 1.;  rQCD_sys = 1.; 
  return 1;
  
}

//cp from "set_rQCD()"
double set_kW(TString value,TString PERIOD, int  PRONG,int ETA, int ID,TString OS_SS 
	      ,int tauPT=0, int b_trig=0){
  //ex))) rQCD:: all ::prong  0 ::eta  0 ::ID 2 = XX +- XX +- XX 
  if("mean"!=value && "stat"!=value && "sys"!=value && "err"!=value){
    std::cout<< "choose kW[mean/stat/err] "<<std::endl;    
    return 1;        
  }
  TString input="";
  if("OS"==OS_SS)input="./text/kw_os.txt";  
  else if("SS"==OS_SS)input="./text/kw_ss.txt";  
  else {
    std::cout<< "Choose OSorSS !!!"<<std::endl ;    
    return 1;
  }
  std::ifstream ifs( input);
  if("mean"==value)   std::cout<<"READ file : "<<input<<std::endl;
  if(ifs.fail()){
    std::cout<< "No file (kW) :: "<<input<<std::endl ;    
    return 1;
  }

  double total_unce=0;
  
  //requirement ####
  string s_trig= Form("_%dtrig",b_trig); // 0 25 35 80 125         
  string s_PT= "_All_";
  if(1==tauPT) s_PT= "_Low_";
  else if(2==tauPT) s_PT= "_High_";
  else if(3==tauPT) s_PT= "_Pt1__";
  else if(4==tauPT) s_PT= "_Pt2__";
  else if(5==tauPT) s_PT= "_Pt3__";
  else if(tauPT>=10) s_PT= Form("_P%2d__",tauPT);
  
  while(!ifs.eof() ){
    std::string s_rQCD,s_period,s_prong,s_ETA,s_ID,s_rqcd,s_rqcd_stat,s_rqcd_sys;
    int  f_prong,f_ETA,f_ID;
    float  f_rqcd=1,f_rqcd_stat=1,f_rqcd_sys=1;
    
    ifs  //line_ss
      >> s_rQCD >> s_period  //period
      >> s_prong >> f_prong  //prong
      >> s_ETA >> f_ETA      //ETA
      >> s_ID >> f_ID        //ID
      >> s_rqcd >> f_rqcd 
      >> s_rqcd_stat >> f_rqcd_stat 
      >> s_rqcd_sys >> f_rqcd_sys ;
    

    
    if(PERIOD != s_period)continue;
    if(PRONG != f_prong)continue;
    if(ETA != f_ETA)continue;
    if(ID != f_ID)continue;

    if(use_indivial_factors){
      int i_rQCD_trig= s_rQCD.find(s_trig) ;
      int i_rQCD_PT= s_rQCD.find(s_PT) ;
      if( i_rQCD_trig<0 )continue;// if you use indivial values    
      if( i_rQCD_PT  <0 )continue;// if you use indivial values    
      /* std::cout<<" Using rQCD :: "<<  s_rQCD<<endl;  */
      /* std::cout<<" Using :: "<<b_trig<<  s_trig<<endl;  */
    }    
    
    if("mean"==value) 
      std::cout<<" Using kW"<<OS_SS<<":: "<<f_rqcd <<" +- "<<f_rqcd_stat 
	       <<" +- "<< f_rqcd_sys<<endl;    
    
    if("mean"==value)      return f_rqcd;      
    else if("stat"==value) return f_rqcd_stat;      
    else if("sys"==value)  return f_rqcd_sys;      
    else if("err"==value){
      total_unce=sqrt(pow(f_rqcd_stat,2)+ pow(f_rqcd_sys,2)); 
      return total_unce; 
    }
    
    
  }//while
  
  
  
  //rQCD = 1.; rQCD_stat = 1.;  rQCD_sys = 1.; 
  std::cout<<" Using no kW"+OS_SS+" !!! " ;
  return 1;
  
}




void hist_INTEGRAL(TH1* hist)
{   
  hist->Sumw2();  
  for(int ii=0; ii<hist->GetNbinsX(); ii++){
    double mean_data_OS = 0; double err_data_OS = 0;
    mean_data_OS = hist->IntegralAndError( ii+1 , hist->GetNbinsX() , err_data_OS );
    hist->SetBinContent(ii+1, mean_data_OS);
    hist->SetBinError  (ii+1, err_data_OS);
    // std::cout<<mean_data_OS <<",,,"<<err_data_OS <<std::endl;
  }

  return;
}


//void set_hist(TH1* hist, TTree* tree, int DSID, TH1* h_mc_derivation,TString s_req){
void set_hist(TH1* hist, TTree* tree, TH1D* h_mc_derivation,TString s_req ,int MCID=1,TString s_var="tau_0_pt"){
  hist->Sumw2();
  TString s_draw = s_var;
  TString s_fill_mc_only ="";
  if(361108==MCID)s_fill_mc_only ="&&(tau_0_truth_isHadTau==1)";
  if(361108*2==MCID)s_fill_mc_only ="&&(tau_0_truth_isHadTau!=1)"; //tau fake from Ztt
  TString s_req2 = "";
  if(s_var.Contains("jet_0_")) s_req2 = "&& n_jets>=1 ";
  TString s_fill = "("+ s_weight +")*("+ s_req + s_req2 + s_fill_mc_only+")";
  
  TString s_hist = hist->GetName();
  if(0==hist->GetEntries())
    tree->Draw(s_draw+">>"+s_hist,s_fill,"goff");
  else tree->Draw(s_draw+">>+"+s_hist,s_fill,"goff");
  
  if(treat_OF_bin){  // treat overflow bin
    int nbin=hist->GetNbinsX();
    double val_OFBin = hist->GetBinContent(nbin+1);
    double err_OFBin = hist->GetBinError(nbin+1);
    double err_LastBin = hist->GetBinError(nbin);
    double err_LastBin_fixed = TMath::Sqrt((err_LastBin*err_LastBin)+(err_OFBin*err_OFBin));
    hist->AddBinContent(nbin,val_OFBin);
    hist->SetBinError(nbin, err_LastBin_fixed);
  }
  if(treat_UF_bin){    // treat underflow bin
    double val_UFBin = hist->GetBinContent(0);
    double err_UFBin = hist->GetBinError(0);
    double err_FirstBin = hist->GetBinError(1);
    double err_FirstBin_fixed = TMath::Sqrt((err_FirstBin*err_FirstBin)+(err_UFBin*err_UFBin));
    hist->AddBinContent(1,val_UFBin);
    hist->SetBinError(1, err_FirstBin_fixed);
  }
  
  float total_weights = h_mc_derivation->GetBinContent(8);// derivation(4), full(5)
  
  double Xsec =1;
  if(361100==MCID || 361101==MCID || 361102==MCID)//W(p)   
    Xsec =11.306 * 1.01724;
  else if(361103==MCID || 361104==MCID || 361105==MCID)//W(m)   
    Xsec =8.2826 * 1.035786;
  else if(361106==MCID || 361107==MCID || 361108==MCID|| 361108*2==MCID)//Z
    Xsec =1.9012 * 1.026;  
  else if(410000==MCID )//ttbar
    Xsec =0.83176* 0.543 *1.0 ;
  else if(1!=MCID )
    std::cout<<"MCID ("<<MCID<<") not exist "<<std::endl;
  Double_t SCALE = Xsec*TotalLumi/total_weights;
  hist->Scale(SCALE);
  
  Double_t ev=1;
  Double_t error=1;
  ev= hist->IntegralAndError(1, hist->GetNbinsX(),error);
  cout<<MCID<<" == "<<setprecision(8)<< ev <<" +- "<<error 
      <<" (# "<<tree->GetEntries(s_req + s_fill_mc_only)<<" )"<<std::endl;
}


void set_data(TH1* hist, TTree* tree,TString s_req ,TString s_var="tau_0_pt"){
  hist->Sumw2();
  TString s_draw = s_var;
  TString s_fill_data_only ="";
  TString s_req2 = "";
  if(s_var.Contains("jet_0_")) s_req2 = "&& n_jets>=1 ";
  TString s_fill = "1*("+ s_req + s_req2 + s_fill_data_only+")";
  
  TString s_hist = hist->GetName();
  if(0==hist->GetEntries())
    tree->Draw(s_draw+">>"+s_hist,s_fill,"goff");
  else tree->Draw(s_draw+">>+"+s_hist,s_fill,"goff");
  
  if(treat_OF_bin){  // treat overflow bin
    int nbin=hist->GetNbinsX();
    double val_OFBin = hist->GetBinContent(nbin+1);
    double err_OFBin = hist->GetBinError(nbin+1);
    double err_LastBin = hist->GetBinError(nbin);
    double err_LastBin_fixed = TMath::Sqrt((err_LastBin*err_LastBin)+(err_OFBin*err_OFBin));
    hist->AddBinContent(nbin,val_OFBin);
    hist->SetBinError(nbin, err_LastBin_fixed);
  }
  if(treat_UF_bin){    // treat underflow bin
    double val_UFBin = hist->GetBinContent(0);
    double err_UFBin = hist->GetBinError(0);
    double err_FirstBin = hist->GetBinError(1);
    double err_FirstBin_fixed = TMath::Sqrt((err_FirstBin*err_FirstBin)+(err_UFBin*err_UFBin));
    hist->AddBinContent(1,val_UFBin);
    hist->SetBinError(1, err_FirstBin_fixed);
  }
  
  std::cout<<"\"set_data\"="<<tree->GetEntries(s_req)<<std::endl;
  return;
}





TChain* prwChain_all;
//TChain* prwChain_all_mc15b;
TChain* prwChain_D;
TChain* prwChain_G;
TChain* prwChain_EFH23J;
TChain* prwChain_EFGH23J;

void set_prwTree()
{
  
  TString prw_dir="/scratch/ikai/S_NTUPLE/xTAUP3/28/prw/";
  
  // period all             
  prwChain_all = new TChain("prwTree");
  prwChain_all->Add(prw_dir+"prwTree.all.root");
  prwChain_all->BuildIndex("PRWHash");
  // period all for mc15b   
  /* prwChain_all_mc15b = new TChain("prwTree"); */
  /* prwChain_all_mc15b->Add(prw_dir+"prwTree.all.mc15b.root"); */
  /* prwChain_all_mc15b->BuildIndex("PRWHash"); */
  // period D
  prwChain_D = new TChain("prwTree");
  prwChain_D->Add(prw_dir+"prwTree.D.root");
  prwChain_D->BuildIndex("PRWHash");
  // period G 
  prwChain_G = new TChain("prwTree");
  prwChain_G->Add(prw_dir+"prwTree.G.root");
  prwChain_G->BuildIndex("PRWHash");
  // period EFH23J    
  prwChain_EFH23J = new TChain("prwTree");
  prwChain_EFH23J->Add(prw_dir+"prwTree.EFH23J.root");
  prwChain_EFH23J->BuildIndex("PRWHash");
  // period EFGH23J  
  prwChain_EFGH23J = new TChain("prwTree");
  prwChain_EFGH23J->Add(prw_dir+"prwTree.EFGH23J.root");
  prwChain_EFGH23J->BuildIndex("PRWHash");
}


void AddFriend_prwTree(TTree* tree, TString s_period){
  if(s_period == "D")                                       
    tree->AddFriend(prwChain_D);                                 
  else if(s_period == "G")                                      
    tree->AddFriend(prwChain_G);                                    
  else if(s_period == "EFH23J")                                     
    tree->AddFriend(prwChain_EFH23J);                                 
  else if(s_period == "EFGH23J")                                    
    tree->AddFriend(prwChain_EFGH23J);                              
  else if(s_period == "all") 
    tree->AddFriend(prwChain_all);   
  
}               

