

SetAtlasStyle(); 
gStyle->SetOptStat(0);
arg_s_xtitle=Convert_Title(s_var); // Set Xtitle

TString input_dir_mc="root://eosatlas//eos/atlas/user/m/mtakashi/public/tagandprobe/ntuple_21Jan2016/mc15b/";
input_dir_mc="/net/wpc10/scratch/ikai/NTUPLE/v11/";

bool use_prw=0;  // use PRWHash
TString input_dir_data=input_dir_mc; //data 
input_dir_mc  ="/net/wpc03/scratch/ikai/NTUPLE/2016_v17/MC/";
input_dir_data="/net/wpc03/scratch/ikai/NTUPLE/2016_v17/DATA/";
input_dir_mc  ="/net/wpc03/scratch/ikai/NTUPLE/SKIM/";
input_dir_data="/net/wpc03/scratch/ikai/NTUPLE/SKIM/";
input_dir_mc  ="/net/wpc03/scratch/ikai/NTUPLE/v19/SKIM/";
input_dir_data="/net/wpc03/scratch/ikai/NTUPLE/v19/SKIM/DATA/";


//===================================================================================
// // // //Event Selection     ======================================================
//===================================================================================

TString s_req_base = "n_muons==1 && n_electrons==0 && n_taus >= 1 && n_bjets==0 && n_pvx>=1";
s_req_base = "n_muons==1 && n_electrons==0 && n_taus >= 1 && n_pvx>=1"; // drop b-tag VETO
//s_req_base = "n_muons==1 && n_electrons==0 && n_taus >= 1 && n_bjets!=0 && n_pvx>=1";

// // muon reconstruction
TString s_req_muon_id = "lep_0_id_medium == 1 && lep_0_pt > 22.0 && TMath::Abs(lep_0_eta)<2.5 " ;
s_req_muon_id         = "lep_0_id_medium == 1 && lep_0_pt > 26.0 && TMath::Abs(lep_0_eta)<2.5 " ; // for 2016
TString  s_req_iso  ="(lep_0_iso_wp>=10000)";
//s_req_iso  ="(lep_0_iso_ptcone40/lep_0_pt/1000. < 1./100. && lep_0_iso_etcone20/lep_0_pt/1000. < 4./100.)"; //2015 initial isolation
TString s_req_muon_trig ="HLT_mu20_iloose_L1MU15 == 1 && muTrigMatch_0_HLT_mu20_iloose_L1MU15 == 1"; //2015 defalt
s_req_muon_trig ="( (HLT_mu20_iloose_L1MU15==1 && muTrigMatch_0_HLT_mu20_iloose_L1MU15==1) || (HLT_mu50==1 && muTrigMatch_0_HLT_mu50==1) )";//add HLT_mu50
s_req_muon_trig ="( (HLT_mu24_imedium==1 && muTrigMatch_0_HLT_mu24_imedium==1) || (HLT_mu50==1 && muTrigMatch_0_HLT_mu50==1) )"; //for 2016

TString s_req_muon = "(" +s_req_muon_id+ "&&" +s_req_iso+ "&&" +s_req_muon_trig +")";
TString s_req_antimuon = "(" +s_req_muon_id+ "&& (!"+s_req_iso+")&&" +s_req_muon_trig +")"; //anti-iso for rRCD-CR

// // tau reconstruction
TString s_req_tau_pteta ="tau_0_pt > 25.0 && TMath::Abs(tau_0_eta)<2.47 && !(TMath::Abs(tau_0_eta)>1.37 && TMath::Abs(tau_0_eta)<1.52 ) ";
if(1==req_ETA)       s_req_tau_pteta+= "&& TMath::Abs(tau_0_eta)<1.5";//barrel
 else if(2==req_ETA) s_req_tau_pteta+= "&& TMath::Abs(tau_0_eta)>1.5";//endcap
if(1==req_PT)        s_req_tau_pteta+= "&& tau_0_pt<35";//low 
 else if(2==req_PT)  s_req_tau_pteta+= "&& tau_0_pt>35";//high
 else if(96==req_PT)  s_req_tau_pteta+= "&& tau_0_pt>60";//high
 else if(98==req_PT)  s_req_tau_pteta+= "&& tau_0_pt>80";//high
 else if(99==req_PT)  s_req_tau_pteta+= "&& tau_0_pt>100";//high

