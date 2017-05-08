

#include "../head.h"

void SF_sys(TString req_period = "all",int req_prongs =1,int req_ETA=0,int req_ID=2 , int b_trig=25)
//void SF_sys(TString req_period = "all",int req_prongs =3,int req_ETA=2,int req_ID=3 , int b_trig=25)
{ 
  gStyle->SetOptStat(0);
  SetAtlasStyle();
  
  bool show_allInfo=0;
  bool all_systematic=1;
  bool Tight_Endcap_3p=0;
  
  vector<TString>  vec_tree;
  // vec_tree.push_back( "MET_SoftTrk_ResoPara" );
  // vec_tree.push_back( "MET_SoftTrk_ResoPerp" );
  // vec_tree.push_back( "rQCD_up" );
  // vec_tree.push_back( "rQCD_down" );  
  if(all_systematic){
    vec_tree.push_back( "MUONS_ID_1up" );
    vec_tree.push_back( "MUONS_ID_1down" );
    vec_tree.push_back( "MUONS_MS_1up" );
    vec_tree.push_back( "MUONS_MS_1down" );
    vec_tree.push_back( "MUONS_SCALE_1up" );
    vec_tree.push_back( "MUONS_SCALE_1down" );
    vec_tree.push_back( "MET_SoftTrk_ResoPara" );
    vec_tree.push_back( "MET_SoftTrk_ResoPerp" );
    vec_tree.push_back( "MET_SoftTrk_ScaleUp" );
    vec_tree.push_back( "MET_SoftTrk_ScaleDown" );
    // vec_tree.push_back( "TAUS_TRUEHADTAU_SME_TES_TOTAL_1up");
    // vec_tree.push_back( "TAUS_TRUEHADTAU_SME_TES_TOTAL_1down");
    vec_tree.push_back( "PRW_DATASF_1up"   );
    vec_tree.push_back( "PRW_DATASF_1down" );
    // // // //USE other weight                                                             
    vec_tree.push_back( "MU_EFF_STATup" );
    vec_tree.push_back( "MU_EFF_STATdown" );
    vec_tree.push_back( "MU_EFF_SYSup" );
    vec_tree.push_back( "MU_EFF_SYSdown" );
    vec_tree.push_back( "MU_EFF_TrigSTATup" );
    vec_tree.push_back( "MU_EFF_TrigSTATdown" );
    vec_tree.push_back( "MU_EFF_TrigSYSup" );
    vec_tree.push_back( "MU_EFF_TrigSYSdown" );
    // // //ISO
    vec_tree.push_back( "MU_ISO_STATup" );
    vec_tree.push_back( "MU_ISO_STATdown" );
    vec_tree.push_back( "MU_ISO_SYSup" );
    vec_tree.push_back( "MU_ISO_SYSdown" );
    // // Unce. factor
    // vec_tree.push_back( "rQCD_up" );
    // vec_tree.push_back( "rQCD_down" );
    // vec_tree.push_back( "kW_up" );
    // vec_tree.push_back( "kW_down" );
    
    vec_tree.push_back( "rQCD_Num_up" );
    vec_tree.push_back( "rQCD_Num_down" );
    vec_tree.push_back( "kW_Num_up" );
    vec_tree.push_back( "kW_Num_down" );
    vec_tree.push_back( "rQCD_Den_up" );
    vec_tree.push_back( "rQCD_Den_down" );
    vec_tree.push_back( "kW_Den_up" );
    vec_tree.push_back( "kW_Den_down" );

    
    // for(short iii=0; iii<5; iii++){
    //   vec_tree.push_back( Form("bjet_b%d_up",iii ) );
    //   vec_tree.push_back( Form("bjet_b%d_down",iii ) );
    // }
    // for(short iii=0; iii<4; iii++){
    //   vec_tree.push_back( Form("bjet_c%d_up",iii ) );
    //   vec_tree.push_back( Form("bjet_c%d_down",iii ) );
    // }
    // for(short iii=0; iii<14; iii++){
    //   vec_tree.push_back( Form("bjet_light%d_up",iii ) );
    //   vec_tree.push_back( Form("bjet_light%d_down",iii ) );
    // }
    

    
    // if(1==req_ID){
    //   vec_tree.push_back( "TAU_BDTloose_up" );
    //   vec_tree.push_back( "TAU_BDTloose_down" );
    // } else if(2==req_ID){
    //   vec_tree.push_back( "TAU_BDTmedium_up" );
    //   vec_tree.push_back( "TAU_BDTmedium_down" );
    // } else if(3==req_ID){
    //   vec_tree.push_back( "TAU_BDTtight_up" );
    //   vec_tree.push_back( "TAU_BDTtight_down" );
    // }
  }
  
  
  TFile* Rfile= TFile::Open(Form("./TrigEff/newbin0908/TrigEff_%1dprong_%1dETA_%1dBDT_%dtrig.root",req_prongs,req_ETA,req_ID,b_trig));
  //TFile* Rfile= TFile::Open(Form("./TrigEff_%1dprong_%1dETA_%1dBDT_%dtrig.root",req_prongs,req_ETA,req_ID,b_trig));
  if(!all_systematic) Rfile= TFile::Open("temp.root");
  
  TString OUTPUT_NAME="";
  if(1>0){
    TString OUT_onhist="";
    if(25==b_trig) OUT_onhist+="HLT_tau25_medium1_tracktwo__";
    if(35==b_trig) OUT_onhist+="HLT_tau35_medium1_tracktwo__";
    if(50==b_trig) OUT_onhist+="HLT_tau50_medium1_tracktwo_L1TAU12__";
    if(79==b_trig) OUT_onhist+="HLT_tau80_medium1_tracktwo__";
    if(80==b_trig) OUT_onhist+="HLT_tau80_medium1_tracktwo_L1TAU60__";
    if(125==b_trig)OUT_onhist+="HLT_tau125_medium1_tracktwo__";
    if(160==b_trig)OUT_onhist+="HLT_tau160_medium1_tracktwo__";
    //
    OUT_onhist+=req_period+"_";
    if(1==req_prongs)OUT_onhist+="1p_";
    else if(3==req_prongs)OUT_onhist+="3p_";
    if(1==req_ID)OUT_onhist+="Loose_";
    else if(2==req_ID)OUT_onhist+="Medium_";
    else if(3==req_ID)OUT_onhist+="Tight_";
    if(0==req_ETA)OUT_onhist+="Inclusive";
    else if(1==req_ETA)OUT_onhist+="Barrel_";
    else if(2==req_ETA)OUT_onhist+="Endcap_";
    //
    OUTPUT_NAME=OUT_onhist;
  }
  if(!all_systematic)OUTPUT_NAME="temp";
  
  TFile* OUTPUT = new TFile("./ROOT/"+OUTPUT_NAME+".root","RECREATE");
  
  
  
  vector<float> vec_Xbin;
  vector<float> vec_Xbin_err;
  //
  vector<float> vec_dat_eff;
  vector<float> vec_dat_eff_up;
  vector<float> vec_dat_eff_do;
  vector<float> vec_sig_eff;
  vector<float> vec_sig_eff_up;
  vector<float> vec_sig_eff_do;
  //
  TGraphAsymmErrors *g_sig;
  TGraphAsymmErrors *g_dat;
  
  if(1>0){//NOMINAL MC load
    TString tree_name1="NOMINAL";
    TH1F* h_sig_NOM1 = (TH1F*)Rfile->Get("ZttOS_"+tree_name1+"__off");
    TH1F* h_sig_NOM2 = (TH1F*)Rfile->Get("ZttOS_"+tree_name1+"_trig");
    g_sig = MyTGraphAsymmErrors( h_sig_NOM2, h_sig_NOM1 );      
    fill_asym_binXY( g_sig , vec_Xbin , vec_Xbin_err , vec_sig_eff , vec_sig_eff_up , vec_sig_eff_do );
    
    TH1F* h_dat_NOM1 = (TH1F*)Rfile->Get("data__"+tree_name1+"__off");
    TH1F* h_dat_NOM2 = (TH1F*)Rfile->Get("data__"+tree_name1+"_trig");
    g_dat = MyTGraphAsymmErrors( h_dat_NOM2, h_dat_NOM1 );      
    fill_asym_bin( g_dat , vec_dat_eff ,vec_dat_eff_up ,vec_dat_eff_do );
    
    printf("   bin=%2d\n",vec_Xbin.size());
    
  } //END//NOMINAL MC load
  
  
  
  if(Tight_Endcap_3p){
    vec_dat_eff.push_back(-1);//tikai
    vec_dat_eff_up.push_back(0.);
    vec_dat_eff_do.push_back(0.);
  }
    
  vector <vector <float> > all_eff;  
  for(unsigned int i_tree=0; i_tree<vec_tree.size(); i_tree++ ){//Loop all sys
    TString tree_name1="NOMINAL";
    TH1F* h_sig_NOM1 = (TH1F*)Rfile->Get("ZttOS_"+tree_name1+"__off");
    TH1F* h_sig_NOM2 = (TH1F*)Rfile->Get("ZttOS_"+tree_name1+"_trig");
    TH1F* h_dat_NOM1 = (TH1F*)Rfile->Get("data__"+tree_name1+"__off");
    TH1F* h_dat_NOM2 = (TH1F*)Rfile->Get("data__"+tree_name1+"_trig");
    
    TString tree_name2=vec_tree.at(i_tree);
    //tree_name1="NOMINAL";
    TH1F* h_sig_sys1 = (TH1F*)Rfile->Get("ZttOS_"+tree_name2+"__off");
    TH1F* h_sig_sys2 = (TH1F*)Rfile->Get("ZttOS_"+tree_name2+"_trig");
    TH1F* h_dat_sys1 = (TH1F*)Rfile->Get("data__"+tree_name2+"__off");
    TH1F* h_dat_sys2 = (TH1F*)Rfile->Get("data__"+tree_name2+"_trig");
    
    TGraphAsymmErrors *g_pass = MyTGraphAsymmErrors( h_dat_sys2,h_dat_sys1 );//tikai
    TGraphAsymmErrors *g_total= MyTGraphAsymmErrors( h_dat_NOM2,h_dat_sys1 );  
    
    vector<float> mean1;
    vector<float> err_up1;
    vector<float> err_down1;
    fill_asym_bin( g_pass , mean1 , err_up1 , err_down1 );
    vector<float> mean2;
    vector<float> err_up2;
    vector<float> err_down2;
    fill_asym_bin( g_total, mean2 , err_up2 , err_down2 );
    
    
    all_eff.push_back(mean1); // pass_up or pass_do
    //all_eff.push_back(mean2); // tota_up or tota_do //tikai
    
  }//i_tree
  
  //caluculate !!!!!!!!!!!!!!!!!
  cout<<"Load End... Start Caluculate"<<endl;
  //!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
  vector<float> total_sys_up;//each Xbin
  vector<float> total_sys_do;
 
  for(unsigned int xx=0; xx<vec_Xbin.size(); xx++ ){
    if(show_allInfo)    printf("X=%3f,",vec_Xbin.at(xx)-vec_Xbin_err.at(xx));
    total_sys_up.push_back(0.); //need
    total_sys_do.push_back(0.);
  }
  
  for(unsigned int xx=0; xx<all_eff.size(); xx++ ){// check only
    if(show_allInfo) cout<<xx<<"..."<<all_eff.at(xx).size()<<endl;
  }
  
  ////////////////////////////////////////////////////////////////
  for(unsigned int xx=0; xx<vec_Xbin.size(); xx++ ){// N of Xbin
    
    vector<float> error4;//each sys    
    float sys_up=0;//each sys    
    float sys_do=0;//each sys    
    printf("%02d bin : %3.0f GeV - %3.0f GeV \n",xx,vec_Xbin.at(xx)-vec_Xbin_err.at(xx),vec_Xbin.at(xx)+vec_Xbin_err.at(xx)) ;
    if(Tight_Endcap_3p)
      if(xx>=12)continue;//tikai
    printf("Eff_(MC,Data) = %1.3f , %1.3f \n\n",vec_sig_eff.at(xx)*100 , vec_dat_eff.at(xx)*100) ;
    
    for(unsigned int ii=0; ii<vec_tree.size(); ii++ ){//Loop all sys  
      if(0==ii%2){
	sys_up=0; sys_do=0;	
      }
      
      float error = all_eff.at(ii).at(xx)-vec_dat_eff.at(xx);
      
      if(error>0){
	if(0==sys_up)sys_up = fabs(error);
	else sys_up = max( fabs(error), sys_up );
      }else if(error<0){
	if(0==sys_do)sys_do = fabs(error);
	else sys_do = max( fabs(error), sys_do );
      } else if(show_allInfo) printf("Error=0 ?? \n");
      
      
      if(1==ii%2){
	total_sys_up.at(xx)=sqrt( pow(total_sys_up.at(xx),2) +  pow(sys_up,2) );
	total_sys_do.at(xx)=sqrt( pow(total_sys_do.at(xx),2) +  pow(sys_do,2) );
	cout<<setw(40)<<vec_tree.at(ii); 
	//printf("Sys   = %1.3f , %1.3f %%\n",sys_up*100 , sys_do*100) ;
	printf("(SF)   = %1.3f , %1.3f %%\n",sys_up*100/vec_sig_eff.at(xx) , sys_do*100/vec_sig_eff.at(xx) ) ;
	if(ii==vec_tree.size()-1)
	  printf("\n  Total)   = %1.3f , %1.3f %%\n",total_sys_up.at(xx)*100/vec_sig_eff.at(xx) , total_sys_do.at(xx)*100/vec_sig_eff.at(xx) ) ;
      }
      //}//each sys contribution
      
    }//ii
    
  }//xx
  cout<<"End Caluculate"<<endl;
  
  // //@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
  // //@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
  // //  2D Graph  //@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
  // //@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
  // //@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
  //const int BIN=g_dat->GetN();// +1 ?
  const int BIN=g_sig->GetN();// +1 ?
  
  Double_t BIN_X[BIN];
  Double_t BIN_Xer[BIN];
  //
  Double_t MC_eff[BIN];
  Double_t MC_sta_err1[BIN];
  Double_t MC_sta_err2[BIN];
  Double_t DATA_eff[BIN];
  Double_t DATA_sta_err1[BIN];// not use
  Double_t DATA_sta_err2[BIN];// not use
  Double_t DATA_sys_err1[BIN];
  Double_t DATA_sys_err2[BIN];
  Double_t DATA_stasys_err1[BIN];
  Double_t DATA_stasys_err2[BIN];
  // Double_t TOTAL_err1[BIN];//??
  // Double_t TOTAL_err2[BIN];//??
  //
  Double_t sf_MC[BIN];//==1
  Double_t sf_MC_sta_err1[BIN];
  Double_t sf_MC_sta_err2[BIN];
  Double_t sf_DATA[BIN];
  Double_t sf_DATA_sta_err1[BIN];// not use
  Double_t sf_DATA_sta_err2[BIN];// not use
  Double_t sf_DATA_sys_err1[BIN];
  Double_t sf_DATA_sys_err2[BIN];
  Double_t sf_DATA_stasys_err1[BIN];// not use
  Double_t sf_DATA_stasys_err2[BIN];// not use
  Double_t sf_TOTAL_err1[BIN]; // stat+sys+stat
  Double_t sf_TOTAL_err2[BIN]; // stat+sys+stat
  Double_t sf_TOTAL_sta_err1[BIN]; // stat+sys+stat
  Double_t sf_TOTAL_sta_err2[BIN]; // stat+sys+stat

  
  for(int ii=0; ii<BIN ; ii++){//eff  
    //if(ii>=g_dat->GetN() )continue;
    BIN_X [ii] = vec_Xbin.at(ii);
    BIN_Xer[ii]= vec_Xbin_err.at(ii);
    //
    MC_eff[ii]     =vec_sig_eff.at(ii);
    MC_sta_err1[ii]=vec_sig_eff_up.at(ii);
    MC_sta_err2[ii]=vec_sig_eff_do.at(ii);
    //
    DATA_eff[ii]      = vec_dat_eff.at(ii);
    DATA_sta_err1[ii] = vec_dat_eff_up.at(ii);
    DATA_sta_err2[ii] = vec_dat_eff_do.at(ii);
    DATA_sys_err1[ii] = total_sys_up.at(ii);
    DATA_sys_err2[ii] = total_sys_do.at(ii);
    DATA_stasys_err1[ii] = sqrt( pow(vec_dat_eff_up.at(ii),2) + pow(total_sys_up.at(ii),2) );
    DATA_stasys_err2[ii] = sqrt( pow(vec_dat_eff_do.at(ii),2) + pow(total_sys_do.at(ii),2) );
    
    printf("%02d bin == %f , %f \n",ii,DATA_stasys_err1[ii],DATA_stasys_err2[ii]);
    if( DATA_eff[ii]  + DATA_sys_err1[ii] >1 ) DATA_sys_err1[ii] = 1- DATA_eff[ii]; // less than 1.00
    if( DATA_eff[ii]  + DATA_stasys_err1[ii] >1 ) DATA_stasys_err1[ii] = 1- DATA_eff[ii]; // less than 1.00
  }//eff
  
  for(int ii=0; ii<BIN ; ii++){  //SF
    //if(ii>=g_dat->GetN() )continue;
    double MC=MC_eff[ii];
    double DA=DATA_eff[ii];
    sf_MC[ii]     = MC/MC;
    sf_MC_sta_err1[ii] = MC_sta_err1[ii]/DA;
    sf_MC_sta_err2[ii] = MC_sta_err2[ii]/DA;
    //
    sf_DATA[ii]    = DA/MC;
    sf_DATA_sta_err1[ii] = DATA_sta_err1[ii]/MC;
    sf_DATA_sta_err2[ii] = DATA_sta_err2[ii]/MC;
    sf_DATA_sys_err1[ii] = DATA_sys_err1[ii]/MC;
    sf_DATA_sys_err2[ii] = DATA_sys_err2[ii]/MC;
    sf_DATA_stasys_err1[ii] = DATA_stasys_err1[ii]/MC;
    sf_DATA_stasys_err2[ii] = DATA_stasys_err2[ii]/MC;
    sf_TOTAL_err1[ii] = (DA + DATA_stasys_err1[ii]) / (MC - MC_sta_err2[ii]) -DA/MC ; // correct??
    sf_TOTAL_err2[ii] = DA/MC - (DA - DATA_stasys_err2[ii]) / (MC + MC_sta_err1[ii])  ; // correct??
    
    sf_TOTAL_sta_err1[ii] = (DA + DATA_sta_err1[ii]) / (MC - MC_sta_err2[ii]) -DA/MC ; // correct??
    sf_TOTAL_sta_err2[ii] = DA/MC - (DA - DATA_sta_err2[ii]) / (MC + MC_sta_err1[ii])  ; // correct??
    
    if(0==MC){
      sf_DATA[ii]    = 0;
      sf_DATA_sta_err1[ii] =0;
      sf_DATA_sta_err2[ii] = 0;
      sf_DATA_sys_err1[ii] = 0;
      sf_DATA_sys_err2[ii] = 0;
      sf_DATA_stasys_err1[ii] =0;
      sf_DATA_stasys_err2[ii] = 0;
      sf_TOTAL_err1[ii] = 0;
      sf_TOTAL_err2[ii] = 0;
      // sf_DATAMC_sta_err1[ii] =0;
      // sf_DATAMC_sta_err2[ii] = 0;
      sf_MC_sta_err1[ii]=0;
      sf_MC_sta_err2[ii]=0;
      sf_DATA[ii]    = 0;
    }

    float mc_sta_err1=MC/(MC - MC_sta_err1[ii] ) -1 ;
    float mc_sta_err2=MC/(MC + MC_sta_err1[ii] ) -1 ;
    
    if(00==ii) printf("\n\n--Summary----------------------------\n");
    printf(" --- %02d bin : %3.0f - %3.0f GeV--- \n",ii,BIN_X [ii]-BIN_Xer [ii],BIN_X [ii]+BIN_Xer [ii]);
    printf("%02d  MC stat == %1.3f %%, %1.3f %%\n",ii,100*mc_sta_err1, 100*fabs(mc_sta_err2));
    printf("%02d Datastat == %1.3f %%, %1.3f %%\n",ii,100*sf_DATA_sta_err1[ii],100* sf_DATA_sta_err2[ii]);
    //printf("%02d All stat == %1.3f %%, %1.3f %%\n",ii,100*sf_DATAMC_sta_err1[ii],100*sf_DATAMC_sta_err2[ii]);
    printf("%02d  sys     == %1.3f %%, %1.3f %%\n",ii,100*sf_DATA_sys_err1[ii],100*sf_DATA_sys_err2[ii]);
    printf("%02d  Total   == %1.3f %%, %1.3f %%\n",ii,100*sf_TOTAL_err1[ii],   100*sf_TOTAL_err2[ii]);
    
    //printf("%02d bin == %f , %f \n",ii,sf_TOTAL_err1[ii],sf_TOTAL_err2[ii]);
    
  }//SF
  
  
  
  int tnbins_y=2;
  if(0==req_ETA) tnbins_y=1; 
  const int nbins_y=tnbins_y;
  Double_t ybins[nbins_y+1];
  if(0==req_ETA){
    ybins[0]=0;  
    ybins[1]=2.47;
  }else if(0!=req_ETA){
    ybins[0]=0;  
    ybins[1]=1.5;  
    ybins[2]=2.47;  
  }
  
  
  const int nbins_x=BIN;
  Double_t xbins[nbins_x+1];
  for(int ii=0; ii<BIN ; ii++){  //sym error
    xbins[ii] = BIN_X[ii] - BIN_Xer[ii];
  }
  xbins[BIN] = BIN_X[BIN-1] + BIN_Xer[BIN-1];
  
  TString name_region="";
  //if(req_period == "all") name_region+="all_";
  if(25==b_trig) name_region+="tau25";
  else if(35==b_trig) name_region+="tau35";
  else if(50==b_trig) name_region+="tau50_L1TAU12";
  else if(79==b_trig) name_region+="tau80";
  else if(80==b_trig) name_region+="tau80_L1TAU60";
  else if(125==b_trig)name_region+="tau125";
  else if(160==b_trig)name_region+="tau160";
  // if(1==req_ID) name_region+="loose_";
  // else if(2==req_ID) name_region+="medium_";
  // else if(3==req_ID) name_region+="tight_";
  if(1==req_prongs) name_region+="_1p";
  else if(3==req_prongs) name_region+="_3p";
  //
  
  TH2D*  h_sf            = new TH2D("2dsf_"           +name_region,"", nbins_x, xbins,nbins_y, ybins);
  TH2D*  h_effdata       = new TH2D("2deffdata_"      +name_region,"", nbins_x, xbins,nbins_y, ybins);//y mean
  TH2D*  h_effmc         = new TH2D("2deffmc_"        +name_region,"", nbins_x, xbins,nbins_y, ybins);//y mean
  TH2D*  h_STATDATA_up   = new TH2D("2dSTATDATA_up_"  +name_region,"", nbins_x, xbins,nbins_y, ybins);//er1
  TH2D*  h_STATDATA_down = new TH2D("2dSTATDATA_down_"+name_region,"", nbins_x, xbins,nbins_y, ybins);//er2
  TH2D*  h_STATMC_up     = new TH2D("2dSTATMC_up_"    +name_region,"", nbins_x, xbins,nbins_y, ybins);//er1
  TH2D*  h_STATMC_down   = new TH2D("2dSTATMC_down_"  +name_region,"", nbins_x, xbins,nbins_y, ybins);//er2
  TH2D*  h_SYST_up       = new TH2D("2dSYST_up_"      +name_region,"", nbins_x, xbins,nbins_y, ybins);//sys
  TH2D*  h_SYST_down     = new TH2D("2dSYST_down_"    +name_region,"", nbins_x, xbins,nbins_y, ybins);//sys
  TH2D*  h_total_up      = new TH2D("2dtotal_up_"     +name_region,"", nbins_x, xbins,nbins_y, ybins);
  TH2D*  h_total_down    = new TH2D("2dtotal_down_"   +name_region,"", nbins_x, xbins,nbins_y, ybins);
  
  
  for(int ii=0; ii<BIN ; ii++){  //sym error  
    int select_ETA=req_ETA;
    if(0==req_ETA) select_ETA=1;
    
    h_sf->SetBinContent(ii+1,select_ETA,sf_DATA[ii]);
    h_total_up  ->SetBinContent(ii+1,select_ETA,sf_TOTAL_err1[ii]);    
    h_total_down->SetBinContent(ii+1,select_ETA,sf_TOTAL_err2[ii]);    
    //Eff data
    h_effmc      ->SetBinContent(ii+1,select_ETA,MC_eff[ii]);
    h_STATMC_up  ->SetBinContent(ii+1,select_ETA,MC_sta_err1[ii]);    
    h_STATMC_down->SetBinContent(ii+1,select_ETA,MC_sta_err2[ii]);    
    //Eff MC
    h_effdata      ->SetBinContent(ii+1,select_ETA,DATA_eff[ii]);
    h_STATDATA_up  ->SetBinContent(ii+1,select_ETA,DATA_sta_err1[ii]);    
    h_STATDATA_down->SetBinContent(ii+1,select_ETA,DATA_sta_err2[ii]);    
    h_SYST_up   ->SetBinContent(ii+1,select_ETA,DATA_sys_err1[ii]);    
    h_SYST_down ->SetBinContent(ii+1,select_ETA,DATA_sys_err2[ii]);    
    
  } 
  
  
  OUTPUT->cd();
  // h_sf->Write();
  // h_total_up->Write();
  // h_total_down->Write();
  // h_effdata->Write();
  // h_effmc->Write();
  // h_STATDATA_up->Write();
  // h_STATDATA_down->Write();
  // h_SYST_up->Write();
  // h_SYST_down->Write();
  // h_STATMC_up->Write();
  // h_STATMC_down->Write();
  
  //@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
  //@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
  //  1D Graph  //@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
  //@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
  //TCanvas *CAN=new TCanvas("can","can",10,10,1000/1.5,900/1.5 );      
  TCanvas *CAN=new TCanvas("can","can",20,20,620,620);
  gStyle->SetPadTopMargin(0.05);//0.05                                                                                                                                                                                                       
  gStyle->SetPadRightMargin(0.1);
  gStyle->SetPadBottomMargin(0.05);
  gStyle->SetPadLeftMargin(0.15);
  
  CAN->Divide(1,2);
  CAN->cd(1);
  CAN->cd(1)->SetLogx();
  //gPad->SetPad(0.005,0.3525-0.03,0.995,0.995);
  gPad->SetPad(0.005,0.3525-0.02,0.995,0.995);
  //gPad->SetPad(0.005,0.3525,0.995,0.995);
  gPad->SetBottomMargin(0.05);
  gPad->SetFillStyle(0);
  //  double height_1 = gPad->YtoPixel(gPad->GetY1());
  CAN->cd(2);CAN->cd(2)->SetLogx();
  gPad->SetPad(0.005,0.005,0.995,0.3525);
  gPad->SetTopMargin(0.05);
  gPad->SetBottomMargin(0.35);
  gPad->SetFillStyle(0);
  
  CAN->cd(1);
  float final_Xrange=300; 
  if(1>0){
    int kk=0;
    CAN->cd(1);
    TGraphAsymmErrors *g_MC_stat = new TGraphAsymmErrors //num,x,y,xlow,xhigh,ylow,yhigh
      (BIN,BIN_X,MC_eff,BIN_Xer,BIN_Xer,MC_sta_err2,MC_sta_err1 ); //MC Stat unce.
    hist_name(g_MC_stat , "MC_stat");
    hist_name(g_MC_stat , "eff_"+name_region+"_mc");
    
    g_MC_stat->SetFillColor(2);
    g_MC_stat->SetMarkerColor(2);
    g_MC_stat->SetLineColor(2);
    g_MC_stat->SetMarkerStyle(22);    
    //g_MC_stat
    g_MC_stat->SetLineWidth(2);
    g_MC_stat->SetMarkerSize(1.2);
    g_MC_stat->GetXaxis()->SetTitle("Offline tau #font[12]{p}_{T} [GeV]");
    g_MC_stat->GetYaxis()->SetTitle(" Trigger Efficiency ");
    //g_MC_stat->GetYaxis()->SetTitleOffset(0.85);
    g_MC_stat->GetYaxis()->SetTitleOffset(0.8);
    g_MC_stat->GetYaxis()->SetTitleSize(0.08);
    //g_eff_mc->GetYaxis()->SetLabelOffset(0.8);
    g_MC_stat->GetYaxis()->SetLabelSize(0.07);
    g_MC_stat->SetMaximum(1.05);//1.05
    g_MC_stat->SetMinimum(0.);
    g_MC_stat->GetXaxis()->SetRangeUser(0,100);
    g_MC_stat->GetXaxis()->SetRangeUser(18,310);
    g_MC_stat->GetXaxis()->SetRangeUser(10,310);
    g_MC_stat->GetXaxis()->SetMoreLogLabels(1);
    // g_MC_stat->GetXaxis()->SetLabelOffset(-0.002);
    // g_MC_stat->GetXaxis()->SetLabelSize(0.04);
    g_MC_stat->GetXaxis()->SetLabelOffset(0.004);
    g_MC_stat->GetXaxis()->SetLabelSize(0.05);
    g_MC_stat->GetXaxis()->SetLabelSize(0.);
    g_MC_stat->GetXaxis()->SetTitleSize(0.);
    g_MC_stat->GetXaxis()->SetNoExponent(1);
    if( 79==b_trig || 80==b_trig || 125==b_trig || 160==b_trig ){
      g_MC_stat->GetXaxis()->SetRangeUser(60,400);
      CAN ->SetLogx(0);
    }
    
    // TGraphAsymmErrors *g_emp; //num,x,y,xlow,xhigh,ylow,yhigh
    // g_emp->Draw("AP");
    g_MC_stat->Draw("AP");
    
    
    TGraphAsymmErrors *g_data_total= new TGraphAsymmErrors //num,x,y,xlow,xhigh,ylow,yhigh
      (BIN,BIN_X,DATA_eff,BIN_Xer,BIN_Xer,DATA_stasys_err2,DATA_stasys_err1 ); //Total unce.
    hist_name(g_data_total,"data_total");
    hist_name(g_data_total,"eff_"+name_region+"_data");
    
    g_data_total->SetFillColor(kCyan);
    g_data_total->SetLineColor(kCyan);
    g_data_total->SetLineWidth(0);
    g_data_total->SetMarkerSize(0);
    g_data_total->Draw("2");	    
    

    
    
    TGraphAsymmErrors *g_data_stat= new TGraphAsymmErrors //num,x,y,xlow,xhigh,ylow,yhigh
      (BIN,BIN_X,DATA_eff,BIN_Xer,BIN_Xer,DATA_sta_err2,DATA_sta_err1 ); 
    hist_name(g_data_stat,"data_stat");
    g_data_stat->SetFillColor(kCyan);
    g_data_stat->SetLineColor(kCyan);
    g_data_stat->SetLineWidth(0);
    g_data_stat->SetMarkerSize(0);
    //g_data_stat->Draw("2");	    
    
    TGraphAsymmErrors *g_data_sys = new TGraphAsymmErrors //num,x,y,xlow,xhigh,ylow,yhigh
      (BIN,BIN_X,DATA_eff,BIN_Xer,BIN_Xer,DATA_sys_err2,DATA_sys_err1 );       
    hist_name(g_data_sys,"data_sys");
    hist_name(g_data_sys,"eff_"+name_region+"_SYST");
    g_data_sys->SetFillColor(kAzure+2);
    g_data_sys->SetLineColor(kAzure+2);
    g_data_sys->SetLineWidth(0);
    g_data_sys->SetMarkerSize(0);
    g_data_sys->SetMarkerStyle(0);
    g_data_sys->Draw("2");
    
    TGraphAsymmErrors *g_data_P = new TGraphAsymmErrors //num,x,y,xlow,xhigh,ylow,yhigh
      (BIN,BIN_X,DATA_eff,0,0,0,0 ); //data Point only
    g_data_P->SetMarkerSize(1.2);
    g_data_P->SetMarkerStyle(20);
    g_data_P->Draw("P");

    
    g_MC_stat->Draw("P");    
    
    
    int xx=45; float yy=0.45;
    TLegend* leg = new TLegend(xx/100., yy-0.35, xx/100.+0.4, yy-0.18);//x1 y1 x2 y2
    leg-> SetNColumns(2);
    leg->SetFillColor(10);
    leg->SetFillStyle(0);
    leg->SetTextSize(0.04);
    leg->SetTextFont(42);
    leg->SetBorderSize(0);
    leg->AddEntry(g_data_P, "Data 2016", "P");//LPFE
    leg->AddEntry(g_MC_stat, "MC Z#rightarrow#tau#tau", "P");//LPFE
    leg->AddEntry(g_data_sys, "Data Sys", "F");//LPFE
    leg->AddEntry(g_MC_stat, "MC Stat", "L");//LPFE
    leg->AddEntry(g_data_total, "Data Sys+Stat.", "F");//LPFE
    leg->Draw();

    OUTPUT->cd();
    g_data_total->Write();
    g_MC_stat->Write();
    //g_data_stat->Write();
    g_data_sys->Write();
    
  }//if(1>0)
  
  
  int hxx=45; float hyy=0.45;
  TString trig_NAME="";
  if(25 ==b_trig)trig_NAME="HLT_tau25_medium1_tracktwo";
  if(35 ==b_trig)trig_NAME="HLT_tau35_medium1_tracktwo";
  if(50 ==b_trig)trig_NAME="HLT_tau50_medium1_tracktwo_L1TAU12";
  if(79 ==b_trig)trig_NAME="HLT_tau80_medium1_tracktwo";
  if(80 ==b_trig)trig_NAME="HLT_tau80_medium1_tracktwo_L1TAU60";
  if(125==b_trig)trig_NAME="HLT_tau125_medium1_tracktwo";
  if(160==b_trig)trig_NAME="HLT_tau160_medium1_tracktwo";
  LABEL(hxx,hyy);      
  LABEL_NAME(hxx,hyy-0.05,trig_NAME);      
  LABEL_DATA(hxx,hyy-0.13,11.5*1000,2 );  //3.2fb-1
  
  TString OUT_onhist="";
  if(1==req_prongs)OUT_onhist+="1-prong ";
  else if(3==req_prongs)OUT_onhist+="3-prong ";
  if(1==req_ID)OUT_onhist+=" Loose ";
  else if(2==req_ID)OUT_onhist+=" Medium ";
  else if(3==req_ID)OUT_onhist+=" Tight ";
  if(1==req_ETA)OUT_onhist+=" Barrel ";
  else if(2==req_ETA)OUT_onhist+=" Endcap ";
  if("" != OUT_onhist)
    LABEL_NAME(hxx,hyy+0.08,OUT_onhist);  
  
  TLine *line = new TLine(-1000,1,1000,1);
  line->SetLineColor(4);
  line->SetLineWidth(2);
  line->SetLineStyle(2);
  int pt_threshold=b_trig;
  if(79==b_trig)pt_threshold=80;
  line->DrawLine(pt_threshold ,0,
  		 pt_threshold ,1.00);  
  
  TText *tex = new TText(1,1,"");
  tex->SetTextColor (4);
  tex->DrawText(pt_threshold*0.9,1.00,Form("%d",pt_threshold));
  
  // //#########################################################
  // //#########################################################
  // //for Pad2  //#############################################
  // //#########################################################
  // //#########################################################
  
  CAN->cd(2);
  
  TGraphAsymmErrors *g_SF_total = new TGraphAsymmErrors //num,x,y,xlow,xhigh,ylow,yhigh
    (BIN,BIN_X,sf_DATA,BIN_Xer,BIN_Xer,sf_TOTAL_err2,sf_TOTAL_err1);
  hist_dataRatioSET(g_SF_total);
  hist_name(g_SF_total,"SF_total");
  hist_name(g_SF_total,"sf_"+name_region+"");
  
  
  TGraphAsymmErrors *g_SFdata_P = new TGraphAsymmErrors //num,x,y,xlow,xhigh,ylow,yhigh
    (BIN,BIN_X,sf_DATA,0,0,0,0 ); //Point
  hist_dataRatioSET(g_SFdata_P);
  
  TGraphAsymmErrors *g_SFdata_total = new TGraphAsymmErrors //num,x,y,xlow,xhigh,ylow,yhigh
    (BIN,BIN_X,sf_DATA,BIN_Xer,BIN_Xer,sf_DATA_stasys_err2,sf_DATA_stasys_err1);
  hist_dataRatioSET(g_SFdata_total);
  hist_name(g_SFdata_total,"SFdata_total");  
  hist_name(g_SFdata_total,"SFdata_total");  
 
  TGraphAsymmErrors *g_SFdata_sys = new TGraphAsymmErrors //num,x,y,xlow,xhigh,ylow,yhigh
    (BIN,BIN_X,sf_DATA,BIN_Xer,BIN_Xer,sf_DATA_sys_err2,sf_DATA_sys_err1);
  hist_dataRatioSET(g_SFdata_sys);
  hist_name(g_SFdata_sys,"SFdata_sys");  
  hist_name(g_SFdata_sys,"sf_"+name_region+"_SYST");  
  
  TGraphAsymmErrors *g_SFdata_stat = new TGraphAsymmErrors //num,x,y,xlow,xhigh,ylow,yhigh
    (BIN,BIN_X,sf_DATA,BIN_Xer,BIN_Xer,sf_DATA_sta_err2,sf_DATA_sta_err1);
  hist_dataRatioSET(g_SFdata_stat);
  hist_name(g_SFdata_stat,"SFdata_stat");  
  hist_name(g_SFdata_stat,"sf_"+name_region+"_DATA_STAT");  
 
  // TGraphAsymmErrors *g_SFmc = new TGraphAsymmErrors //num,x,y,xlow,xhigh,ylow,yhigh
  //   (BIN,BIN_X,sf_MC,BIN_Xer,BIN_Xer,sf_MC_sta_err1,sf_MC_sta_err2);
  // hist_dataRatioSET(g_SFmc);
  
  TGraphAsymmErrors *g_SFdata_mcstat = new TGraphAsymmErrors //num,x,y,xlow,xhigh,ylow,yhigh
    (BIN,BIN_X,sf_DATA,BIN_Xer,BIN_Xer,sf_MC_sta_err2,sf_MC_sta_err1);
  hist_dataRatioSET(g_SFdata_mcstat);
  hist_name(g_SFdata_mcstat,"SFmc_stat");  //
  hist_name(g_SFdata_mcstat,"sf_"+name_region+"_SIGNAL_STAT");  

  TGraphAsymmErrors *g_SFdata_totalstat = new TGraphAsymmErrors //num,x,y,xlow,xhigh,ylow,yhigh
    (BIN,BIN_X,sf_DATA,BIN_Xer,BIN_Xer,sf_TOTAL_sta_err2,sf_TOTAL_sta_err1);
  hist_dataRatioSET(g_SFdata_totalstat);
  hist_name(g_SFdata_totalstat,"SFtotal_stat");  //
  hist_name(g_SFdata_totalstat,"sf_"+name_region+"_STAT");  
  
  
  OUTPUT->cd();
  g_SF_total->Write();
  g_SFdata_sys->Write();
  g_SFdata_stat->Write();
  //g_SFdata_total->Write();
  //g_SFmc->Write();
  g_SFdata_mcstat->Write();
  g_SFdata_totalstat->Write();
  
  
  CAN->cd(2);
  
  g_SFdata_P->SetMarkerColor(1);
  g_SFdata_P->SetMarkerStyle(20);    
  g_SFdata_P->SetLineWidth(0);
  g_SFdata_P->SetMarkerSize(1.2);
  
  g_SF_total->SetFillColor(kSpring);
  g_SF_total->SetLineWidth(0);
  g_SF_total->SetMarkerSize(0);
  g_SF_total->SetMarkerStyle(0);
  g_SF_total->SetLineColor(0);
  
  //g_SFdata_total->SetFillColor(kAzure+10); 
  g_SFdata_total->SetFillColor(kSpring);
  g_SFdata_total->SetLineWidth(0);
  g_SFdata_total->SetMarkerSize(0);
  g_SFdata_total->SetMarkerStyle(0);
  g_SFdata_total->SetLineColor(0);
  
  g_SFdata_stat->SetFillColor(kCyan);
  g_SFdata_stat->SetLineWidth(0);
  g_SFdata_stat->SetMarkerSize(0);
  g_SFdata_stat->SetMarkerStyle(0);
  g_SFdata_stat->SetLineColor(0);
  

  g_SFdata_mcstat->SetFillColor(kRed);
  g_SFdata_mcstat->SetLineWidth(0);
  g_SFdata_mcstat->SetMarkerSize(0);
  g_SFdata_mcstat->SetMarkerStyle(0);
  g_SFdata_mcstat->SetLineColor(0);

  
  g_SFdata_sys->SetFillColor(kAzure+2);  
  g_SFdata_sys->SetLineWidth(0);
  g_SFdata_sys->SetMarkerSize(0);
  g_SFdata_sys->SetMarkerStyle(0);
  g_SFdata_sys->SetLineColor(0);
  g_SFdata_sys->GetXaxis()->SetTitle(" Offline Tau p_{T} [GeV] "); 
  g_SFdata_sys->GetYaxis()->SetTitle(" Scale Factor ") ;
  g_SFdata_sys->GetXaxis()->SetRangeUser(10,310);
  //g_SFdata_sys->GetYaxis()->SetTitle(" Data / exp. ");
  g_SFdata_sys->GetYaxis()->SetTitleSize(0.13);
  g_SFdata_sys->GetYaxis()->SetTitleOffset(0.45);
  // g_SFdata_sys->GetXaxis()->SetTitleSize(1);
  // g_SFdata_sys->SetFillColor(2);
  // g_SFdata_sys->SetLineColor(2);
  // g_SFdata_sys->SetMarkerColor(2);
  // g_SFdata_sys->SetFillStyle(3244);
  // g_SFdata_sys->SetMarkerSize(0);
  float bin_gap=0.5;
  g_SFdata_sys->SetMaximum(1+bin_gap);
  g_SFdata_sys->SetMinimum(1-bin_gap);
  g_SFdata_sys->GetXaxis()->SetMoreLogLabels(1);
  g_SFdata_sys->GetXaxis()->SetLabelOffset(0.003);
  g_SFdata_sys->GetXaxis()->SetLabelSize(0.13);
  g_SFdata_sys->GetXaxis()->SetTitleOffset(1.00);
  g_SFdata_sys->GetXaxis()->SetTitleSize(0.15);
  g_SFdata_sys->GetXaxis()->SetNoExponent(1);
  g_SFdata_sys->GetXaxis()->SetRangeUser(10,310);    
  if( 79==b_trig || 80==b_trig || 125==b_trig || 160==b_trig ){
    g_SFdata_sys->GetXaxis()->SetRangeUser(60,400);
    CAN ->SetLogx(0);

    bin_gap=1;
    g_SFdata_sys->SetMaximum(1+bin_gap);
    g_SFdata_sys->SetMinimum(1-bin_gap);
  }

  //g_SFdata_sys->GetXaxis()->SetRangeUser(0,100);   

  
  
  g_SFdata_sys->Draw("A2");
  // TLine *line = new TLine(-1000,1,1000,1);
  // line->SetLineColor(1);
  // line->SetLineWidth(2);
  // line->SetLineStyle(2);
  // line->DrawLine(h_data->GetXaxis()->GetXmin(),1,
  // 		 h_data->GetXaxis()->GetXmax(),1);  

  
  if( 79==b_trig || 80==b_trig || 125==b_trig || 160==b_trig )
    line->DrawLine(80,1,BIN_X[BIN-1]+BIN_Xer[BIN-1],1);
  else 
    line->DrawLine(BIN_X[0]-BIN_Xer[0],1,BIN_X[BIN-1]+BIN_Xer[BIN-1],1);
  
  line->DrawLine(pt_threshold ,1+bin_gap,
  		 pt_threshold ,1-bin_gap);  



  //line->DrawLine(25,1,100,1);
  g_SF_total->Draw("2sames");
  
  //g_SFdata_total->Draw("2sames");
  //g_SFdata_stat->Draw("2sames");
  g_SFdata_mcstat->Draw("2sames");
  g_SFdata_sys->Draw("2sames");
  //g_SFmc->Draw("samesP");
  g_SFdata_P->Draw("Psames");
  
  //TLegend* leg2 = new TLegend(0.17,0.3,0.32,0.88);//x1 y1 x2 y2
  float xx=0.17; float yy=0.77;
  if(3==req_prongs)
    if(1==req_ETA) yy=0.38;
  //yy=0.38;
  TLegend* leg2 = new TLegend(xx, yy, xx+0.28, yy+0.15);//x1 y1 x2 y2
  //TLegend* leg2 = new TLegend(0.17,0.77,0.45,0.92);//x1 y1 x2 y2
  leg2->SetFillColor(10);
  leg2->SetFillStyle(0);
  leg2->SetTextFont(42);
  leg2->SetBorderSize(0);
  //
  leg2->SetTextSize(0.13); 
  //
  leg2-> SetNColumns(3);
  leg2->SetTextSize(0.08);
  //
  //leg2->AddEntry(g_SFdata_sys,    "Data Sys","F");//LPFE
  leg2->AddEntry(g_SFdata_sys,    "Sys","F");//LPFE
  leg2->AddEntry(g_SFdata_mcstat, "MC Stat", "F");//LPFE
  leg2->AddEntry(g_SF_total,  "Total",  "F");//LPFE
  //leg2->Draw();
  
  CAN->SaveAs("./PDF/"+OUTPUT_NAME+".pdf","RECREATE");
  CAN->SaveAs("./PDF/"+OUTPUT_NAME+".png","RECREATE");
  CAN->SaveAs("./CFILE/"+OUTPUT_NAME+".C","RECREATE");
  OUTPUT->Close();  
  
  return;
}
