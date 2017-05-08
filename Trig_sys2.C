
#include "head.h"  

void Trig_sys2(TString req_period = "all",int req_prongs =1,int req_ETA=0,int req_ID=2 , int b_trig=25)
{   
  bool all_systematic=0;  // "0"->only NOMINAL
  float Lumi_f=11.4;//ifb 
  
  
  gROOT->ProcessLine("#include <vector>");
  
  treat_OF_bin=1;  // overflow  bin
  treat_UF_bin=0;  // underflow bin -> not contain
  
  s_var="tau_0_pt";
  const int X_BINS = 14; 
  int hist_Xbin = X_BINS-1;
  double hist_Xrange[X_BINS]={25.,28,30,32,34,36,39,43,52,64,80,100,150,300}; //pt binning
  
  if(35==b_trig) hist_Xrange[5] =b_trig;//36->35
  if(50==b_trig) hist_Xrange[8] =b_trig;//52->50
  if(125==b_trig)hist_Xrange[11]=b_trig;//100->125
  if(160==b_trig)hist_Xrange[12]=b_trig;//150->160
  
  //for(unsigned int ii=0; ii<X_BINS; ii++ ){//Loop systematic
  // if(35==b_trig)    hist_Xrange[ii]
			//}
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
  // //double hist_Xrange[X_BINS]={6,9,11,13,15,17,19,21,23,25 }; //pt binning
  // double hist_Xrange[X_BINS]={10,12,14,16,18,20,22,24,26,28 }; //pt binning
  
  TString OUTPUT=s_var;
  TString arg_s_xtitle = s_var;//"tau_0_pt";
  cout<<s_var<<endl;;
  
  vector<TString>  vec_tree; //  The number of nuisance para.
  // vec_tree.push_back( "MUONS_ID_1up" );
  // vec_tree.push_back( "MU_EFF_TrigSYSup" );
  vec_tree.push_back( "NOMINAL" );
  
  // vec_tree.push_back( "MET_SoftTrk_ResoPara" );
  // vec_tree.push_back( "MET_SoftTrk_ResoPerp" );
  //vec_tree.push_back( "rQCD_up" );
  // vec_tree.push_back( "rQCD_down" );
  if(all_systematic){
    // // // // look at other TTree 
    vec_tree.push_back( "MUONS_ID_1up" );
    vec_tree.push_back( "MUONS_ID_1down" );
    vec_tree.push_back( "MUONS_MS_1up" );
    vec_tree.push_back( "MUONS_MS_1down" );
    vec_tree.push_back( "MUONS_SCALE_1up" );
    vec_tree.push_back( "MUONS_SCALE_1down" );
    vec_tree.push_back( "MET_SoftTrk_ResoPara" );
    vec_tree.push_back( "MET_SoftTrk_ResoPerp" );
    vec_tree.push_back( "MET_SoftTrk_ScaleDown" );
    vec_tree.push_back( "MET_SoftTrk_ScaleUp" );
    // // vec_tree.push_back( "TAUS_TRUEHADTAU_SME_TES_TOTAL_1down");
    // // vec_tree.push_back( "TAUS_TRUEHADTAU_SME_TES_TOTAL_1up");
    vec_tree.push_back( "PRW_DATASF_1down" );
    vec_tree.push_back( "PRW_DATASF_1up"   );
    // // // // //use other weights
    // // // // //muon ID & trigger
    vec_tree.push_back( "MU_EFF_STATup" );
    vec_tree.push_back( "MU_EFF_STATdown" );
    vec_tree.push_back( "MU_EFF_SYSup" );
    vec_tree.push_back( "MU_EFF_SYSdown" );
    vec_tree.push_back( "MU_EFF_TrigSTATup" );
    vec_tree.push_back( "MU_EFF_TrigSTATdown" );
    vec_tree.push_back( "MU_EFF_TrigSYSup" );
    vec_tree.push_back( "MU_EFF_TrigSYSdown" );
    // // //muon isolation
    vec_tree.push_back( "MU_ISO_STATup" );
    vec_tree.push_back( "MU_ISO_STATdown" );
    vec_tree.push_back( "MU_ISO_SYSup" );
    vec_tree.push_back( "MU_ISO_SYSdown" );
    // // // Unce. factor
    vec_tree.push_back( "rQCD_Den_up" );
    vec_tree.push_back( "rQCD_Den_down" );
    vec_tree.push_back( "kW_Den_up" );
    vec_tree.push_back( "kW_Den_down" );
    //
    vec_tree.push_back( "rQCD_Num_up" );
    vec_tree.push_back( "rQCD_Num_down" );
    vec_tree.push_back( "kW_Num_up" );
    vec_tree.push_back( "kW_Num_down" );
    
    vec_tree.push_back( "TAUID_SFup" );
    vec_tree.push_back( "TAUID_SFdown" );
    
    // // // //Tau ID
    // // // if(1==req_ID){
    // // //   vec_tree.push_back( "TAU_BDTloose_up" );
    // // //   vec_tree.push_back( "TAU_BDTloose_down" );
    // // // } else if(2==req_ID){
    // // //   vec_tree.push_back( "TAU_BDTmedium_up" );
    // // //   vec_tree.push_back( "TAU_BDTmedium_down" );
    // // // } else if(3==req_ID){
    // // //   vec_tree.push_back( "TAU_BDTtight_up" );
    // // //   vec_tree.push_back( "TAU_BDTtight_down" );    
    // // // }
  }
  
  TString tree_NAME    ="NOMINAL";
  TString tree_NAME_sys="NOMINAL";
  TString rootfile_name
    =Form("./TrigEff/TrigEff_%1dprong_%1dETA_%1dBDT_%dtrig",req_prongs,req_ETA,req_ID,b_trig);
  if(s_var!="tau_0_pt") rootfile_name+="__"+s_var;
  TFile* OUTFile = new TFile(rootfile_name+".root","RECREATE");
  
  TStopwatch TIME; TIME.Start();
  
  printf(" \n\n ====Show Tree Name============= \n"  );
  for(unsigned int i_tree=0; i_tree<vec_tree.size(); i_tree++ )//Show INFO
    cout<<i_tree<<" : "<<vec_tree.at(i_tree)<<endl;
  printf(" \n =============================== \n"  );
  
  for(unsigned int i_tree=0; i_tree<vec_tree.size(); i_tree++ ){//Loop systematic
    tree_NAME    =vec_tree.at(i_tree);
    tree_NAME_sys=vec_tree.at(i_tree);
    // if(!all_systematic)
    //   if(tree_NAME.Contains("up"))continue;
    
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
    temp_rQCD[1][0]=trig_rQCD[0][0]; // if you need, change first bin
    temp_kwOS[1][0]=trig_kWOS[0][0]; // if you need, change first bin
    temp_kwSS[1][0]=trig_kWSS[0][0]; // if you need, change first bin
    temp_rQCD[1][1]=trig_rQCD[0][1]; // if you need, change first bin
    temp_kwOS[1][1]=trig_kWOS[0][1]; // if you need, change first bin
    temp_kwSS[1][1]=trig_kWSS[0][1]; // if you need, change first bin
    
    printf(" RQCD w/o INFO :: %1.3f @ %1.3f @ %1.3f \n",  load_rQCD[2][0] ,load_rQCD[2][1] ,load_rQCD[2][1]    );
    printf(" RQCD w/  INFO :: %1.3f @ %1.3f @ %1.3f \n",  trig_rQCD[2][0] ,trig_rQCD[2][1] ,trig_rQCD[2][1]    );
    
    if( tree_NAME_sys.Contains("rQCD") ){
      if( tree_NAME_sys.Contains("Den") ){
	if( tree_NAME_sys.Contains("up") ){
	  temp_rQCD[0][0]+=load_rQCD[2][0];
	  temp_rQCD[0][1]+=load_rQCD[2][1];
	}//up
	if( tree_NAME_sys.Contains("down") ){
	  temp_rQCD[0][0]-=load_rQCD[2][0];
	  temp_rQCD[0][1]-=load_rQCD[2][1];
	}//down
      }else if( tree_NAME_sys.Contains("Num") ){
	if( tree_NAME_sys.Contains("up") ){
	  temp_rQCD[1][0]+=trig_rQCD[2][0]; // if you need, change first bin
	  temp_rQCD[1][1]+=trig_rQCD[2][1]; // if you need, change first bin
	}//up
	if( tree_NAME_sys.Contains("down") ){
	  temp_rQCD[1][0]-=trig_rQCD[2][0]; // if you need, change first bin
	  temp_rQCD[1][1]-=trig_rQCD[2][1]; // if you need, change first bin
	}//down
      }
      tree_NAME="NOMINAL";
    }//rQCD
    else if( tree_NAME_sys.Contains("kW") ){
      if( tree_NAME_sys.Contains("Den") ){
	if( tree_NAME_sys.Contains("up") ){
	  temp_kwOS[0][0]+=load_kWOS[2][0];
	  temp_kwSS[0][0]+=load_kWSS[2][0];
	  temp_kwOS[0][1]+=load_kWOS[2][1];
	  temp_kwSS[0][1]+=load_kWSS[2][1];
	}//up
	if( tree_NAME_sys.Contains("down") ){
	  temp_kwOS[0][0]-=load_kWOS[2][0];
	  temp_kwSS[0][0]-=load_kWSS[2][0];
	  temp_kwOS[0][1]-=load_kWOS[2][1];
	  temp_kwSS[0][1]-=load_kWSS[2][1];
	}//down
      }else if( tree_NAME_sys.Contains("Num") ){
	if( tree_NAME_sys.Contains("up") ){
	    temp_kwOS[1][0]+=trig_kWOS[2][0]; // if you need, change first bin
	    temp_kwSS[1][0]+=trig_kWSS[2][0]; // if you need, change first bin
	    temp_kwOS[1][1]+=trig_kWOS[2][1]; // if you need, change first bin
	    temp_kwSS[1][1]+=trig_kWSS[2][1]; // if you need, change first bin
	}//up
	if( tree_NAME_sys.Contains("down") ){
	  temp_kwOS[1][0]-=trig_kWOS[2][0]; // if you need, change first bin
	  temp_kwSS[1][0]-=trig_kWSS[2][0]; // if you need, change first bin
	  temp_kwOS[1][1]-=trig_kWOS[2][1]; // if you need, change first bin
	  temp_kwSS[1][1]-=trig_kWSS[2][1]; // if you need, change first bin
	}//down
      }	  
      tree_NAME="NOMINAL";
    } //kW
    
    cout<<"  i_tree  : "<<i_tree<<endl;
    cout<<"  TreeName: "<<tree_NAME<<endl;
    cout<<"  Sys Name: "<<tree_NAME_sys<<endl;
    cout<<"  WEIGHT == "<<s_weight<<endl;
    printf("FACTOR w/o (low)  INFO :: %1.3f @ %1.3f @ %1.3f \n",  temp_rQCD[0][0] , temp_kwOS[0][0], temp_kwSS[0][0]  );
    printf("FACTOR w/o (high) INFO :: %1.3f @ %1.3f @ %1.3f \n",  temp_rQCD[0][1] , temp_kwOS[0][1], temp_kwSS[0][1]  );
    printf("FACTOR w/  (low)  INFO :: %1.3f @ %1.3f @ %1.3f \n",  temp_rQCD[1][0] , temp_kwOS[1][0], temp_kwSS[1][0]  );
    printf("FACTOR w/  (high) INFO :: %1.3f @ %1.3f @ %1.3f \n",  temp_rQCD[1][1] , temp_kwOS[1][1], temp_kwSS[1][1]  );

    
    TString s_req=s_REQ_Z;
    if(s_var!="tau_0_pt" ) //tikai
      s_req="("+s_req+"&& tau_0_pt>30)";
    TString s_req_trigger=s_req;
    TString _OS="&& lephad_qxq==-1";
    TString _SS="&& lephad_qxq==+1";
    
    TString s_trigger="";
    if(12==b_trig)
      s_trigger="&&L1_TAU12IM_resurrected";
    else if(20==b_trig)
      s_trigger="&&L1_TAU20IM_resurrected";
    else if(11==b_trig)
      s_trigger="&&L1_TAU12_resurrected";
    else if(19==b_trig)
      s_trigger="&&L1_TAU20_resurrected";
    else if(60==b_trig)
      s_trigger="&&L1_TAU60";
    else if(50==b_trig)
      s_trigger="&& HLT_tau50_medium1_tracktwo_L1TAU12_resurrected==1 && tau_0_trig_HLT_tau50_medium1_tracktwo_L1TAU12==1";
    else if(79==b_trig)
      s_trigger="&& HLT_tau80_medium1_tracktwo_resurrected==1 && tau_0_trig_HLT_tau80_medium1_tracktwo==1";    
    else if(80==b_trig)
      s_trigger="&& HLT_tau80_medium1_tracktwo_L1TAU60_resurrected==1 && tau_0_trig_HLT_tau80_medium1_tracktwo_L1TAU60==1";    
    else if(25==b_trig || 35==b_trig || 50==b_trig || 80==b_trig || 125==b_trig || 160==b_trig )
      s_trigger=s_trigger+Form("&& HLT_tau%d_medium1_tracktwo_resurrected==1 && tau_0_trig_HLT_tau%d_medium1_tracktwo",b_trig,b_trig);
    else if(26==b_trig)
      s_trigger="&& HLT_tau25_idperf_track_resurrected==1 && tau_0_trig_HLT_tau25_idperf_track==1";
    else if(27==b_trig)
      s_trigger="&& HLT_tau25_idperf_tracktwo_resurrected==1 && tau_0_trig_HLT_tau25_idperf_tracktwo==1";
    else if(28==b_trig)
      s_trigger="&& HLT_tau25_perf_ptonly_resurrected==1 && tau_0_trig_HLT_tau25_perf_ptonly==1";
    else if(29==b_trig)
      s_trigger="&& HLT_tau25_perf_track_resurrected==1 && tau_0_trig_HLT_tau25_perf_track==1";
    else if(30==b_trig)
      s_trigger="&& HLT_tau25_perf_tracktwo_resurrected==1 && tau_0_trig_HLT_tau25_perf_tracktwo==1";
    else if(40==b_trig)
      s_trigger="&& HLT_tau25_loose1_ptonly_resurrected==1 && tau_0_trig_HLT_tau25_loose1_ptonly==1";
    else if(41==b_trig)
      s_trigger="&& HLT_tau25_loose1_tracktwo_resurrected==1 && tau_0_trig_HLT_tau25_loose1_tracktwo==1";
    else if(42==b_trig)
      s_trigger="&& HLT_tau25_medium1_ptonly_resurrected==1 && tau_0_trig_HLT_tau25_medium1_ptonly==1";
    else if(43==b_trig)
      s_trigger="&& HLT_tau25_medium1_track_resurrected==1 && tau_0_trig_HLT_tau25_medium1_track==1";
    else if(44==b_trig)
      s_trigger="&& HLT_tau25_medium1_tracktwo_resurrected==1 && tau_0_trig_HLT_tau25_medium1_tracktwo==1";
    else if(45==b_trig)
      s_trigger="&& HLT_tau25_medium1_tracktwo_L1TAU12_resurrected==1 && tau_0_trig_HLT_tau25_medium1_tracktwo_L1TAU12==1";
    else if(46==b_trig)
      s_trigger="&& HLT_tau25_medium1_tracktwo_L1TAU12IL_resurrected==1 && tau_0_trig_HLT_tau25_medium1_tracktwo_L1TAU12IL==1";
    else if(47==b_trig)
      s_trigger="&& HLT_tau25_medium1_tracktwo_L1TAU12IT_resurrected==1 && tau_0_trig_HLT_tau25_medium1_tracktwo_L1TAU12IT==1";
    else if(48==b_trig)
      s_trigger="&& HLT_tau25_tight1_ptonly_resurrected==1 && tau_0_trig_HLT_tau25_tight1_ptonly==1";
    else if(49==b_trig)
      s_trigger="&& HLT_tau25_tight1_tracktwo_resurrected==1 && tau_0_trig_HLT_tau25_tight1_tracktwo==1";
    
    //UInt_t          HLT_tau25_medium1_mvonly_resurrected;
    
    
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
	  
	  //continue;//tikai
	  
	  set_hist( h_361108f[ii][ll][jj] , temp_tree ,temp_mc_derivation ,
		    temp_req , temp_MCID , s_var);	  
	  
	  //delete temp_file;
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
	    
	    //if(8!=kk) continue;//tikai
	    
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
	    
	    set_hist( h_36110[ii][kk][ll][jj] , temp_tree ,temp_mc_derivation ,
		      temp_req , temp_MCID , s_var);	  
	    
	    //delete temp_file;
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
    // if(s_var=="tau_0_pt")
    //   if(!( 50==b_trig || 80==b_trig || 125==b_trig || 160==b_trig))
    set_data(h_data_SS , tree_data  ,s_req+_SS+s_Ptlow , s_var);	  //tikai
    set_data(h_data_SS2, tree_data  ,s_req+_SS+s_Pthigh, s_var);	    //tikai
    
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
    
    h_MC_OS->Add(h_W_OS,+1);  
    h_MC_SS->Add(h_W_SS,+1);  
    h_MC_OS->Add(h_Zll_OS,+1);  
    h_MC_SS->Add(h_Zll_SS,+1);  
    h_MC_OS->Add(h_tt_OS,+1);  
    h_MC_SS->Add(h_tt_SS,+1);  
    // h_MC_OS->Add(h_sig_OS,+1);  //important!!!
    // h_MC_SS->Add(h_sig_SS,+1);  //important!!!
    h_MC->Add(h_MC_OS,+1);
    h_MC->Add(h_MC_SS,-1);  
    
    h_bkg->Add(h_MC,1);  
    h_bkg->Add(h_data_SS,1);  
    
    TH1F* h_fiducial  =new TH1F("h_fiducial","h_fiducial" ,hist_Xbin,hist_Xrange);  //data-bkg
    h_fiducial->Add(h_data_OS,+1.);
    h_fiducial->Add(h_MC,-1.);
    h_fiducial->Add(h_data_SS,-1.);
    
    

    
    int ii_XBIN=h_bkg->GetNbinsX();
    //ii_XBIN=1;
    int NN_XBIN=h_bkg->GetNbinsX()-0;
    //ii_XBIN=h_bkg->GetNbinsX();    
    if(print_info){ 
      Double_t f_h_ev[10]={0};
      Double_t f_h_er[10]={0};

      
      f_h_ev[0]=h_bkg     ->IntegralAndError(ii_XBIN , NN_XBIN ,f_h_er[0]);
      f_h_ev[1]=h_data_OS ->IntegralAndError(ii_XBIN , NN_XBIN ,f_h_er[1]);
      f_h_ev[2]=h_W       ->IntegralAndError(ii_XBIN , NN_XBIN ,f_h_er[2]);
      f_h_ev[3]=h_Zll     ->IntegralAndError(ii_XBIN , NN_XBIN ,f_h_er[3]);
      f_h_ev[4]=h_tt      ->IntegralAndError(ii_XBIN , NN_XBIN ,f_h_er[4]);
      f_h_ev[5]=h_data_SS ->IntegralAndError(ii_XBIN , NN_XBIN ,f_h_er[5]);
      f_h_ev[6]=h_sig     ->IntegralAndError(ii_XBIN , NN_XBIN ,f_h_er[6]);
      f_h_ev[7]=h_fiducial->IntegralAndError(ii_XBIN , NN_XBIN ,f_h_er[7]);
      cout<<" ========== Yields (offline) =========="<<endl
	  <<"Total bkg :: "<<setprecision(5)<<f_h_ev[0]<<" +- "<<f_h_er[0]<<endl
	  <<"Total DATA:: "<<setprecision(5)<<f_h_ev[1]<<" +- "<<f_h_er[1]<<endl
	  <<"      Wjet:: "<<setprecision(5)<<f_h_ev[2]<<" +- "<<f_h_er[2]<<endl
	  <<"      Zll :: "<<setprecision(5)<<f_h_ev[3]<<" +- "<<f_h_er[3]<<endl
	  <<"      tt  :: "<<setprecision(5)<<f_h_ev[4]<<" +- "<<f_h_er[4]<<endl
	  <<"      SS  :: "<<setprecision(5)<<f_h_ev[5]<<" +- "<<f_h_er[5]<<endl
	  <<"    Signal:: "<<setprecision(5)<<f_h_ev[6]<<" +- "<<f_h_er[6]<<endl
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
    set_data(ht_data_SS , tree_data  ,s_req_trigger+_SS+s_Ptlow , s_var);//tikai	  
    set_data(ht_data_SS2, tree_data  ,s_req_trigger+_SS+s_Pthigh, s_var);	  //tikai	  
    
    
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
    
    ht_MC_OS->Add(ht_W_OS,+1);  
    ht_MC_SS->Add(ht_W_SS,+1);  
    ht_MC_OS->Add(ht_Zll_OS,+1);  
    ht_MC_SS->Add(ht_Zll_SS,+1);  
    ht_MC_OS->Add(ht_tt_OS,+1);  
    ht_MC_SS->Add(ht_tt_SS,+1);  
    // ht_MC_OS->Add(ht_sig_OS,+1);   //important!!!
    // ht_MC_SS->Add(ht_sig_SS,+1);   //important!!!
    ht_MC->Add(ht_MC_OS,+1);
    ht_MC->Add(ht_MC_SS,-1);  
    
    ht_bkg->Add(ht_MC,1);  
    ht_bkg->Add(ht_data_SS,1);  
    
    TH1F* ht_fiducial =new TH1F("ht_fiducial","h_fiducial" ,hist_Xbin,hist_Xrange);  
    ht_fiducial->Add(ht_data_OS,+1.);
    ht_fiducial->Add(ht_MC,-1.);
    ht_fiducial->Add(ht_data_SS,-1.);
    
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
      
      f_h_ev[0]=ht_bkg     ->IntegralAndError(ii_XBIN , NN_XBIN ,f_h_er[0]);
      f_h_ev[1]=ht_data_OS ->IntegralAndError(ii_XBIN , NN_XBIN ,f_h_er[1]);
      f_h_ev[2]=ht_W       ->IntegralAndError(ii_XBIN , NN_XBIN ,f_h_er[2]);
      f_h_ev[3]=ht_Zll     ->IntegralAndError(ii_XBIN , NN_XBIN ,f_h_er[3]);
      f_h_ev[4]=ht_tt      ->IntegralAndError(ii_XBIN , NN_XBIN ,f_h_er[4]);
      f_h_ev[5]=ht_data_SS ->IntegralAndError(ii_XBIN , NN_XBIN ,f_h_er[5]);
      f_h_ev[6]=ht_sig     ->IntegralAndError(ii_XBIN , NN_XBIN ,f_h_er[6]);
      f_h_ev[7]=ht_fiducial->IntegralAndError(ii_XBIN , NN_XBIN ,f_h_er[7]);
      cout<<" ========== Yields (trigger) =========="<<endl
       	  <<"Total bkg :: "<<setprecision(5)<<f_h_ev[0]<<" +- "<<f_h_er[0]<<endl
	  <<"Total DATA:: "<<setprecision(5)<<f_h_ev[1]<<" +- "<<f_h_er[1]<<endl
	  <<"      Wjet:: "<<setprecision(5)<<f_h_ev[2]<<" +- "<<f_h_er[2]<<endl
	  <<"      Zll :: "<<setprecision(5)<<f_h_ev[3]<<" +- "<<f_h_er[3]<<endl
	  <<"      tt  :: "<<setprecision(5)<<f_h_ev[4]<<" +- "<<f_h_er[4]<<endl
	  <<"      SS  :: "<<setprecision(5)<<f_h_ev[5]<<" +- "<<f_h_er[5]<<endl
	  <<"    Signal:: "<<setprecision(5)<<f_h_ev[6]<<" +- "<<f_h_er[6]<<endl
	  <<"  Fiducial:: "<<setprecision(5)<<f_h_ev[7]<<" +- "<<f_h_er[7]<<endl
	  <<endl;
    }
    
    //Draw-Option @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
    TCanvas *CAN=new TCanvas("can","can",10,10,1000/1.5,900/1.5 );      
    //TCanvas *CAN=new TCanvas("can","can",10,10,1000/1.8,900/1.8 );      
    CAN->cd();
    
    bool Xlog=0;
    if(s_var=="tau_0_pt" ) Xlog=1;
    if(1==Xlog)CAN ->SetLogx();
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
    CAN->cd(2);
    if(1==Xlog)CAN->cd(2)->SetLogx();
    gPad->SetPad(0.005,0.005,0.995,0.3525);
    gPad->SetTopMargin(0.05);
    gPad->SetBottomMargin(0.35);
    gPad->SetFillStyle(0);
    
    
    CAN->cd(1);
    TGraphAsymmErrors *g_eff_mc = new TGraphAsymmErrors //MC:Ztt(OS)
      (ht_sig_OS,h_sig_OS,"cl=0.683 b(1,1) mode");  
    g_eff_mc->SetLineStyle(0);
    g_eff_mc->SetLineWidth(0);
    g_eff_mc->SetLineColor(0);
    g_eff_mc->SetFillColor(7);//CobaltBlue
    //
    g_eff_mc->SetFillColor(2);//tikai
    g_eff_mc->SetFillStyle(3244);//tikai
    g_eff_mc->SetMarkerSize(1.2);//tikai
    g_eff_mc->SetMarkerStyle(22);//tikai
    g_eff_mc->SetMarkerColor(2);//tikai    
    
    g_eff_mc->GetXaxis()->SetTitle(arg_s_xtitle);
    g_eff_mc->GetYaxis()->SetTitle("Trigger Efficiency");
    g_eff_mc->GetYaxis()->SetTitleOffset(0.8);
    g_eff_mc->GetYaxis()->SetTitleSize(0.08);
    //g_eff_mc->GetYaxis()->SetLabelOffset(0.8);
    g_eff_mc->GetYaxis()->SetLabelSize(0.07);
    g_eff_mc->SetMaximum(1.1);
    g_eff_mc->SetMinimum(0.);
    g_eff_mc->GetXaxis()->SetRangeUser(hist_Xrange[0],hist_Xrange[X_BINS-1]);
    if(1==Xlog){
      g_eff_mc->GetXaxis()->SetRangeUser(20,310);
      g_eff_mc->GetXaxis()->SetMoreLogLabels(1);
      // g_eff_mc->GetXaxis()->SetLabelOffset(-0.002);
      // g_eff_mc->GetXaxis()->SetLabelSize(0.04);
      g_eff_mc->GetXaxis()->SetLabelOffset(0.004);
      g_eff_mc->GetXaxis()->SetLabelSize(0.05);
      g_eff_mc->GetXaxis()->SetLabelSize(0.);
      g_eff_mc->GetXaxis()->SetTitleSize(0.);
      g_eff_mc->GetXaxis()->SetNoExponent(1);
      if( 80==b_trig || 125==b_trig || 160==b_trig ){
	g_eff_mc->GetXaxis()->SetRangeUser(100,400);
	CAN ->SetLogx(0);
      }
      
    }
    g_eff_mc->Draw("a2");
    g_eff_mc->Draw("Psames");
    
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
    g_eff_data->SetMarkerSize(1.5);g_eff_data->SetMarkerSize(1.0);
    g_eff_data->Draw("PEsames");

        
    OUTFile->cd();
    hist_name(g_eff_data ,"Eff_data__"+tree_NAME_sys);
    hist_name(g_eff_mc   ,"Eff_ZttOS_"+tree_NAME_sys);
    g_eff_mc->Write();
    g_eff_data->Write();
    hist_name(h_sig_OS , "ZttOS_"+tree_NAME_sys+"__off");
    hist_name(ht_sig_OS, "ZttOS_"+tree_NAME_sys+"_trig");
    h_sig_OS ->Write();
    ht_sig_OS->Write();
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
    TLegend* leg = new TLegend(0.52,0.25-0.07, 0.88, 0.42-0.07); 
    leg->SetFillColor(10);
    leg->SetFillStyle(0);
    leg->SetTextSize(0.04);
    leg->SetTextFont(42);
    leg->SetBorderSize(0);
    //
    //leg->AddEntry(h_sig, "MC Z#rightarrow#tau#tau", "F");//LPFE
    leg->AddEntry(g_eff_mc, "MC Z#rightarrow#tau#tau", "PF");//LPFE
    leg->AddEntry(h_data_OS, "Data 2016", "LEP");
    leg->Draw();
    
    TString latex_draw="";
    if(23==b_trig)       latex_draw="HLT_tau25_perf_tracktwo";    
    else if(24==b_trig)  latex_draw="HLT_tau25_idperf_tracktwo";    
    else if(11==b_trig)  latex_draw="L1_TAU12";    
    else if(12==b_trig)  latex_draw="L1_TAU12IM";    
    else if(19==b_trig)  latex_draw="L1_TAU20";    
    else if(20==b_trig)  latex_draw="L1_TAU20IM";    
    else if(60==b_trig)  latex_draw="L1_TAU60";    
    else if(50==b_trig)  latex_draw="HLT_tau50_medium1_tracktwo_L1TAU12";
    else if(80==b_trig)  latex_draw="HLT_tau80_medium1_tracktwo_L1TAU60";    
    else if(25==b_trig || 35==b_trig || 50==b_trig || 80==b_trig || 125==b_trig || 160==b_trig )
      latex_draw=latex_draw+Form("HLT_tau%d_medium1_tracktwo",b_trig);
    if(26==b_trig)       latex_draw="HLT_tau25_idperf_track";    
    if(27==b_trig)       latex_draw="HLT_tau25_idperf_tracktwo";
    if(28==b_trig)       latex_draw="HLT_tau25_perf_ptonly";
    if(29==b_trig)       latex_draw="HLT_tau25_perf_track";
    if(30==b_trig)       latex_draw="HLT_tau25_perf_tracktwo";
    if(40==b_trig)       latex_draw="HLT_tau25_loose1_ptonly";
    if(41==b_trig)       latex_draw="HLT_tau25_loose1_tracktwo";
    if(42==b_trig)       latex_draw="HLT_tau25_medium1_ptonly";
    if(43==b_trig)       latex_draw="HLT_tau25_medium1_track";
    if(44==b_trig)       latex_draw="HLT_tau25_medium1_tracktwo";
    if(45==b_trig)       latex_draw="HLT_tau25_medium1_tracktwo_L1TAU12";
    if(46==b_trig)       latex_draw="HLT_tau25_medium1_tracktwo_L1TAU12IL";
    if(47==b_trig)       latex_draw="HLT_tau25_medium1_tracktwo_L1TAU12IT";
    if(48==b_trig)       latex_draw="HLT_tau25_tight1_ptonly";
    if(49==b_trig)       latex_draw="HLT_tau25_tight1_tracktwo";
        
    
    if(1==req_prongs) latex_draw+="(1p)";
    else if(3==req_prongs) latex_draw+="(3p)";
    //LABEL_NAME(50,0.8*0.6,latex_draw);  
    if(!(tree_NAME_sys.Contains("NOMINAL")))
      LABEL_NAME(50,0.12,tree_NAME_sys);  
    
    
    //LABEL(50,0.8*0.8,1); //ATLAS Intrnal
    //LABEL_NAME(50,0.8*0.7,"Z#rightarrow#tau#tau#rightarrow#mu#tau_{had} T&P");
    LABEL(50,0.8*0.7,1); //ATLAS Intrnal
    LABEL_NAME(50,0.8*0.6,latex_draw);  
    LABEL_DATA(50,0.8*0.5,Form("%1.1f f",Lumi_f) ,2);  
    
    CAN->cd(2);  //SF draw ================================================================
    TGraphAsymmErrors *g_eff_data2 = new TGraphAsymmErrors // SF data
      (N_bins_output,mc_vec_x_cen,data_vec_eff, mc_vec_x_err,mc_vec_x_err,data_vec_eff_down,data_vec_eff_up );
    TGraphAsymmErrors *g_eff_mc2 = new TGraphAsymmErrors //SF MC -- (N X Y Xlow Xhigh Ylow Yhigh)
      (N_bins_output,mc_vec_x_cen,mc_vec_eff, mc_vec_x_err,mc_vec_x_err,mc_vec_eff_down,mc_vec_eff_up );
    
    
    g_eff_mc2->SetName("g_eff_mc2");
    hist_dataRatioSET(g_eff_mc2);
    g_eff_mc2->GetYaxis()->SetTitle(" Data / exp. ");
    g_eff_mc2->GetYaxis()->SetTitleSize(0.13);
    g_eff_mc2->GetYaxis()->SetTitleOffset(0.45);
    g_eff_mc2->GetXaxis()->SetTitle(" Offline Tau p_{T} [GeV] "); 
    g_eff_mc2->GetXaxis()->SetTitleSize(1);
    if(s_var!="tau_0_pt")   g_eff_mc2->GetXaxis()->SetTitle(arg_s_xtitle);
    g_eff_mc2->SetFillColor(2);
    g_eff_mc2->SetLineColor(2);
    g_eff_mc2->SetMarkerColor(2);
    g_eff_mc2->SetFillStyle(3244);
    g_eff_mc2->SetMarkerSize(0);
    
    g_eff_mc2->SetMaximum(1.25);
    g_eff_mc2->SetMinimum(0.75);
    g_eff_mc2->GetXaxis()->SetRangeUser(hist_Xrange[0],hist_Xrange[X_BINS-1]);
    if(1==Xlog){
      g_eff_mc2->GetXaxis()->SetRangeUser(20,310);
      g_eff_mc2->GetXaxis()->SetMoreLogLabels(1);
      g_eff_mc2->GetXaxis()->SetLabelOffset(0.003);
      g_eff_mc2->GetXaxis()->SetLabelSize(0.13);
      g_eff_mc2->GetXaxis()->SetTitleOffset(1.00);
      g_eff_mc2->GetXaxis()->SetTitleSize(0.15);
      g_eff_mc2->GetXaxis()->SetNoExponent(1);
      if( 80==b_trig || 125==b_trig || 160==b_trig ){
	g_eff_mc2->GetXaxis()->SetRangeUser(100,400);
	CAN ->SetLogx(0);
      }
    }
    
    g_eff_mc2->Draw("A2");
    //
    g_eff_data2->SetName("g_eff_data2");
    hist_dataRatioSET(g_eff_data2);
    g_eff_data2->SetLineColor(1);
    g_eff_data2->SetLineWidth(3);
    g_eff_data2->SetMarkerColor(1);
    g_eff_data2->SetMarkerSize(1.5);g_eff_data2->SetMarkerSize(1.0);
    g_eff_data2->GetXaxis()->SetRangeUser(hist_Xrange[0],hist_Xrange[X_BINS-1]);
    g_eff_data2->Draw("P");

    TLine *line = new TLine(-1000,1,1000,1);
    line->SetLineColor(2);
    line->SetLineWidth(2);
    line->SetLineStyle(2);
    line->DrawLine(20  ,1, 300 ,1);
    // line->DrawLine(hist_Xrange[0]       ,1,
    //   		   hist_Xrange[X_BINS-1],1);
    
    g_eff_mc2  ->Draw("2");//re-draw 
    g_eff_data2->Draw("P");//re-draw
    
    // ====output file Name====================================
    TString temp_x="";//empty need
    TString outputpdf =temp_x+"TrigEff" + Form("%d_",b_trig) + req_period;
    TString outputpdf2=temp_x+Form("_%1dp_%1dETA_%1dBDT",req_prongs,req_ETA,req_ID)+"";
    if(s_var!="tau_0_pt")  outputpdf2+=s_var;
    TString output_dir="./pdf/";
    
    if(1==vec_tree.size()){
      CAN->SaveAs(output_dir+outputpdf+outputpdf2+".pdf");  
      CAN->SaveAs(output_dir+outputpdf+outputpdf2+".C");  
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