double some_ptbin[14+1]={0,25.,28,30,32,34,36,39,43,52,64,80,100,150,300+699}; //pt binning
for(int ii=0; ii < 14; ii++){ //50 ={0,25}
  if(50+ii==req_PT) s_req_tau_pteta+= Form("&& %4f<tau_0_pt && tau_0_pt<%4f",some_ptbin[ii],some_ptbin[ii+1]);//low 
 }

TString s_req_tau_charge = "TMath::Abs(tau_0_q) ==1";
TString s_req_tau_tracks = "(tau_0_n_tracks ==1 || tau_0_n_tracks==3)";
if(1==req_prongs)       s_req_tau_tracks = "tau_0_n_tracks ==1";
 else if(3==req_prongs) s_req_tau_tracks = "tau_0_n_tracks ==3";
TString s_req_tau_id = "(tau_0_jet_bdt_score >0.3)"; //
if(1==req_ID)        s_req_tau_id = "tau_0_jet_bdt_loose ==1";
 else if(2==req_ID)  s_req_tau_id = "tau_0_jet_bdt_medium==1";
 else if(3==req_ID)  s_req_tau_id = "tau_0_jet_bdt_tight ==1";
 else if(-2==req_ID) s_req_tau_id = "tau_0_jet_bdt_loose ==1 && tau_0_jet_bdt_medium!=1";
 else if(-3==req_ID) s_req_tau_id = "tau_0_jet_bdt_medium==1 && tau_0_jet_bdt_tight !=1";
 else if(4==req_ID)  s_req_tau_id = "tau_0_jet_bdt_score >0.4 ";
 else if(5==req_ID)  s_req_tau_id = "tau_0_jet_bdt_score >0.5 ";
TString s_req_tau =  s_req_tau_pteta +"&&"+ s_req_tau_id +"&&"+ s_req_tau_charge +"&&"+ s_req_tau_tracks;

//kinematic selection
TString s_req_Wjets = "lephad_mt_lep0_met>60 && met_reco_et>30 ";
TString s_req_CR    = "lephad_mt_lep0_met<50 && lephad_met_sum_cos_dphi>-0.5";
TString s_req_Ztau  = "lephad_mt_lep0_met<50 && lephad_met_sum_cos_dphi>-0.5 && (45<lephad_vis_mass && lephad_vis_mass<80)";
TString s_req_Ztau_notmass  = "lephad_mt_lep0_met<50 && lephad_met_sum_cos_dphi>-0.5";

// Region
TString s_REQ="(" + s_req_base + "&&" + s_req_muon + "&&" + s_req_tau +")";                           //pre-selection
TString s_REQ_QCD = "( " + s_req_base +"&&" + s_req_antimuon + "&&" + s_req_tau +"&&"+ s_req_CR +")"; //CR QCD 
TString s_REQ_W = "("+ s_REQ +" && "+ s_req_Wjets +")";                                               //CR W+jets 
TString s_REQ_Z = "("+ s_REQ +" && "+ s_req_Ztau +")";                                                //Signal region
TString s_REQ_Z_MT = "("+ s_REQ +" && lephad_mt_lep0_met<50)";                                        //pre-selection + MT
TString s_REQ_Z_notmass = "("+ s_REQ +" && "+ s_req_Ztau_notmass +")";                                //pre-selection + MT + sum_cos_dphi


//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
double load_kWOS[4][2]={0};// mean,stat,sts,err * lowpt,highpt
double load_kWSS[4][2]={0};
double load_rQCD[4][2]={0};
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!  
//   select Tree (sys only)
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!  

load_rQCD[0][0] = set_rQCD("mean",req_period,req_prongs,req_ETA,req_ID ,1,0);
load_kWOS[0][0] = set_kW  ("mean",req_period,req_prongs,req_ETA,req_ID ,"OS",1,0);
load_kWSS[0][0] = set_kW  ("mean",req_period,req_prongs,req_ETA,req_ID ,"SS",1,0);
load_rQCD[0][1] = set_rQCD("mean",req_period,req_prongs,req_ETA,req_ID ,2,0);
load_kWOS[0][1] = set_kW  ("mean",req_period,req_prongs,req_ETA,req_ID ,"OS",2,0);
load_kWSS[0][1] = set_kW  ("mean",req_period,req_prongs,req_ETA,req_ID ,"SS",2,0);

