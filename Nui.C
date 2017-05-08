

#include "head.h"  


void Nui(TString req_period = "all",int req_prongs =0,int req_ETA=0,int req_ID=2 , int b_trig=0
	 ,TString s_var="tau_0_pt" , int hist_Xbin=20 , double hist_Xbegin=20 , double hist_Xend=70
	 ,int req_PT=0
	 )
{   
  bool all_systematic=1;  // "0"->only NOMINAL
  
  gROOT->ProcessLine("#include <vector>");
  
  // s_var="tau_0_pt";
  // const int X_BINS = 14; 
  // int hist_Xbin = X_BINS-1;
  // double hist_Xrange[X_BINS]={25.,28,30,32,34,36,39,43,52,64,80,100,150,300}; //pt binning
  
  TString OUTPUT=s_var;
  TString arg_s_xtitle = s_var;//"tau_0_pt";
  if(s_var.Contains("lep_0_iso_"))s_var+="/lep_0_pt/1000";  //<0.15
  cout<<s_var<<endl;;
  
  vector<TString>  vec_tree; //  The number of nuisance para.
  //vec_tree.push_back( "NOMINAL" );
  vec_tree.push_back( "TAUID_SFup"   );
  vec_tree.push_back( "TAUID_SFdown"   );
  vec_tree.push_back( "NOMINAL"   );
  
  if(all_systematic){
    // // // // look at other TTree 
    // vec_tree.push_back( "MUONS_ID_1up" );
    // vec_tree.push_back( "MUONS_ID_1down" );
    // vec_tree.push_back( "MUONS_MS_1up" );
    // vec_tree.push_back( "MUONS_MS_1down" );
    // vec_tree.push_back( "MUONS_SCALE_1up" );
    // vec_tree.push_back( "MUONS_SCALE_1down" );
    // vec_tree.push_back( "MET_SoftTrk_ResoPara" );
    // vec_tree.push_back( "MET_SoftTrk_ResoPerp" );
    // vec_tree.push_back( "MET_SoftTrk_ScaleUp" );
    // vec_tree.push_back( "MET_SoftTrk_ScaleDown" );
    // // // vec_tree.push_back( "TAUS_TRUEHADTAU_SME_TES_TOTAL_1down");
    // // // vec_tree.push_back( "TAUS_TRUEHADTAU_SME_TES_TOTAL_1up");
    // vec_tree.push_back( "PRW_DATASF_1up"   );
    // vec_tree.push_back( "PRW_DATASF_1down" );
    // // // // //use other weights
    // // // // //muon ID & trigger
    // vec_tree.push_back( "MU_EFF_STATup" );
    // vec_tree.push_back( "MU_EFF_STATdown" );
    // vec_tree.push_back( "MU_EFF_SYSup" );
    // vec_tree.push_back( "MU_EFF_SYSdown" );
    // vec_tree.push_back( "MU_EFF_TrigSTATup" );
    // vec_tree.push_back( "MU_EFF_TrigSTATdown" );
    // vec_tree.push_back( "MU_EFF_TrigSYSup" );
    // vec_tree.push_back( "MU_EFF_TrigSYSdown" );
    // // // //muon isolation
    // vec_tree.push_back( "MU_ISO_STATup" );
    // vec_tree.push_back( "MU_ISO_STATdown" );
    // vec_tree.push_back( "MU_ISO_SYSup" );
    // vec_tree.push_back( "MU_ISO_SYSdown" );
    // // // Unce. factor
    // vec_tree.push_back( "rQCD_up" );
    // vec_tree.push_back( "rQCD_down" );
    // vec_tree.push_back( "kW_up" );
    // vec_tree.push_back( "kW_down" );
    // // //Tau ID
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

  
  TString _OS="&& lephad_qxq==-1";
  TString _SS="&& lephad_qxq==+1";
  TString s_Ptlow ="&&tau_0_pt<35";   // smaller 35
  TString s_Pthigh="&&tau_0_pt>35";  // larger  35
    
  TString tree_NAME    ="NOMINAL";
  TString tree_NAME_sys="NOMINAL";
  TString rootfile_name
    =Form("./Aroot/Nui_%1dprong_%1dETA_%1dBDT_%dtrig",req_prongs,req_ETA,req_ID,b_trig);
  rootfile_name+="__"+s_var;
  //TFile* OUTFile = new TFile(rootfile_name+".root","RECREATE");
  
  TStopwatch TIME; TIME.Start();
  
  printf(" \n\n ====Show Tree Name============= \n"  );
  for(unsigned int i_tree=0; i_tree<vec_tree.size(); i_tree++ )//Show INFO
    cout<<i_tree<<" : "<<vec_tree.at(i_tree)<<endl;
  printf(" \n =============================== \n"  );
  
  

  // TH1F* h_data    =new TH1F("h_data"    ,"h_data"    ,hist_Xbin,hist_Xrange);    
  // TH1F* h_data_OS =new TH1F("h_data_OS" ,"h_data_OS" ,hist_Xbin,hist_Xrange);    
  // TH1F* h_data_SS =new TH1F("h_data_SS" ,"h_data_SS" ,hist_Xbin,hist_Xrange);    
  // TH1F* h_data_SS2=new TH1F("h_data_SS2" ,"h_data_SS2" ,hist_Xbin,hist_Xrange);    
  // set_data(h_data_OS , tree_data  ,s_req+_OS         , s_var);	  
  // set_data(h_data_SS , tree_data  ,s_req+_SS+s_Ptlow , s_var);	  
  // set_data(h_data_SS2, tree_data  ,s_req+_SS+s_Pthigh, s_var);	  
  
  TH1F* hc_data[2][2][2]={{{0}}}; // trigger , OSSS ,Pt //FakeTau contributions from ZTT
  
  for(short ii=0; ii<2-1  ; ii++ ){//trigger     //                    only before/after trig
#include "selection.h"
    TString s_req=s_REQ_Z;
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
    else if(24==b_trig)
      s_trigger="&& HLT_tau25_perf_tracktwo_resurrected==1 && tau_0_trig_HLT_tau25_perf_tracktwo==1";
    else if(25==b_trig || 35==b_trig || 50==b_trig || 80==b_trig || 125==b_trig || 160==b_trig )
      s_trigger=s_trigger+Form("&& HLT_tau%d_medium1_tracktwo_resurrected==1 && tau_0_trig_HLT_tau%d_medium1_tracktwo",b_trig,b_trig);
    
    //s_req_trigger="(" + s_req + s_trigger +")";
    if(s_trigger!="") 
      s_req="(" + s_req + s_trigger +")";
    

    for(short ll=0; ll<2; ll++ ){//OSSS
      for(short jj=0; jj<2; jj++ ){//Pt
	hc_data[ii][ll][jj]= new TH1F (Form("hc_data_%d_%d_%d",ii,ll,jj),
				       Form("hc_data_%d_%d_%d",ii,ll,jj),hist_Xbin,hist_Xbegin,hist_Xend);
	
	if(0==ii)
	  if(0==ll)
	    if(0==jj)
	      set_data(hc_data[0][0][0] , tree_data  ,s_req+_OS         , s_var);	  	      
	if(0==ii)
	  if(1==ll)
	    if(0==jj)
	      set_data(hc_data[0][1][0] , tree_data  ,s_req+_SS+s_Ptlow , s_var);	  
	if(0==ii)
	  if(1==ll)
	    if(1==jj)
	      set_data(hc_data[0][1][1] , tree_data  ,s_req+_SS+s_Pthigh, s_var);	  	
	
      }
    }
  }
  
  const int Ntotalsys=vec_tree.size();
  TH1F* hc_exp[Ntotalsys]; // trigger , OSSS ,Pt //FakeTau contributions from ZTT
  for(short jj=0; jj<Ntotalsys; jj++ ){//Pt
    hc_exp[jj]= new TH1F (Form("hc_exp_%d",jj),
			  Form("hc_exp_%d",jj),hist_Xbin,hist_Xbegin,hist_Xend);  
  }
  
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
    cout<<"  i_tree: "<<i_tree<<endl;
    cout<<"  TreeName: "<<tree_NAME<<endl;
    cout<<"  Sys Name: "<<tree_NAME_sys<<endl;
    cout<<"  WEIGHT == "<<s_weight<<endl;
    printf("FACTOR (low)  INFO :: %1.3f @ %1.3f @ %1.3f \n",  temp_rQCD[0][0] , temp_kwOS[0][0], temp_kwSS[0][0]  );
    printf("FACTOR (high) INFO :: %1.3f @ %1.3f @ %1.3f \n",  temp_rQCD[0][1] , temp_kwOS[0][1], temp_kwSS[0][1]  );
    
    TString s_req=s_REQ_Z;
    // if(s_var!="tau_0_pt" ) //tikai
    //   s_req="("+s_req+"&& tau_0_pt>30)";
    TString s_req_trigger=s_req;
    
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
    else if(24==b_trig)
      s_trigger="&& HLT_tau25_perf_tracktwo_resurrected==1 && tau_0_trig_HLT_tau25_perf_tracktwo==1";
    else if(25==b_trig || 35==b_trig || 50==b_trig || 80==b_trig || 125==b_trig || 160==b_trig )
      s_trigger=s_trigger+Form("&& HLT_tau%d_medium1_tracktwo_resurrected==1 && tau_0_trig_HLT_tau%d_medium1_tracktwo",b_trig,b_trig);
    
    
    // if(i_tree==0){
    //   set_data(hc_data[0][0][0] , tree_data  ,s_req+_OS         , s_var);	  
    //   set_data(hc_data[0][1][0] , tree_data  ,s_req+_SS+s_Ptlow , s_var);	  
    //   set_data(hc_data[0][1][1] , tree_data  ,s_req+_SS+s_Pthigh, s_var);	  
    // }

    s_req_trigger="(" + s_req + s_trigger +")";
    if(s_trigger!="") 
      s_req="(" + s_req + s_trigger +")";
      
    
    TH1F* h_361108f[2][2][2]; // trigger , OSSS ,Pt //FakeTau contributions from ZTT
    for(short ii=0; ii< 2-1 ; ii++ ){//trigger     //                    only before/after trig
      for(short ll=0; ll<2; ll++ ){//OSSS
	for(short jj=0; jj<2; jj++ ){//Pt
	  h_361108f[ii][ll][jj]= new TH1F (Form("h_361108f_%d%d%d",ii,ll,jj),
					   Form("h_361108f_%d%d%d",ii,ll,jj),hist_Xbin,hist_Xbegin,hist_Xend);
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

	  
	  set_hist( h_361108f[ii][ll][jj] , temp_tree ,temp_mc_derivation ,
		    temp_req , temp_MCID , s_var);	  
	  
	  delete temp_tree;
	  delete temp_mc_derivation;
	  
	}}} 
    
    
    TH1F* h_36110[2][10][2][2]; // trigger , samples , OSSS ,Pt
    for(short ii=0; ii< 2 - 1 ; ii++ ){ // trigger    //     only before/after trig
      for(short kk=0; kk<10; kk++ ){
	for(short ll=0; ll<2; ll++ ){
	  for(short jj=0; jj<2; jj++ ){
	    
	    h_36110[ii][kk][ll][jj]= new TH1F
	      (Form("h_36110_%1d_%1d_%1d_%1d",ii,kk,ll,jj),Form("h_36110_%1d_%1d_%1d_%1d",ii,kk,ll,jj)
	       ,hist_Xbin,hist_Xbegin,hist_Xend);
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
	    
	    set_hist( h_36110[ii][kk][ll][jj] , temp_tree ,temp_mc_derivation ,
		      temp_req , temp_MCID , s_var);	  
	    
	    delete temp_tree;
	    delete temp_mc_derivation;
	    
	  }}}}
    
    
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
    //sum OS-SS
    TH1F* h_W  =new TH1F("h_W"  ,"h_W"  ,hist_Xbin,hist_Xbegin,hist_Xend);  
    TH1F* h_Zll=new TH1F("h_Zll","h_Zll",hist_Xbin,hist_Xbegin,hist_Xend);  
    TH1F* h_sig=new TH1F("h_sig","h_sig",hist_Xbin,hist_Xbegin,hist_Xend);  
    TH1F* h_tt =new TH1F("h_tt" ,"h_tt" ,hist_Xbin,hist_Xbegin,hist_Xend);  
    // DATA
    TH1F* h_data    =new TH1F("h_data"    ,"h_data"    ,hist_Xbin,hist_Xbegin,hist_Xend);    
    TH1F* h_data_OS =new TH1F("h_data_OS" ,"h_data_OS" ,hist_Xbin,hist_Xbegin,hist_Xend);    
    TH1F* h_data_SS =new TH1F("h_data_SS" ,"h_data_SS" ,hist_Xbin,hist_Xbegin,hist_Xend);    
    TH1F* h_data_SS2=new TH1F("h_data_SS2" ,"h_data_SS2" ,hist_Xbin,hist_Xbegin,hist_Xend);    
    // set_data(h_data_OS , tree_data  ,s_req+_OS         , s_var);	  
    // if(!fastloop)
    //   if(s_var=="tau_0_pt")
    // 	if( !(50==b_trig || 80==b_trig || 125==b_trig || 160==b_trig) )
    // 	  set_data(h_data_SS , tree_data  ,s_req+_SS+s_Ptlow , s_var);	  
    // if(!fastloop)
    //   set_data(h_data_SS2, tree_data  ,s_req+_SS+s_Pthigh, s_var);	  
    h_data_OS =(TH1F*)hc_data[0][0][0]->Clone();
    h_data_SS =(TH1F*)hc_data[0][1][0]->Clone();
    h_data_SS2=(TH1F*)hc_data[0][1][1]->Clone();
    
    
    TH1F* h_MC  =new TH1F("h_MC"  ,"h_MC"  ,hist_Xbin,hist_Xbegin,hist_Xend);  
    TH1F* h_MC_OS  =new TH1F("h_MC_OS"  ,"h_MC_OS"  ,hist_Xbin,hist_Xbegin,hist_Xend);  
    TH1F* h_MC_SS  =new TH1F("h_MC_SS"  ,"h_MC_SS"  ,hist_Xbin,hist_Xbegin,hist_Xend);  
    
    TH1F* h_bkg  =new TH1F("h_bkg" ,"h_bkg" ,hist_Xbin,hist_Xbegin,hist_Xend);  
    
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
    h_MC_OS->Add(h_sig_OS,+1);  //important!!!
    h_MC_SS->Add(h_sig_SS,+1);  //important!!!
    h_MC->Add(h_MC_OS,+1);
    h_MC->Add(h_MC_SS,-1);  
    
    h_bkg->Add(h_MC,1);  
    h_bkg->Add(h_data_SS,1);  
    
    
    
    if(print_info){ 
      Double_t f_h_ev[10]={0};
      Double_t f_h_er[10]={0};
      int NN_XBIN=h_bkg->GetNbinsX();
      
      f_h_ev[0]=h_bkg     ->IntegralAndError(1, NN_XBIN ,f_h_er[0]);
      f_h_ev[1]=h_data_OS ->IntegralAndError(1, NN_XBIN ,f_h_er[1]);
      f_h_ev[2]=h_W       ->IntegralAndError(1, NN_XBIN ,f_h_er[2]);
      f_h_ev[3]=h_Zll     ->IntegralAndError(1, NN_XBIN ,f_h_er[3]);
      f_h_ev[4]=h_tt      ->IntegralAndError(1, NN_XBIN ,f_h_er[4]);
      f_h_ev[5]=h_data_SS ->IntegralAndError(1, NN_XBIN ,f_h_er[5]);
      f_h_ev[6]=h_sig     ->IntegralAndError(1, NN_XBIN ,f_h_er[6]);

      cout<<" ========== Yields (offline) =========="<<endl
	  <<"Total bkg :: "<<setprecision(5)<<f_h_ev[0]<<" +- "<<f_h_er[0]<<endl
	  <<"Total DATA:: "<<setprecision(5)<<f_h_ev[1]<<" +- "<<f_h_er[1]<<endl
	  <<"      Wjet:: "<<setprecision(5)<<f_h_ev[2]<<" +- "<<f_h_er[2]<<endl
	  <<"      Zll :: "<<setprecision(5)<<f_h_ev[3]<<" +- "<<f_h_er[3]<<endl
	  <<"      tt  :: "<<setprecision(5)<<f_h_ev[4]<<" +- "<<f_h_er[4]<<endl
	  <<"      SS  :: "<<setprecision(5)<<f_h_ev[5]<<" +- "<<f_h_er[5]<<endl
	  <<"    Signal:: "<<setprecision(5)<<f_h_ev[6]<<" +- "<<f_h_er[6]<<endl
	  <<endl;
    }
    hc_exp[i_tree]=(TH1F*)h_bkg->Clone();
    //############################
    //trigger  // Skip in this code
    //############################


    
    
    //############################
    //Sys  
    if(Ntotalsys-1 != i_tree) continue;
    //############################stack
    
    TCanvas *CAN=new TCanvas("can","can",10,10,1000/1.5,900/1.5 );      
    set_canvas(CAN);
    
    CAN->cd(1);
    hist_dataSET(h_data_OS);
    h_data_OS->SetXTitle(arg_s_xtitle);
    //h_data_OS->SetMaximum(3*h_data_OS->GetMaximum());
    h_data_OS->SetMinimum(0.);
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
    h_bkg->SetLineColor(1);
    h_bkg->SetMarkerSize(0);
    h_bkg->Draw("E2sames");//MC error band
    h_data_OS->Draw("sames");//re-draw
    
    //############################
    
    
    TH1F* h_exp_NOM=(TH1F*)hc_exp[0]->Clone();  
    TH1F* h_exp_err=(TH1F*)hc_exp[0]->Clone();  
    h_exp_NOM=(TH1F*)h_bkg->Clone();  
    h_exp_err=(TH1F*)h_bkg->Clone();  
    
    int nbin=h_exp_NOM->GetNbinsX();
    for(short ii=0; ii< nbin+1 ; ii++ ){
      Double_t Nnom=h_exp_err->GetBinContent(ii);
      h_exp_err->SetBinError( ii , 0.);
      
      Double_t Bingap [ Ntotalsys ];// ={0.};
      Double_t Bingap_sum=0;
      for(short tt=0; tt< Ntotalsys ; tt++ ){ 
	Double_t Nsys=hc_exp[tt]->GetBinContent(ii);
	Bingap[tt]=Nsys-Nnom;
      }//n sys
      Double_t Bingap_up=0;
      Double_t Bingap_do=0;
      for(short tt=0; tt< Ntotalsys ; tt++ ){ 
	if(Bingap[tt]>0)
	  Bingap_up=sqrt( pow(Bingap_up,2) + pow(Bingap[tt],2) );
	if(Bingap[tt]<0)
	  Bingap_do=sqrt( pow(Bingap_do,2) + pow(Bingap[tt],2) );
      }
      printf(" %d bin : sys ==up %5.1f ,do %5.1f \n" ,ii,Bingap_up ,Bingap_do);
      
      if(Bingap_up>Bingap_do)
	h_exp_err->SetBinError(ii,Bingap_up);
      else h_exp_err->SetBinError(ii,Bingap_do);
      
      h_exp_err->SetFillStyle(3244);
      h_exp_err->SetFillStyle(3490);
      h_exp_err->SetFillStyle(3001);
      h_exp_err->SetFillColor(2);
      h_exp_err->SetLineColor(2);
      h_exp_err->SetMarkerSize(0);
      h_exp_err->Draw("E2sames");//MC error band
      h_data_OS->Draw("sames");//re-draw
      //End
      
      //Tleg
      TString leg_option=" (OS-SS)";
      //TLegend* leg = new TLegend(0.45, 0.75, 0.93, 0.92);
      TLegend* leg = new TLegend(0.4+0.05, 0.75-0.05, 0.87-0.05, 0.92);
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
      leg->AddEntry(h_bkg, "MC stat", "F");
      leg->AddEntry(h_exp_err, "MC sys", "F");
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
	LABEL_NAME(65,0.67,OUT_onhist);  
  
      if(25==b_trig)  LABEL_NAME(50,0.62,"HLT_tau25_medium1_tracktwo");
      else if(35==b_trig)  LABEL_NAME(50,0.62,"HLT_tau35_medium1_tracktwo");
      else if(50==b_trig)  LABEL_NAME(50,0.62,"HLT_tau50_medium1_tracktwo");
      else if(80==b_trig)  LABEL_NAME(50,0.62,"HLT_tau80_medium1_tracktwo");
      else if(125==b_trig) LABEL_NAME(50,0.62,"HLT_tau125_medium1_tracktwo");
      
      // Ratio Plots
      CAN->cd(2);
      TH1F* h_ratio_OS2bkg  =new TH1F("h_ratio_OS2bkg","h_ratio_OS2bkg",hist_Xbin,hist_Xbegin,hist_Xend);
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
	//h_ratio_OS2bkg->SetMaximum(1.25);
	//h_ratio_OS2bkg->SetMinimum(0.75);
      }
      h_ratio_OS2bkg->SetXTitle(arg_s_xtitle);
      h_ratio_OS2bkg->SetYTitle("data/MC");
      h_ratio_OS2bkg->Draw();
      
      TH1F* h_ratioMC  =new TH1F("h_ratioMC","h_ratioMC",hist_Xbin,hist_Xbegin,hist_Xend);  
      hist_custom(h_ratioMC,1);
      TH1F* h_ratioDA  =new TH1F("h_ratioDA","h_ratioDA",hist_Xbin,hist_Xbegin,hist_Xend);  
      hist_custom(h_ratioDA,1);
      h_ratioMC=(TH1F*)h_bkg->Clone();
      h_ratioDA=(TH1F*)h_data_OS->Clone();
      hist_dataRatioSET(h_ratioMC);
      MyRatioBand(h_ratioMC,h_ratioDA);
      h_ratioMC->SetMaximum(1.5);
      h_ratioMC->SetMinimum(0.5);
      if(50<req_PT && req_PT<100){ 
	h_ratioMC->SetMaximum(2);
	h_ratioMC->SetMinimum(0.);
      }
      h_ratioMC->SetMaximum(2);
      h_ratioMC->SetMinimum(0.);
      
      h_ratioMC->SetXTitle(arg_s_xtitle);
      h_ratioMC->Draw("E2");
      h_ratioDA->Draw("sames");
      // For sys
      TH1F* hsys_ratioMC  =new TH1F("hsys_ratioMC","hsys_ratioMC",hist_Xbin,hist_Xbegin,hist_Xend);  
      hist_custom(hsys_ratioMC,1);
      TH1F* hsys_ratioDA  =new TH1F("hsys_ratioDA","hsys_ratioDA",hist_Xbin,hist_Xbegin,hist_Xend);  
      hist_custom(hsys_ratioDA,1);
      hsys_ratioMC=(TH1F*)h_exp_err->Clone();
      hsys_ratioDA=(TH1F*)h_data_OS->Clone();
      
      hist_dataRatioSET(hsys_ratioMC);
      MyRatioBand(hsys_ratioMC,hsys_ratioDA);
      hsys_ratioMC->SetMaximum(1.5);
      hsys_ratioMC->SetMinimum(0.5);
      // hsys_ratioMC->SetMaximum(2);
      // hsys_ratioMC->SetMinimum(0.);
      hsys_ratioMC->SetFillStyle(3244);
      hsys_ratioMC->SetFillStyle(3490);
      hsys_ratioMC->SetFillStyle(3001);
      hsys_ratioMC->SetFillColor(2);
      h_ratioMC   ->SetFillColor(1);
      hsys_ratioMC->SetMarkerSize(0);
      hsys_ratioMC->SetXTitle(arg_s_xtitle);
      hsys_ratioMC->Draw("E2sames");
      
      OverRatioBin(h_ratioDA,h_ratioMC);
      h_ratioDA->Draw("sames");
      //hsys_ratioDA->Draw("sames");
  
      TLine *line = new TLine(-1000,1,1000,1);
      line->SetLineColor(2);
      line->SetLineWidth(4);
      line->SetLineStyle(2);
      // line->DrawLine(h_data->GetXaxis()->GetXmin(),1,
      // 		     h_data->GetXaxis()->GetXmax(),1);
      //h_ratio_OS2bkg->Draw("sames");//re-draw

      TString temp_st="Sys_Z";
      TString outputpdf=  temp_st + 
	//Form("_%1.1dprong_%1.1dETA_%1.1dBDT",req_prongs,req_ETA,req_ID)  +"__"+OUTPUT;
	Form("_%1.1dprong_%1.1dETA_%1.1dBDT_%1.1dtaupt_HLT%d",req_prongs,req_ETA,req_ID,req_PT,b_trig)  +"__"+OUTPUT;
      
      CAN->SaveAs("./pdf/PNG/" +outputpdf+".png");
      CAN->SaveAs("./pdf/" +outputpdf+".pdf");
      
      
      //return;
      
      
    }//nbin
    
    
    

    
    
    
    
    //Draw-Option @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
    
  }//i_tree
  
  //TH1F* hc_exp[Ntotalsys]; 
  
  
  
  
  
  
  

  
  
  return;
} //END ALL  //##############################################