load_rQCD[2][0] = set_rQCD("err",req_period,req_prongs,req_ETA,req_ID ,1,0);
load_kWOS[2][0] = set_kW  ("err",req_period,req_prongs,req_ETA,req_ID ,"OS",1,0);
load_kWSS[2][0] = set_kW  ("err",req_period,req_prongs,req_ETA,req_ID ,"SS",1,0);
load_rQCD[2][1] = set_rQCD("err",req_period,req_prongs,req_ETA,req_ID ,2,0);
load_kWOS[2][1] = set_kW  ("err",req_period,req_prongs,req_ETA,req_ID ,"OS",2,0);
load_kWSS[2][1] = set_kW  ("err",req_period,req_prongs,req_ETA,req_ID ,"SS",2,0);



TString common_weight="(weight_mc*weight_pileup_hash)*(bjet_sf_MVX_NOMINAL_sf*bjet_sf_MVX_NOMINAL_ineff_sf)";//for 2015
common_weight="(weight_total)"; //for 2016?
//common_weight="(weight_total*jet_NOMINAL_global_effSF_MVX*jet_NOMINAL_global_ineffSF_MVX)";

/* TString s_MUreco= "*(lep_0_NOMINAL_effSF_RecoMedium)"; */
/* TString s_MUiso = "*(lep_0_NOMINAL_effSF_IsoGradient)"; */
/* TString s_MUtrig="*(lep_0_NOMINAL_HLT_mu24_imedium_OR_HLT_mu50_MU_TRIG_QUAL_MEDIUM_MU_TRIG_ISO_GRADIENT)"; */
TString s_MUreco= "*(lep_0_NOMINAL_MuEffSF_Reco_QualMedium)";
TString s_MUiso = "*(lep_0_NOMINAL_MuEffSF_IsoGradient)";
TString s_MUtrig= "*(lep_0_NOMINAL_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoGradient)";
TString s_TAUsf= "*1";
//lep_0_NOMINAL_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoGradient
s_TAUsf = "*(tau_0_NOMINAL_TauEffSF_reco*tau_0_NOMINAL_TauEffSF_HadTauEleOLR_tauhad)"; 
if(1==req_ID)       s_TAUsf = "*(tau_0_NOMINAL_TauEffSF_reco*tau_0_NOMINAL_TauEffSF_HadTauEleOLR_tauhad*tau_0_NOMINAL_TauEffSF_JetBDTloose)"; 
 else if(2==req_ID) s_TAUsf = "*(tau_0_NOMINAL_TauEffSF_reco*tau_0_NOMINAL_TauEffSF_HadTauEleOLR_tauhad*tau_0_NOMINAL_TauEffSF_JetBDTmedium)"; 
 else if(3==req_ID) s_TAUsf = "*(tau_0_NOMINAL_TauEffSF_reco*tau_0_NOMINAL_TauEffSF_HadTauEleOLR_tauhad*tau_0_NOMINAL_TauEffSF_JetBDTtight)"; 

TString s_TAUid="";
if(1==req_ID)  s_TAUid="loose";
if(2==req_ID)  s_TAUid="medium";
if(3==req_ID)  s_TAUid="tight";

s_weight="("+common_weight+s_MUreco+s_MUiso+s_MUtrig+s_TAUsf+")";

//tau_0_NOMINAL_TAU_EFF_SELECTION*tau_0_NOMINAL_TAU_EFF_RECO*tau_0_NOMINAL_effSF_VeryLooseLlhEleOLR_electron*tau_0_NOMINAL_TAU_EFF_JETIDBDTMEDIUM*                       
/* if(tree_NAME_sys=="TAUID_SF"){ */
/*   s_weight="("+s_weight+ "*tau_0_NOMINAL_TAU_EFF_SELECTION*tau_0_NOMINAL_TAU_EFF_RECO*tau_0_NOMINAL_effSF_VeryLooseLlhEleOLR_electron*tau_0_NOMINAL_TAU_EFF_JETIDBDTMEDIUM)"; */
/*   tree_NAME="NOMINAL"; */
if(tree_NAME_sys=="TAUID_SFup"){
  s_weight="("+common_weight+s_MUreco+s_MUiso+s_MUtrig+ "*tau_0_TAUS_TRUEHADTAU_EFF_RECO_TOTAL_1up_TauEffSF_reco*tau_0_TAUS_TRUEELECTRON_EFF_ELEOLR_TOTAL_1up_TauEffSF_VeryLooseLlhEleOLR_electron*tau_0_TAUS_TRUEHADTAU_EFF_JETID_TOTAL_1up_TauEffSF_JetBDT"+s_TAUid+")"; 
  tree_NAME="NOMINAL";
 } else if(tree_NAME_sys=="TAUID_SFdown"){
  s_weight="("+common_weight+s_MUreco+s_MUiso+s_MUtrig+ "*tau_0_TAUS_TRUEHADTAU_EFF_RECO_TOTAL_1down_TauEffSF_reco*tau_0_TAUS_TRUEELECTRON_EFF_ELEOLR_TOTAL_1down_TauEffSF_VeryLooseLlhEleOLR_electron*tau_0_TAUS_TRUEHADTAU_EFF_JETID_TOTAL_1down_TauEffSF_JetBDT"+s_TAUid+")"; 
  tree_NAME="NOMINAL";
 }
/* if(tree_NAME_sys=="TAU_BDTmedium_up"){ */
/*   s_weight="("+s_weight+ "*tau_0_TAUS_TRUEHADTAU_EFF_JETID_TOTAL_1up_TAU_EFF_JETIDBDTMEDIUM)"; */
/*   tree_NAME="NOMINAL"; */
/*  } else if(tree_NAME_sys=="TAU_BDTmedium_down"){ */
/*   s_weight="("+s_weight+ "*tau_0_TAUS_TRUEHADTAU_EFF_JETID_TOTAL_1down_TAU_EFF_JETIDBDTMEDIUM" +")";  */
/*   tree_NAME="NOMINAL"; */
/*  } */
 else if(tree_NAME_sys=="PRW_DATASF_1up"){
   s_weight ="("+s_weight+"/NOMINAL_pileup_combined_weight*PRW_DATASF_1up_pileup_combined_weight)";
   tree_NAME="NOMINAL";
 }else if(tree_NAME_sys=="PRW_DATASF_1down"){
   s_weight ="("+s_weight+"/NOMINAL_pileup_combined_weight*PRW_DATASF_1down_pileup_combined_weight)";
   tree_NAME="NOMINAL";
 }
 else if(tree_NAME_sys=="MU_EFF_STATup"){
   s_weight ="("+common_weight+"*lep_0_MUON_EFF_STAT_1up_MuEffSF_Reco_QualMedium"+s_MUiso+s_MUtrig+s_TAUsf+")";
   tree_NAME="NOMINAL";
 }else if(tree_NAME_sys=="MU_EFF_STATdown"){
   s_weight ="("+common_weight+"*lep_0_MUON_EFF_STAT_1down_MuEffSF_Reco_QualMedium"+s_MUiso+s_MUtrig+s_TAUsf+")";
   tree_NAME="NOMINAL";
 }else if(tree_NAME_sys=="MU_EFF_SYSup"){
   s_weight ="("+common_weight+"*lep_0_MUON_EFF_SYS_1up_MuEffSF_Reco_QualMedium"+s_MUiso+s_MUtrig+s_TAUsf+")";
   tree_NAME="NOMINAL";
 }else if(tree_NAME_sys=="MU_EFF_SYSdown"){
   s_weight ="("+common_weight+"*lep_0_MUON_EFF_SYS_1down_MuEffSF_Reco_QualMedium"+s_MUiso+s_MUtrig+s_TAUsf+")";
   tree_NAME="NOMINAL";
 }else if(tree_NAME_sys=="MU_EFF_TrigSTATup"){ 
   s_weight="("+common_weight+s_MUreco+s_MUiso+"*lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoGradient"+s_TAUsf+")";
   tree_NAME="NOMINAL";
 }else if(tree_NAME_sys=="MU_EFF_TrigSTATdown"){
   s_weight="("+common_weight+s_MUreco+s_MUiso+"*lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoGradient"+s_TAUsf+")";
   tree_NAME="NOMINAL";
 }else if(tree_NAME_sys=="MU_EFF_TrigSYSup"){
   s_weight="("+common_weight+s_MUreco+s_MUiso+"*lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoGradient"+s_TAUsf+")";
   tree_NAME="NOMINAL";
 }else if(tree_NAME_sys=="MU_EFF_TrigSYSdown"){
   s_weight="("+common_weight+s_MUreco+s_MUiso+"*lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoGradient"+s_TAUsf+")";
   tree_NAME="NOMINAL"; 
 }
 else if(tree_NAME_sys=="MU_ISO_STATup"){
   s_weight ="(weight_total"+s_MUreco+"*lep_0_MUON_ISO_STAT_1up_MuEffSF_IsoGradient"+s_MUtrig+s_TAUsf+")";
   tree_NAME="NOMINAL";
 }else if(tree_NAME_sys=="MU_ISO_STATdown"){
   s_weight ="(weight_total"+s_MUreco+"*lep_0_MUON_ISO_STAT_1down_MuEffSF_IsoGradient"+s_MUtrig+s_TAUsf+")";
   tree_NAME="NOMINAL";
 }else if(tree_NAME_sys=="MU_ISO_SYSup"){
   s_weight ="(weight_total"+s_MUreco+"*lep_0_MUON_ISO_SYS_1up_MuEffSF_IsoGradient"+s_MUtrig+s_TAUsf+")";
   tree_NAME="NOMINAL";
 }else if(tree_NAME_sys=="MU_ISO_SYSdown"){
   s_weight ="(weight_total"+s_MUreco+"*lep_0_MUON_ISO_SYS_1down_MuEffSF_IsoGradient"+s_MUtrig+s_TAUsf+")";
   tree_NAME="NOMINAL";
 }

if(tree_NAME_sys.Contains("NOMINAL") ){
  tree_NAME="NOMINAL";
 }

//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!  
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!  
//   LOAD file & tree
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!  
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!  
/* 2016 */
/* A 296939-300287 */
/* B 300345-300908 */
/* C 301912-302393 */
/* D 302737-303560 */
/* E 303638-303892 */
/* F 303943-?? */


if("all"==req_period)
  //TotalLumi=9966.815*1000;//GRL 2016 1e34
  TotalLumi=11473*1000;//GRL 2016 1e34
//TotalLumi=7980*1000;//GRL 2016 v80
//else cout<<"Error:Luminosity is not setted!!"<<endl;


TChain *tree_data = new TChain("NOMINAL");
if("all"==req_period){
  tree_data->Add(input_dir_data+"hist-002*");
  tree_data->Add(input_dir_data+"hist-003*");
 }else if("A"==req_period){
  tree_data->Add(input_dir_data+"hist-002*");
  tree_data->Add(input_dir_data+"hist-00300279*");
  TotalLumi=546.571*1000;//GRL 2016 1e34 727?
 }else if("B"==req_period){
  tree_data->Add(input_dir_data+"hist-003003*");
  tree_data->Add(input_dir_data+"hist-003004*");
  tree_data->Add(input_dir_data+"hist-003005*");
  tree_data->Add(input_dir_data+"hist-003006*");
  tree_data->Add(input_dir_data+"hist-003007*");
  tree_data->Add(input_dir_data+"hist-003008*");
  tree_data->Add(input_dir_data+"hist-003009*");
  TotalLumi=1949.46*1000;//GRL 2016 1e34 727?
}else if("C"==req_period){
  tree_data->Add(input_dir_data+"hist-003019*");  
  tree_data->Add(input_dir_data+"hist-003020*");  
  tree_data->Add(input_dir_data+"hist-003021*");  
  tree_data->Add(input_dir_data+"hist-003022*");  
  tree_data->Add(input_dir_data+"hist-003023*"); 
  TotalLumi=2884.22*1000;//GRL 2016 1e34 727?
 }else if("D"==req_period){
  tree_data->Add(input_dir_data+"hist-003027*");  
  tree_data->Add(input_dir_data+"hist-003028*");  
  tree_data->Add(input_dir_data+"hist-003029*");  
  tree_data->Add(input_dir_data+"hist-003030*");  
  tree_data->Add(input_dir_data+"hist-003031*");  
  tree_data->Add(input_dir_data+"hist-003032*");  
  tree_data->Add(input_dir_data+"hist-003033*");  
  tree_data->Add(input_dir_data+"hist-003034*");  
  tree_data->Add(input_dir_data+"hist-003035*");  
  TotalLumi=4614.52*1000;//GRL 2016 1e34 727?
  TotalLumi=(4614.52-641.14)*1000;// minus 302872
 }
if(0==tree_data->GetEntries()) cout<<"No data"<<endl;


printf(" Integrel Luminosity is ... %5.2f pb-1",TotalLumi/1000);




TString name_derivation="h_mc_derivation";
name_derivation="h_metadata";
TString file_tail="";
file_tail="_skimed";

TFile* f_361108; // Ztt(361108)
f_361108= TFile::Open(input_dir_mc+"hist-361108"+file_tail+".root");
TTree* tree_361108 = (TTree*)f_361108->Get(tree_NAME); 
TH1D* h_361108_mc_derivation = (TH1D*)f_361108->Get(name_derivation);

// Wplusenu(361100)
TFile* f_361100;
f_361100= TFile::Open(input_dir_mc+"hist-361100"+file_tail+".root");
TTree* tree_361100 = (TTree*)f_361100->Get(tree_NAME);
TH1D* h_361100_mc_derivation = (TH1D*)f_361100->Get(name_derivation);
// Wplusmunu(361101)
TFile* f_361101;
f_361101 = TFile::Open(input_dir_mc+"hist-361101"+file_tail+".root");
TTree* tree_361101 = (TTree*)f_361101->Get(tree_NAME);
TH1D* h_361101_mc_derivation = (TH1D*)f_361101->Get(name_derivation);
// Wplustaunu(361102)
TFile* f_361102;
f_361102 = TFile::Open(input_dir_mc+"hist-361102"+file_tail+".root");
TTree* tree_361102 = (TTree*)f_361102->Get(tree_NAME);
TH1D* h_361102_mc_derivation = (TH1D*)f_361102->Get(name_derivation);
// Wminusenu(361103)
TFile* f_361103;
f_361103 = TFile::Open(input_dir_mc+"hist-361103"+file_tail+".root");
TTree* tree_361103 = (TTree*)f_361103->Get(tree_NAME);
TH1D* h_361103_mc_derivation = (TH1D*)f_361103->Get(name_derivation);
// Wminusmunu(361104)
TFile* f_361104;
f_361104 = TFile::Open(input_dir_mc+"hist-361104"+file_tail+".root");
TTree* tree_361104 = (TTree*)f_361104->Get(tree_NAME);
TH1D* h_361104_mc_derivation = (TH1D*)f_361104->Get(name_derivation);
// Wminustaunu(361105)
TFile* f_361105;
f_361105 = TFile::Open(input_dir_mc+"hist-361105"+file_tail+".root");
TTree* tree_361105 = (TTree*)f_361105->Get(tree_NAME);
TH1D* h_361105_mc_derivation = (TH1D*)f_361105->Get(name_derivation);


TFile* f_361106;
f_361106 = TFile::Open(input_dir_mc+"hist-361106"+file_tail+".root");
TTree* tree_361106 = (TTree*)f_361106->Get(tree_NAME);
TH1D* h_361106_mc_derivation = (TH1D*)f_361106->Get(name_derivation);
// Zmumu(361107)
TFile* f_361107;
f_361107 = TFile::Open(input_dir_mc+"hist-361107"+file_tail+".root");
TTree* tree_361107 = (TTree*)f_361107->Get(tree_NAME);
TH1D* h_361107_mc_derivation = (TH1D*)f_361107->Get(name_derivation);

// ttbar(410000)
TFile* f_410000;
f_410000 = TFile::Open(input_dir_mc+"hist-410000"+file_tail+".root");
TTree* tree_410000 = (TTree*)f_410000->Get(tree_NAME);
TH1D* h_410000_mc_derivation = (TH1D*)f_410000->Get(name_derivation);


printf("\n==================================");
printf("\n==================================\n");
printf(" INFO : Weight = "+s_weight);
printf(" \n");
printf(" INFO : Base requirment = "+s_REQ);
printf("\n==================================");
printf("\n==================================\n");



if(use_prw){
  set_prwTree();
  AddFriend_prwTree(tree_361100,req_period);
  AddFriend_prwTree(tree_361101,req_period);
  AddFriend_prwTree(tree_361102,req_period);
  AddFriend_prwTree(tree_361103,req_period);
  AddFriend_prwTree(tree_361104,req_period);
  AddFriend_prwTree(tree_361105,req_period);
  AddFriend_prwTree(tree_361106,req_period);
  AddFriend_prwTree(tree_361107,req_period);
  AddFriend_prwTree(tree_361108,req_period);
  AddFriend_prwTree(tree_410000,req_period);
 
 }
