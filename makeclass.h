//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Fri Aug 26 15:09:32 2016 by ROOT version 5.34/26
// from TTree NOMINAL/NOMINAL
// found on file: /net/wpc03/scratch/ikai/NTUPLE/v19/SKIM/hist-361108_skimed.root
//////////////////////////////////////////////////////////

#ifndef makeclass_h
#define makeclass_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

// Fixed size dimensions of array or collections stored in the TTree if any.

class makeclass {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

   // Declaration of leaf types
   Int_t           n_muons;
   Int_t           n_electrons;
   Int_t           n_photons;
   Int_t           n_taus;
   Int_t           n_taus_loose;
   Int_t           n_taus_medium;
   Int_t           n_taus_tight;
   Int_t           n_jets;
   Int_t           n_jets_bad;
   Int_t           n_bjets;
   Int_t           n_vx;
   Int_t           n_pvx;
   Float_t         n_actual_int;
   Float_t         n_avg_int;
   Float_t         n_avg_int_cor;
   UInt_t          n_truth_jets;
   UInt_t          n_truth_quark_jets;
   UInt_t          n_truth_gluon_jets;
   UInt_t          n_truth_jets_pt25_eta45;
   Int_t           event_clean_detector_core;
   UInt_t          lep_0;
   Float_t         lep_0_eta;
   Float_t         lep_0_phi;
   Float_t         lep_0_pt;
   Float_t         lep_0_et;
   Float_t         lep_0_m;
   Float_t         lep_0_q;
   Float_t         lep_0_trk_d0;
   Float_t         lep_0_trk_d0_sig;
   Float_t         lep_0_trk_z0;
   Float_t         lep_0_trk_z0_sintheta;
   Float_t         lep_0_trk_z0_sig;
   Float_t         lep_0_trk_pvx_z0;
   Float_t         lep_0_trk_pvx_z0_sintheta;
   Float_t         lep_0_trk_pvx_z0_sig;
   Float_t         lep_0_trk_pt_error;
   Int_t           lep_0_iso_wp;
   Int_t           lep_0_id_veryloose;
   Int_t           lep_0_id_loose;
   Int_t           lep_0_id_medium;
   Int_t           lep_0_id_tight;
   Int_t           lep_0_id_bad;
   Int_t           lep_0_muonType;
   Float_t         lep_0_cluster_eta;
   Float_t         lep_0_cluster_eta_be2;
   ULong64_t       event_number;
   UInt_t          run_number;
   ULong64_t       PRWHash;
   UInt_t          mc_channel_number;
   UInt_t          NOMINAL_pileup_random_run_number;
   UInt_t          PRW_DATASF_1down_pileup_random_run_number;
   UInt_t          PRW_DATASF_1up_pileup_random_run_number;
   Double_t        weight_total;
   Double_t        weight_mc;
   Float_t         met_truth_et;
   Float_t         met_truth_etx;
   Float_t         met_truth_ety;
   Float_t         met_truth_phi;
   Float_t         met_truth_sumet;
   Float_t         met_truth_sig;
   Float_t         met_truth_sig_tracks;
   Float_t         met_reco_et;
   Float_t         met_reco_etx;
   Float_t         met_reco_ety;
   Float_t         met_reco_phi;
   Float_t         met_reco_sumet;
   Float_t         met_reco_sig;
   Float_t         met_reco_sig_tracks;
   Float_t         met_more_met_et_soft;
   Float_t         met_more_met_et_ele;
   Float_t         met_more_met_et_pho;
   Float_t         met_more_met_et_tau;
   Float_t         met_more_met_et_muon;
   Float_t         met_more_met_et_jet;
   Float_t         met_more_met_sumet_soft;
   Float_t         met_more_met_sumet_ele;
   Float_t         met_more_met_sumet_pho;
   Float_t         met_more_met_sumet_tau;
   Float_t         met_more_met_sumet_muon;
   Float_t         met_more_met_sumet_jet;
   Float_t         met_more_met_phi_soft;
   Float_t         met_more_met_phi_ele;
   Float_t         met_more_met_phi_pho;
   Float_t         met_more_met_phi_tau;
   Float_t         met_more_met_phi_muon;
   Float_t         met_more_met_phi_jet;
   Float_t         lep_0_NOMINAL_MuEffSF_Reco_QualMedium;
   Float_t         lep_0_MUON_EFF_STAT_1down_MuEffSF_Reco_QualMedium;
   Float_t         lep_0_MUON_EFF_STAT_1up_MuEffSF_Reco_QualMedium;
   Float_t         lep_0_MUON_EFF_STAT_LOWPT_1down_MuEffSF_Reco_QualMedium;
   Float_t         lep_0_MUON_EFF_STAT_LOWPT_1up_MuEffSF_Reco_QualMedium;
   Float_t         lep_0_MUON_EFF_SYS_1down_MuEffSF_Reco_QualMedium;
   Float_t         lep_0_MUON_EFF_SYS_1up_MuEffSF_Reco_QualMedium;
   Float_t         lep_0_MUON_EFF_SYS_LOWPT_1down_MuEffSF_Reco_QualMedium;
   Float_t         lep_0_MUON_EFF_SYS_LOWPT_1up_MuEffSF_Reco_QualMedium;
   Float_t         lep_0_NOMINAL_MuEffSF_IsoFixedCutLoose;
   Float_t         lep_0_NOMINAL_MuEffSF_IsoFixedCutTightTrackOnly;
   Float_t         lep_0_NOMINAL_MuEffSF_IsoGradient;
   Float_t         lep_0_NOMINAL_MuEffSF_IsoGradientLoose;
   Float_t         lep_0_NOMINAL_MuEffSF_IsoLoose;
   Float_t         lep_0_NOMINAL_MuEffSF_IsoLooseTrackOnly;
   Float_t         lep_0_NOMINAL_MuEffSF_IsoTight;
   Float_t         lep_0_MUON_ISO_STAT_1down_MuEffSF_IsoFixedCutLoose;
   Float_t         lep_0_MUON_ISO_STAT_1down_MuEffSF_IsoFixedCutTightTrackOnly;
   Float_t         lep_0_MUON_ISO_STAT_1down_MuEffSF_IsoGradient;
   Float_t         lep_0_MUON_ISO_STAT_1down_MuEffSF_IsoGradientLoose;
   Float_t         lep_0_MUON_ISO_STAT_1down_MuEffSF_IsoLoose;
   Float_t         lep_0_MUON_ISO_STAT_1down_MuEffSF_IsoLooseTrackOnly;
   Float_t         lep_0_MUON_ISO_STAT_1down_MuEffSF_IsoTight;
   Float_t         lep_0_MUON_ISO_STAT_1up_MuEffSF_IsoFixedCutLoose;
   Float_t         lep_0_MUON_ISO_STAT_1up_MuEffSF_IsoFixedCutTightTrackOnly;
   Float_t         lep_0_MUON_ISO_STAT_1up_MuEffSF_IsoGradient;
   Float_t         lep_0_MUON_ISO_STAT_1up_MuEffSF_IsoGradientLoose;
   Float_t         lep_0_MUON_ISO_STAT_1up_MuEffSF_IsoLoose;
   Float_t         lep_0_MUON_ISO_STAT_1up_MuEffSF_IsoLooseTrackOnly;
   Float_t         lep_0_MUON_ISO_STAT_1up_MuEffSF_IsoTight;
   Float_t         lep_0_MUON_ISO_SYS_1down_MuEffSF_IsoFixedCutLoose;
   Float_t         lep_0_MUON_ISO_SYS_1down_MuEffSF_IsoFixedCutTightTrackOnly;
   Float_t         lep_0_MUON_ISO_SYS_1down_MuEffSF_IsoGradient;
   Float_t         lep_0_MUON_ISO_SYS_1down_MuEffSF_IsoGradientLoose;
   Float_t         lep_0_MUON_ISO_SYS_1down_MuEffSF_IsoLoose;
   Float_t         lep_0_MUON_ISO_SYS_1down_MuEffSF_IsoLooseTrackOnly;
   Float_t         lep_0_MUON_ISO_SYS_1down_MuEffSF_IsoTight;
   Float_t         lep_0_MUON_ISO_SYS_1up_MuEffSF_IsoFixedCutLoose;
   Float_t         lep_0_MUON_ISO_SYS_1up_MuEffSF_IsoFixedCutTightTrackOnly;
   Float_t         lep_0_MUON_ISO_SYS_1up_MuEffSF_IsoGradient;
   Float_t         lep_0_MUON_ISO_SYS_1up_MuEffSF_IsoGradientLoose;
   Float_t         lep_0_MUON_ISO_SYS_1up_MuEffSF_IsoLoose;
   Float_t         lep_0_MUON_ISO_SYS_1up_MuEffSF_IsoLooseTrackOnly;
   Float_t         lep_0_MUON_ISO_SYS_1up_MuEffSF_IsoTight;
   Float_t         lep_0_NOMINAL_MuEffSF_TTVA;
   Float_t         lep_0_MUON_TTVA_STAT_1down_MuEffSF_TTVA;
   Float_t         lep_0_MUON_TTVA_STAT_1up_MuEffSF_TTVA;
   Float_t         lep_0_MUON_TTVA_SYS_1down_MuEffSF_TTVA;
   Float_t         lep_0_MUON_TTVA_SYS_1up_MuEffSF_TTVA;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_2mu10_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_2mu10_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_2mu10_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_2mu10_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_2mu10_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_2mu10_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_2mu10_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_2mu10_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_2mu10_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_2mu10_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_2mu10_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_2mu10_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_2mu10_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_2mu10_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_2mu10_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_2mu10_QualMedium_IsoTight;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_2mu10_QualMedium_IsoGradient;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_2mu10_QualMedium_IsoLoose;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_2mu10_QualMedium_IsoNone;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_2mu10_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_2mu14_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_2mu14_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_2mu14_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_2mu14_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_2mu14_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_2mu14_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_2mu14_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_2mu14_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_2mu14_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_2mu14_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_2mu14_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_2mu14_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_2mu14_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_2mu14_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_2mu14_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_2mu14_QualMedium_IsoTight;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_2mu14_QualMedium_IsoGradient;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_2mu14_QualMedium_IsoLoose;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_2mu14_QualMedium_IsoNone;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_2mu14_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu10_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu10_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu10_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu10_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu10_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu10_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu10_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu10_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu10_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu10_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu10_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu10_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu10_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu10_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu10_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu10_QualMedium_IsoTight;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu10_QualMedium_IsoGradient;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu10_QualMedium_IsoLoose;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu10_QualMedium_IsoNone;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu10_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu14_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu14_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu14_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu14_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu14_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu14_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu14_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu14_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu14_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu14_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu14_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu14_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu14_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu14_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu14_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu14_QualMedium_IsoTight;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu14_QualMedium_IsoGradient;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu14_QualMedium_IsoLoose;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu14_QualMedium_IsoNone;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu14_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu18_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu18_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu18_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu18_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu18_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu18_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu18_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu18_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu18_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu18_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu18_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu18_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu18_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu18_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu18_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu18_QualMedium_IsoTight;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu18_QualMedium_IsoGradient;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu18_QualMedium_IsoLoose;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu18_QualMedium_IsoNone;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu18_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoTight;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoGradient;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoLoose;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoNone;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoTight;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoGradient;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoLoose;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoNone;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoTight;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoGradient;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoLoose;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoNone;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoTight;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoGradient;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoLoose;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoNone;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu22_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu22_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu22_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu22_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu22_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu22_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu22_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu22_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu22_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu22_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu22_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu22_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu22_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu22_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu22_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu22_QualMedium_IsoTight;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu22_QualMedium_IsoGradient;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu22_QualMedium_IsoLoose;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu22_QualMedium_IsoNone;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu22_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoTight;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoGradient;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoLoose;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoNone;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_QualMedium_IsoTight;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu24_QualMedium_IsoGradient;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu24_QualMedium_IsoLoose;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu24_QualMedium_IsoNone;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu24_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoTight;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoGradient;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoLoose;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoNone;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoTight;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoGradient;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoLoose;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoNone;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoTight;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoGradient;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoLoose;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoNone;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_imedium_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_imedium_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_imedium_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_imedium_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_imedium_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_imedium_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_imedium_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_imedium_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_imedium_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_imedium_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_imedium_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_imedium_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_imedium_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_imedium_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_imedium_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_imedium_QualMedium_IsoTight;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu24_imedium_QualMedium_IsoGradient;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu24_imedium_QualMedium_IsoLoose;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu24_imedium_QualMedium_IsoNone;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu24_imedium_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoTight;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoGradient;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoLoose;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoNone;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoTight;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoGradient;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoLoose;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoNone;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoTight;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoGradient;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoLoose;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoNone;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu26_imedium_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu26_imedium_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu26_imedium_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu26_imedium_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu26_imedium_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu26_imedium_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu26_imedium_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu26_imedium_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu26_imedium_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu26_imedium_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu26_imedium_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu26_imedium_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu26_imedium_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu26_imedium_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu26_imedium_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu26_imedium_QualMedium_IsoTight;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu26_imedium_QualMedium_IsoGradient;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu26_imedium_QualMedium_IsoLoose;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu26_imedium_QualMedium_IsoNone;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu26_imedium_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoTight;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoGradient;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoLoose;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoNone;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoTight;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoGradient;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoLoose;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoNone;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu40_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu40_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu40_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu40_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu40_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu40_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu40_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu40_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu40_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu40_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu40_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu40_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu40_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu40_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu40_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu40_QualMedium_IsoTight;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu40_QualMedium_IsoGradient;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu40_QualMedium_IsoLoose;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu40_QualMedium_IsoNone;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu40_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu50_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu50_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu50_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu50_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu50_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu50_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu50_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu50_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu50_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu50_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu50_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu50_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu50_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu50_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu50_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu50_QualMedium_IsoTight;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu50_QualMedium_IsoGradient;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu50_QualMedium_IsoLoose;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu50_QualMedium_IsoNone;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu50_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu8noL1_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu8noL1_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu8noL1_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu8noL1_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu8noL1_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu8noL1_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu8noL1_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu8noL1_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu8noL1_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu8noL1_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu8noL1_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu8noL1_QualMedium_IsoTight;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu8noL1_QualMedium_IsoGradient;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu8noL1_QualMedium_IsoLoose;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu8noL1_QualMedium_IsoNone;
   Float_t         lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu8noL1_QualMedium_IsoTight;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu8noL1_QualMedium_IsoGradient;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu8noL1_QualMedium_IsoLoose;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu8noL1_QualMedium_IsoNone;
   Float_t         lep_0_NOMINAL_MuEffSF_HLT_mu8noL1_QualMedium_IsoTight;
   Float_t         lep_0_NOMINAL_effSF_offline_RecoTrk;
   Float_t         lep_0_NOMINAL_effSF_offline_LooseAndBLayerLLH_d0z0_v11_correlationID;
   Float_t         lep_0_NOMINAL_effSF_offline_LooseAndBLayerLLH_d0z0_v11;
   Float_t         lep_0_NOMINAL_effSF_offline_MediumLLH_d0z0_v11_correlationID;
   Float_t         lep_0_NOMINAL_effSF_offline_MediumLLH_d0z0_v11;
   Float_t         lep_0_NOMINAL_effSF_offline_TightLLH_d0z0_v11_correlationID;
   Float_t         lep_0_NOMINAL_effSF_offline_TightLLH_d0z0_v11;
   Float_t         lep_0_NOMINAL_effSF_offline_LooseAndBLayerLLH_v11_correlationID;
   Float_t         lep_0_NOMINAL_effSF_offline_LooseAndBLayerLLH_v11;
   Float_t         lep_0_NOMINAL_effSF_offline_MediumLLH_v11_correlationID;
   Float_t         lep_0_NOMINAL_effSF_offline_MediumLLH_v11;
   Float_t         lep_0_NOMINAL_effSF_offline_TightLLH_v11_correlationID;
   Float_t         lep_0_NOMINAL_effSF_offline_TightLLH_v11;
   Float_t         lep_0_NOMINAL_effSF_Isolation_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose;
   Float_t         lep_0_NOMINAL_effSF_Isolation_LooseAndBLayerLLH_d0z0_v11_isolFixedCutTight;
   Float_t         lep_0_NOMINAL_effSF_Isolation_LooseAndBLayerLLH_d0z0_v11_isolFixedCutTightTrackOnly;
   Float_t         lep_0_NOMINAL_effSF_Isolation_LooseAndBLayerLLH_d0z0_v11_isolGradientLoose;
   Float_t         lep_0_NOMINAL_effSF_Isolation_LooseAndBLayerLLH_d0z0_v11_isolGradient;
   Float_t         lep_0_NOMINAL_effSF_Isolation_LooseAndBLayerLLH_d0z0_v11_isolLoose;
   Float_t         lep_0_NOMINAL_effSF_Isolation_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly;
   Float_t         lep_0_NOMINAL_effSF_Isolation_LooseAndBLayerLLH_d0z0_v11_isolTight;
   Float_t         lep_0_NOMINAL_effSF_Isolation_MediumLLH_d0z0_v11_isolFixedCutLoose;
   Float_t         lep_0_NOMINAL_effSF_Isolation_MediumLLH_d0z0_v11_isolFixedCutTight;
   Float_t         lep_0_NOMINAL_effSF_Isolation_MediumLLH_d0z0_v11_isolFixedCutTightTrackOnly;
   Float_t         lep_0_NOMINAL_effSF_Isolation_MediumLLH_d0z0_v11_isolGradientLoose;
   Float_t         lep_0_NOMINAL_effSF_Isolation_MediumLLH_d0z0_v11_isolGradient;
   Float_t         lep_0_NOMINAL_effSF_Isolation_MediumLLH_d0z0_v11_isolLoose;
   Float_t         lep_0_NOMINAL_effSF_Isolation_MediumLLH_d0z0_v11_isolLooseTrackOnly;
   Float_t         lep_0_NOMINAL_effSF_Isolation_MediumLLH_d0z0_v11_isolTight;
   Float_t         lep_0_NOMINAL_effSF_Isolation_TightLLH_d0z0_v11_isolFixedCutLoose;
   Float_t         lep_0_NOMINAL_effSF_Isolation_TightLLH_d0z0_v11_isolFixedCutTight;
   Float_t         lep_0_NOMINAL_effSF_Isolation_TightLLH_d0z0_v11_isolFixedCutTightTrackOnly;
   Float_t         lep_0_NOMINAL_effSF_Isolation_TightLLH_d0z0_v11_isolGradientLoose;
   Float_t         lep_0_NOMINAL_effSF_Isolation_TightLLH_d0z0_v11_isolGradient;
   Float_t         lep_0_NOMINAL_effSF_Isolation_TightLLH_d0z0_v11_isolLoose;
   Float_t         lep_0_NOMINAL_effSF_Isolation_TightLLH_d0z0_v11_isolLooseTrackOnly;
   Float_t         lep_0_NOMINAL_effSF_Isolation_TightLLH_d0z0_v11_isolTight;
   Float_t         lep_0_NOMINAL_effSF_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose;
   Float_t         lep_0_NOMINAL_effSF_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly;
   Float_t         lep_0_NOMINAL_effSF_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11;
   Float_t         lep_0_NOMINAL_effSF_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_MediumLLH_d0z0_v11_isolGradient;
   Float_t         lep_0_NOMINAL_effSF_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_MediumLLH_d0z0_v11_isolLoose;
   Float_t         lep_0_NOMINAL_effSF_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_MediumLLH_d0z0_v11_isolLooseTrackOnly;
   Float_t         lep_0_NOMINAL_effSF_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_MediumLLH_d0z0_v11;
   Float_t         lep_0_NOMINAL_effSF_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_TightLLH_d0z0_v11_isolGradient;
   Float_t         lep_0_NOMINAL_effSF_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_TightLLH_d0z0_v11_isolLoose;
   Float_t         lep_0_NOMINAL_effSF_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_TightLLH_d0z0_v11_isolLooseTrackOnly;
   Float_t         lep_0_NOMINAL_effSF_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_TightLLH_d0z0_v11_isolTight;
   Float_t         lep_0_NOMINAL_effSF_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_TightLLH_d0z0_v11;
   Float_t         lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose;
   Float_t         lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly;
   Float_t         lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_LooseAndBLayerLLH_d0z0_v11;
   Float_t         lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_MediumLLH_d0z0_v11_isolGradient;
   Float_t         lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_MediumLLH_d0z0_v11_isolLoose;
   Float_t         lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_MediumLLH_d0z0_v11_isolLooseTrackOnly;
   Float_t         lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_MediumLLH_d0z0_v11;
   Float_t         lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_TightLLH_d0z0_v11_isolGradient;
   Float_t         lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_TightLLH_d0z0_v11_isolLoose;
   Float_t         lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_TightLLH_d0z0_v11_isolLooseTrackOnly;
   Float_t         lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_TightLLH_d0z0_v11_isolTight;
   Float_t         lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_TightLLH_d0z0_v11;
   Float_t         lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose;
   Float_t         lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly;
   Float_t         lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_LooseAndBLayerLLH_d0z0_v11;
   Float_t         lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_MediumLLH_d0z0_v11_isolGradient;
   Float_t         lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_MediumLLH_d0z0_v11_isolLoose;
   Float_t         lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_MediumLLH_d0z0_v11_isolLooseTrackOnly;
   Float_t         lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_MediumLLH_d0z0_v11;
   Float_t         lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_TightLLH_d0z0_v11_isolGradient;
   Float_t         lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_TightLLH_d0z0_v11_isolLoose;
   Float_t         lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_TightLLH_d0z0_v11_isolLooseTrackOnly;
   Float_t         lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_TightLLH_d0z0_v11_isolTight;
   Float_t         lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_TightLLH_d0z0_v11;
   Float_t         lep_0_NOMINAL_effSF_DI_E_2015_e17_lhloose_2016_e17_lhloose_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose;
   Float_t         lep_0_NOMINAL_effSF_DI_E_2015_e17_lhloose_2016_e17_lhloose_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly;
   Float_t         lep_0_NOMINAL_effSF_DI_E_2015_e17_lhloose_2016_e17_lhloose_LooseAndBLayerLLH_d0z0_v11;
   Float_t         lep_0_NOMINAL_effSF_DI_E_2015_e17_lhloose_2016_e17_lhloose_MediumLLH_d0z0_v11_isolGradient;
   Float_t         lep_0_NOMINAL_effSF_DI_E_2015_e17_lhloose_2016_e17_lhloose_MediumLLH_d0z0_v11_isolLoose;
   Float_t         lep_0_NOMINAL_effSF_DI_E_2015_e17_lhloose_2016_e17_lhloose_MediumLLH_d0z0_v11_isolLooseTrackOnly;
   Float_t         lep_0_NOMINAL_effSF_DI_E_2015_e17_lhloose_2016_e17_lhloose_MediumLLH_d0z0_v11;
   Float_t         lep_0_NOMINAL_effSF_DI_E_2015_e17_lhloose_2016_e17_lhloose_TightLLH_d0z0_v11_isolGradient;
   Float_t         lep_0_NOMINAL_effSF_DI_E_2015_e17_lhloose_2016_e17_lhloose_TightLLH_d0z0_v11_isolLoose;
   Float_t         lep_0_NOMINAL_effSF_DI_E_2015_e17_lhloose_2016_e17_lhloose_TightLLH_d0z0_v11_isolLooseTrackOnly;
   Float_t         lep_0_NOMINAL_effSF_DI_E_2015_e17_lhloose_2016_e17_lhloose_TightLLH_d0z0_v11_isolTight;
   Float_t         lep_0_NOMINAL_effSF_DI_E_2015_e17_lhloose_2016_e17_lhloose_TightLLH_d0z0_v11;
   Float_t         lep_0_NOMINAL_effSF_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose;
   Float_t         lep_0_NOMINAL_effSF_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly;
   Float_t         lep_0_NOMINAL_effSF_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11;
   Float_t         lep_0_NOMINAL_effSF_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_MediumLLH_d0z0_v11_isolGradient;
   Float_t         lep_0_NOMINAL_effSF_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_MediumLLH_d0z0_v11_isolLoose;
   Float_t         lep_0_NOMINAL_effSF_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_MediumLLH_d0z0_v11_isolLooseTrackOnly;
   Float_t         lep_0_NOMINAL_effSF_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_MediumLLH_d0z0_v11;
   Float_t         lep_0_NOMINAL_effSF_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11_isolGradient;
   Float_t         lep_0_NOMINAL_effSF_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11_isolLoose;
   Float_t         lep_0_NOMINAL_effSF_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11_isolLooseTrackOnly;
   Float_t         lep_0_NOMINAL_effSF_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11_isolTight;
   Float_t         lep_0_NOMINAL_effSF_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11;
   Float_t         lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose;
   Float_t         lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly;
   Float_t         lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11;
   Float_t         lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_MediumLLH_d0z0_v11_isolGradient;
   Float_t         lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_MediumLLH_d0z0_v11_isolLoose;
   Float_t         lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_MediumLLH_d0z0_v11_isolLooseTrackOnly;
   Float_t         lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_MediumLLH_d0z0_v11;
   Float_t         lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_TightLLH_d0z0_v11_isolGradient;
   Float_t         lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_TightLLH_d0z0_v11_isolLoose;
   Float_t         lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_TightLLH_d0z0_v11_isolLooseTrackOnly;
   Float_t         lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_TightLLH_d0z0_v11_isolTight;
   Float_t         lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_TightLLH_d0z0_v11;
   Float_t         lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose;
   Float_t         lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly;
   Float_t         lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_LooseAndBLayerLLH_d0z0_v11;
   Float_t         lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_MediumLLH_d0z0_v11_isolGradient;
   Float_t         lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_MediumLLH_d0z0_v11_isolLoose;
   Float_t         lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_MediumLLH_d0z0_v11_isolLooseTrackOnly;
   Float_t         lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_MediumLLH_d0z0_v11;
   Float_t         lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_TightLLH_d0z0_v11_isolGradient;
   Float_t         lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_TightLLH_d0z0_v11_isolLoose;
   Float_t         lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_TightLLH_d0z0_v11_isolLooseTrackOnly;
   Float_t         lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_TightLLH_d0z0_v11_isolTight;
   Float_t         lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_TightLLH_d0z0_v11;
   Float_t         lep_0_NOMINAL_effSF_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose;
   Float_t         lep_0_NOMINAL_effSF_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly;
   Float_t         lep_0_NOMINAL_effSF_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11;
   Float_t         lep_0_NOMINAL_effSF_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_MediumLLH_d0z0_v11_isolGradient;
   Float_t         lep_0_NOMINAL_effSF_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_MediumLLH_d0z0_v11_isolLoose;
   Float_t         lep_0_NOMINAL_effSF_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_MediumLLH_d0z0_v11_isolLooseTrackOnly;
   Float_t         lep_0_NOMINAL_effSF_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_MediumLLH_d0z0_v11;
   Float_t         lep_0_NOMINAL_effSF_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_TightLLH_d0z0_v11_isolGradient;
   Float_t         lep_0_NOMINAL_effSF_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_TightLLH_d0z0_v11_isolLoose;
   Float_t         lep_0_NOMINAL_effSF_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_TightLLH_d0z0_v11_isolLooseTrackOnly;
   Float_t         lep_0_NOMINAL_effSF_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_TightLLH_d0z0_v11_isolTight;
   Float_t         lep_0_NOMINAL_effSF_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_TightLLH_d0z0_v11;
   Float_t         lep_0_NOMINAL_effSF_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose;
   Float_t         lep_0_NOMINAL_effSF_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly;
   Float_t         lep_0_NOMINAL_effSF_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11;
   Float_t         lep_0_NOMINAL_effSF_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_MediumLLH_d0z0_v11_isolGradient;
   Float_t         lep_0_NOMINAL_effSF_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_MediumLLH_d0z0_v11_isolLoose;
   Float_t         lep_0_NOMINAL_effSF_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_MediumLLH_d0z0_v11_isolLooseTrackOnly;
   Float_t         lep_0_NOMINAL_effSF_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_MediumLLH_d0z0_v11;
   Float_t         lep_0_NOMINAL_effSF_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11_isolGradient;
   Float_t         lep_0_NOMINAL_effSF_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11_isolLoose;
   Float_t         lep_0_NOMINAL_effSF_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11_isolLooseTrackOnly;
   Float_t         lep_0_NOMINAL_effSF_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11_isolTight;
   Float_t         lep_0_NOMINAL_effSF_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11;
   Float_t         lep_0_NOMINAL_effSF_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose;
   Float_t         lep_0_NOMINAL_effSF_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly;
   Float_t         lep_0_NOMINAL_effSF_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_LooseAndBLayerLLH_d0z0_v11;
   Float_t         lep_0_NOMINAL_effSF_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_MediumLLH_d0z0_v11_isolGradient;
   Float_t         lep_0_NOMINAL_effSF_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_MediumLLH_d0z0_v11_isolLoose;
   Float_t         lep_0_NOMINAL_effSF_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_MediumLLH_d0z0_v11_isolLooseTrackOnly;
   Float_t         lep_0_NOMINAL_effSF_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_MediumLLH_d0z0_v11;
   Float_t         lep_0_NOMINAL_effSF_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_TightLLH_d0z0_v11_isolGradient;
   Float_t         lep_0_NOMINAL_effSF_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_TightLLH_d0z0_v11_isolLoose;
   Float_t         lep_0_NOMINAL_effSF_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_TightLLH_d0z0_v11_isolLooseTrackOnly;
   Float_t         lep_0_NOMINAL_effSF_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_TightLLH_d0z0_v11_isolTight;
   Float_t         lep_0_NOMINAL_effSF_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_TightLLH_d0z0_v11;
   Float_t         lep_0_NOMINAL_effSF_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose;
   Float_t         lep_0_NOMINAL_effSF_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly;
   Float_t         lep_0_NOMINAL_effSF_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_LooseAndBLayerLLH_d0z0_v11;
   Float_t         lep_0_NOMINAL_effSF_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_MediumLLH_d0z0_v11_isolGradient;
   Float_t         lep_0_NOMINAL_effSF_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_MediumLLH_d0z0_v11_isolLoose;
   Float_t         lep_0_NOMINAL_effSF_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_MediumLLH_d0z0_v11_isolLooseTrackOnly;
   Float_t         lep_0_NOMINAL_effSF_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_MediumLLH_d0z0_v11;
   Float_t         lep_0_NOMINAL_effSF_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_TightLLH_d0z0_v11_isolGradient;
   Float_t         lep_0_NOMINAL_effSF_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_TightLLH_d0z0_v11_isolLoose;
   Float_t         lep_0_NOMINAL_effSF_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_TightLLH_d0z0_v11_isolLooseTrackOnly;
   Float_t         lep_0_NOMINAL_effSF_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_TightLLH_d0z0_v11_isolTight;
   Float_t         lep_0_NOMINAL_effSF_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_TightLLH_d0z0_v11;
   Float_t         lep_0_NOMINAL_eff_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose;
   Float_t         lep_0_NOMINAL_eff_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly;
   Float_t         lep_0_NOMINAL_eff_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11;
   Float_t         lep_0_NOMINAL_eff_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_MediumLLH_d0z0_v11_isolGradient;
   Float_t         lep_0_NOMINAL_eff_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_MediumLLH_d0z0_v11_isolLoose;
   Float_t         lep_0_NOMINAL_eff_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_MediumLLH_d0z0_v11_isolLooseTrackOnly;
   Float_t         lep_0_NOMINAL_eff_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_MediumLLH_d0z0_v11;
   Float_t         lep_0_NOMINAL_eff_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_TightLLH_d0z0_v11_isolGradient;
   Float_t         lep_0_NOMINAL_eff_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_TightLLH_d0z0_v11_isolLoose;
   Float_t         lep_0_NOMINAL_eff_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_TightLLH_d0z0_v11_isolLooseTrackOnly;
   Float_t         lep_0_NOMINAL_eff_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_TightLLH_d0z0_v11_isolTight;
   Float_t         lep_0_NOMINAL_eff_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_TightLLH_d0z0_v11;
   Float_t         lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose;
   Float_t         lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly;
   Float_t         lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_LooseAndBLayerLLH_d0z0_v11;
   Float_t         lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_MediumLLH_d0z0_v11_isolGradient;
   Float_t         lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_MediumLLH_d0z0_v11_isolLoose;
   Float_t         lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_MediumLLH_d0z0_v11_isolLooseTrackOnly;
   Float_t         lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_MediumLLH_d0z0_v11;
   Float_t         lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_TightLLH_d0z0_v11_isolGradient;
   Float_t         lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_TightLLH_d0z0_v11_isolLoose;
   Float_t         lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_TightLLH_d0z0_v11_isolLooseTrackOnly;
   Float_t         lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_TightLLH_d0z0_v11_isolTight;
   Float_t         lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_TightLLH_d0z0_v11;
   Float_t         lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose;
   Float_t         lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly;
   Float_t         lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_LooseAndBLayerLLH_d0z0_v11;
   Float_t         lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_MediumLLH_d0z0_v11_isolGradient;
   Float_t         lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_MediumLLH_d0z0_v11_isolLoose;
   Float_t         lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_MediumLLH_d0z0_v11_isolLooseTrackOnly;
   Float_t         lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_MediumLLH_d0z0_v11;
   Float_t         lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_TightLLH_d0z0_v11_isolGradient;
   Float_t         lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_TightLLH_d0z0_v11_isolLoose;
   Float_t         lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_TightLLH_d0z0_v11_isolLooseTrackOnly;
   Float_t         lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_TightLLH_d0z0_v11_isolTight;
   Float_t         lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_TightLLH_d0z0_v11;
   Float_t         lep_0_NOMINAL_eff_DI_E_2015_e17_lhloose_2016_e17_lhloose_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose;
   Float_t         lep_0_NOMINAL_eff_DI_E_2015_e17_lhloose_2016_e17_lhloose_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly;
   Float_t         lep_0_NOMINAL_eff_DI_E_2015_e17_lhloose_2016_e17_lhloose_LooseAndBLayerLLH_d0z0_v11;
   Float_t         lep_0_NOMINAL_eff_DI_E_2015_e17_lhloose_2016_e17_lhloose_MediumLLH_d0z0_v11_isolGradient;
   Float_t         lep_0_NOMINAL_eff_DI_E_2015_e17_lhloose_2016_e17_lhloose_MediumLLH_d0z0_v11_isolLoose;
   Float_t         lep_0_NOMINAL_eff_DI_E_2015_e17_lhloose_2016_e17_lhloose_MediumLLH_d0z0_v11_isolLooseTrackOnly;
   Float_t         lep_0_NOMINAL_eff_DI_E_2015_e17_lhloose_2016_e17_lhloose_MediumLLH_d0z0_v11;
   Float_t         lep_0_NOMINAL_eff_DI_E_2015_e17_lhloose_2016_e17_lhloose_TightLLH_d0z0_v11_isolGradient;
   Float_t         lep_0_NOMINAL_eff_DI_E_2015_e17_lhloose_2016_e17_lhloose_TightLLH_d0z0_v11_isolLoose;
   Float_t         lep_0_NOMINAL_eff_DI_E_2015_e17_lhloose_2016_e17_lhloose_TightLLH_d0z0_v11_isolLooseTrackOnly;
   Float_t         lep_0_NOMINAL_eff_DI_E_2015_e17_lhloose_2016_e17_lhloose_TightLLH_d0z0_v11_isolTight;
   Float_t         lep_0_NOMINAL_eff_DI_E_2015_e17_lhloose_2016_e17_lhloose_TightLLH_d0z0_v11;
   Float_t         lep_0_NOMINAL_eff_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose;
   Float_t         lep_0_NOMINAL_eff_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly;
   Float_t         lep_0_NOMINAL_eff_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11;
   Float_t         lep_0_NOMINAL_eff_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_MediumLLH_d0z0_v11_isolGradient;
   Float_t         lep_0_NOMINAL_eff_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_MediumLLH_d0z0_v11_isolLoose;
   Float_t         lep_0_NOMINAL_eff_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_MediumLLH_d0z0_v11_isolLooseTrackOnly;
   Float_t         lep_0_NOMINAL_eff_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_MediumLLH_d0z0_v11;
   Float_t         lep_0_NOMINAL_eff_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11_isolGradient;
   Float_t         lep_0_NOMINAL_eff_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11_isolLoose;
   Float_t         lep_0_NOMINAL_eff_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11_isolLooseTrackOnly;
   Float_t         lep_0_NOMINAL_eff_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11_isolTight;
   Float_t         lep_0_NOMINAL_eff_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11;
   Float_t         lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose;
   Float_t         lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly;
   Float_t         lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11;
   Float_t         lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_MediumLLH_d0z0_v11_isolGradient;
   Float_t         lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_MediumLLH_d0z0_v11_isolLoose;
   Float_t         lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_MediumLLH_d0z0_v11_isolLooseTrackOnly;
   Float_t         lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_MediumLLH_d0z0_v11;
   Float_t         lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_TightLLH_d0z0_v11_isolGradient;
   Float_t         lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_TightLLH_d0z0_v11_isolLoose;
   Float_t         lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_TightLLH_d0z0_v11_isolLooseTrackOnly;
   Float_t         lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_TightLLH_d0z0_v11_isolTight;
   Float_t         lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_TightLLH_d0z0_v11;
   Float_t         lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose;
   Float_t         lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly;
   Float_t         lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_LooseAndBLayerLLH_d0z0_v11;
   Float_t         lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_MediumLLH_d0z0_v11_isolGradient;
   Float_t         lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_MediumLLH_d0z0_v11_isolLoose;
   Float_t         lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_MediumLLH_d0z0_v11_isolLooseTrackOnly;
   Float_t         lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_MediumLLH_d0z0_v11;
   Float_t         lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_TightLLH_d0z0_v11_isolGradient;
   Float_t         lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_TightLLH_d0z0_v11_isolLoose;
   Float_t         lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_TightLLH_d0z0_v11_isolLooseTrackOnly;
   Float_t         lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_TightLLH_d0z0_v11_isolTight;
   Float_t         lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_TightLLH_d0z0_v11;
   Float_t         lep_0_NOMINAL_eff_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose;
   Float_t         lep_0_NOMINAL_eff_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly;
   Float_t         lep_0_NOMINAL_eff_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11;
   Float_t         lep_0_NOMINAL_eff_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_MediumLLH_d0z0_v11_isolGradient;
   Float_t         lep_0_NOMINAL_eff_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_MediumLLH_d0z0_v11_isolLoose;
   Float_t         lep_0_NOMINAL_eff_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_MediumLLH_d0z0_v11_isolLooseTrackOnly;
   Float_t         lep_0_NOMINAL_eff_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_MediumLLH_d0z0_v11;
   Float_t         lep_0_NOMINAL_eff_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_TightLLH_d0z0_v11_isolGradient;
   Float_t         lep_0_NOMINAL_eff_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_TightLLH_d0z0_v11_isolLoose;
   Float_t         lep_0_NOMINAL_eff_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_TightLLH_d0z0_v11_isolLooseTrackOnly;
   Float_t         lep_0_NOMINAL_eff_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_TightLLH_d0z0_v11_isolTight;
   Float_t         lep_0_NOMINAL_eff_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_TightLLH_d0z0_v11;
   Float_t         lep_0_NOMINAL_eff_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose;
   Float_t         lep_0_NOMINAL_eff_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly;
   Float_t         lep_0_NOMINAL_eff_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11;
   Float_t         lep_0_NOMINAL_eff_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_MediumLLH_d0z0_v11_isolGradient;
   Float_t         lep_0_NOMINAL_eff_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_MediumLLH_d0z0_v11_isolLoose;
   Float_t         lep_0_NOMINAL_eff_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_MediumLLH_d0z0_v11_isolLooseTrackOnly;
   Float_t         lep_0_NOMINAL_eff_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_MediumLLH_d0z0_v11;
   Float_t         lep_0_NOMINAL_eff_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11_isolGradient;
   Float_t         lep_0_NOMINAL_eff_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11_isolLoose;
   Float_t         lep_0_NOMINAL_eff_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11_isolLooseTrackOnly;
   Float_t         lep_0_NOMINAL_eff_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11_isolTight;
   Float_t         lep_0_NOMINAL_eff_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11;
   Float_t         lep_0_NOMINAL_eff_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose;
   Float_t         lep_0_NOMINAL_eff_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly;
   Float_t         lep_0_NOMINAL_eff_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_LooseAndBLayerLLH_d0z0_v11;
   Float_t         lep_0_NOMINAL_eff_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_MediumLLH_d0z0_v11_isolGradient;
   Float_t         lep_0_NOMINAL_eff_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_MediumLLH_d0z0_v11_isolLoose;
   Float_t         lep_0_NOMINAL_eff_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_MediumLLH_d0z0_v11_isolLooseTrackOnly;
   Float_t         lep_0_NOMINAL_eff_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_MediumLLH_d0z0_v11;
   Float_t         lep_0_NOMINAL_eff_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_TightLLH_d0z0_v11_isolGradient;
   Float_t         lep_0_NOMINAL_eff_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_TightLLH_d0z0_v11_isolLoose;
   Float_t         lep_0_NOMINAL_eff_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_TightLLH_d0z0_v11_isolLooseTrackOnly;
   Float_t         lep_0_NOMINAL_eff_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_TightLLH_d0z0_v11_isolTight;
   Float_t         lep_0_NOMINAL_eff_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_TightLLH_d0z0_v11;
   Float_t         lep_0_NOMINAL_eff_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose;
   Float_t         lep_0_NOMINAL_eff_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly;
   Float_t         lep_0_NOMINAL_eff_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_LooseAndBLayerLLH_d0z0_v11;
   Float_t         lep_0_NOMINAL_eff_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_MediumLLH_d0z0_v11_isolGradient;
   Float_t         lep_0_NOMINAL_eff_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_MediumLLH_d0z0_v11_isolLoose;
   Float_t         lep_0_NOMINAL_eff_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_MediumLLH_d0z0_v11_isolLooseTrackOnly;
   Float_t         lep_0_NOMINAL_eff_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_MediumLLH_d0z0_v11;
   Float_t         lep_0_NOMINAL_eff_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_TightLLH_d0z0_v11_isolGradient;
   Float_t         lep_0_NOMINAL_eff_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_TightLLH_d0z0_v11_isolLoose;
   Float_t         lep_0_NOMINAL_eff_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_TightLLH_d0z0_v11_isolLooseTrackOnly;
   Float_t         lep_0_NOMINAL_eff_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_TightLLH_d0z0_v11_isolTight;
   Float_t         lep_0_NOMINAL_eff_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_TightLLH_d0z0_v11;
   Float_t         tau_0_NOMINAL_TauEffSF_reco;
   Float_t         tau_0_TAUS_TRUEHADTAU_EFF_RECO_HIGHPT_1down_TauEffSF_reco;
   Float_t         tau_0_TAUS_TRUEHADTAU_EFF_RECO_HIGHPT_1up_TauEffSF_reco;
   Float_t         tau_0_TAUS_TRUEHADTAU_EFF_RECO_TOTAL_1down_TauEffSF_reco;
   Float_t         tau_0_TAUS_TRUEHADTAU_EFF_RECO_TOTAL_1up_TauEffSF_reco;
   Float_t         tau_0_NOMINAL_TauEffSF_selection;
   Float_t         tau_0_TAUS_TRUEELECTRON_EFF_ELEOLR_TOTAL_1down_TauEffSF_selection;
   Float_t         tau_0_TAUS_TRUEELECTRON_EFF_ELEOLR_TOTAL_1up_TauEffSF_selection;
   Float_t         tau_0_TAUS_TRUEHADTAU_EFF_ELEOLR_TOTAL_1down_TauEffSF_selection;
   Float_t         tau_0_TAUS_TRUEHADTAU_EFF_ELEOLR_TOTAL_1up_TauEffSF_selection;
   Float_t         tau_0_TAUS_TRUEHADTAU_EFF_RECO_HIGHPT_1down_TauEffSF_selection;
   Float_t         tau_0_TAUS_TRUEHADTAU_EFF_RECO_HIGHPT_1up_TauEffSF_selection;
   Float_t         tau_0_TAUS_TRUEHADTAU_EFF_RECO_TOTAL_1down_TauEffSF_selection;
   Float_t         tau_0_TAUS_TRUEHADTAU_EFF_RECO_TOTAL_1up_TauEffSF_selection;
   Float_t         tau_0_NOMINAL_TauEffSF_JetBDTloose;
   Float_t         tau_0_NOMINAL_TauEffSF_JetBDTmedium;
   Float_t         tau_0_NOMINAL_TauEffSF_JetBDTtight;
   Float_t         tau_0_TAUS_TRUEHADTAU_EFF_JETID_HIGHPT_1down_TauEffSF_JetBDTloose;
   Float_t         tau_0_TAUS_TRUEHADTAU_EFF_JETID_HIGHPT_1down_TauEffSF_JetBDTmedium;
   Float_t         tau_0_TAUS_TRUEHADTAU_EFF_JETID_HIGHPT_1down_TauEffSF_JetBDTtight;
   Float_t         tau_0_TAUS_TRUEHADTAU_EFF_JETID_HIGHPT_1up_TauEffSF_JetBDTloose;
   Float_t         tau_0_TAUS_TRUEHADTAU_EFF_JETID_HIGHPT_1up_TauEffSF_JetBDTmedium;
   Float_t         tau_0_TAUS_TRUEHADTAU_EFF_JETID_HIGHPT_1up_TauEffSF_JetBDTtight;
   Float_t         tau_0_TAUS_TRUEHADTAU_EFF_JETID_TOTAL_1down_TauEffSF_JetBDTloose;
   Float_t         tau_0_TAUS_TRUEHADTAU_EFF_JETID_TOTAL_1down_TauEffSF_JetBDTmedium;
   Float_t         tau_0_TAUS_TRUEHADTAU_EFF_JETID_TOTAL_1down_TauEffSF_JetBDTtight;
   Float_t         tau_0_TAUS_TRUEHADTAU_EFF_JETID_TOTAL_1up_TauEffSF_JetBDTloose;
   Float_t         tau_0_TAUS_TRUEHADTAU_EFF_JETID_TOTAL_1up_TauEffSF_JetBDTmedium;
   Float_t         tau_0_TAUS_TRUEHADTAU_EFF_JETID_TOTAL_1up_TauEffSF_JetBDTtight;
   Float_t         tau_0_NOMINAL_TauEffSF_LooseLlhEleOLR_electron;
   Float_t         tau_0_NOMINAL_TauEffSF_MediumLlhEleOLR_electron;
   Float_t         tau_0_NOMINAL_TauEffSF_TightLlhEleOLR_electron;
   Float_t         tau_0_NOMINAL_TauEffSF_VeryLooseLlhEleOLR_electron;
   Float_t         tau_0_TAUS_TRUEELECTRON_EFF_ELEOLR_TOTAL_1down_TauEffSF_LooseLlhEleOLR_electron;
   Float_t         tau_0_TAUS_TRUEELECTRON_EFF_ELEOLR_TOTAL_1down_TauEffSF_MediumLlhEleOLR_electron;
   Float_t         tau_0_TAUS_TRUEELECTRON_EFF_ELEOLR_TOTAL_1down_TauEffSF_TightLlhEleOLR_electron;
   Float_t         tau_0_TAUS_TRUEELECTRON_EFF_ELEOLR_TOTAL_1down_TauEffSF_VeryLooseLlhEleOLR_electron;
   Float_t         tau_0_TAUS_TRUEELECTRON_EFF_ELEOLR_TOTAL_1up_TauEffSF_LooseLlhEleOLR_electron;
   Float_t         tau_0_TAUS_TRUEELECTRON_EFF_ELEOLR_TOTAL_1up_TauEffSF_MediumLlhEleOLR_electron;
   Float_t         tau_0_TAUS_TRUEELECTRON_EFF_ELEOLR_TOTAL_1up_TauEffSF_TightLlhEleOLR_electron;
   Float_t         tau_0_TAUS_TRUEELECTRON_EFF_ELEOLR_TOTAL_1up_TauEffSF_VeryLooseLlhEleOLR_electron;
   Float_t         tau_0_NOMINAL_TauEffSF_HadTauEleOLR_tauhad;
   Float_t         tau_0_TAUS_TRUEHADTAU_EFF_ELEOLR_TOTAL_1down_TauEffSF_HadTauEleOLR_tauhad;
   Float_t         tau_0_TAUS_TRUEHADTAU_EFF_ELEOLR_TOTAL_1up_TauEffSF_HadTauEleOLR_tauhad;
   Float_t         jet_0_NOMINAL_effSF_MVX;
   Float_t         jet_0_NOMINAL_ineffSF_MVX;
   Float_t         jet_0_FT_EFF_Eigen_B_0_1down_effSF_MVX;
   Float_t         jet_0_FT_EFF_Eigen_B_0_1down_ineffSF_MVX;
   Float_t         jet_0_FT_EFF_Eigen_B_0_1up_effSF_MVX;
   Float_t         jet_0_FT_EFF_Eigen_B_0_1up_ineffSF_MVX;
   Float_t         jet_0_FT_EFF_Eigen_B_1_1down_effSF_MVX;
   Float_t         jet_0_FT_EFF_Eigen_B_1_1down_ineffSF_MVX;
   Float_t         jet_0_FT_EFF_Eigen_B_1_1up_effSF_MVX;
   Float_t         jet_0_FT_EFF_Eigen_B_1_1up_ineffSF_MVX;
   Float_t         jet_0_FT_EFF_Eigen_B_2_1down_effSF_MVX;
   Float_t         jet_0_FT_EFF_Eigen_B_2_1down_ineffSF_MVX;
   Float_t         jet_0_FT_EFF_Eigen_B_2_1up_effSF_MVX;
   Float_t         jet_0_FT_EFF_Eigen_B_2_1up_ineffSF_MVX;
   Float_t         jet_0_FT_EFF_Eigen_C_0_1down_effSF_MVX;
   Float_t         jet_0_FT_EFF_Eigen_C_0_1down_ineffSF_MVX;
   Float_t         jet_0_FT_EFF_Eigen_C_0_1up_effSF_MVX;
   Float_t         jet_0_FT_EFF_Eigen_C_0_1up_ineffSF_MVX;
   Float_t         jet_0_FT_EFF_Eigen_C_1_1down_effSF_MVX;
   Float_t         jet_0_FT_EFF_Eigen_C_1_1down_ineffSF_MVX;
   Float_t         jet_0_FT_EFF_Eigen_C_1_1up_effSF_MVX;
   Float_t         jet_0_FT_EFF_Eigen_C_1_1up_ineffSF_MVX;
   Float_t         jet_0_FT_EFF_Eigen_C_2_1down_effSF_MVX;
   Float_t         jet_0_FT_EFF_Eigen_C_2_1down_ineffSF_MVX;
   Float_t         jet_0_FT_EFF_Eigen_C_2_1up_effSF_MVX;
   Float_t         jet_0_FT_EFF_Eigen_C_2_1up_ineffSF_MVX;
   Float_t         jet_0_FT_EFF_Eigen_C_3_1down_effSF_MVX;
   Float_t         jet_0_FT_EFF_Eigen_C_3_1down_ineffSF_MVX;
   Float_t         jet_0_FT_EFF_Eigen_C_3_1up_effSF_MVX;
   Float_t         jet_0_FT_EFF_Eigen_C_3_1up_ineffSF_MVX;
   Float_t         jet_0_FT_EFF_Eigen_Light_0_1down_effSF_MVX;
   Float_t         jet_0_FT_EFF_Eigen_Light_0_1down_ineffSF_MVX;
   Float_t         jet_0_FT_EFF_Eigen_Light_0_1up_effSF_MVX;
   Float_t         jet_0_FT_EFF_Eigen_Light_0_1up_ineffSF_MVX;
   Float_t         jet_0_FT_EFF_Eigen_Light_1_1down_effSF_MVX;
   Float_t         jet_0_FT_EFF_Eigen_Light_1_1down_ineffSF_MVX;
   Float_t         jet_0_FT_EFF_Eigen_Light_1_1up_effSF_MVX;
   Float_t         jet_0_FT_EFF_Eigen_Light_1_1up_ineffSF_MVX;
   Float_t         jet_0_FT_EFF_Eigen_Light_2_1down_effSF_MVX;
   Float_t         jet_0_FT_EFF_Eigen_Light_2_1down_ineffSF_MVX;
   Float_t         jet_0_FT_EFF_Eigen_Light_2_1up_effSF_MVX;
   Float_t         jet_0_FT_EFF_Eigen_Light_2_1up_ineffSF_MVX;
   Float_t         jet_0_FT_EFF_Eigen_Light_3_1down_effSF_MVX;
   Float_t         jet_0_FT_EFF_Eigen_Light_3_1down_ineffSF_MVX;
   Float_t         jet_0_FT_EFF_Eigen_Light_3_1up_effSF_MVX;
   Float_t         jet_0_FT_EFF_Eigen_Light_3_1up_ineffSF_MVX;
   Float_t         jet_0_FT_EFF_Eigen_Light_4_1down_effSF_MVX;
   Float_t         jet_0_FT_EFF_Eigen_Light_4_1down_ineffSF_MVX;
   Float_t         jet_0_FT_EFF_Eigen_Light_4_1up_effSF_MVX;
   Float_t         jet_0_FT_EFF_Eigen_Light_4_1up_ineffSF_MVX;
   Float_t         jet_0_FT_EFF_extrapolation_1down_effSF_MVX;
   Float_t         jet_0_FT_EFF_extrapolation_1down_ineffSF_MVX;
   Float_t         jet_0_FT_EFF_extrapolation_1up_effSF_MVX;
   Float_t         jet_0_FT_EFF_extrapolation_1up_ineffSF_MVX;
   Float_t         jet_0_FT_EFF_extrapolation_from_charm_1down_effSF_MVX;
   Float_t         jet_0_FT_EFF_extrapolation_from_charm_1down_ineffSF_MVX;
   Float_t         jet_0_FT_EFF_extrapolation_from_charm_1up_effSF_MVX;
   Float_t         jet_0_FT_EFF_extrapolation_from_charm_1up_ineffSF_MVX;
   Float_t         jet_0_NOMINAL_effSF_JVT;
   Float_t         jet_NOMINAL_global_effSF_MVX;
   Float_t         jet_NOMINAL_global_ineffSF_MVX;
   Float_t         jet_FT_EFF_Eigen_B_0_1down_global_effSF_MVX;
   Float_t         jet_FT_EFF_Eigen_B_0_1down_global_ineffSF_MVX;
   Float_t         jet_FT_EFF_Eigen_B_0_1up_global_effSF_MVX;
   Float_t         jet_FT_EFF_Eigen_B_0_1up_global_ineffSF_MVX;
   Float_t         jet_FT_EFF_Eigen_B_1_1down_global_effSF_MVX;
   Float_t         jet_FT_EFF_Eigen_B_1_1down_global_ineffSF_MVX;
   Float_t         jet_FT_EFF_Eigen_B_1_1up_global_effSF_MVX;
   Float_t         jet_FT_EFF_Eigen_B_1_1up_global_ineffSF_MVX;
   Float_t         jet_FT_EFF_Eigen_B_2_1down_global_effSF_MVX;
   Float_t         jet_FT_EFF_Eigen_B_2_1down_global_ineffSF_MVX;
   Float_t         jet_FT_EFF_Eigen_B_2_1up_global_effSF_MVX;
   Float_t         jet_FT_EFF_Eigen_B_2_1up_global_ineffSF_MVX;
   Float_t         jet_FT_EFF_Eigen_C_0_1down_global_effSF_MVX;
   Float_t         jet_FT_EFF_Eigen_C_0_1down_global_ineffSF_MVX;
   Float_t         jet_FT_EFF_Eigen_C_0_1up_global_effSF_MVX;
   Float_t         jet_FT_EFF_Eigen_C_0_1up_global_ineffSF_MVX;
   Float_t         jet_FT_EFF_Eigen_C_1_1down_global_effSF_MVX;
   Float_t         jet_FT_EFF_Eigen_C_1_1down_global_ineffSF_MVX;
   Float_t         jet_FT_EFF_Eigen_C_1_1up_global_effSF_MVX;
   Float_t         jet_FT_EFF_Eigen_C_1_1up_global_ineffSF_MVX;
   Float_t         jet_FT_EFF_Eigen_C_2_1down_global_effSF_MVX;
   Float_t         jet_FT_EFF_Eigen_C_2_1down_global_ineffSF_MVX;
   Float_t         jet_FT_EFF_Eigen_C_2_1up_global_effSF_MVX;
   Float_t         jet_FT_EFF_Eigen_C_2_1up_global_ineffSF_MVX;
   Float_t         jet_FT_EFF_Eigen_C_3_1down_global_effSF_MVX;
   Float_t         jet_FT_EFF_Eigen_C_3_1down_global_ineffSF_MVX;
   Float_t         jet_FT_EFF_Eigen_C_3_1up_global_effSF_MVX;
   Float_t         jet_FT_EFF_Eigen_C_3_1up_global_ineffSF_MVX;
   Float_t         jet_FT_EFF_Eigen_Light_0_1down_global_effSF_MVX;
   Float_t         jet_FT_EFF_Eigen_Light_0_1down_global_ineffSF_MVX;
   Float_t         jet_FT_EFF_Eigen_Light_0_1up_global_effSF_MVX;
   Float_t         jet_FT_EFF_Eigen_Light_0_1up_global_ineffSF_MVX;
   Float_t         jet_FT_EFF_Eigen_Light_1_1down_global_effSF_MVX;
   Float_t         jet_FT_EFF_Eigen_Light_1_1down_global_ineffSF_MVX;
   Float_t         jet_FT_EFF_Eigen_Light_1_1up_global_effSF_MVX;
   Float_t         jet_FT_EFF_Eigen_Light_1_1up_global_ineffSF_MVX;
   Float_t         jet_FT_EFF_Eigen_Light_2_1down_global_effSF_MVX;
   Float_t         jet_FT_EFF_Eigen_Light_2_1down_global_ineffSF_MVX;
   Float_t         jet_FT_EFF_Eigen_Light_2_1up_global_effSF_MVX;
   Float_t         jet_FT_EFF_Eigen_Light_2_1up_global_ineffSF_MVX;
   Float_t         jet_FT_EFF_Eigen_Light_3_1down_global_effSF_MVX;
   Float_t         jet_FT_EFF_Eigen_Light_3_1down_global_ineffSF_MVX;
   Float_t         jet_FT_EFF_Eigen_Light_3_1up_global_effSF_MVX;
   Float_t         jet_FT_EFF_Eigen_Light_3_1up_global_ineffSF_MVX;
   Float_t         jet_FT_EFF_Eigen_Light_4_1down_global_effSF_MVX;
   Float_t         jet_FT_EFF_Eigen_Light_4_1down_global_ineffSF_MVX;
   Float_t         jet_FT_EFF_Eigen_Light_4_1up_global_effSF_MVX;
   Float_t         jet_FT_EFF_Eigen_Light_4_1up_global_ineffSF_MVX;
   Float_t         jet_FT_EFF_extrapolation_1down_global_effSF_MVX;
   Float_t         jet_FT_EFF_extrapolation_1down_global_ineffSF_MVX;
   Float_t         jet_FT_EFF_extrapolation_1up_global_effSF_MVX;
   Float_t         jet_FT_EFF_extrapolation_1up_global_ineffSF_MVX;
   Float_t         jet_FT_EFF_extrapolation_from_charm_1down_global_effSF_MVX;
   Float_t         jet_FT_EFF_extrapolation_from_charm_1down_global_ineffSF_MVX;
   Float_t         jet_FT_EFF_extrapolation_from_charm_1up_global_effSF_MVX;
   Float_t         jet_FT_EFF_extrapolation_from_charm_1up_global_ineffSF_MVX;
   Float_t         jet_NOMINAL_global_effSF_JVT;
   Float_t         NOMINAL_pileup_combined_weight;
   Float_t         PRW_DATASF_1down_pileup_combined_weight;
   Float_t         PRW_DATASF_1up_pileup_combined_weight;
   UInt_t          HLT_e120_lhloose;
   UInt_t          HLT_e120_lhloose_nod0;
   UInt_t          HLT_e140_lhloose;
   UInt_t          HLT_e140_lhloose_nod0;
   UInt_t          HLT_e17_lhloose_nod0_L1EM15;
   UInt_t          HLT_e24_lhmedium_iloose_L1EM18VH;
   UInt_t          HLT_e24_lhmedium_iloose_L1EM20VH;
   UInt_t          HLT_e24_lhtight_iloose;
   UInt_t          HLT_e26_lhtight_iloose;
   UInt_t          HLT_e60_lhmedium;
   UInt_t          HLT_mu24_imedium;
   UInt_t          HLT_mu26_imedium;
   UInt_t          HLT_mu26_ivarmedium;
   UInt_t          HLT_mu50;
   UInt_t          HLT_tau125_medium1_tracktwo_resurrected;
   UInt_t          HLT_tau160_medium1_tracktwo_resurrected;
   UInt_t          HLT_tau25_idperf_track_resurrected;
   UInt_t          HLT_tau25_idperf_tracktwo_resurrected;
   UInt_t          HLT_tau25_loose1_ptonly_resurrected;
   UInt_t          HLT_tau25_loose1_tracktwo_resurrected;
   UInt_t          HLT_tau25_medium1_mvonly_resurrected;
   UInt_t          HLT_tau25_medium1_ptonly_resurrected;
   UInt_t          HLT_tau25_medium1_track_resurrected;
   UInt_t          HLT_tau25_medium1_tracktwo_resurrected;
   UInt_t          HLT_tau25_medium1_tracktwo_L1TAU12_resurrected;
   UInt_t          HLT_tau25_medium1_tracktwo_L1TAU12IL_resurrected;
   UInt_t          HLT_tau25_medium1_tracktwo_L1TAU12IT_resurrected;
   UInt_t          HLT_tau25_perf_ptonly_resurrected;
   UInt_t          HLT_tau25_perf_track_resurrected;
   UInt_t          HLT_tau25_perf_tracktwo_resurrected;
   UInt_t          HLT_tau25_tight1_ptonly_resurrected;
   UInt_t          HLT_tau25_tight1_tracktwo_resurrected;
   UInt_t          HLT_tau35_medium1_tracktwo_resurrected;
   UInt_t          HLT_tau50_medium1_tracktwo_L1TAU12_resurrected;
   UInt_t          HLT_tau80_medium1_tracktwo_resurrected;
   UInt_t          HLT_tau80_medium1_tracktwo_L1TAU60_resurrected;
   UInt_t          L1_TAU12_resurrected;
   UInt_t          L1_TAU12IM_resurrected;
   UInt_t          L1_TAU20_resurrected;
   UInt_t          L1_TAU20IM_resurrected;
   Float_t         tau_0_id_centFracCorrected;
   Float_t         tau_0_id_etOverPtLeadTrkCorrected;
   Float_t         tau_0_id_innerTrkAvgDistCorrected;
   Float_t         tau_0_id_ipSigLeadTrkCorrected;
   Float_t         tau_0_id_SumPtTrkFracCorrected;
   Float_t         tau_0_id_ptRatioEflowApproxCorrected;
   Float_t         tau_0_id_mEflowApproxCorrected;
   Float_t         tau_0_id_ChPiEMEOverCaloEMECorrected;
   Float_t         tau_0_id_EMPOverTrkSysPCorrected;
   Float_t         tau_0_id_dRmaxCorrected;
   Float_t         tau_0_id_trFlightPathSigCorrected;
   Float_t         tau_0_id_massTrkSysCorrected;
   Float_t         tau_0_id_centFrac;
   Float_t         tau_0_id_etOverPtLeadTrk;
   Float_t         tau_0_id_innerTrkAvgDist;
   Float_t         tau_0_id_ipSigLeadTrk;
   Float_t         tau_0_id_SumPtTrkFrac;
   Float_t         tau_0_id_ptRatioEflowApprox;
   Float_t         tau_0_id_mEflowApprox;
   Float_t         tau_0_id_ChPiEMEOverCaloEME;
   Float_t         tau_0_id_EMPOverTrkSysP;
   Float_t         tau_0_id_dRmax;
   Float_t         tau_0_id_trFlightPathSig;
   Float_t         tau_0_id_massTrkSys;
   UInt_t          tau_0_truth;
   Float_t         tau_0_truth_eta;
   Float_t         tau_0_truth_phi;
   Float_t         tau_0_truth_pt;
   Float_t         tau_0_truth_et;
   Float_t         tau_0_truth_m;
   Float_t         tau_0_truth_q;
   Int_t           tau_0_truth_pdgId;
   Int_t           tau_0_truth_mother_pdgId;
   Int_t           tau_0_truth_origin;
   Int_t           tau_0_truth_type;
   Int_t           tau_0_truth_isTau;
   Int_t           tau_0_truth_isHadTau;
   Int_t           tau_0_truth_isEle;
   Int_t           tau_0_truth_isMuon;
   Int_t           tau_0_truth_isJet;
   UInt_t          tau_0_truth_classifierParticleType;
   UInt_t          tau_0_truth_classifierParticleOrigin;
   Float_t         tau_0_truth_pt_vis;
   Float_t         tau_0_truth_eta_vis;
   Float_t         tau_0_truth_phi_vis;
   Float_t         tau_0_truth_m_vis;
   Int_t           tau_0_truth_decay_mode;
   Int_t           tau_0_truth_n_charged;
   Int_t           tau_0_truth_n_charged_pion;
   Int_t           tau_0_truth_n_neutral;
   Int_t           tau_0_truth_n_neutral_pion;
   UInt_t          lep_0_matched;
   Float_t         lep_0_matched_eta;
   Float_t         lep_0_matched_phi;
   Float_t         lep_0_matched_pt;
   Float_t         lep_0_matched_et;
   Float_t         lep_0_matched_m;
   Float_t         lep_0_matched_q;
   Int_t           lep_0_matched_pdgId;
   Int_t           lep_0_matched_mother_pdgId;
   Int_t           lep_0_matched_isHad;
   Int_t           lep_0_matched_origin;
   Int_t           lep_0_matched_type;
   UInt_t          muTrigMatch_0_HLT_mu24_imedium;
   UInt_t          muTrigMatch_0_HLT_mu50;
   UInt_t          muTrigMatch_0_HLT_mu26_ivarmedium;
   UInt_t          muTrigMatch_0_HLT_mu26_imedium;
   UInt_t          eleTrigMatch_0_HLT_e26_lhtight_iloose;
   UInt_t          eleTrigMatch_0_HLT_e60_lhmedium;
   UInt_t          eleTrigMatch_0_HLT_e24_lhmedium_iloose_L1EM18VH;
   UInt_t          eleTrigMatch_0_HLT_e24_lhmedium_iloose_L1EM20VH;
   UInt_t          eleTrigMatch_0_HLT_e24_lhtight_iloose;
   UInt_t          eleTrigMatch_0_HLT_e120_lhloose;
   UInt_t          eleTrigMatch_0_HLT_e120_lhloose_nod0;
   UInt_t          eleTrigMatch_0_HLT_e17_lhloose_nod0_L1EM15;
   UInt_t          eleTrigMatch_0_HLT_e140_lhloose_nod0;
   UInt_t          eleTrigMatch_0_HLT_e140_lhloose;
   UInt_t          tau_0_trig_HLT_tau25_medium1_tracktwo;
   UInt_t          tau_0_trig_HLT_tau25_idperf_tracktwo;
   UInt_t          tau_0_trig_HLT_tau35_medium1_tracktwo;
   UInt_t          tau_0_trig_HLT_tau50_medium1_tracktwo_L1TAU12;
   UInt_t          tau_0_trig_HLT_tau80_medium1_tracktwo;
   UInt_t          tau_0_trig_HLT_tau80_medium1_tracktwo_L1TAU60;
   UInt_t          tau_0_trig_HLT_tau125_medium1_tracktwo;
   UInt_t          tau_0_trig_HLT_tau160_medium1_tracktwo;
   UInt_t          tau_0_trig_L1_TAU12IM;
   UInt_t          tau_0_trig_L1_TAU20IM;
   UInt_t          tau_0_trig_HLT_tau25_perf_ptonly;
   UInt_t          tau_0_trig_HLT_tau25_idperf_track;
   UInt_t          tau_0_trig_HLT_tau25_perf_track;
   UInt_t          tau_0_trig_HLT_tau25_perf_tracktwo;
   UInt_t          tau_0_trig_HLT_tau25_loose1_ptonly;
   UInt_t          tau_0_trig_HLT_tau25_loose1_tracktwo;
   UInt_t          tau_0_trig_HLT_tau25_medium1_mvonly;
   UInt_t          tau_0_trig_HLT_tau25_medium1_ptonly;
   UInt_t          tau_0_trig_HLT_tau25_medium1_track;
   UInt_t          tau_0_trig_HLT_tau25_tight1_ptonly;
   UInt_t          tau_0_trig_HLT_tau25_tight1_tracktwo;
   UInt_t          tau_0_trig_HLT_tau25_medium1_tracktwo_L1TAU12;
   UInt_t          tau_0_trig_HLT_tau25_medium1_tracktwo_L1TAU12IL;
   UInt_t          tau_0_trig_HLT_tau25_medium1_tracktwo_L1TAU12IT;
   UInt_t          tau_0_trig_L1_TAU12;
   UInt_t          tau_0_trig_L1_TAU20;
   UInt_t          tau_0;
   Float_t         tau_0_eta;
   Float_t         tau_0_phi;
   Float_t         tau_0_pt;
   Float_t         tau_0_et;
   Float_t         tau_0_m;
   Float_t         tau_0_q;
   UInt_t          tau_0_n_tracks;
   UInt_t          tau_0_n_wide_tracks;
   UInt_t          tau_0_jet_bdt_loose;
   UInt_t          tau_0_jet_bdt_medium;
   UInt_t          tau_0_jet_bdt_tight;
   Float_t         tau_0_jet_bdt_score;
   UInt_t          tau_0_ele_bdt_loose;
   UInt_t          tau_0_ele_bdt_medium;
   UInt_t          tau_0_ele_bdt_tight;
   Float_t         tau_0_ele_bdt_score;
   Float_t         tau_0_ele_bdt_eff_sf;
   Float_t         tau_0_ele_match_lhscore;
   UInt_t          tau_0_ele_olr_pass;
   UInt_t          tau_0_decay_mode;
   Float_t         tau_0_leadTrk_pt;
   Float_t         tau_0_leadTrk_eta;
   Float_t         tau_0_leadTrk_phi;
   Float_t         tau_0_mvx;
   Int_t           tau_0_mvx_tagged;
   Float_t         tau_0_ParticleFlowCombined_pt;
   Float_t         tau_0_ParticleFlowCombined_eta;
   Float_t         tau_0_ParticleFlowCombined_phi;
   Float_t         tau_0_ParticleFlowCombined_m;
   Int_t           lephad;
   Float_t         lephad_qxq;
   Float_t         lephad_dpt;
   Float_t         lephad_deta;
   Float_t         lephad_dphi;
   Float_t         lephad_dr;
   Float_t         lephad_vis_mass;
   Float_t         lephad_cosalpha;
   Float_t         lephad_vect_sum_pt;
   Float_t         lephad_scal_sum_pt;
   Float_t         lephad_ptx;
   Float_t         lephad_pty;
   Float_t         lephad_met_centrality;
   Int_t           lephad_met_bisect;
   Float_t         lephad_met_min_dphi;
   Float_t         lephad_met_sum_cos_dphi;
   Float_t         lephad_met_lep0_cos_dphi;
   Float_t         lephad_met_lep1_cos_dphi;
   Int_t           lephad_coll_approx;
   Float_t         lephad_coll_approx_m;
   Float_t         lephad_coll_approx_x0;
   Float_t         lephad_coll_approx_x1;
   Float_t         lephad_mt_lep0_met;
   Float_t         lephad_mt_lep1_met;
   Float_t         lephad_ParticleFlowCombined_dpt;
   Float_t         lephad_ParticleFlowCombined_deta;
   Float_t         lephad_ParticleFlowCombined_dphi;
   Float_t         lephad_ParticleFlowCombined_dr;
   Float_t         lephad_ParticleFlowCombined_vis_mass;
   Float_t         lephad_ParticleFlowCombined_cosalpha;
   Float_t         lephad_ParticleFlowCombined_vect_sum_pt;
   Float_t         lephad_ParticleFlowCombined_scal_sum_pt;
   Float_t         lephad_ParticleFlowCombined_met_centrality;
   Int_t           lephad_ParticleFlowCombined_met_bisect;
   Float_t         lephad_ParticleFlowCombined_met_min_dphi;
   Float_t         lephad_ParticleFlowCombined_met_sum_cos_dphi;
   Float_t         lephad_ParticleFlowCombined_met_lep0_cos_dphi;
   Float_t         lephad_ParticleFlowCombined_met_lep1_cos_dphi;
   Int_t           lephad_ParticleFlowCombined_coll_approx;
   Float_t         lephad_ParticleFlowCombined_coll_approx_m;
   Float_t         lephad_ParticleFlowCombined_coll_approx_x0;
   Float_t         lephad_ParticleFlowCombined_coll_approx_x1;
   Float_t         lephad_ParticleFlowCombined_mt_lep0_met;
   Float_t         lephad_ParticleFlowCombined_mt_lep1_met;
   UInt_t          jet_0;
   Float_t         jet_0_eta;
   Float_t         jet_0_phi;
   Float_t         jet_0_pt;
   Float_t         jet_0_et;
   Float_t         jet_0_m;
   Float_t         jet_0_q;
   Float_t         jet_0_jvt;
   Float_t         jet_0_mvx;
   Int_t           jet_0_mvx_tagged;
   Int_t           jet_0_flavorlabel;
   Int_t           jet_0_flavorlabel_part;
   Int_t           jet_0_flavorlabel_cone;
   Float_t         lep_0_iso_etcone20;
   Float_t         lep_0_iso_etcone30;
   Float_t         lep_0_iso_etcone40;
   Float_t         lep_0_iso_topoetcone20;
   Float_t         lep_0_iso_topoetcone30;
   Float_t         lep_0_iso_topoetcone40;
   Float_t         lep_0_iso_ptcone20;
   Float_t         lep_0_iso_ptcone30;
   Float_t         lep_0_iso_ptcone40;
   Float_t         lep_0_iso_ptvarcone20;
   Float_t         lep_0_iso_ptvarcone30;
   Float_t         lep_0_iso_ptvarcone40;
   UInt_t          lep_1;
   Float_t         lep_1_eta;
   Float_t         lep_1_phi;
   Float_t         lep_1_pt;
   Float_t         lep_1_et;
   Float_t         lep_1_m;
   Float_t         lep_1_q;
   Float_t         lep_1_trk_d0;
   Float_t         lep_1_trk_d0_sig;
   Float_t         lep_1_trk_z0;
   Float_t         lep_1_trk_z0_sintheta;
   Float_t         lep_1_trk_z0_sig;
   Float_t         lep_1_trk_pvx_z0;
   Float_t         lep_1_trk_pvx_z0_sintheta;
   Float_t         lep_1_trk_pvx_z0_sig;
   Float_t         lep_1_trk_pt_error;
   Int_t           lep_1_iso_wp;
   Int_t           lep_1_id_veryloose;
   Int_t           lep_1_id_loose;
   Int_t           lep_1_id_medium;
   Int_t           lep_1_id_tight;
   Int_t           lep_1_id_bad;
   Int_t           lep_1_muonType;
   Float_t         lep_1_cluster_eta;
   Float_t         lep_1_cluster_eta_be2;
   Double_t        dilep_m;
   UInt_t          tau_1;
   Float_t         tau_1_eta;
   Float_t         tau_1_phi;
   Float_t         tau_1_pt;
   Float_t         tau_1_et;
   Float_t         tau_1_m;
   Float_t         tau_1_q;
   UInt_t          tau_1_n_tracks;
   UInt_t          tau_1_n_wide_tracks;
   UInt_t          tau_1_jet_bdt_loose;
   UInt_t          tau_1_jet_bdt_medium;
   UInt_t          tau_1_jet_bdt_tight;
   Float_t         tau_1_jet_bdt_score;
   UInt_t          tau_1_ele_bdt_loose;
   UInt_t          tau_1_ele_bdt_medium;
   UInt_t          tau_1_ele_bdt_tight;
   Float_t         tau_1_ele_bdt_score;
   Float_t         tau_1_ele_bdt_eff_sf;
   Float_t         tau_1_ele_match_lhscore;
   UInt_t          tau_1_ele_olr_pass;
   UInt_t          tau_1_decay_mode;
   Float_t         tau_1_leadTrk_pt;
   Float_t         tau_1_leadTrk_eta;
   Float_t         tau_1_leadTrk_phi;
   Float_t         tau_1_mvx;
   Int_t           tau_1_mvx_tagged;
   Int_t           tau_0_sub_n_neutral;
   Int_t           tau_0_sub_n_charged;
   Float_t         tau_0_sub_PanTauCellBased_pt;
   Float_t         tau_0_sub_PanTauCellBased_eta;
   Float_t         tau_0_sub_PanTauCellBased_phi;
   Float_t         tau_0_sub_PanTauCellBased_m;
   Float_t         tau_0_sub_ctrk0_cellBased_pt;
   Float_t         tau_0_sub_ctrk0_cellBased_eta;
   Float_t         tau_0_sub_ctrk0_cellBased_phi;
   Float_t         tau_0_sub_ctrk1_cellBased_pt;
   Float_t         tau_0_sub_ctrk1_cellBased_eta;
   Float_t         tau_0_sub_ctrk1_cellBased_phi;
   Float_t         tau_0_sub_ctrk2_cellBased_pt;
   Float_t         tau_0_sub_ctrk2_cellBased_eta;
   Float_t         tau_0_sub_ctrk2_cellBased_phi;
   Float_t         tau_0_sub_ConstituentBased_pt;
   Float_t         tau_0_sub_ConstituentBased_eta;
   Float_t         tau_0_sub_ConstituentBased_phi;
   Float_t         tau_0_sub_ConstituentBased_m;
   Float_t         tau_0_sub_ParticleFlowCombined_pt;
   Float_t         tau_0_sub_ParticleFlowCombined_eta;
   Float_t         tau_0_sub_ParticleFlowCombined_phi;
   Float_t         tau_0_sub_ParticleFlowCombined_m;
   Float_t         tau_0_sub_neu0_bdtPi0Score;
   Float_t         tau_0_sub_neu0_cellBased_pt;
   Float_t         tau_0_sub_neu0_cellBased_eta;
   Float_t         tau_0_sub_neu0_cellBased_phi;
   Float_t         tau_0_sub_neu0_cellBased_FIRST_ETA;
   Float_t         tau_0_sub_neu0_cellBased_SECOND_R;
   Float_t         tau_0_sub_neu0_cellBased_SECOND_LAMBDA;
   Float_t         tau_0_sub_neu0_cellBased_DELTA_PHI;
   Float_t         tau_0_sub_neu0_cellBased_DELTA_THETA;
   Float_t         tau_0_sub_neu0_cellBased_CENTER_LAMBDA;
   Float_t         tau_0_sub_neu0_cellBased_LATERAL;
   Float_t         tau_0_sub_neu0_cellBased_LONGITUDINAL;
   Float_t         tau_0_sub_neu0_cellBased_ENG_FRAC_EM;
   Float_t         tau_0_sub_neu0_cellBased_ENG_FRAC_MAX;
   Float_t         tau_0_sub_neu0_cellBased_ENG_FRAC_CORE;
   Float_t         tau_0_sub_neu0_cellBased_SECOND_ENG_DENS;
   Float_t         tau_0_sub_neu0_cellBased_EM1CoreFrac;
   Float_t         tau_0_sub_neu0_cellBased_asymmetryInEM1WRTTrk;
   Int_t           tau_0_sub_neu0_cellBased_NHitsInEM1;
   Int_t           tau_0_sub_neu0_cellBased_NPosECells_PS;
   Int_t           tau_0_sub_neu0_cellBased_NPosECells_EM1;
   Int_t           tau_0_sub_neu0_cellBased_NPosECells_EM2;
   Float_t         tau_0_sub_neu0_cellBased_firstEtaWRTClusterPosition_EM1;
   Float_t         tau_0_sub_neu0_cellBased_firstEtaWRTClusterPosition_EM2;
   Float_t         tau_0_sub_neu0_cellBased_secondEtaWRTClusterPosition_EM1;
   Float_t         tau_0_sub_neu0_cellBased_secondEtaWRTClusterPosition_EM2;
   Float_t         tau_0_sub_neu0_cellBased_energy_EM1;
   Float_t         tau_0_sub_neu0_cellBased_energy_EM2;
   Float_t         tau_0_sub_neu1_bdtPi0Score;
   Float_t         tau_0_sub_neu1_cellBased_pt;
   Float_t         tau_0_sub_neu1_cellBased_eta;
   Float_t         tau_0_sub_neu1_cellBased_phi;
   Float_t         tau_0_sub_neu1_cellBased_FIRST_ETA;
   Float_t         tau_0_sub_neu1_cellBased_SECOND_R;
   Float_t         tau_0_sub_neu1_cellBased_SECOND_LAMBDA;
   Float_t         tau_0_sub_neu1_cellBased_DELTA_PHI;
   Float_t         tau_0_sub_neu1_cellBased_DELTA_THETA;
   Float_t         tau_0_sub_neu1_cellBased_CENTER_LAMBDA;
   Float_t         tau_0_sub_neu1_cellBased_LATERAL;
   Float_t         tau_0_sub_neu1_cellBased_LONGITUDINAL;
   Float_t         tau_0_sub_neu1_cellBased_ENG_FRAC_EM;
   Float_t         tau_0_sub_neu1_cellBased_ENG_FRAC_MAX;
   Float_t         tau_0_sub_neu1_cellBased_ENG_FRAC_CORE;
   Float_t         tau_0_sub_neu1_cellBased_SECOND_ENG_DENS;
   Float_t         tau_0_sub_neu1_cellBased_EM1CoreFrac;
   Float_t         tau_0_sub_neu1_cellBased_asymmetryInEM1WRTTrk;
   Int_t           tau_0_sub_neu1_cellBased_NHitsInEM1;
   Int_t           tau_0_sub_neu1_cellBased_NPosECells_PS;
   Int_t           tau_0_sub_neu1_cellBased_NPosECells_EM1;
   Int_t           tau_0_sub_neu1_cellBased_NPosECells_EM2;
   Float_t         tau_0_sub_neu1_cellBased_firstEtaWRTClusterPosition_EM1;
   Float_t         tau_0_sub_neu1_cellBased_firstEtaWRTClusterPosition_EM2;
   Float_t         tau_0_sub_neu1_cellBased_secondEtaWRTClusterPosition_EM1;
   Float_t         tau_0_sub_neu1_cellBased_secondEtaWRTClusterPosition_EM2;
   Float_t         tau_0_sub_neu1_cellBased_energy_EM1;
   Float_t         tau_0_sub_neu1_cellBased_energy_EM2;
   Int_t           tau_0_sub_pantau_CellBasedInput_isPanTauCandidate;
   Int_t           tau_0_sub_pantau_CellBasedInput_DecayModeProto;
   Int_t           tau_0_sub_pantau_CellBasedInput_DecayMode;
   Float_t         tau_0_sub_pantau_CellBasedInput_BDTValue_1p0n_vs_1p1n;
   Float_t         tau_0_sub_pantau_CellBasedInput_BDTValue_1p1n_vs_1pXn;
   Float_t         tau_0_sub_pantau_CellBasedInput_BDTValue_3p0n_vs_3pXn;
   Int_t           tau_0_sub_pantau_CellBasedInput_BDTVar_Basic_NNeutralConsts;
   Float_t         tau_0_sub_pantau_CellBasedInput_BDTVar_Charged_JetMoment_EtDRxTotalEt;
   Float_t         tau_0_sub_pantau_CellBasedInput_BDTVar_Charged_StdDev_Et_WrtEtAllConsts;
   Float_t         tau_0_sub_pantau_CellBasedInput_BDTVar_Neutral_HLV_SumM;
   Float_t         tau_0_sub_pantau_CellBasedInput_BDTVar_Neutral_PID_BDTValues_BDTSort_1;
   Float_t         tau_0_sub_pantau_CellBasedInput_BDTVar_Neutral_PID_BDTValues_BDTSort_2;
   Float_t         tau_0_sub_pantau_CellBasedInput_BDTVar_Neutral_Ratio_1stBDTEtOverEtAllConsts;
   Float_t         tau_0_sub_pantau_CellBasedInput_BDTVar_Neutral_Ratio_EtOverEtAllConsts;
   Float_t         tau_0_sub_pantau_CellBasedInput_BDTVar_Neutral_Shots_NPhotonsInSeed;
   Float_t         tau_0_sub_pantau_CellBasedInput_BDTVar_Combined_DeltaR1stNeutralTo1stCharged;
   Float_t         tau_0_sub_pantau_CellBasedInput_BDTVar_Charged_HLV_SumM;
   Int_t           tau_0_trig1_HLT_matched;
   Double_t        tau_0_trig1_HLT_pt;
   Double_t        tau_0_trig1_HLT_etraw;
   Double_t        tau_0_trig1_HLT_eraw;
   Double_t        tau_0_trig1_HLT_eta;
   Double_t        tau_0_trig1_HLT_phi;
   Double_t        tau_0_trig1_HLT_m;
   Int_t           tau_0_trig1_HLT_n_tracks;
   Int_t           tau_0_trig1_HLT_n_wide_tracks;
   Int_t           tau_0_trig1_HLT_jet_bdt_loose;
   Int_t           tau_0_trig1_HLT_jet_bdt_medium;
   Int_t           tau_0_trig1_HLT_jet_bdt_tight;
   Double_t        tau_0_trig1_HLT_jet_bdt_score;
   Double_t        tau_0_trig1_HLT_centFracCorrected;
   Double_t        tau_0_trig1_HLT_etOverPtLeadTrkCorrected;
   Double_t        tau_0_trig1_HLT_innerTrkAvgDistCorrected;
   Double_t        tau_0_trig1_HLT_ipSigLeadTrkCorrected;
   Double_t        tau_0_trig1_HLT_SumPtTrkFracCorrected;
   Double_t        tau_0_trig1_HLT_ptRatioEflowApproxCorrected;
   Double_t        tau_0_trig1_HLT_mEflowApproxCorrected;
   Double_t        tau_0_trig1_HLT_ChPiEMEOverCaloEMECorrected;
   Double_t        tau_0_trig1_HLT_EMPOverTrkSysPCorrected;
   Double_t        tau_0_trig1_HLT_dRmaxCorrected;
   Double_t        tau_0_trig1_HLT_trFlightPathSigCorrected;
   Double_t        tau_0_trig1_HLT_massTrkSysCorrected;
   Double_t        tau_0_trig1_HLT_centFrac;
   Double_t        tau_0_trig1_HLT_etOverPtLeadTrk;
   Double_t        tau_0_trig1_HLT_innerTrkAvgDist;
   Double_t        tau_0_trig1_HLT_ipSigLeadTrk;
   Double_t        tau_0_trig1_HLT_SumPtTrkFrac;
   Double_t        tau_0_trig1_HLT_ptRatioEflowApprox;
   Double_t        tau_0_trig1_HLT_mEflowApprox;
   Double_t        tau_0_trig1_HLT_ChPiEMEOverCaloEME;
   Double_t        tau_0_trig1_HLT_EMPOverTrkSysP;
   Double_t        tau_0_trig1_HLT_dRmax;
   Double_t        tau_0_trig1_HLT_trFlightPathSig;
   Double_t        tau_0_trig1_HLT_massTrkSys;
   Int_t           tau_0_trig2_PreselTrig_matched;
   Double_t        tau_0_trig2_PreselTrig_pt;
   Double_t        tau_0_trig2_PreselTrig_eta;
   Double_t        tau_0_trig2_PreselTrig_phi;
   Double_t        tau_0_trig2_PreselTrig_m;
   Int_t           tau_0_trig2_PreselTrig_n_tracks;
   Int_t           tau_0_trig2_PreselTrig_n_wide_tracks;
   Double_t        tau_0_leadTrk_d0;
   Double_t        tau_0_leadTrk_d0_sig;
   Double_t        tau_0_leadTrk_z0;
   Double_t        tau_0_leadTrk_z0_sintheta;
   Double_t        tau_0_leadTrk_z0_sig;
   Double_t        tau_0_leadTrk_pvx_z0;
   Double_t        tau_0_leadTrk_pvx_z0_sintheta;
   Double_t        tau_0_leadTrk_pvx_z0_sig;
   Int_t           tau_0_trk_multi_cw_dr60_n_l5;
   Int_t           tau_0_trk_multi_cw_dr60_d04_n_l5;
   Int_t           tau_0_trk_multi_cw_dr60_n_lp5;
   Int_t           tau_0_trk_multi_cw_dr60_d04_n_lp5;
   Int_t           tau_0_trk_multi_cw_dr60_n_t5;
   Int_t           tau_0_trk_multi_cw_dr60_d04_n_t5;
   Int_t           tau_0_trk_multi_cws_dr60_n_l5;
   Int_t           tau_0_trk_multi_cws_dr60_d04_n_l5;
   Int_t           tau_0_trk_multi_cws_dr60_n_lp5;
   Int_t           tau_0_trk_multi_cws_dr60_d04_n_lp5;
   Int_t           tau_0_trk_multi_cws_dr60_n_t5;
   Int_t           tau_0_trk_multi_cws_dr60_d04_n_t5;
   Int_t           tau_0_trk_multi_cw_dr80_n_l5;
   Int_t           tau_0_trk_multi_cw_dr80_d04_n_l5;
   Int_t           tau_0_trk_multi_cw_dr80_n_lp5;
   Int_t           tau_0_trk_multi_cw_dr80_d04_n_lp5;
   Int_t           tau_0_trk_multi_cw_dr80_n_t5;
   Int_t           tau_0_trk_multi_cw_dr80_d04_n_t5;
   Int_t           tau_0_trk_multi_cws_dr80_n_l5;
   Int_t           tau_0_trk_multi_cws_dr80_d04_n_l5;
   Int_t           tau_0_trk_multi_cws_dr80_n_lp5;
   Int_t           tau_0_trk_multi_cws_dr80_d04_n_lp5;
   Int_t           tau_0_trk_multi_cws_dr80_n_t5;
   Int_t           tau_0_trk_multi_cws_dr80_d04_n_t5;
   Int_t           tau_0_trk_multi_ckt4iso_n;
   UInt_t          tau_0_trk_multi_diag_n_had_tracks;
   Float_t         tau_0_trk_multi_diag_purity;
   UInt_t          tau_0_trk_multi_diag_n_tau_tracks;
   UInt_t          tau_0_trk_multi_diag_n_spu_tracks;
   UInt_t          tau_0_trk_multi_diag_n_spu_uc_tracks;
   UInt_t          tau_0_trk_multi_diag_n_spu_cv_tracks;
   UInt_t          tau_0_trk_multi_diag_n_spu_pu_tracks;
   UInt_t          tau_0_trk_multi_diag_n_spu_ue_tracks;
   UInt_t          tau_0_trk_multi_diag_n_spu_fk_tracks;
   Double_t        tau_tes_alpha_pt_shift;

   // List of branches
   TBranch        *b_n_muons;   //!
   TBranch        *b_n_electrons;   //!
   TBranch        *b_n_photons;   //!
   TBranch        *b_n_taus;   //!
   TBranch        *b_n_taus_loose;   //!
   TBranch        *b_n_taus_medium;   //!
   TBranch        *b_n_taus_tight;   //!
   TBranch        *b_n_jets;   //!
   TBranch        *b_n_jets_bad;   //!
   TBranch        *b_n_bjets;   //!
   TBranch        *b_n_vx;   //!
   TBranch        *b_n_pvx;   //!
   TBranch        *b_n_actual_int;   //!
   TBranch        *b_n_avg_int;   //!
   TBranch        *b_n_avg_int_cor;   //!
   TBranch        *b_n_truth_jets;   //!
   TBranch        *b_n_truth_quark_jets;   //!
   TBranch        *b_n_truth_gluon_jets;   //!
   TBranch        *b_n_truth_jets_pt25_eta45;   //!
   TBranch        *b_event_clean_detector_core;   //!
   TBranch        *b_lep_0;   //!
   TBranch        *b_lep_0_eta;   //!
   TBranch        *b_lep_0_phi;   //!
   TBranch        *b_lep_0_pt;   //!
   TBranch        *b_lep_0_et;   //!
   TBranch        *b_lep_0_m;   //!
   TBranch        *b_lep_0_q;   //!
   TBranch        *b_lep_0_trk_d0;   //!
   TBranch        *b_lep_0_trk_d0_sig;   //!
   TBranch        *b_lep_0_trk_z0;   //!
   TBranch        *b_lep_0_trk_z0_sintheta;   //!
   TBranch        *b_lep_0_trk_z0_sig;   //!
   TBranch        *b_lep_0_trk_pvx_z0;   //!
   TBranch        *b_lep_0_trk_pvx_z0_sintheta;   //!
   TBranch        *b_lep_0_trk_pvx_z0_sig;   //!
   TBranch        *b_lep_0_trk_pt_error;   //!
   TBranch        *b_lep_0_iso_wp;   //!
   TBranch        *b_lep_0_id_veryloose;   //!
   TBranch        *b_lep_0_id_loose;   //!
   TBranch        *b_lep_0_id_medium;   //!
   TBranch        *b_lep_0_id_tight;   //!
   TBranch        *b_lep_0_id_bad;   //!
   TBranch        *b_lep_0_muonType;   //!
   TBranch        *b_lep_0_cluster_eta;   //!
   TBranch        *b_lep_0_cluster_eta_be2;   //!
   TBranch        *b_event_number;   //!
   TBranch        *b_run_number;   //!
   TBranch        *b_PRWHash;   //!
   TBranch        *b_mc_channel_number;   //!
   TBranch        *b_NOMINAL_pileup_random_run_number;   //!
   TBranch        *b_PRW_DATASF_1down_pileup_random_run_number;   //!
   TBranch        *b_PRW_DATASF_1up_pileup_random_run_number;   //!
   TBranch        *b_weight_total;   //!
   TBranch        *b_weight_mc;   //!
   TBranch        *b_met_truth_et;   //!
   TBranch        *b_met_truth_etx;   //!
   TBranch        *b_met_truth_ety;   //!
   TBranch        *b_met_truth_phi;   //!
   TBranch        *b_met_truth_sumet;   //!
   TBranch        *b_met_truth_sig;   //!
   TBranch        *b_met_truth_sig_tracks;   //!
   TBranch        *b_met_reco_et;   //!
   TBranch        *b_met_reco_etx;   //!
   TBranch        *b_met_reco_ety;   //!
   TBranch        *b_met_reco_phi;   //!
   TBranch        *b_met_reco_sumet;   //!
   TBranch        *b_met_reco_sig;   //!
   TBranch        *b_met_reco_sig_tracks;   //!
   TBranch        *b_met_more_met_et_soft;   //!
   TBranch        *b_met_more_met_et_ele;   //!
   TBranch        *b_met_more_met_et_pho;   //!
   TBranch        *b_met_more_met_et_tau;   //!
   TBranch        *b_met_more_met_et_muon;   //!
   TBranch        *b_met_more_met_et_jet;   //!
   TBranch        *b_met_more_met_sumet_soft;   //!
   TBranch        *b_met_more_met_sumet_ele;   //!
   TBranch        *b_met_more_met_sumet_pho;   //!
   TBranch        *b_met_more_met_sumet_tau;   //!
   TBranch        *b_met_more_met_sumet_muon;   //!
   TBranch        *b_met_more_met_sumet_jet;   //!
   TBranch        *b_met_more_met_phi_soft;   //!
   TBranch        *b_met_more_met_phi_ele;   //!
   TBranch        *b_met_more_met_phi_pho;   //!
   TBranch        *b_met_more_met_phi_tau;   //!
   TBranch        *b_met_more_met_phi_muon;   //!
   TBranch        *b_met_more_met_phi_jet;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_Reco_QualMedium;   //!
   TBranch        *b_lep_0_MUON_EFF_STAT_1down_MuEffSF_Reco_QualMedium;   //!
   TBranch        *b_lep_0_MUON_EFF_STAT_1up_MuEffSF_Reco_QualMedium;   //!
   TBranch        *b_lep_0_MUON_EFF_STAT_LOWPT_1down_MuEffSF_Reco_QualMedium;   //!
   TBranch        *b_lep_0_MUON_EFF_STAT_LOWPT_1up_MuEffSF_Reco_QualMedium;   //!
   TBranch        *b_lep_0_MUON_EFF_SYS_1down_MuEffSF_Reco_QualMedium;   //!
   TBranch        *b_lep_0_MUON_EFF_SYS_1up_MuEffSF_Reco_QualMedium;   //!
   TBranch        *b_lep_0_MUON_EFF_SYS_LOWPT_1down_MuEffSF_Reco_QualMedium;   //!
   TBranch        *b_lep_0_MUON_EFF_SYS_LOWPT_1up_MuEffSF_Reco_QualMedium;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_IsoFixedCutLoose;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_IsoFixedCutTightTrackOnly;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_IsoGradient;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_IsoGradientLoose;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_IsoLoose;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_IsoLooseTrackOnly;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_IsoTight;   //!
   TBranch        *b_lep_0_MUON_ISO_STAT_1down_MuEffSF_IsoFixedCutLoose;   //!
   TBranch        *b_lep_0_MUON_ISO_STAT_1down_MuEffSF_IsoFixedCutTightTrackOnly;   //!
   TBranch        *b_lep_0_MUON_ISO_STAT_1down_MuEffSF_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_ISO_STAT_1down_MuEffSF_IsoGradientLoose;   //!
   TBranch        *b_lep_0_MUON_ISO_STAT_1down_MuEffSF_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_ISO_STAT_1down_MuEffSF_IsoLooseTrackOnly;   //!
   TBranch        *b_lep_0_MUON_ISO_STAT_1down_MuEffSF_IsoTight;   //!
   TBranch        *b_lep_0_MUON_ISO_STAT_1up_MuEffSF_IsoFixedCutLoose;   //!
   TBranch        *b_lep_0_MUON_ISO_STAT_1up_MuEffSF_IsoFixedCutTightTrackOnly;   //!
   TBranch        *b_lep_0_MUON_ISO_STAT_1up_MuEffSF_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_ISO_STAT_1up_MuEffSF_IsoGradientLoose;   //!
   TBranch        *b_lep_0_MUON_ISO_STAT_1up_MuEffSF_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_ISO_STAT_1up_MuEffSF_IsoLooseTrackOnly;   //!
   TBranch        *b_lep_0_MUON_ISO_STAT_1up_MuEffSF_IsoTight;   //!
   TBranch        *b_lep_0_MUON_ISO_SYS_1down_MuEffSF_IsoFixedCutLoose;   //!
   TBranch        *b_lep_0_MUON_ISO_SYS_1down_MuEffSF_IsoFixedCutTightTrackOnly;   //!
   TBranch        *b_lep_0_MUON_ISO_SYS_1down_MuEffSF_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_ISO_SYS_1down_MuEffSF_IsoGradientLoose;   //!
   TBranch        *b_lep_0_MUON_ISO_SYS_1down_MuEffSF_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_ISO_SYS_1down_MuEffSF_IsoLooseTrackOnly;   //!
   TBranch        *b_lep_0_MUON_ISO_SYS_1down_MuEffSF_IsoTight;   //!
   TBranch        *b_lep_0_MUON_ISO_SYS_1up_MuEffSF_IsoFixedCutLoose;   //!
   TBranch        *b_lep_0_MUON_ISO_SYS_1up_MuEffSF_IsoFixedCutTightTrackOnly;   //!
   TBranch        *b_lep_0_MUON_ISO_SYS_1up_MuEffSF_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_ISO_SYS_1up_MuEffSF_IsoGradientLoose;   //!
   TBranch        *b_lep_0_MUON_ISO_SYS_1up_MuEffSF_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_ISO_SYS_1up_MuEffSF_IsoLooseTrackOnly;   //!
   TBranch        *b_lep_0_MUON_ISO_SYS_1up_MuEffSF_IsoTight;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_TTVA;   //!
   TBranch        *b_lep_0_MUON_TTVA_STAT_1down_MuEffSF_TTVA;   //!
   TBranch        *b_lep_0_MUON_TTVA_STAT_1up_MuEffSF_TTVA;   //!
   TBranch        *b_lep_0_MUON_TTVA_SYS_1down_MuEffSF_TTVA;   //!
   TBranch        *b_lep_0_MUON_TTVA_SYS_1up_MuEffSF_TTVA;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_2mu10_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_2mu10_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_2mu10_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_2mu10_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_2mu10_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_2mu10_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_2mu10_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_2mu10_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_2mu10_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_2mu10_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_2mu10_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_2mu10_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_2mu10_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_2mu10_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_2mu10_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_2mu10_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_2mu10_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_2mu10_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_2mu10_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_2mu10_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_2mu14_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_2mu14_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_2mu14_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_2mu14_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_2mu14_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_2mu14_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_2mu14_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_2mu14_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_2mu14_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_2mu14_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_2mu14_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_2mu14_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_2mu14_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_2mu14_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_2mu14_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_2mu14_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_2mu14_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_2mu14_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_2mu14_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_2mu14_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu10_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu10_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu10_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu10_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu10_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu10_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu10_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu10_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu10_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu10_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu10_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu10_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu10_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu10_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu10_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu10_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu10_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu10_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu10_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu10_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu14_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu14_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu14_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu14_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu14_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu14_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu14_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu14_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu14_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu14_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu14_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu14_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu14_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu14_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu14_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu14_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu14_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu14_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu14_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu14_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu18_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu18_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu18_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu18_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu18_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu18_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu18_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu18_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu18_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu18_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu18_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu18_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu18_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu18_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu18_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu18_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu18_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu18_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu18_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu18_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu22_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu22_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu22_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu22_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu22_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu22_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu22_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu22_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu22_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu22_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu22_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu22_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu22_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu22_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu22_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu22_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu22_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu22_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu22_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu22_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu24_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu24_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu24_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu24_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_imedium_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_imedium_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_imedium_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_imedium_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_imedium_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_imedium_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_imedium_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_imedium_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_imedium_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_imedium_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_imedium_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_imedium_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_imedium_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_imedium_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_imedium_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_imedium_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu24_imedium_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu24_imedium_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu24_imedium_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu24_imedium_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu26_imedium_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu26_imedium_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu26_imedium_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu26_imedium_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu26_imedium_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu26_imedium_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu26_imedium_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu26_imedium_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu26_imedium_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu26_imedium_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu26_imedium_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu26_imedium_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu26_imedium_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu26_imedium_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu26_imedium_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu26_imedium_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu26_imedium_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu26_imedium_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu26_imedium_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu26_imedium_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu40_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu40_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu40_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu40_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu40_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu40_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu40_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu40_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu40_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu40_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu40_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu40_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu40_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu40_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu40_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu40_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu40_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu40_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu40_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu40_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu50_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu50_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu50_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu50_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu50_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu50_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu50_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu50_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu50_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu50_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu50_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu50_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu50_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu50_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu50_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu50_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu50_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu50_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu50_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu50_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu8noL1_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu8noL1_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu8noL1_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu8noL1_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu8noL1_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu8noL1_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu8noL1_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu8noL1_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu8noL1_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu8noL1_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu8noL1_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu8noL1_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu8noL1_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu8noL1_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu8noL1_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu8noL1_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu8noL1_QualMedium_IsoGradient;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu8noL1_QualMedium_IsoLoose;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu8noL1_QualMedium_IsoNone;   //!
   TBranch        *b_lep_0_NOMINAL_MuEffSF_HLT_mu8noL1_QualMedium_IsoTight;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_offline_RecoTrk;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_offline_LooseAndBLayerLLH_d0z0_v11_correlationID;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_offline_LooseAndBLayerLLH_d0z0_v11;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_offline_MediumLLH_d0z0_v11_correlationID;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_offline_MediumLLH_d0z0_v11;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_offline_TightLLH_d0z0_v11_correlationID;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_offline_TightLLH_d0z0_v11;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_offline_LooseAndBLayerLLH_v11_correlationID;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_offline_LooseAndBLayerLLH_v11;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_offline_MediumLLH_v11_correlationID;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_offline_MediumLLH_v11;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_offline_TightLLH_v11_correlationID;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_offline_TightLLH_v11;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_Isolation_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_Isolation_LooseAndBLayerLLH_d0z0_v11_isolFixedCutTight;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_Isolation_LooseAndBLayerLLH_d0z0_v11_isolFixedCutTightTrackOnly;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_Isolation_LooseAndBLayerLLH_d0z0_v11_isolGradientLoose;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_Isolation_LooseAndBLayerLLH_d0z0_v11_isolGradient;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_Isolation_LooseAndBLayerLLH_d0z0_v11_isolLoose;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_Isolation_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_Isolation_LooseAndBLayerLLH_d0z0_v11_isolTight;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_Isolation_MediumLLH_d0z0_v11_isolFixedCutLoose;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_Isolation_MediumLLH_d0z0_v11_isolFixedCutTight;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_Isolation_MediumLLH_d0z0_v11_isolFixedCutTightTrackOnly;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_Isolation_MediumLLH_d0z0_v11_isolGradientLoose;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_Isolation_MediumLLH_d0z0_v11_isolGradient;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_Isolation_MediumLLH_d0z0_v11_isolLoose;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_Isolation_MediumLLH_d0z0_v11_isolLooseTrackOnly;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_Isolation_MediumLLH_d0z0_v11_isolTight;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_Isolation_TightLLH_d0z0_v11_isolFixedCutLoose;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_Isolation_TightLLH_d0z0_v11_isolFixedCutTight;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_Isolation_TightLLH_d0z0_v11_isolFixedCutTightTrackOnly;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_Isolation_TightLLH_d0z0_v11_isolGradientLoose;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_Isolation_TightLLH_d0z0_v11_isolGradient;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_Isolation_TightLLH_d0z0_v11_isolLoose;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_Isolation_TightLLH_d0z0_v11_isolLooseTrackOnly;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_Isolation_TightLLH_d0z0_v11_isolTight;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_MediumLLH_d0z0_v11_isolGradient;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_MediumLLH_d0z0_v11_isolLoose;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_MediumLLH_d0z0_v11_isolLooseTrackOnly;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_MediumLLH_d0z0_v11;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_TightLLH_d0z0_v11_isolGradient;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_TightLLH_d0z0_v11_isolLoose;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_TightLLH_d0z0_v11_isolLooseTrackOnly;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_TightLLH_d0z0_v11_isolTight;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_TightLLH_d0z0_v11;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_LooseAndBLayerLLH_d0z0_v11;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_MediumLLH_d0z0_v11_isolGradient;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_MediumLLH_d0z0_v11_isolLoose;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_MediumLLH_d0z0_v11_isolLooseTrackOnly;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_MediumLLH_d0z0_v11;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_TightLLH_d0z0_v11_isolGradient;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_TightLLH_d0z0_v11_isolLoose;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_TightLLH_d0z0_v11_isolLooseTrackOnly;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_TightLLH_d0z0_v11_isolTight;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_TightLLH_d0z0_v11;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_LooseAndBLayerLLH_d0z0_v11;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_MediumLLH_d0z0_v11_isolGradient;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_MediumLLH_d0z0_v11_isolLoose;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_MediumLLH_d0z0_v11_isolLooseTrackOnly;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_MediumLLH_d0z0_v11;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_TightLLH_d0z0_v11_isolGradient;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_TightLLH_d0z0_v11_isolLoose;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_TightLLH_d0z0_v11_isolLooseTrackOnly;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_TightLLH_d0z0_v11_isolTight;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_TightLLH_d0z0_v11;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_DI_E_2015_e17_lhloose_2016_e17_lhloose_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_DI_E_2015_e17_lhloose_2016_e17_lhloose_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_DI_E_2015_e17_lhloose_2016_e17_lhloose_LooseAndBLayerLLH_d0z0_v11;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_DI_E_2015_e17_lhloose_2016_e17_lhloose_MediumLLH_d0z0_v11_isolGradient;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_DI_E_2015_e17_lhloose_2016_e17_lhloose_MediumLLH_d0z0_v11_isolLoose;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_DI_E_2015_e17_lhloose_2016_e17_lhloose_MediumLLH_d0z0_v11_isolLooseTrackOnly;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_DI_E_2015_e17_lhloose_2016_e17_lhloose_MediumLLH_d0z0_v11;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_DI_E_2015_e17_lhloose_2016_e17_lhloose_TightLLH_d0z0_v11_isolGradient;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_DI_E_2015_e17_lhloose_2016_e17_lhloose_TightLLH_d0z0_v11_isolLoose;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_DI_E_2015_e17_lhloose_2016_e17_lhloose_TightLLH_d0z0_v11_isolLooseTrackOnly;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_DI_E_2015_e17_lhloose_2016_e17_lhloose_TightLLH_d0z0_v11_isolTight;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_DI_E_2015_e17_lhloose_2016_e17_lhloose_TightLLH_d0z0_v11;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_MediumLLH_d0z0_v11_isolGradient;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_MediumLLH_d0z0_v11_isolLoose;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_MediumLLH_d0z0_v11_isolLooseTrackOnly;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_MediumLLH_d0z0_v11;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11_isolGradient;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11_isolLoose;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11_isolLooseTrackOnly;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11_isolTight;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_MediumLLH_d0z0_v11_isolGradient;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_MediumLLH_d0z0_v11_isolLoose;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_MediumLLH_d0z0_v11_isolLooseTrackOnly;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_MediumLLH_d0z0_v11;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_TightLLH_d0z0_v11_isolGradient;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_TightLLH_d0z0_v11_isolLoose;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_TightLLH_d0z0_v11_isolLooseTrackOnly;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_TightLLH_d0z0_v11_isolTight;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_TightLLH_d0z0_v11;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_LooseAndBLayerLLH_d0z0_v11;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_MediumLLH_d0z0_v11_isolGradient;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_MediumLLH_d0z0_v11_isolLoose;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_MediumLLH_d0z0_v11_isolLooseTrackOnly;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_MediumLLH_d0z0_v11;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_TightLLH_d0z0_v11_isolGradient;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_TightLLH_d0z0_v11_isolLoose;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_TightLLH_d0z0_v11_isolLooseTrackOnly;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_TightLLH_d0z0_v11_isolTight;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_TightLLH_d0z0_v11;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_MediumLLH_d0z0_v11_isolGradient;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_MediumLLH_d0z0_v11_isolLoose;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_MediumLLH_d0z0_v11_isolLooseTrackOnly;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_MediumLLH_d0z0_v11;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_TightLLH_d0z0_v11_isolGradient;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_TightLLH_d0z0_v11_isolLoose;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_TightLLH_d0z0_v11_isolLooseTrackOnly;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_TightLLH_d0z0_v11_isolTight;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_TightLLH_d0z0_v11;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_MediumLLH_d0z0_v11_isolGradient;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_MediumLLH_d0z0_v11_isolLoose;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_MediumLLH_d0z0_v11_isolLooseTrackOnly;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_MediumLLH_d0z0_v11;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11_isolGradient;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11_isolLoose;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11_isolLooseTrackOnly;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11_isolTight;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_LooseAndBLayerLLH_d0z0_v11;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_MediumLLH_d0z0_v11_isolGradient;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_MediumLLH_d0z0_v11_isolLoose;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_MediumLLH_d0z0_v11_isolLooseTrackOnly;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_MediumLLH_d0z0_v11;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_TightLLH_d0z0_v11_isolGradient;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_TightLLH_d0z0_v11_isolLoose;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_TightLLH_d0z0_v11_isolLooseTrackOnly;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_TightLLH_d0z0_v11_isolTight;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_TightLLH_d0z0_v11;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_LooseAndBLayerLLH_d0z0_v11;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_MediumLLH_d0z0_v11_isolGradient;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_MediumLLH_d0z0_v11_isolLoose;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_MediumLLH_d0z0_v11_isolLooseTrackOnly;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_MediumLLH_d0z0_v11;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_TightLLH_d0z0_v11_isolGradient;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_TightLLH_d0z0_v11_isolLoose;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_TightLLH_d0z0_v11_isolLooseTrackOnly;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_TightLLH_d0z0_v11_isolTight;   //!
   TBranch        *b_lep_0_NOMINAL_effSF_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_TightLLH_d0z0_v11;   //!
   TBranch        *b_lep_0_NOMINAL_eff_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose;   //!
   TBranch        *b_lep_0_NOMINAL_eff_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly;   //!
   TBranch        *b_lep_0_NOMINAL_eff_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11;   //!
   TBranch        *b_lep_0_NOMINAL_eff_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_MediumLLH_d0z0_v11_isolGradient;   //!
   TBranch        *b_lep_0_NOMINAL_eff_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_MediumLLH_d0z0_v11_isolLoose;   //!
   TBranch        *b_lep_0_NOMINAL_eff_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_MediumLLH_d0z0_v11_isolLooseTrackOnly;   //!
   TBranch        *b_lep_0_NOMINAL_eff_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_MediumLLH_d0z0_v11;   //!
   TBranch        *b_lep_0_NOMINAL_eff_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_TightLLH_d0z0_v11_isolGradient;   //!
   TBranch        *b_lep_0_NOMINAL_eff_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_TightLLH_d0z0_v11_isolLoose;   //!
   TBranch        *b_lep_0_NOMINAL_eff_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_TightLLH_d0z0_v11_isolLooseTrackOnly;   //!
   TBranch        *b_lep_0_NOMINAL_eff_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_TightLLH_d0z0_v11_isolTight;   //!
   TBranch        *b_lep_0_NOMINAL_eff_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_TightLLH_d0z0_v11;   //!
   TBranch        *b_lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose;   //!
   TBranch        *b_lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly;   //!
   TBranch        *b_lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_LooseAndBLayerLLH_d0z0_v11;   //!
   TBranch        *b_lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_MediumLLH_d0z0_v11_isolGradient;   //!
   TBranch        *b_lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_MediumLLH_d0z0_v11_isolLoose;   //!
   TBranch        *b_lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_MediumLLH_d0z0_v11_isolLooseTrackOnly;   //!
   TBranch        *b_lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_MediumLLH_d0z0_v11;   //!
   TBranch        *b_lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_TightLLH_d0z0_v11_isolGradient;   //!
   TBranch        *b_lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_TightLLH_d0z0_v11_isolLoose;   //!
   TBranch        *b_lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_TightLLH_d0z0_v11_isolLooseTrackOnly;   //!
   TBranch        *b_lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_TightLLH_d0z0_v11_isolTight;   //!
   TBranch        *b_lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_TightLLH_d0z0_v11;   //!
   TBranch        *b_lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose;   //!
   TBranch        *b_lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly;   //!
   TBranch        *b_lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_LooseAndBLayerLLH_d0z0_v11;   //!
   TBranch        *b_lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_MediumLLH_d0z0_v11_isolGradient;   //!
   TBranch        *b_lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_MediumLLH_d0z0_v11_isolLoose;   //!
   TBranch        *b_lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_MediumLLH_d0z0_v11_isolLooseTrackOnly;   //!
   TBranch        *b_lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_MediumLLH_d0z0_v11;   //!
   TBranch        *b_lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_TightLLH_d0z0_v11_isolGradient;   //!
   TBranch        *b_lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_TightLLH_d0z0_v11_isolLoose;   //!
   TBranch        *b_lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_TightLLH_d0z0_v11_isolLooseTrackOnly;   //!
   TBranch        *b_lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_TightLLH_d0z0_v11_isolTight;   //!
   TBranch        *b_lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_TightLLH_d0z0_v11;   //!
   TBranch        *b_lep_0_NOMINAL_eff_DI_E_2015_e17_lhloose_2016_e17_lhloose_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose;   //!
   TBranch        *b_lep_0_NOMINAL_eff_DI_E_2015_e17_lhloose_2016_e17_lhloose_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly;   //!
   TBranch        *b_lep_0_NOMINAL_eff_DI_E_2015_e17_lhloose_2016_e17_lhloose_LooseAndBLayerLLH_d0z0_v11;   //!
   TBranch        *b_lep_0_NOMINAL_eff_DI_E_2015_e17_lhloose_2016_e17_lhloose_MediumLLH_d0z0_v11_isolGradient;   //!
   TBranch        *b_lep_0_NOMINAL_eff_DI_E_2015_e17_lhloose_2016_e17_lhloose_MediumLLH_d0z0_v11_isolLoose;   //!
   TBranch        *b_lep_0_NOMINAL_eff_DI_E_2015_e17_lhloose_2016_e17_lhloose_MediumLLH_d0z0_v11_isolLooseTrackOnly;   //!
   TBranch        *b_lep_0_NOMINAL_eff_DI_E_2015_e17_lhloose_2016_e17_lhloose_MediumLLH_d0z0_v11;   //!
   TBranch        *b_lep_0_NOMINAL_eff_DI_E_2015_e17_lhloose_2016_e17_lhloose_TightLLH_d0z0_v11_isolGradient;   //!
   TBranch        *b_lep_0_NOMINAL_eff_DI_E_2015_e17_lhloose_2016_e17_lhloose_TightLLH_d0z0_v11_isolLoose;   //!
   TBranch        *b_lep_0_NOMINAL_eff_DI_E_2015_e17_lhloose_2016_e17_lhloose_TightLLH_d0z0_v11_isolLooseTrackOnly;   //!
   TBranch        *b_lep_0_NOMINAL_eff_DI_E_2015_e17_lhloose_2016_e17_lhloose_TightLLH_d0z0_v11_isolTight;   //!
   TBranch        *b_lep_0_NOMINAL_eff_DI_E_2015_e17_lhloose_2016_e17_lhloose_TightLLH_d0z0_v11;   //!
   TBranch        *b_lep_0_NOMINAL_eff_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose;   //!
   TBranch        *b_lep_0_NOMINAL_eff_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly;   //!
   TBranch        *b_lep_0_NOMINAL_eff_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11;   //!
   TBranch        *b_lep_0_NOMINAL_eff_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_MediumLLH_d0z0_v11_isolGradient;   //!
   TBranch        *b_lep_0_NOMINAL_eff_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_MediumLLH_d0z0_v11_isolLoose;   //!
   TBranch        *b_lep_0_NOMINAL_eff_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_MediumLLH_d0z0_v11_isolLooseTrackOnly;   //!
   TBranch        *b_lep_0_NOMINAL_eff_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_MediumLLH_d0z0_v11;   //!
   TBranch        *b_lep_0_NOMINAL_eff_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11_isolGradient;   //!
   TBranch        *b_lep_0_NOMINAL_eff_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11_isolLoose;   //!
   TBranch        *b_lep_0_NOMINAL_eff_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11_isolLooseTrackOnly;   //!
   TBranch        *b_lep_0_NOMINAL_eff_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11_isolTight;   //!
   TBranch        *b_lep_0_NOMINAL_eff_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11;   //!
   TBranch        *b_lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose;   //!
   TBranch        *b_lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly;   //!
   TBranch        *b_lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11;   //!
   TBranch        *b_lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_MediumLLH_d0z0_v11_isolGradient;   //!
   TBranch        *b_lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_MediumLLH_d0z0_v11_isolLoose;   //!
   TBranch        *b_lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_MediumLLH_d0z0_v11_isolLooseTrackOnly;   //!
   TBranch        *b_lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_MediumLLH_d0z0_v11;   //!
   TBranch        *b_lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_TightLLH_d0z0_v11_isolGradient;   //!
   TBranch        *b_lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_TightLLH_d0z0_v11_isolLoose;   //!
   TBranch        *b_lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_TightLLH_d0z0_v11_isolLooseTrackOnly;   //!
   TBranch        *b_lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_TightLLH_d0z0_v11_isolTight;   //!
   TBranch        *b_lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_TightLLH_d0z0_v11;   //!
   TBranch        *b_lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose;   //!
   TBranch        *b_lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly;   //!
   TBranch        *b_lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_LooseAndBLayerLLH_d0z0_v11;   //!
   TBranch        *b_lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_MediumLLH_d0z0_v11_isolGradient;   //!
   TBranch        *b_lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_MediumLLH_d0z0_v11_isolLoose;   //!
   TBranch        *b_lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_MediumLLH_d0z0_v11_isolLooseTrackOnly;   //!
   TBranch        *b_lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_MediumLLH_d0z0_v11;   //!
   TBranch        *b_lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_TightLLH_d0z0_v11_isolGradient;   //!
   TBranch        *b_lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_TightLLH_d0z0_v11_isolLoose;   //!
   TBranch        *b_lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_TightLLH_d0z0_v11_isolLooseTrackOnly;   //!
   TBranch        *b_lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_TightLLH_d0z0_v11_isolTight;   //!
   TBranch        *b_lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_TightLLH_d0z0_v11;   //!
   TBranch        *b_lep_0_NOMINAL_eff_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose;   //!
   TBranch        *b_lep_0_NOMINAL_eff_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly;   //!
   TBranch        *b_lep_0_NOMINAL_eff_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11;   //!
   TBranch        *b_lep_0_NOMINAL_eff_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_MediumLLH_d0z0_v11_isolGradient;   //!
   TBranch        *b_lep_0_NOMINAL_eff_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_MediumLLH_d0z0_v11_isolLoose;   //!
   TBranch        *b_lep_0_NOMINAL_eff_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_MediumLLH_d0z0_v11_isolLooseTrackOnly;   //!
   TBranch        *b_lep_0_NOMINAL_eff_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_MediumLLH_d0z0_v11;   //!
   TBranch        *b_lep_0_NOMINAL_eff_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_TightLLH_d0z0_v11_isolGradient;   //!
   TBranch        *b_lep_0_NOMINAL_eff_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_TightLLH_d0z0_v11_isolLoose;   //!
   TBranch        *b_lep_0_NOMINAL_eff_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_TightLLH_d0z0_v11_isolLooseTrackOnly;   //!
   TBranch        *b_lep_0_NOMINAL_eff_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_TightLLH_d0z0_v11_isolTight;   //!
   TBranch        *b_lep_0_NOMINAL_eff_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_TightLLH_d0z0_v11;   //!
   TBranch        *b_lep_0_NOMINAL_eff_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose;   //!
   TBranch        *b_lep_0_NOMINAL_eff_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly;   //!
   TBranch        *b_lep_0_NOMINAL_eff_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11;   //!
   TBranch        *b_lep_0_NOMINAL_eff_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_MediumLLH_d0z0_v11_isolGradient;   //!
   TBranch        *b_lep_0_NOMINAL_eff_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_MediumLLH_d0z0_v11_isolLoose;   //!
   TBranch        *b_lep_0_NOMINAL_eff_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_MediumLLH_d0z0_v11_isolLooseTrackOnly;   //!
   TBranch        *b_lep_0_NOMINAL_eff_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_MediumLLH_d0z0_v11;   //!
   TBranch        *b_lep_0_NOMINAL_eff_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11_isolGradient;   //!
   TBranch        *b_lep_0_NOMINAL_eff_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11_isolLoose;   //!
   TBranch        *b_lep_0_NOMINAL_eff_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11_isolLooseTrackOnly;   //!
   TBranch        *b_lep_0_NOMINAL_eff_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11_isolTight;   //!
   TBranch        *b_lep_0_NOMINAL_eff_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11;   //!
   TBranch        *b_lep_0_NOMINAL_eff_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose;   //!
   TBranch        *b_lep_0_NOMINAL_eff_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly;   //!
   TBranch        *b_lep_0_NOMINAL_eff_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_LooseAndBLayerLLH_d0z0_v11;   //!
   TBranch        *b_lep_0_NOMINAL_eff_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_MediumLLH_d0z0_v11_isolGradient;   //!
   TBranch        *b_lep_0_NOMINAL_eff_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_MediumLLH_d0z0_v11_isolLoose;   //!
   TBranch        *b_lep_0_NOMINAL_eff_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_MediumLLH_d0z0_v11_isolLooseTrackOnly;   //!
   TBranch        *b_lep_0_NOMINAL_eff_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_MediumLLH_d0z0_v11;   //!
   TBranch        *b_lep_0_NOMINAL_eff_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_TightLLH_d0z0_v11_isolGradient;   //!
   TBranch        *b_lep_0_NOMINAL_eff_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_TightLLH_d0z0_v11_isolLoose;   //!
   TBranch        *b_lep_0_NOMINAL_eff_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_TightLLH_d0z0_v11_isolLooseTrackOnly;   //!
   TBranch        *b_lep_0_NOMINAL_eff_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_TightLLH_d0z0_v11_isolTight;   //!
   TBranch        *b_lep_0_NOMINAL_eff_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_TightLLH_d0z0_v11;   //!
   TBranch        *b_lep_0_NOMINAL_eff_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose;   //!
   TBranch        *b_lep_0_NOMINAL_eff_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly;   //!
   TBranch        *b_lep_0_NOMINAL_eff_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_LooseAndBLayerLLH_d0z0_v11;   //!
   TBranch        *b_lep_0_NOMINAL_eff_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_MediumLLH_d0z0_v11_isolGradient;   //!
   TBranch        *b_lep_0_NOMINAL_eff_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_MediumLLH_d0z0_v11_isolLoose;   //!
   TBranch        *b_lep_0_NOMINAL_eff_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_MediumLLH_d0z0_v11_isolLooseTrackOnly;   //!
   TBranch        *b_lep_0_NOMINAL_eff_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_MediumLLH_d0z0_v11;   //!
   TBranch        *b_lep_0_NOMINAL_eff_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_TightLLH_d0z0_v11_isolGradient;   //!
   TBranch        *b_lep_0_NOMINAL_eff_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_TightLLH_d0z0_v11_isolLoose;   //!
   TBranch        *b_lep_0_NOMINAL_eff_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_TightLLH_d0z0_v11_isolLooseTrackOnly;   //!
   TBranch        *b_lep_0_NOMINAL_eff_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_TightLLH_d0z0_v11_isolTight;   //!
   TBranch        *b_lep_0_NOMINAL_eff_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_TightLLH_d0z0_v11;   //!
   TBranch        *b_tau_0_NOMINAL_TauEffSF_reco;   //!
   TBranch        *b_tau_0_TAUS_TRUEHADTAU_EFF_RECO_HIGHPT_1down_TauEffSF_reco;   //!
   TBranch        *b_tau_0_TAUS_TRUEHADTAU_EFF_RECO_HIGHPT_1up_TauEffSF_reco;   //!
   TBranch        *b_tau_0_TAUS_TRUEHADTAU_EFF_RECO_TOTAL_1down_TauEffSF_reco;   //!
   TBranch        *b_tau_0_TAUS_TRUEHADTAU_EFF_RECO_TOTAL_1up_TauEffSF_reco;   //!
   TBranch        *b_tau_0_NOMINAL_TauEffSF_selection;   //!
   TBranch        *b_tau_0_TAUS_TRUEELECTRON_EFF_ELEOLR_TOTAL_1down_TauEffSF_selection;   //!
   TBranch        *b_tau_0_TAUS_TRUEELECTRON_EFF_ELEOLR_TOTAL_1up_TauEffSF_selection;   //!
   TBranch        *b_tau_0_TAUS_TRUEHADTAU_EFF_ELEOLR_TOTAL_1down_TauEffSF_selection;   //!
   TBranch        *b_tau_0_TAUS_TRUEHADTAU_EFF_ELEOLR_TOTAL_1up_TauEffSF_selection;   //!
   TBranch        *b_tau_0_TAUS_TRUEHADTAU_EFF_RECO_HIGHPT_1down_TauEffSF_selection;   //!
   TBranch        *b_tau_0_TAUS_TRUEHADTAU_EFF_RECO_HIGHPT_1up_TauEffSF_selection;   //!
   TBranch        *b_tau_0_TAUS_TRUEHADTAU_EFF_RECO_TOTAL_1down_TauEffSF_selection;   //!
   TBranch        *b_tau_0_TAUS_TRUEHADTAU_EFF_RECO_TOTAL_1up_TauEffSF_selection;   //!
   TBranch        *b_tau_0_NOMINAL_TauEffSF_JetBDTloose;   //!
   TBranch        *b_tau_0_NOMINAL_TauEffSF_JetBDTmedium;   //!
   TBranch        *b_tau_0_NOMINAL_TauEffSF_JetBDTtight;   //!
   TBranch        *b_tau_0_TAUS_TRUEHADTAU_EFF_JETID_HIGHPT_1down_TauEffSF_JetBDTloose;   //!
   TBranch        *b_tau_0_TAUS_TRUEHADTAU_EFF_JETID_HIGHPT_1down_TauEffSF_JetBDTmedium;   //!
   TBranch        *b_tau_0_TAUS_TRUEHADTAU_EFF_JETID_HIGHPT_1down_TauEffSF_JetBDTtight;   //!
   TBranch        *b_tau_0_TAUS_TRUEHADTAU_EFF_JETID_HIGHPT_1up_TauEffSF_JetBDTloose;   //!
   TBranch        *b_tau_0_TAUS_TRUEHADTAU_EFF_JETID_HIGHPT_1up_TauEffSF_JetBDTmedium;   //!
   TBranch        *b_tau_0_TAUS_TRUEHADTAU_EFF_JETID_HIGHPT_1up_TauEffSF_JetBDTtight;   //!
   TBranch        *b_tau_0_TAUS_TRUEHADTAU_EFF_JETID_TOTAL_1down_TauEffSF_JetBDTloose;   //!
   TBranch        *b_tau_0_TAUS_TRUEHADTAU_EFF_JETID_TOTAL_1down_TauEffSF_JetBDTmedium;   //!
   TBranch        *b_tau_0_TAUS_TRUEHADTAU_EFF_JETID_TOTAL_1down_TauEffSF_JetBDTtight;   //!
   TBranch        *b_tau_0_TAUS_TRUEHADTAU_EFF_JETID_TOTAL_1up_TauEffSF_JetBDTloose;   //!
   TBranch        *b_tau_0_TAUS_TRUEHADTAU_EFF_JETID_TOTAL_1up_TauEffSF_JetBDTmedium;   //!
   TBranch        *b_tau_0_TAUS_TRUEHADTAU_EFF_JETID_TOTAL_1up_TauEffSF_JetBDTtight;   //!
   TBranch        *b_tau_0_NOMINAL_TauEffSF_LooseLlhEleOLR_electron;   //!
   TBranch        *b_tau_0_NOMINAL_TauEffSF_MediumLlhEleOLR_electron;   //!
   TBranch        *b_tau_0_NOMINAL_TauEffSF_TightLlhEleOLR_electron;   //!
   TBranch        *b_tau_0_NOMINAL_TauEffSF_VeryLooseLlhEleOLR_electron;   //!
   TBranch        *b_tau_0_TAUS_TRUEELECTRON_EFF_ELEOLR_TOTAL_1down_TauEffSF_LooseLlhEleOLR_electron;   //!
   TBranch        *b_tau_0_TAUS_TRUEELECTRON_EFF_ELEOLR_TOTAL_1down_TauEffSF_MediumLlhEleOLR_electron;   //!
   TBranch        *b_tau_0_TAUS_TRUEELECTRON_EFF_ELEOLR_TOTAL_1down_TauEffSF_TightLlhEleOLR_electron;   //!
   TBranch        *b_tau_0_TAUS_TRUEELECTRON_EFF_ELEOLR_TOTAL_1down_TauEffSF_VeryLooseLlhEleOLR_electron;   //!
   TBranch        *b_tau_0_TAUS_TRUEELECTRON_EFF_ELEOLR_TOTAL_1up_TauEffSF_LooseLlhEleOLR_electron;   //!
   TBranch        *b_tau_0_TAUS_TRUEELECTRON_EFF_ELEOLR_TOTAL_1up_TauEffSF_MediumLlhEleOLR_electron;   //!
   TBranch        *b_tau_0_TAUS_TRUEELECTRON_EFF_ELEOLR_TOTAL_1up_TauEffSF_TightLlhEleOLR_electron;   //!
   TBranch        *b_tau_0_TAUS_TRUEELECTRON_EFF_ELEOLR_TOTAL_1up_TauEffSF_VeryLooseLlhEleOLR_electron;   //!
   TBranch        *b_tau_0_NOMINAL_TauEffSF_HadTauEleOLR_tauhad;   //!
   TBranch        *b_tau_0_TAUS_TRUEHADTAU_EFF_ELEOLR_TOTAL_1down_TauEffSF_HadTauEleOLR_tauhad;   //!
   TBranch        *b_tau_0_TAUS_TRUEHADTAU_EFF_ELEOLR_TOTAL_1up_TauEffSF_HadTauEleOLR_tauhad;   //!
   TBranch        *b_jet_0_NOMINAL_effSF_MVX;   //!
   TBranch        *b_jet_0_NOMINAL_ineffSF_MVX;   //!
   TBranch        *b_jet_0_FT_EFF_Eigen_B_0_1down_effSF_MVX;   //!
   TBranch        *b_jet_0_FT_EFF_Eigen_B_0_1down_ineffSF_MVX;   //!
   TBranch        *b_jet_0_FT_EFF_Eigen_B_0_1up_effSF_MVX;   //!
   TBranch        *b_jet_0_FT_EFF_Eigen_B_0_1up_ineffSF_MVX;   //!
   TBranch        *b_jet_0_FT_EFF_Eigen_B_1_1down_effSF_MVX;   //!
   TBranch        *b_jet_0_FT_EFF_Eigen_B_1_1down_ineffSF_MVX;   //!
   TBranch        *b_jet_0_FT_EFF_Eigen_B_1_1up_effSF_MVX;   //!
   TBranch        *b_jet_0_FT_EFF_Eigen_B_1_1up_ineffSF_MVX;   //!
   TBranch        *b_jet_0_FT_EFF_Eigen_B_2_1down_effSF_MVX;   //!
   TBranch        *b_jet_0_FT_EFF_Eigen_B_2_1down_ineffSF_MVX;   //!
   TBranch        *b_jet_0_FT_EFF_Eigen_B_2_1up_effSF_MVX;   //!
   TBranch        *b_jet_0_FT_EFF_Eigen_B_2_1up_ineffSF_MVX;   //!
   TBranch        *b_jet_0_FT_EFF_Eigen_C_0_1down_effSF_MVX;   //!
   TBranch        *b_jet_0_FT_EFF_Eigen_C_0_1down_ineffSF_MVX;   //!
   TBranch        *b_jet_0_FT_EFF_Eigen_C_0_1up_effSF_MVX;   //!
   TBranch        *b_jet_0_FT_EFF_Eigen_C_0_1up_ineffSF_MVX;   //!
   TBranch        *b_jet_0_FT_EFF_Eigen_C_1_1down_effSF_MVX;   //!
   TBranch        *b_jet_0_FT_EFF_Eigen_C_1_1down_ineffSF_MVX;   //!
   TBranch        *b_jet_0_FT_EFF_Eigen_C_1_1up_effSF_MVX;   //!
   TBranch        *b_jet_0_FT_EFF_Eigen_C_1_1up_ineffSF_MVX;   //!
   TBranch        *b_jet_0_FT_EFF_Eigen_C_2_1down_effSF_MVX;   //!
   TBranch        *b_jet_0_FT_EFF_Eigen_C_2_1down_ineffSF_MVX;   //!
   TBranch        *b_jet_0_FT_EFF_Eigen_C_2_1up_effSF_MVX;   //!
   TBranch        *b_jet_0_FT_EFF_Eigen_C_2_1up_ineffSF_MVX;   //!
   TBranch        *b_jet_0_FT_EFF_Eigen_C_3_1down_effSF_MVX;   //!
   TBranch        *b_jet_0_FT_EFF_Eigen_C_3_1down_ineffSF_MVX;   //!
   TBranch        *b_jet_0_FT_EFF_Eigen_C_3_1up_effSF_MVX;   //!
   TBranch        *b_jet_0_FT_EFF_Eigen_C_3_1up_ineffSF_MVX;   //!
   TBranch        *b_jet_0_FT_EFF_Eigen_Light_0_1down_effSF_MVX;   //!
   TBranch        *b_jet_0_FT_EFF_Eigen_Light_0_1down_ineffSF_MVX;   //!
   TBranch        *b_jet_0_FT_EFF_Eigen_Light_0_1up_effSF_MVX;   //!
   TBranch        *b_jet_0_FT_EFF_Eigen_Light_0_1up_ineffSF_MVX;   //!
   TBranch        *b_jet_0_FT_EFF_Eigen_Light_1_1down_effSF_MVX;   //!
   TBranch        *b_jet_0_FT_EFF_Eigen_Light_1_1down_ineffSF_MVX;   //!
   TBranch        *b_jet_0_FT_EFF_Eigen_Light_1_1up_effSF_MVX;   //!
   TBranch        *b_jet_0_FT_EFF_Eigen_Light_1_1up_ineffSF_MVX;   //!
   TBranch        *b_jet_0_FT_EFF_Eigen_Light_2_1down_effSF_MVX;   //!
   TBranch        *b_jet_0_FT_EFF_Eigen_Light_2_1down_ineffSF_MVX;   //!
   TBranch        *b_jet_0_FT_EFF_Eigen_Light_2_1up_effSF_MVX;   //!
   TBranch        *b_jet_0_FT_EFF_Eigen_Light_2_1up_ineffSF_MVX;   //!
   TBranch        *b_jet_0_FT_EFF_Eigen_Light_3_1down_effSF_MVX;   //!
   TBranch        *b_jet_0_FT_EFF_Eigen_Light_3_1down_ineffSF_MVX;   //!
   TBranch        *b_jet_0_FT_EFF_Eigen_Light_3_1up_effSF_MVX;   //!
   TBranch        *b_jet_0_FT_EFF_Eigen_Light_3_1up_ineffSF_MVX;   //!
   TBranch        *b_jet_0_FT_EFF_Eigen_Light_4_1down_effSF_MVX;   //!
   TBranch        *b_jet_0_FT_EFF_Eigen_Light_4_1down_ineffSF_MVX;   //!
   TBranch        *b_jet_0_FT_EFF_Eigen_Light_4_1up_effSF_MVX;   //!
   TBranch        *b_jet_0_FT_EFF_Eigen_Light_4_1up_ineffSF_MVX;   //!
   TBranch        *b_jet_0_FT_EFF_extrapolation_1down_effSF_MVX;   //!
   TBranch        *b_jet_0_FT_EFF_extrapolation_1down_ineffSF_MVX;   //!
   TBranch        *b_jet_0_FT_EFF_extrapolation_1up_effSF_MVX;   //!
   TBranch        *b_jet_0_FT_EFF_extrapolation_1up_ineffSF_MVX;   //!
   TBranch        *b_jet_0_FT_EFF_extrapolation_from_charm_1down_effSF_MVX;   //!
   TBranch        *b_jet_0_FT_EFF_extrapolation_from_charm_1down_ineffSF_MVX;   //!
   TBranch        *b_jet_0_FT_EFF_extrapolation_from_charm_1up_effSF_MVX;   //!
   TBranch        *b_jet_0_FT_EFF_extrapolation_from_charm_1up_ineffSF_MVX;   //!
   TBranch        *b_jet_0_NOMINAL_effSF_JVT;   //!
   TBranch        *b_jet_NOMINAL_global_effSF_MVX;   //!
   TBranch        *b_jet_NOMINAL_global_ineffSF_MVX;   //!
   TBranch        *b_jet_FT_EFF_Eigen_B_0_1down_global_effSF_MVX;   //!
   TBranch        *b_jet_FT_EFF_Eigen_B_0_1down_global_ineffSF_MVX;   //!
   TBranch        *b_jet_FT_EFF_Eigen_B_0_1up_global_effSF_MVX;   //!
   TBranch        *b_jet_FT_EFF_Eigen_B_0_1up_global_ineffSF_MVX;   //!
   TBranch        *b_jet_FT_EFF_Eigen_B_1_1down_global_effSF_MVX;   //!
   TBranch        *b_jet_FT_EFF_Eigen_B_1_1down_global_ineffSF_MVX;   //!
   TBranch        *b_jet_FT_EFF_Eigen_B_1_1up_global_effSF_MVX;   //!
   TBranch        *b_jet_FT_EFF_Eigen_B_1_1up_global_ineffSF_MVX;   //!
   TBranch        *b_jet_FT_EFF_Eigen_B_2_1down_global_effSF_MVX;   //!
   TBranch        *b_jet_FT_EFF_Eigen_B_2_1down_global_ineffSF_MVX;   //!
   TBranch        *b_jet_FT_EFF_Eigen_B_2_1up_global_effSF_MVX;   //!
   TBranch        *b_jet_FT_EFF_Eigen_B_2_1up_global_ineffSF_MVX;   //!
   TBranch        *b_jet_FT_EFF_Eigen_C_0_1down_global_effSF_MVX;   //!
   TBranch        *b_jet_FT_EFF_Eigen_C_0_1down_global_ineffSF_MVX;   //!
   TBranch        *b_jet_FT_EFF_Eigen_C_0_1up_global_effSF_MVX;   //!
   TBranch        *b_jet_FT_EFF_Eigen_C_0_1up_global_ineffSF_MVX;   //!
   TBranch        *b_jet_FT_EFF_Eigen_C_1_1down_global_effSF_MVX;   //!
   TBranch        *b_jet_FT_EFF_Eigen_C_1_1down_global_ineffSF_MVX;   //!
   TBranch        *b_jet_FT_EFF_Eigen_C_1_1up_global_effSF_MVX;   //!
   TBranch        *b_jet_FT_EFF_Eigen_C_1_1up_global_ineffSF_MVX;   //!
   TBranch        *b_jet_FT_EFF_Eigen_C_2_1down_global_effSF_MVX;   //!
   TBranch        *b_jet_FT_EFF_Eigen_C_2_1down_global_ineffSF_MVX;   //!
   TBranch        *b_jet_FT_EFF_Eigen_C_2_1up_global_effSF_MVX;   //!
   TBranch        *b_jet_FT_EFF_Eigen_C_2_1up_global_ineffSF_MVX;   //!
   TBranch        *b_jet_FT_EFF_Eigen_C_3_1down_global_effSF_MVX;   //!
   TBranch        *b_jet_FT_EFF_Eigen_C_3_1down_global_ineffSF_MVX;   //!
   TBranch        *b_jet_FT_EFF_Eigen_C_3_1up_global_effSF_MVX;   //!
   TBranch        *b_jet_FT_EFF_Eigen_C_3_1up_global_ineffSF_MVX;   //!
   TBranch        *b_jet_FT_EFF_Eigen_Light_0_1down_global_effSF_MVX;   //!
   TBranch        *b_jet_FT_EFF_Eigen_Light_0_1down_global_ineffSF_MVX;   //!
   TBranch        *b_jet_FT_EFF_Eigen_Light_0_1up_global_effSF_MVX;   //!
   TBranch        *b_jet_FT_EFF_Eigen_Light_0_1up_global_ineffSF_MVX;   //!
   TBranch        *b_jet_FT_EFF_Eigen_Light_1_1down_global_effSF_MVX;   //!
   TBranch        *b_jet_FT_EFF_Eigen_Light_1_1down_global_ineffSF_MVX;   //!
   TBranch        *b_jet_FT_EFF_Eigen_Light_1_1up_global_effSF_MVX;   //!
   TBranch        *b_jet_FT_EFF_Eigen_Light_1_1up_global_ineffSF_MVX;   //!
   TBranch        *b_jet_FT_EFF_Eigen_Light_2_1down_global_effSF_MVX;   //!
   TBranch        *b_jet_FT_EFF_Eigen_Light_2_1down_global_ineffSF_MVX;   //!
   TBranch        *b_jet_FT_EFF_Eigen_Light_2_1up_global_effSF_MVX;   //!
   TBranch        *b_jet_FT_EFF_Eigen_Light_2_1up_global_ineffSF_MVX;   //!
   TBranch        *b_jet_FT_EFF_Eigen_Light_3_1down_global_effSF_MVX;   //!
   TBranch        *b_jet_FT_EFF_Eigen_Light_3_1down_global_ineffSF_MVX;   //!
   TBranch        *b_jet_FT_EFF_Eigen_Light_3_1up_global_effSF_MVX;   //!
   TBranch        *b_jet_FT_EFF_Eigen_Light_3_1up_global_ineffSF_MVX;   //!
   TBranch        *b_jet_FT_EFF_Eigen_Light_4_1down_global_effSF_MVX;   //!
   TBranch        *b_jet_FT_EFF_Eigen_Light_4_1down_global_ineffSF_MVX;   //!
   TBranch        *b_jet_FT_EFF_Eigen_Light_4_1up_global_effSF_MVX;   //!
   TBranch        *b_jet_FT_EFF_Eigen_Light_4_1up_global_ineffSF_MVX;   //!
   TBranch        *b_jet_FT_EFF_extrapolation_1down_global_effSF_MVX;   //!
   TBranch        *b_jet_FT_EFF_extrapolation_1down_global_ineffSF_MVX;   //!
   TBranch        *b_jet_FT_EFF_extrapolation_1up_global_effSF_MVX;   //!
   TBranch        *b_jet_FT_EFF_extrapolation_1up_global_ineffSF_MVX;   //!
   TBranch        *b_jet_FT_EFF_extrapolation_from_charm_1down_global_effSF_MVX;   //!
   TBranch        *b_jet_FT_EFF_extrapolation_from_charm_1down_global_ineffSF_MVX;   //!
   TBranch        *b_jet_FT_EFF_extrapolation_from_charm_1up_global_effSF_MVX;   //!
   TBranch        *b_jet_FT_EFF_extrapolation_from_charm_1up_global_ineffSF_MVX;   //!
   TBranch        *b_jet_NOMINAL_global_effSF_JVT;   //!
   TBranch        *b_NOMINAL_pileup_combined_weight;   //!
   TBranch        *b_PRW_DATASF_1down_pileup_combined_weight;   //!
   TBranch        *b_PRW_DATASF_1up_pileup_combined_weight;   //!
   TBranch        *b_HLT_e120_lhloose;   //!
   TBranch        *b_HLT_e120_lhloose_nod0;   //!
   TBranch        *b_HLT_e140_lhloose;   //!
   TBranch        *b_HLT_e140_lhloose_nod0;   //!
   TBranch        *b_HLT_e17_lhloose_nod0_L1EM15;   //!
   TBranch        *b_HLT_e24_lhmedium_iloose_L1EM18VH;   //!
   TBranch        *b_HLT_e24_lhmedium_iloose_L1EM20VH;   //!
   TBranch        *b_HLT_e24_lhtight_iloose;   //!
   TBranch        *b_HLT_e26_lhtight_iloose;   //!
   TBranch        *b_HLT_e60_lhmedium;   //!
   TBranch        *b_HLT_mu24_imedium;   //!
   TBranch        *b_HLT_mu26_imedium;   //!
   TBranch        *b_HLT_mu26_ivarmedium;   //!
   TBranch        *b_HLT_mu50;   //!
   TBranch        *b_HLT_tau125_medium1_tracktwo_resurrected;   //!
   TBranch        *b_HLT_tau160_medium1_tracktwo_resurrected;   //!
   TBranch        *b_HLT_tau25_idperf_track_resurrected;   //!
   TBranch        *b_HLT_tau25_idperf_tracktwo_resurrected;   //!
   TBranch        *b_HLT_tau25_loose1_ptonly_resurrected;   //!
   TBranch        *b_HLT_tau25_loose1_tracktwo_resurrected;   //!
   TBranch        *b_HLT_tau25_medium1_mvonly_resurrected;   //!
   TBranch        *b_HLT_tau25_medium1_ptonly_resurrected;   //!
   TBranch        *b_HLT_tau25_medium1_track_resurrected;   //!
   TBranch        *b_HLT_tau25_medium1_tracktwo_resurrected;   //!
   TBranch        *b_HLT_tau25_medium1_tracktwo_L1TAU12_resurrected;   //!
   TBranch        *b_HLT_tau25_medium1_tracktwo_L1TAU12IL_resurrected;   //!
   TBranch        *b_HLT_tau25_medium1_tracktwo_L1TAU12IT_resurrected;   //!
   TBranch        *b_HLT_tau25_perf_ptonly_resurrected;   //!
   TBranch        *b_HLT_tau25_perf_track_resurrected;   //!
   TBranch        *b_HLT_tau25_perf_tracktwo_resurrected;   //!
   TBranch        *b_HLT_tau25_tight1_ptonly_resurrected;   //!
   TBranch        *b_HLT_tau25_tight1_tracktwo_resurrected;   //!
   TBranch        *b_HLT_tau35_medium1_tracktwo_resurrected;   //!
   TBranch        *b_HLT_tau50_medium1_tracktwo_L1TAU12_resurrected;   //!
   TBranch        *b_HLT_tau80_medium1_tracktwo_resurrected;   //!
   TBranch        *b_HLT_tau80_medium1_tracktwo_L1TAU60_resurrected;   //!
   TBranch        *b_L1_TAU12_resurrected;   //!
   TBranch        *b_L1_TAU12IM_resurrected;   //!
   TBranch        *b_L1_TAU20_resurrected;   //!
   TBranch        *b_L1_TAU20IM_resurrected;   //!
   TBranch        *b_tau_0_id_centFracCorrected;   //!
   TBranch        *b_tau_0_id_etOverPtLeadTrkCorrected;   //!
   TBranch        *b_tau_0_id_innerTrkAvgDistCorrected;   //!
   TBranch        *b_tau_0_id_ipSigLeadTrkCorrected;   //!
   TBranch        *b_tau_0_id_SumPtTrkFracCorrected;   //!
   TBranch        *b_tau_0_id_ptRatioEflowApproxCorrected;   //!
   TBranch        *b_tau_0_id_mEflowApproxCorrected;   //!
   TBranch        *b_tau_0_id_ChPiEMEOverCaloEMECorrected;   //!
   TBranch        *b_tau_0_id_EMPOverTrkSysPCorrected;   //!
   TBranch        *b_tau_0_id_dRmaxCorrected;   //!
   TBranch        *b_tau_0_id_trFlightPathSigCorrected;   //!
   TBranch        *b_tau_0_id_massTrkSysCorrected;   //!
   TBranch        *b_tau_0_id_centFrac;   //!
   TBranch        *b_tau_0_id_etOverPtLeadTrk;   //!
   TBranch        *b_tau_0_id_innerTrkAvgDist;   //!
   TBranch        *b_tau_0_id_ipSigLeadTrk;   //!
   TBranch        *b_tau_0_id_SumPtTrkFrac;   //!
   TBranch        *b_tau_0_id_ptRatioEflowApprox;   //!
   TBranch        *b_tau_0_id_mEflowApprox;   //!
   TBranch        *b_tau_0_id_ChPiEMEOverCaloEME;   //!
   TBranch        *b_tau_0_id_EMPOverTrkSysP;   //!
   TBranch        *b_tau_0_id_dRmax;   //!
   TBranch        *b_tau_0_id_trFlightPathSig;   //!
   TBranch        *b_tau_0_id_massTrkSys;   //!
   TBranch        *b_tau_0_truth;   //!
   TBranch        *b_tau_0_truth_eta;   //!
   TBranch        *b_tau_0_truth_phi;   //!
   TBranch        *b_tau_0_truth_pt;   //!
   TBranch        *b_tau_0_truth_et;   //!
   TBranch        *b_tau_0_truth_m;   //!
   TBranch        *b_tau_0_truth_q;   //!
   TBranch        *b_tau_0_truth_pdgId;   //!
   TBranch        *b_tau_0_truth_mother_pdgId;   //!
   TBranch        *b_tau_0_truth_origin;   //!
   TBranch        *b_tau_0_truth_type;   //!
   TBranch        *b_tau_0_truth_isTau;   //!
   TBranch        *b_tau_0_truth_isHadTau;   //!
   TBranch        *b_tau_0_truth_isEle;   //!
   TBranch        *b_tau_0_truth_isMuon;   //!
   TBranch        *b_tau_0_truth_isJet;   //!
   TBranch        *b_tau_0_truth_classifierParticleType;   //!
   TBranch        *b_tau_0_truth_classifierParticleOrigin;   //!
   TBranch        *b_tau_0_truth_pt_vis;   //!
   TBranch        *b_tau_0_truth_eta_vis;   //!
   TBranch        *b_tau_0_truth_phi_vis;   //!
   TBranch        *b_tau_0_truth_m_vis;   //!
   TBranch        *b_tau_0_truth_decay_mode;   //!
   TBranch        *b_tau_0_truth_n_charged;   //!
   TBranch        *b_tau_0_truth_n_charged_pion;   //!
   TBranch        *b_tau_0_truth_n_neutral;   //!
   TBranch        *b_tau_0_truth_n_neutral_pion;   //!
   TBranch        *b_lep_0_matched;   //!
   TBranch        *b_lep_0_matched_eta;   //!
   TBranch        *b_lep_0_matched_phi;   //!
   TBranch        *b_lep_0_matched_pt;   //!
   TBranch        *b_lep_0_matched_et;   //!
   TBranch        *b_lep_0_matched_m;   //!
   TBranch        *b_lep_0_matched_q;   //!
   TBranch        *b_lep_0_matched_pdgId;   //!
   TBranch        *b_lep_0_matched_mother_pdgId;   //!
   TBranch        *b_lep_0_matched_isHad;   //!
   TBranch        *b_lep_0_matched_origin;   //!
   TBranch        *b_lep_0_matched_type;   //!
   TBranch        *b_muTrigMatch_0_HLT_mu24_imedium;   //!
   TBranch        *b_muTrigMatch_0_HLT_mu50;   //!
   TBranch        *b_muTrigMatch_0_HLT_mu26_ivarmedium;   //!
   TBranch        *b_muTrigMatch_0_HLT_mu26_imedium;   //!
   TBranch        *b_eleTrigMatch_0_HLT_e26_lhtight_iloose;   //!
   TBranch        *b_eleTrigMatch_0_HLT_e60_lhmedium;   //!
   TBranch        *b_eleTrigMatch_0_HLT_e24_lhmedium_iloose_L1EM18VH;   //!
   TBranch        *b_eleTrigMatch_0_HLT_e24_lhmedium_iloose_L1EM20VH;   //!
   TBranch        *b_eleTrigMatch_0_HLT_e24_lhtight_iloose;   //!
   TBranch        *b_eleTrigMatch_0_HLT_e120_lhloose;   //!
   TBranch        *b_eleTrigMatch_0_HLT_e120_lhloose_nod0;   //!
   TBranch        *b_eleTrigMatch_0_HLT_e17_lhloose_nod0_L1EM15;   //!
   TBranch        *b_eleTrigMatch_0_HLT_e140_lhloose_nod0;   //!
   TBranch        *b_eleTrigMatch_0_HLT_e140_lhloose;   //!
   TBranch        *b_tau_0_trig_HLT_tau25_medium1_tracktwo;   //!
   TBranch        *b_tau_0_trig_HLT_tau25_idperf_tracktwo;   //!
   TBranch        *b_tau_0_trig_HLT_tau35_medium1_tracktwo;   //!
   TBranch        *b_tau_0_trig_HLT_tau50_medium1_tracktwo_L1TAU12;   //!
   TBranch        *b_tau_0_trig_HLT_tau80_medium1_tracktwo;   //!
   TBranch        *b_tau_0_trig_HLT_tau80_medium1_tracktwo_L1TAU60;   //!
   TBranch        *b_tau_0_trig_HLT_tau125_medium1_tracktwo;   //!
   TBranch        *b_tau_0_trig_HLT_tau160_medium1_tracktwo;   //!
   TBranch        *b_tau_0_trig_L1_TAU12IM;   //!
   TBranch        *b_tau_0_trig_L1_TAU20IM;   //!
   TBranch        *b_tau_0_trig_HLT_tau25_perf_ptonly;   //!
   TBranch        *b_tau_0_trig_HLT_tau25_idperf_track;   //!
   TBranch        *b_tau_0_trig_HLT_tau25_perf_track;   //!
   TBranch        *b_tau_0_trig_HLT_tau25_perf_tracktwo;   //!
   TBranch        *b_tau_0_trig_HLT_tau25_loose1_ptonly;   //!
   TBranch        *b_tau_0_trig_HLT_tau25_loose1_tracktwo;   //!
   TBranch        *b_tau_0_trig_HLT_tau25_medium1_mvonly;   //!
   TBranch        *b_tau_0_trig_HLT_tau25_medium1_ptonly;   //!
   TBranch        *b_tau_0_trig_HLT_tau25_medium1_track;   //!
   TBranch        *b_tau_0_trig_HLT_tau25_tight1_ptonly;   //!
   TBranch        *b_tau_0_trig_HLT_tau25_tight1_tracktwo;   //!
   TBranch        *b_tau_0_trig_HLT_tau25_medium1_tracktwo_L1TAU12;   //!
   TBranch        *b_tau_0_trig_HLT_tau25_medium1_tracktwo_L1TAU12IL;   //!
   TBranch        *b_tau_0_trig_HLT_tau25_medium1_tracktwo_L1TAU12IT;   //!
   TBranch        *b_tau_0_trig_L1_TAU12;   //!
   TBranch        *b_tau_0_trig_L1_TAU20;   //!
   TBranch        *b_tau_0;   //!
   TBranch        *b_tau_0_eta;   //!
   TBranch        *b_tau_0_phi;   //!
   TBranch        *b_tau_0_pt;   //!
   TBranch        *b_tau_0_et;   //!
   TBranch        *b_tau_0_m;   //!
   TBranch        *b_tau_0_q;   //!
   TBranch        *b_tau_0_n_tracks;   //!
   TBranch        *b_tau_0_n_wide_tracks;   //!
   TBranch        *b_tau_0_jet_bdt_loose;   //!
   TBranch        *b_tau_0_jet_bdt_medium;   //!
   TBranch        *b_tau_0_jet_bdt_tight;   //!
   TBranch        *b_tau_0_jet_bdt_score;   //!
   TBranch        *b_tau_0_ele_bdt_loose;   //!
   TBranch        *b_tau_0_ele_bdt_medium;   //!
   TBranch        *b_tau_0_ele_bdt_tight;   //!
   TBranch        *b_tau_0_ele_bdt_score;   //!
   TBranch        *b_tau_0_ele_bdt_eff_sf;   //!
   TBranch        *b_tau_0_ele_match_lhscore;   //!
   TBranch        *b_tau_0_ele_olr_pass;   //!
   TBranch        *b_tau_0_decay_mode;   //!
   TBranch        *b_tau_0_leadTrk_pt;   //!
   TBranch        *b_tau_0_leadTrk_eta;   //!
   TBranch        *b_tau_0_leadTrk_phi;   //!
   TBranch        *b_tau_0_mvx;   //!
   TBranch        *b_tau_0_mvx_tagged;   //!
   TBranch        *b_tau_0_ParticleFlowCombined_pt;   //!
   TBranch        *b_tau_0_ParticleFlowCombined_eta;   //!
   TBranch        *b_tau_0_ParticleFlowCombined_phi;   //!
   TBranch        *b_tau_0_ParticleFlowCombined_m;   //!
   TBranch        *b_lephad;   //!
   TBranch        *b_lephad_qxq;   //!
   TBranch        *b_lephad_dpt;   //!
   TBranch        *b_lephad_deta;   //!
   TBranch        *b_lephad_dphi;   //!
   TBranch        *b_lephad_dr;   //!
   TBranch        *b_lephad_vis_mass;   //!
   TBranch        *b_lephad_cosalpha;   //!
   TBranch        *b_lephad_vect_sum_pt;   //!
   TBranch        *b_lephad_scal_sum_pt;   //!
   TBranch        *b_lephad_ptx;   //!
   TBranch        *b_lephad_pty;   //!
   TBranch        *b_lephad_met_centrality;   //!
   TBranch        *b_lephad_met_bisect;   //!
   TBranch        *b_lephad_met_min_dphi;   //!
   TBranch        *b_lephad_met_sum_cos_dphi;   //!
   TBranch        *b_lephad_met_lep0_cos_dphi;   //!
   TBranch        *b_lephad_met_lep1_cos_dphi;   //!
   TBranch        *b_lephad_coll_approx;   //!
   TBranch        *b_lephad_coll_approx_m;   //!
   TBranch        *b_lephad_coll_approx_x0;   //!
   TBranch        *b_lephad_coll_approx_x1;   //!
   TBranch        *b_lephad_mt_lep0_met;   //!
   TBranch        *b_lephad_mt_lep1_met;   //!
   TBranch        *b_lephad_ParticleFlowCombined_dpt;   //!
   TBranch        *b_lephad_ParticleFlowCombined_deta;   //!
   TBranch        *b_lephad_ParticleFlowCombined_dphi;   //!
   TBranch        *b_lephad_ParticleFlowCombined_dr;   //!
   TBranch        *b_lephad_ParticleFlowCombined_vis_mass;   //!
   TBranch        *b_lephad_ParticleFlowCombined_cosalpha;   //!
   TBranch        *b_lephad_ParticleFlowCombined_vect_sum_pt;   //!
   TBranch        *b_lephad_ParticleFlowCombined_scal_sum_pt;   //!
   TBranch        *b_lephad_ParticleFlowCombined_met_centrality;   //!
   TBranch        *b_lephad_ParticleFlowCombined_met_bisect;   //!
   TBranch        *b_lephad_ParticleFlowCombined_met_min_dphi;   //!
   TBranch        *b_lephad_ParticleFlowCombined_met_sum_cos_dphi;   //!
   TBranch        *b_lephad_ParticleFlowCombined_met_lep0_cos_dphi;   //!
   TBranch        *b_lephad_ParticleFlowCombined_met_lep1_cos_dphi;   //!
   TBranch        *b_lephad_ParticleFlowCombined_coll_approx;   //!
   TBranch        *b_lephad_ParticleFlowCombined_coll_approx_m;   //!
   TBranch        *b_lephad_ParticleFlowCombined_coll_approx_x0;   //!
   TBranch        *b_lephad_ParticleFlowCombined_coll_approx_x1;   //!
   TBranch        *b_lephad_ParticleFlowCombined_mt_lep0_met;   //!
   TBranch        *b_lephad_ParticleFlowCombined_mt_lep1_met;   //!
   TBranch        *b_jet_0;   //!
   TBranch        *b_jet_0_eta;   //!
   TBranch        *b_jet_0_phi;   //!
   TBranch        *b_jet_0_pt;   //!
   TBranch        *b_jet_0_et;   //!
   TBranch        *b_jet_0_m;   //!
   TBranch        *b_jet_0_q;   //!
   TBranch        *b_jet_0_jvt;   //!
   TBranch        *b_jet_0_mvx;   //!
   TBranch        *b_jet_0_mvx_tagged;   //!
   TBranch        *b_jet_0_flavorlabel;   //!
   TBranch        *b_jet_0_flavorlabel_part;   //!
   TBranch        *b_jet_0_flavorlabel_cone;   //!
   TBranch        *b_lep_0_iso_etcone20;   //!
   TBranch        *b_lep_0_iso_etcone30;   //!
   TBranch        *b_lep_0_iso_etcone40;   //!
   TBranch        *b_lep_0_iso_topoetcone20;   //!
   TBranch        *b_lep_0_iso_topoetcone30;   //!
   TBranch        *b_lep_0_iso_topoetcone40;   //!
   TBranch        *b_lep_0_iso_ptcone20;   //!
   TBranch        *b_lep_0_iso_ptcone30;   //!
   TBranch        *b_lep_0_iso_ptcone40;   //!
   TBranch        *b_lep_0_iso_ptvarcone20;   //!
   TBranch        *b_lep_0_iso_ptvarcone30;   //!
   TBranch        *b_lep_0_iso_ptvarcone40;   //!
   TBranch        *b_lep_1;   //!
   TBranch        *b_lep_1_eta;   //!
   TBranch        *b_lep_1_phi;   //!
   TBranch        *b_lep_1_pt;   //!
   TBranch        *b_lep_1_et;   //!
   TBranch        *b_lep_1_m;   //!
   TBranch        *b_lep_1_q;   //!
   TBranch        *b_lep_1_trk_d0;   //!
   TBranch        *b_lep_1_trk_d0_sig;   //!
   TBranch        *b_lep_1_trk_z0;   //!
   TBranch        *b_lep_1_trk_z0_sintheta;   //!
   TBranch        *b_lep_1_trk_z0_sig;   //!
   TBranch        *b_lep_1_trk_pvx_z0;   //!
   TBranch        *b_lep_1_trk_pvx_z0_sintheta;   //!
   TBranch        *b_lep_1_trk_pvx_z0_sig;   //!
   TBranch        *b_lep_1_trk_pt_error;   //!
   TBranch        *b_lep_1_iso_wp;   //!
   TBranch        *b_lep_1_id_veryloose;   //!
   TBranch        *b_lep_1_id_loose;   //!
   TBranch        *b_lep_1_id_medium;   //!
   TBranch        *b_lep_1_id_tight;   //!
   TBranch        *b_lep_1_id_bad;   //!
   TBranch        *b_lep_1_muonType;   //!
   TBranch        *b_lep_1_cluster_eta;   //!
   TBranch        *b_lep_1_cluster_eta_be2;   //!
   TBranch        *b_dilep_m;   //!
   TBranch        *b_tau_1;   //!
   TBranch        *b_tau_1_eta;   //!
   TBranch        *b_tau_1_phi;   //!
   TBranch        *b_tau_1_pt;   //!
   TBranch        *b_tau_1_et;   //!
   TBranch        *b_tau_1_m;   //!
   TBranch        *b_tau_1_q;   //!
   TBranch        *b_tau_1_n_tracks;   //!
   TBranch        *b_tau_1_n_wide_tracks;   //!
   TBranch        *b_tau_1_jet_bdt_loose;   //!
   TBranch        *b_tau_1_jet_bdt_medium;   //!
   TBranch        *b_tau_1_jet_bdt_tight;   //!
   TBranch        *b_tau_1_jet_bdt_score;   //!
   TBranch        *b_tau_1_ele_bdt_loose;   //!
   TBranch        *b_tau_1_ele_bdt_medium;   //!
   TBranch        *b_tau_1_ele_bdt_tight;   //!
   TBranch        *b_tau_1_ele_bdt_score;   //!
   TBranch        *b_tau_1_ele_bdt_eff_sf;   //!
   TBranch        *b_tau_1_ele_match_lhscore;   //!
   TBranch        *b_tau_1_ele_olr_pass;   //!
   TBranch        *b_tau_1_decay_mode;   //!
   TBranch        *b_tau_1_leadTrk_pt;   //!
   TBranch        *b_tau_1_leadTrk_eta;   //!
   TBranch        *b_tau_1_leadTrk_phi;   //!
   TBranch        *b_tau_1_mvx;   //!
   TBranch        *b_tau_1_mvx_tagged;   //!
   TBranch        *b_tau_0_sub_n_neutral;   //!
   TBranch        *b_tau_0_sub_n_charged;   //!
   TBranch        *b_tau_0_sub_PanTauCellBased_pt;   //!
   TBranch        *b_tau_0_sub_PanTauCellBased_eta;   //!
   TBranch        *b_tau_0_sub_PanTauCellBased_phi;   //!
   TBranch        *b_tau_0_sub_PanTauCellBased_m;   //!
   TBranch        *b_tau_0_sub_ctrk0_cellBased_pt;   //!
   TBranch        *b_tau_0_sub_ctrk0_cellBased_eta;   //!
   TBranch        *b_tau_0_sub_ctrk0_cellBased_phi;   //!
   TBranch        *b_tau_0_sub_ctrk1_cellBased_pt;   //!
   TBranch        *b_tau_0_sub_ctrk1_cellBased_eta;   //!
   TBranch        *b_tau_0_sub_ctrk1_cellBased_phi;   //!
   TBranch        *b_tau_0_sub_ctrk2_cellBased_pt;   //!
   TBranch        *b_tau_0_sub_ctrk2_cellBased_eta;   //!
   TBranch        *b_tau_0_sub_ctrk2_cellBased_phi;   //!
   TBranch        *b_tau_0_sub_ConstituentBased_pt;   //!
   TBranch        *b_tau_0_sub_ConstituentBased_eta;   //!
   TBranch        *b_tau_0_sub_ConstituentBased_phi;   //!
   TBranch        *b_tau_0_sub_ConstituentBased_m;   //!
   TBranch        *b_tau_0_sub_ParticleFlowCombined_pt;   //!
   TBranch        *b_tau_0_sub_ParticleFlowCombined_eta;   //!
   TBranch        *b_tau_0_sub_ParticleFlowCombined_phi;   //!
   TBranch        *b_tau_0_sub_ParticleFlowCombined_m;   //!
   TBranch        *b_tau_0_sub_neu0_bdtPi0Score;   //!
   TBranch        *b_tau_0_sub_neu0_cellBased_pt;   //!
   TBranch        *b_tau_0_sub_neu0_cellBased_eta;   //!
   TBranch        *b_tau_0_sub_neu0_cellBased_phi;   //!
   TBranch        *b_tau_0_sub_neu0_cellBased_FIRST_ETA;   //!
   TBranch        *b_tau_0_sub_neu0_cellBased_SECOND_R;   //!
   TBranch        *b_tau_0_sub_neu0_cellBased_SECOND_LAMBDA;   //!
   TBranch        *b_tau_0_sub_neu0_cellBased_DELTA_PHI;   //!
   TBranch        *b_tau_0_sub_neu0_cellBased_DELTA_THETA;   //!
   TBranch        *b_tau_0_sub_neu0_cellBased_CENTER_LAMBDA;   //!
   TBranch        *b_tau_0_sub_neu0_cellBased_LATERAL;   //!
   TBranch        *b_tau_0_sub_neu0_cellBased_LONGITUDINAL;   //!
   TBranch        *b_tau_0_sub_neu0_cellBased_ENG_FRAC_EM;   //!
   TBranch        *b_tau_0_sub_neu0_cellBased_ENG_FRAC_MAX;   //!
   TBranch        *b_tau_0_sub_neu0_cellBased_ENG_FRAC_CORE;   //!
   TBranch        *b_tau_0_sub_neu0_cellBased_SECOND_ENG_DENS;   //!
   TBranch        *b_tau_0_sub_neu0_cellBased_EM1CoreFrac;   //!
   TBranch        *b_tau_0_sub_neu0_cellBased_asymmetryInEM1WRTTrk;   //!
   TBranch        *b_tau_0_sub_neu0_cellBased_NHitsInEM1;   //!
   TBranch        *b_tau_0_sub_neu0_cellBased_NPosECells_PS;   //!
   TBranch        *b_tau_0_sub_neu0_cellBased_NPosECells_EM1;   //!
   TBranch        *b_tau_0_sub_neu0_cellBased_NPosECells_EM2;   //!
   TBranch        *b_tau_0_sub_neu0_cellBased_firstEtaWRTClusterPosition_EM1;   //!
   TBranch        *b_tau_0_sub_neu0_cellBased_firstEtaWRTClusterPosition_EM2;   //!
   TBranch        *b_tau_0_sub_neu0_cellBased_secondEtaWRTClusterPosition_EM1;   //!
   TBranch        *b_tau_0_sub_neu0_cellBased_secondEtaWRTClusterPosition_EM2;   //!
   TBranch        *b_tau_0_sub_neu0_cellBased_energy_EM1;   //!
   TBranch        *b_tau_0_sub_neu0_cellBased_energy_EM2;   //!
   TBranch        *b_tau_0_sub_neu1_bdtPi0Score;   //!
   TBranch        *b_tau_0_sub_neu1_cellBased_pt;   //!
   TBranch        *b_tau_0_sub_neu1_cellBased_eta;   //!
   TBranch        *b_tau_0_sub_neu1_cellBased_phi;   //!
   TBranch        *b_tau_0_sub_neu1_cellBased_FIRST_ETA;   //!
   TBranch        *b_tau_0_sub_neu1_cellBased_SECOND_R;   //!
   TBranch        *b_tau_0_sub_neu1_cellBased_SECOND_LAMBDA;   //!
   TBranch        *b_tau_0_sub_neu1_cellBased_DELTA_PHI;   //!
   TBranch        *b_tau_0_sub_neu1_cellBased_DELTA_THETA;   //!
   TBranch        *b_tau_0_sub_neu1_cellBased_CENTER_LAMBDA;   //!
   TBranch        *b_tau_0_sub_neu1_cellBased_LATERAL;   //!
   TBranch        *b_tau_0_sub_neu1_cellBased_LONGITUDINAL;   //!
   TBranch        *b_tau_0_sub_neu1_cellBased_ENG_FRAC_EM;   //!
   TBranch        *b_tau_0_sub_neu1_cellBased_ENG_FRAC_MAX;   //!
   TBranch        *b_tau_0_sub_neu1_cellBased_ENG_FRAC_CORE;   //!
   TBranch        *b_tau_0_sub_neu1_cellBased_SECOND_ENG_DENS;   //!
   TBranch        *b_tau_0_sub_neu1_cellBased_EM1CoreFrac;   //!
   TBranch        *b_tau_0_sub_neu1_cellBased_asymmetryInEM1WRTTrk;   //!
   TBranch        *b_tau_0_sub_neu1_cellBased_NHitsInEM1;   //!
   TBranch        *b_tau_0_sub_neu1_cellBased_NPosECells_PS;   //!
   TBranch        *b_tau_0_sub_neu1_cellBased_NPosECells_EM1;   //!
   TBranch        *b_tau_0_sub_neu1_cellBased_NPosECells_EM2;   //!
   TBranch        *b_tau_0_sub_neu1_cellBased_firstEtaWRTClusterPosition_EM1;   //!
   TBranch        *b_tau_0_sub_neu1_cellBased_firstEtaWRTClusterPosition_EM2;   //!
   TBranch        *b_tau_0_sub_neu1_cellBased_secondEtaWRTClusterPosition_EM1;   //!
   TBranch        *b_tau_0_sub_neu1_cellBased_secondEtaWRTClusterPosition_EM2;   //!
   TBranch        *b_tau_0_sub_neu1_cellBased_energy_EM1;   //!
   TBranch        *b_tau_0_sub_neu1_cellBased_energy_EM2;   //!
   TBranch        *b_tau_0_sub_pantau_CellBasedInput_isPanTauCandidate;   //!
   TBranch        *b_tau_0_sub_pantau_CellBasedInput_DecayModeProto;   //!
   TBranch        *b_tau_0_sub_pantau_CellBasedInput_DecayMode;   //!
   TBranch        *b_tau_0_sub_pantau_CellBasedInput_BDTValue_1p0n_vs_1p1n;   //!
   TBranch        *b_tau_0_sub_pantau_CellBasedInput_BDTValue_1p1n_vs_1pXn;   //!
   TBranch        *b_tau_0_sub_pantau_CellBasedInput_BDTValue_3p0n_vs_3pXn;   //!
   TBranch        *b_tau_0_sub_pantau_CellBasedInput_BDTVar_Basic_NNeutralConsts;   //!
   TBranch        *b_tau_0_sub_pantau_CellBasedInput_BDTVar_Charged_JetMoment_EtDRxTotalEt;   //!
   TBranch        *b_tau_0_sub_pantau_CellBasedInput_BDTVar_Charged_StdDev_Et_WrtEtAllConsts;   //!
   TBranch        *b_tau_0_sub_pantau_CellBasedInput_BDTVar_Neutral_HLV_SumM;   //!
   TBranch        *b_tau_0_sub_pantau_CellBasedInput_BDTVar_Neutral_PID_BDTValues_BDTSort_1;   //!
   TBranch        *b_tau_0_sub_pantau_CellBasedInput_BDTVar_Neutral_PID_BDTValues_BDTSort_2;   //!
   TBranch        *b_tau_0_sub_pantau_CellBasedInput_BDTVar_Neutral_Ratio_1stBDTEtOverEtAllConsts;   //!
   TBranch        *b_tau_0_sub_pantau_CellBasedInput_BDTVar_Neutral_Ratio_EtOverEtAllConsts;   //!
   TBranch        *b_tau_0_sub_pantau_CellBasedInput_BDTVar_Neutral_Shots_NPhotonsInSeed;   //!
   TBranch        *b_tau_0_sub_pantau_CellBasedInput_BDTVar_Combined_DeltaR1stNeutralTo1stCharged;   //!
   TBranch        *b_tau_0_sub_pantau_CellBasedInput_BDTVar_Charged_HLV_SumM;   //!
   TBranch        *b_tau_0_trig1_HLT_matched;   //!
   TBranch        *b_tau_0_trig1_HLT_pt;   //!
   TBranch        *b_tau_0_trig1_HLT_etraw;   //!
   TBranch        *b_tau_0_trig1_HLT_eraw;   //!
   TBranch        *b_tau_0_trig1_HLT_eta;   //!
   TBranch        *b_tau_0_trig1_HLT_phi;   //!
   TBranch        *b_tau_0_trig1_HLT_m;   //!
   TBranch        *b_tau_0_trig1_HLT_n_tracks;   //!
   TBranch        *b_tau_0_trig1_HLT_n_wide_tracks;   //!
   TBranch        *b_tau_0_trig1_HLT_jet_bdt_loose;   //!
   TBranch        *b_tau_0_trig1_HLT_jet_bdt_medium;   //!
   TBranch        *b_tau_0_trig1_HLT_jet_bdt_tight;   //!
   TBranch        *b_tau_0_trig1_HLT_jet_bdt_score;   //!
   TBranch        *b_tau_0_trig1_HLT_centFracCorrected;   //!
   TBranch        *b_tau_0_trig1_HLT_etOverPtLeadTrkCorrected;   //!
   TBranch        *b_tau_0_trig1_HLT_innerTrkAvgDistCorrected;   //!
   TBranch        *b_tau_0_trig1_HLT_ipSigLeadTrkCorrected;   //!
   TBranch        *b_tau_0_trig1_HLT_SumPtTrkFracCorrected;   //!
   TBranch        *b_tau_0_trig1_HLT_ptRatioEflowApproxCorrected;   //!
   TBranch        *b_tau_0_trig1_HLT_mEflowApproxCorrected;   //!
   TBranch        *b_tau_0_trig1_HLT_ChPiEMEOverCaloEMECorrected;   //!
   TBranch        *b_tau_0_trig1_HLT_EMPOverTrkSysPCorrected;   //!
   TBranch        *b_tau_0_trig1_HLT_dRmaxCorrected;   //!
   TBranch        *b_tau_0_trig1_HLT_trFlightPathSigCorrected;   //!
   TBranch        *b_tau_0_trig1_HLT_massTrkSysCorrected;   //!
   TBranch        *b_tau_0_trig1_HLT_centFrac;   //!
   TBranch        *b_tau_0_trig1_HLT_etOverPtLeadTrk;   //!
   TBranch        *b_tau_0_trig1_HLT_innerTrkAvgDist;   //!
   TBranch        *b_tau_0_trig1_HLT_ipSigLeadTrk;   //!
   TBranch        *b_tau_0_trig1_HLT_SumPtTrkFrac;   //!
   TBranch        *b_tau_0_trig1_HLT_ptRatioEflowApprox;   //!
   TBranch        *b_tau_0_trig1_HLT_mEflowApprox;   //!
   TBranch        *b_tau_0_trig1_HLT_ChPiEMEOverCaloEME;   //!
   TBranch        *b_tau_0_trig1_HLT_EMPOverTrkSysP;   //!
   TBranch        *b_tau_0_trig1_HLT_dRmax;   //!
   TBranch        *b_tau_0_trig1_HLT_trFlightPathSig;   //!
   TBranch        *b_tau_0_trig1_HLT_massTrkSys;   //!
   TBranch        *b_tau_0_trig2_PreselTrig_matched;   //!
   TBranch        *b_tau_0_trig2_PreselTrig_pt;   //!
   TBranch        *b_tau_0_trig2_PreselTrig_eta;   //!
   TBranch        *b_tau_0_trig2_PreselTrig_phi;   //!
   TBranch        *b_tau_0_trig2_PreselTrig_m;   //!
   TBranch        *b_tau_0_trig2_PreselTrig_n_tracks;   //!
   TBranch        *b_tau_0_trig2_PreselTrig_n_wide_tracks;   //!
   TBranch        *b_tau_0_leadTrk_d0;   //!
   TBranch        *b_tau_0_leadTrk_d0_sig;   //!
   TBranch        *b_tau_0_leadTrk_z0;   //!
   TBranch        *b_tau_0_leadTrk_z0_sintheta;   //!
   TBranch        *b_tau_0_leadTrk_z0_sig;   //!
   TBranch        *b_tau_0_leadTrk_pvx_z0;   //!
   TBranch        *b_tau_0_leadTrk_pvx_z0_sintheta;   //!
   TBranch        *b_tau_0_leadTrk_pvx_z0_sig;   //!
   TBranch        *b_tau_0_trk_multi_cw_dr60_n_l5;   //!
   TBranch        *b_tau_0_trk_multi_cw_dr60_d04_n_l5;   //!
   TBranch        *b_tau_0_trk_multi_cw_dr60_n_lp5;   //!
   TBranch        *b_tau_0_trk_multi_cw_dr60_d04_n_lp5;   //!
   TBranch        *b_tau_0_trk_multi_cw_dr60_n_t5;   //!
   TBranch        *b_tau_0_trk_multi_cw_dr60_d04_n_t5;   //!
   TBranch        *b_tau_0_trk_multi_cws_dr60_n_l5;   //!
   TBranch        *b_tau_0_trk_multi_cws_dr60_d04_n_l5;   //!
   TBranch        *b_tau_0_trk_multi_cws_dr60_n_lp5;   //!
   TBranch        *b_tau_0_trk_multi_cws_dr60_d04_n_lp5;   //!
   TBranch        *b_tau_0_trk_multi_cws_dr60_n_t5;   //!
   TBranch        *b_tau_0_trk_multi_cws_dr60_d04_n_t5;   //!
   TBranch        *b_tau_0_trk_multi_cw_dr80_n_l5;   //!
   TBranch        *b_tau_0_trk_multi_cw_dr80_d04_n_l5;   //!
   TBranch        *b_tau_0_trk_multi_cw_dr80_n_lp5;   //!
   TBranch        *b_tau_0_trk_multi_cw_dr80_d04_n_lp5;   //!
   TBranch        *b_tau_0_trk_multi_cw_dr80_n_t5;   //!
   TBranch        *b_tau_0_trk_multi_cw_dr80_d04_n_t5;   //!
   TBranch        *b_tau_0_trk_multi_cws_dr80_n_l5;   //!
   TBranch        *b_tau_0_trk_multi_cws_dr80_d04_n_l5;   //!
   TBranch        *b_tau_0_trk_multi_cws_dr80_n_lp5;   //!
   TBranch        *b_tau_0_trk_multi_cws_dr80_d04_n_lp5;   //!
   TBranch        *b_tau_0_trk_multi_cws_dr80_n_t5;   //!
   TBranch        *b_tau_0_trk_multi_cws_dr80_d04_n_t5;   //!
   TBranch        *b_tau_0_trk_multi_ckt4iso_n;   //!
   TBranch        *b_tau_0_trk_multi_diag_n_had_tracks;   //!
   TBranch        *b_tau_0_trk_multi_diag_purity;   //!
   TBranch        *b_tau_0_trk_multi_diag_n_tau_tracks;   //!
   TBranch        *b_tau_0_trk_multi_diag_n_spu_tracks;   //!
   TBranch        *b_tau_0_trk_multi_diag_n_spu_uc_tracks;   //!
   TBranch        *b_tau_0_trk_multi_diag_n_spu_cv_tracks;   //!
   TBranch        *b_tau_0_trk_multi_diag_n_spu_pu_tracks;   //!
   TBranch        *b_tau_0_trk_multi_diag_n_spu_ue_tracks;   //!
   TBranch        *b_tau_0_trk_multi_diag_n_spu_fk_tracks;   //!
   TBranch        *b_tau_tes_alpha_pt_shift;   //!

   makeclass(TTree *tree=0);
   virtual ~makeclass();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef makeclass_cxx
makeclass::makeclass(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("/net/wpc03/scratch/ikai/NTUPLE/v19/SKIM/hist-361108_skimed.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("/net/wpc03/scratch/ikai/NTUPLE/v19/SKIM/hist-361108_skimed.root");
      }
      f->GetObject("NOMINAL",tree);

   }
   Init(tree);
}

makeclass::~makeclass()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t makeclass::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t makeclass::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void makeclass::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("n_muons", &n_muons, &b_n_muons);
   fChain->SetBranchAddress("n_electrons", &n_electrons, &b_n_electrons);
   fChain->SetBranchAddress("n_photons", &n_photons, &b_n_photons);
   fChain->SetBranchAddress("n_taus", &n_taus, &b_n_taus);
   fChain->SetBranchAddress("n_taus_loose", &n_taus_loose, &b_n_taus_loose);
   fChain->SetBranchAddress("n_taus_medium", &n_taus_medium, &b_n_taus_medium);
   fChain->SetBranchAddress("n_taus_tight", &n_taus_tight, &b_n_taus_tight);
   fChain->SetBranchAddress("n_jets", &n_jets, &b_n_jets);
   fChain->SetBranchAddress("n_jets_bad", &n_jets_bad, &b_n_jets_bad);
   fChain->SetBranchAddress("n_bjets", &n_bjets, &b_n_bjets);
   fChain->SetBranchAddress("n_vx", &n_vx, &b_n_vx);
   fChain->SetBranchAddress("n_pvx", &n_pvx, &b_n_pvx);
   fChain->SetBranchAddress("n_actual_int", &n_actual_int, &b_n_actual_int);
   fChain->SetBranchAddress("n_avg_int", &n_avg_int, &b_n_avg_int);
   fChain->SetBranchAddress("n_avg_int_cor", &n_avg_int_cor, &b_n_avg_int_cor);
   fChain->SetBranchAddress("n_truth_jets", &n_truth_jets, &b_n_truth_jets);
   fChain->SetBranchAddress("n_truth_quark_jets", &n_truth_quark_jets, &b_n_truth_quark_jets);
   fChain->SetBranchAddress("n_truth_gluon_jets", &n_truth_gluon_jets, &b_n_truth_gluon_jets);
   fChain->SetBranchAddress("n_truth_jets_pt25_eta45", &n_truth_jets_pt25_eta45, &b_n_truth_jets_pt25_eta45);
   fChain->SetBranchAddress("event_clean_detector_core", &event_clean_detector_core, &b_event_clean_detector_core);
   fChain->SetBranchAddress("lep_0", &lep_0, &b_lep_0);
   fChain->SetBranchAddress("lep_0_eta", &lep_0_eta, &b_lep_0_eta);
   fChain->SetBranchAddress("lep_0_phi", &lep_0_phi, &b_lep_0_phi);
   fChain->SetBranchAddress("lep_0_pt", &lep_0_pt, &b_lep_0_pt);
   fChain->SetBranchAddress("lep_0_et", &lep_0_et, &b_lep_0_et);
   fChain->SetBranchAddress("lep_0_m", &lep_0_m, &b_lep_0_m);
   fChain->SetBranchAddress("lep_0_q", &lep_0_q, &b_lep_0_q);
   fChain->SetBranchAddress("lep_0_trk_d0", &lep_0_trk_d0, &b_lep_0_trk_d0);
   fChain->SetBranchAddress("lep_0_trk_d0_sig", &lep_0_trk_d0_sig, &b_lep_0_trk_d0_sig);
   fChain->SetBranchAddress("lep_0_trk_z0", &lep_0_trk_z0, &b_lep_0_trk_z0);
   fChain->SetBranchAddress("lep_0_trk_z0_sintheta", &lep_0_trk_z0_sintheta, &b_lep_0_trk_z0_sintheta);
   fChain->SetBranchAddress("lep_0_trk_z0_sig", &lep_0_trk_z0_sig, &b_lep_0_trk_z0_sig);
   fChain->SetBranchAddress("lep_0_trk_pvx_z0", &lep_0_trk_pvx_z0, &b_lep_0_trk_pvx_z0);
   fChain->SetBranchAddress("lep_0_trk_pvx_z0_sintheta", &lep_0_trk_pvx_z0_sintheta, &b_lep_0_trk_pvx_z0_sintheta);
   fChain->SetBranchAddress("lep_0_trk_pvx_z0_sig", &lep_0_trk_pvx_z0_sig, &b_lep_0_trk_pvx_z0_sig);
   fChain->SetBranchAddress("lep_0_trk_pt_error", &lep_0_trk_pt_error, &b_lep_0_trk_pt_error);
   fChain->SetBranchAddress("lep_0_iso_wp", &lep_0_iso_wp, &b_lep_0_iso_wp);
   fChain->SetBranchAddress("lep_0_id_veryloose", &lep_0_id_veryloose, &b_lep_0_id_veryloose);
   fChain->SetBranchAddress("lep_0_id_loose", &lep_0_id_loose, &b_lep_0_id_loose);
   fChain->SetBranchAddress("lep_0_id_medium", &lep_0_id_medium, &b_lep_0_id_medium);
   fChain->SetBranchAddress("lep_0_id_tight", &lep_0_id_tight, &b_lep_0_id_tight);
   fChain->SetBranchAddress("lep_0_id_bad", &lep_0_id_bad, &b_lep_0_id_bad);
   fChain->SetBranchAddress("lep_0_muonType", &lep_0_muonType, &b_lep_0_muonType);
   fChain->SetBranchAddress("lep_0_cluster_eta", &lep_0_cluster_eta, &b_lep_0_cluster_eta);
   fChain->SetBranchAddress("lep_0_cluster_eta_be2", &lep_0_cluster_eta_be2, &b_lep_0_cluster_eta_be2);
   fChain->SetBranchAddress("event_number", &event_number, &b_event_number);
   fChain->SetBranchAddress("run_number", &run_number, &b_run_number);
   fChain->SetBranchAddress("PRWHash", &PRWHash, &b_PRWHash);
   fChain->SetBranchAddress("mc_channel_number", &mc_channel_number, &b_mc_channel_number);
   fChain->SetBranchAddress("NOMINAL_pileup_random_run_number", &NOMINAL_pileup_random_run_number, &b_NOMINAL_pileup_random_run_number);
   fChain->SetBranchAddress("PRW_DATASF_1down_pileup_random_run_number", &PRW_DATASF_1down_pileup_random_run_number, &b_PRW_DATASF_1down_pileup_random_run_number);
   fChain->SetBranchAddress("PRW_DATASF_1up_pileup_random_run_number", &PRW_DATASF_1up_pileup_random_run_number, &b_PRW_DATASF_1up_pileup_random_run_number);
   fChain->SetBranchAddress("weight_total", &weight_total, &b_weight_total);
   fChain->SetBranchAddress("weight_mc", &weight_mc, &b_weight_mc);
   fChain->SetBranchAddress("met_truth_et", &met_truth_et, &b_met_truth_et);
   fChain->SetBranchAddress("met_truth_etx", &met_truth_etx, &b_met_truth_etx);
   fChain->SetBranchAddress("met_truth_ety", &met_truth_ety, &b_met_truth_ety);
   fChain->SetBranchAddress("met_truth_phi", &met_truth_phi, &b_met_truth_phi);
   fChain->SetBranchAddress("met_truth_sumet", &met_truth_sumet, &b_met_truth_sumet);
   fChain->SetBranchAddress("met_truth_sig", &met_truth_sig, &b_met_truth_sig);
   fChain->SetBranchAddress("met_truth_sig_tracks", &met_truth_sig_tracks, &b_met_truth_sig_tracks);
   fChain->SetBranchAddress("met_reco_et", &met_reco_et, &b_met_reco_et);
   fChain->SetBranchAddress("met_reco_etx", &met_reco_etx, &b_met_reco_etx);
   fChain->SetBranchAddress("met_reco_ety", &met_reco_ety, &b_met_reco_ety);
   fChain->SetBranchAddress("met_reco_phi", &met_reco_phi, &b_met_reco_phi);
   fChain->SetBranchAddress("met_reco_sumet", &met_reco_sumet, &b_met_reco_sumet);
   fChain->SetBranchAddress("met_reco_sig", &met_reco_sig, &b_met_reco_sig);
   fChain->SetBranchAddress("met_reco_sig_tracks", &met_reco_sig_tracks, &b_met_reco_sig_tracks);
   fChain->SetBranchAddress("met_more_met_et_soft", &met_more_met_et_soft, &b_met_more_met_et_soft);
   fChain->SetBranchAddress("met_more_met_et_ele", &met_more_met_et_ele, &b_met_more_met_et_ele);
   fChain->SetBranchAddress("met_more_met_et_pho", &met_more_met_et_pho, &b_met_more_met_et_pho);
   fChain->SetBranchAddress("met_more_met_et_tau", &met_more_met_et_tau, &b_met_more_met_et_tau);
   fChain->SetBranchAddress("met_more_met_et_muon", &met_more_met_et_muon, &b_met_more_met_et_muon);
   fChain->SetBranchAddress("met_more_met_et_jet", &met_more_met_et_jet, &b_met_more_met_et_jet);
   fChain->SetBranchAddress("met_more_met_sumet_soft", &met_more_met_sumet_soft, &b_met_more_met_sumet_soft);
   fChain->SetBranchAddress("met_more_met_sumet_ele", &met_more_met_sumet_ele, &b_met_more_met_sumet_ele);
   fChain->SetBranchAddress("met_more_met_sumet_pho", &met_more_met_sumet_pho, &b_met_more_met_sumet_pho);
   fChain->SetBranchAddress("met_more_met_sumet_tau", &met_more_met_sumet_tau, &b_met_more_met_sumet_tau);
   fChain->SetBranchAddress("met_more_met_sumet_muon", &met_more_met_sumet_muon, &b_met_more_met_sumet_muon);
   fChain->SetBranchAddress("met_more_met_sumet_jet", &met_more_met_sumet_jet, &b_met_more_met_sumet_jet);
   fChain->SetBranchAddress("met_more_met_phi_soft", &met_more_met_phi_soft, &b_met_more_met_phi_soft);
   fChain->SetBranchAddress("met_more_met_phi_ele", &met_more_met_phi_ele, &b_met_more_met_phi_ele);
   fChain->SetBranchAddress("met_more_met_phi_pho", &met_more_met_phi_pho, &b_met_more_met_phi_pho);
   fChain->SetBranchAddress("met_more_met_phi_tau", &met_more_met_phi_tau, &b_met_more_met_phi_tau);
   fChain->SetBranchAddress("met_more_met_phi_muon", &met_more_met_phi_muon, &b_met_more_met_phi_muon);
   fChain->SetBranchAddress("met_more_met_phi_jet", &met_more_met_phi_jet, &b_met_more_met_phi_jet);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_Reco_QualMedium", &lep_0_NOMINAL_MuEffSF_Reco_QualMedium, &b_lep_0_NOMINAL_MuEffSF_Reco_QualMedium);
   fChain->SetBranchAddress("lep_0_MUON_EFF_STAT_1down_MuEffSF_Reco_QualMedium", &lep_0_MUON_EFF_STAT_1down_MuEffSF_Reco_QualMedium, &b_lep_0_MUON_EFF_STAT_1down_MuEffSF_Reco_QualMedium);
   fChain->SetBranchAddress("lep_0_MUON_EFF_STAT_1up_MuEffSF_Reco_QualMedium", &lep_0_MUON_EFF_STAT_1up_MuEffSF_Reco_QualMedium, &b_lep_0_MUON_EFF_STAT_1up_MuEffSF_Reco_QualMedium);
   fChain->SetBranchAddress("lep_0_MUON_EFF_STAT_LOWPT_1down_MuEffSF_Reco_QualMedium", &lep_0_MUON_EFF_STAT_LOWPT_1down_MuEffSF_Reco_QualMedium, &b_lep_0_MUON_EFF_STAT_LOWPT_1down_MuEffSF_Reco_QualMedium);
   fChain->SetBranchAddress("lep_0_MUON_EFF_STAT_LOWPT_1up_MuEffSF_Reco_QualMedium", &lep_0_MUON_EFF_STAT_LOWPT_1up_MuEffSF_Reco_QualMedium, &b_lep_0_MUON_EFF_STAT_LOWPT_1up_MuEffSF_Reco_QualMedium);
   fChain->SetBranchAddress("lep_0_MUON_EFF_SYS_1down_MuEffSF_Reco_QualMedium", &lep_0_MUON_EFF_SYS_1down_MuEffSF_Reco_QualMedium, &b_lep_0_MUON_EFF_SYS_1down_MuEffSF_Reco_QualMedium);
   fChain->SetBranchAddress("lep_0_MUON_EFF_SYS_1up_MuEffSF_Reco_QualMedium", &lep_0_MUON_EFF_SYS_1up_MuEffSF_Reco_QualMedium, &b_lep_0_MUON_EFF_SYS_1up_MuEffSF_Reco_QualMedium);
   fChain->SetBranchAddress("lep_0_MUON_EFF_SYS_LOWPT_1down_MuEffSF_Reco_QualMedium", &lep_0_MUON_EFF_SYS_LOWPT_1down_MuEffSF_Reco_QualMedium, &b_lep_0_MUON_EFF_SYS_LOWPT_1down_MuEffSF_Reco_QualMedium);
   fChain->SetBranchAddress("lep_0_MUON_EFF_SYS_LOWPT_1up_MuEffSF_Reco_QualMedium", &lep_0_MUON_EFF_SYS_LOWPT_1up_MuEffSF_Reco_QualMedium, &b_lep_0_MUON_EFF_SYS_LOWPT_1up_MuEffSF_Reco_QualMedium);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_IsoFixedCutLoose", &lep_0_NOMINAL_MuEffSF_IsoFixedCutLoose, &b_lep_0_NOMINAL_MuEffSF_IsoFixedCutLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_IsoFixedCutTightTrackOnly", &lep_0_NOMINAL_MuEffSF_IsoFixedCutTightTrackOnly, &b_lep_0_NOMINAL_MuEffSF_IsoFixedCutTightTrackOnly);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_IsoGradient", &lep_0_NOMINAL_MuEffSF_IsoGradient, &b_lep_0_NOMINAL_MuEffSF_IsoGradient);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_IsoGradientLoose", &lep_0_NOMINAL_MuEffSF_IsoGradientLoose, &b_lep_0_NOMINAL_MuEffSF_IsoGradientLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_IsoLoose", &lep_0_NOMINAL_MuEffSF_IsoLoose, &b_lep_0_NOMINAL_MuEffSF_IsoLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_IsoLooseTrackOnly", &lep_0_NOMINAL_MuEffSF_IsoLooseTrackOnly, &b_lep_0_NOMINAL_MuEffSF_IsoLooseTrackOnly);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_IsoTight", &lep_0_NOMINAL_MuEffSF_IsoTight, &b_lep_0_NOMINAL_MuEffSF_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_ISO_STAT_1down_MuEffSF_IsoFixedCutLoose", &lep_0_MUON_ISO_STAT_1down_MuEffSF_IsoFixedCutLoose, &b_lep_0_MUON_ISO_STAT_1down_MuEffSF_IsoFixedCutLoose);
   fChain->SetBranchAddress("lep_0_MUON_ISO_STAT_1down_MuEffSF_IsoFixedCutTightTrackOnly", &lep_0_MUON_ISO_STAT_1down_MuEffSF_IsoFixedCutTightTrackOnly, &b_lep_0_MUON_ISO_STAT_1down_MuEffSF_IsoFixedCutTightTrackOnly);
   fChain->SetBranchAddress("lep_0_MUON_ISO_STAT_1down_MuEffSF_IsoGradient", &lep_0_MUON_ISO_STAT_1down_MuEffSF_IsoGradient, &b_lep_0_MUON_ISO_STAT_1down_MuEffSF_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_ISO_STAT_1down_MuEffSF_IsoGradientLoose", &lep_0_MUON_ISO_STAT_1down_MuEffSF_IsoGradientLoose, &b_lep_0_MUON_ISO_STAT_1down_MuEffSF_IsoGradientLoose);
   fChain->SetBranchAddress("lep_0_MUON_ISO_STAT_1down_MuEffSF_IsoLoose", &lep_0_MUON_ISO_STAT_1down_MuEffSF_IsoLoose, &b_lep_0_MUON_ISO_STAT_1down_MuEffSF_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_ISO_STAT_1down_MuEffSF_IsoLooseTrackOnly", &lep_0_MUON_ISO_STAT_1down_MuEffSF_IsoLooseTrackOnly, &b_lep_0_MUON_ISO_STAT_1down_MuEffSF_IsoLooseTrackOnly);
   fChain->SetBranchAddress("lep_0_MUON_ISO_STAT_1down_MuEffSF_IsoTight", &lep_0_MUON_ISO_STAT_1down_MuEffSF_IsoTight, &b_lep_0_MUON_ISO_STAT_1down_MuEffSF_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_ISO_STAT_1up_MuEffSF_IsoFixedCutLoose", &lep_0_MUON_ISO_STAT_1up_MuEffSF_IsoFixedCutLoose, &b_lep_0_MUON_ISO_STAT_1up_MuEffSF_IsoFixedCutLoose);
   fChain->SetBranchAddress("lep_0_MUON_ISO_STAT_1up_MuEffSF_IsoFixedCutTightTrackOnly", &lep_0_MUON_ISO_STAT_1up_MuEffSF_IsoFixedCutTightTrackOnly, &b_lep_0_MUON_ISO_STAT_1up_MuEffSF_IsoFixedCutTightTrackOnly);
   fChain->SetBranchAddress("lep_0_MUON_ISO_STAT_1up_MuEffSF_IsoGradient", &lep_0_MUON_ISO_STAT_1up_MuEffSF_IsoGradient, &b_lep_0_MUON_ISO_STAT_1up_MuEffSF_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_ISO_STAT_1up_MuEffSF_IsoGradientLoose", &lep_0_MUON_ISO_STAT_1up_MuEffSF_IsoGradientLoose, &b_lep_0_MUON_ISO_STAT_1up_MuEffSF_IsoGradientLoose);
   fChain->SetBranchAddress("lep_0_MUON_ISO_STAT_1up_MuEffSF_IsoLoose", &lep_0_MUON_ISO_STAT_1up_MuEffSF_IsoLoose, &b_lep_0_MUON_ISO_STAT_1up_MuEffSF_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_ISO_STAT_1up_MuEffSF_IsoLooseTrackOnly", &lep_0_MUON_ISO_STAT_1up_MuEffSF_IsoLooseTrackOnly, &b_lep_0_MUON_ISO_STAT_1up_MuEffSF_IsoLooseTrackOnly);
   fChain->SetBranchAddress("lep_0_MUON_ISO_STAT_1up_MuEffSF_IsoTight", &lep_0_MUON_ISO_STAT_1up_MuEffSF_IsoTight, &b_lep_0_MUON_ISO_STAT_1up_MuEffSF_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_ISO_SYS_1down_MuEffSF_IsoFixedCutLoose", &lep_0_MUON_ISO_SYS_1down_MuEffSF_IsoFixedCutLoose, &b_lep_0_MUON_ISO_SYS_1down_MuEffSF_IsoFixedCutLoose);
   fChain->SetBranchAddress("lep_0_MUON_ISO_SYS_1down_MuEffSF_IsoFixedCutTightTrackOnly", &lep_0_MUON_ISO_SYS_1down_MuEffSF_IsoFixedCutTightTrackOnly, &b_lep_0_MUON_ISO_SYS_1down_MuEffSF_IsoFixedCutTightTrackOnly);
   fChain->SetBranchAddress("lep_0_MUON_ISO_SYS_1down_MuEffSF_IsoGradient", &lep_0_MUON_ISO_SYS_1down_MuEffSF_IsoGradient, &b_lep_0_MUON_ISO_SYS_1down_MuEffSF_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_ISO_SYS_1down_MuEffSF_IsoGradientLoose", &lep_0_MUON_ISO_SYS_1down_MuEffSF_IsoGradientLoose, &b_lep_0_MUON_ISO_SYS_1down_MuEffSF_IsoGradientLoose);
   fChain->SetBranchAddress("lep_0_MUON_ISO_SYS_1down_MuEffSF_IsoLoose", &lep_0_MUON_ISO_SYS_1down_MuEffSF_IsoLoose, &b_lep_0_MUON_ISO_SYS_1down_MuEffSF_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_ISO_SYS_1down_MuEffSF_IsoLooseTrackOnly", &lep_0_MUON_ISO_SYS_1down_MuEffSF_IsoLooseTrackOnly, &b_lep_0_MUON_ISO_SYS_1down_MuEffSF_IsoLooseTrackOnly);
   fChain->SetBranchAddress("lep_0_MUON_ISO_SYS_1down_MuEffSF_IsoTight", &lep_0_MUON_ISO_SYS_1down_MuEffSF_IsoTight, &b_lep_0_MUON_ISO_SYS_1down_MuEffSF_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_ISO_SYS_1up_MuEffSF_IsoFixedCutLoose", &lep_0_MUON_ISO_SYS_1up_MuEffSF_IsoFixedCutLoose, &b_lep_0_MUON_ISO_SYS_1up_MuEffSF_IsoFixedCutLoose);
   fChain->SetBranchAddress("lep_0_MUON_ISO_SYS_1up_MuEffSF_IsoFixedCutTightTrackOnly", &lep_0_MUON_ISO_SYS_1up_MuEffSF_IsoFixedCutTightTrackOnly, &b_lep_0_MUON_ISO_SYS_1up_MuEffSF_IsoFixedCutTightTrackOnly);
   fChain->SetBranchAddress("lep_0_MUON_ISO_SYS_1up_MuEffSF_IsoGradient", &lep_0_MUON_ISO_SYS_1up_MuEffSF_IsoGradient, &b_lep_0_MUON_ISO_SYS_1up_MuEffSF_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_ISO_SYS_1up_MuEffSF_IsoGradientLoose", &lep_0_MUON_ISO_SYS_1up_MuEffSF_IsoGradientLoose, &b_lep_0_MUON_ISO_SYS_1up_MuEffSF_IsoGradientLoose);
   fChain->SetBranchAddress("lep_0_MUON_ISO_SYS_1up_MuEffSF_IsoLoose", &lep_0_MUON_ISO_SYS_1up_MuEffSF_IsoLoose, &b_lep_0_MUON_ISO_SYS_1up_MuEffSF_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_ISO_SYS_1up_MuEffSF_IsoLooseTrackOnly", &lep_0_MUON_ISO_SYS_1up_MuEffSF_IsoLooseTrackOnly, &b_lep_0_MUON_ISO_SYS_1up_MuEffSF_IsoLooseTrackOnly);
   fChain->SetBranchAddress("lep_0_MUON_ISO_SYS_1up_MuEffSF_IsoTight", &lep_0_MUON_ISO_SYS_1up_MuEffSF_IsoTight, &b_lep_0_MUON_ISO_SYS_1up_MuEffSF_IsoTight);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_TTVA", &lep_0_NOMINAL_MuEffSF_TTVA, &b_lep_0_NOMINAL_MuEffSF_TTVA);
   fChain->SetBranchAddress("lep_0_MUON_TTVA_STAT_1down_MuEffSF_TTVA", &lep_0_MUON_TTVA_STAT_1down_MuEffSF_TTVA, &b_lep_0_MUON_TTVA_STAT_1down_MuEffSF_TTVA);
   fChain->SetBranchAddress("lep_0_MUON_TTVA_STAT_1up_MuEffSF_TTVA", &lep_0_MUON_TTVA_STAT_1up_MuEffSF_TTVA, &b_lep_0_MUON_TTVA_STAT_1up_MuEffSF_TTVA);
   fChain->SetBranchAddress("lep_0_MUON_TTVA_SYS_1down_MuEffSF_TTVA", &lep_0_MUON_TTVA_SYS_1down_MuEffSF_TTVA, &b_lep_0_MUON_TTVA_SYS_1down_MuEffSF_TTVA);
   fChain->SetBranchAddress("lep_0_MUON_TTVA_SYS_1up_MuEffSF_TTVA", &lep_0_MUON_TTVA_SYS_1up_MuEffSF_TTVA, &b_lep_0_MUON_TTVA_SYS_1up_MuEffSF_TTVA);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_2mu10_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_2mu10_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_2mu10_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_2mu10_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_2mu10_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_2mu10_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_2mu10_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_2mu10_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_2mu10_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_2mu10_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_2mu10_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_2mu10_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_2mu10_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_2mu10_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_2mu10_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_2mu10_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_2mu10_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_2mu10_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_2mu10_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_2mu10_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_2mu10_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_2mu10_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_2mu10_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_2mu10_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_2mu10_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_2mu10_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_2mu10_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_2mu10_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_2mu10_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_2mu10_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_2mu10_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_2mu10_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_2mu10_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_2mu10_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_2mu10_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_2mu10_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_2mu10_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_2mu10_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_2mu10_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_2mu10_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_2mu10_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_2mu10_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_2mu10_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_2mu10_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_2mu10_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_2mu10_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_2mu10_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_2mu10_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_2mu10_QualMedium_IsoGradient", &lep_0_NOMINAL_MuEffSF_HLT_2mu10_QualMedium_IsoGradient, &b_lep_0_NOMINAL_MuEffSF_HLT_2mu10_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_2mu10_QualMedium_IsoLoose", &lep_0_NOMINAL_MuEffSF_HLT_2mu10_QualMedium_IsoLoose, &b_lep_0_NOMINAL_MuEffSF_HLT_2mu10_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_2mu10_QualMedium_IsoNone", &lep_0_NOMINAL_MuEffSF_HLT_2mu10_QualMedium_IsoNone, &b_lep_0_NOMINAL_MuEffSF_HLT_2mu10_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_2mu10_QualMedium_IsoTight", &lep_0_NOMINAL_MuEffSF_HLT_2mu10_QualMedium_IsoTight, &b_lep_0_NOMINAL_MuEffSF_HLT_2mu10_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_2mu14_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_2mu14_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_2mu14_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_2mu14_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_2mu14_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_2mu14_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_2mu14_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_2mu14_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_2mu14_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_2mu14_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_2mu14_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_2mu14_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_2mu14_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_2mu14_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_2mu14_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_2mu14_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_2mu14_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_2mu14_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_2mu14_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_2mu14_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_2mu14_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_2mu14_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_2mu14_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_2mu14_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_2mu14_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_2mu14_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_2mu14_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_2mu14_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_2mu14_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_2mu14_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_2mu14_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_2mu14_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_2mu14_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_2mu14_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_2mu14_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_2mu14_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_2mu14_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_2mu14_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_2mu14_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_2mu14_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_2mu14_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_2mu14_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_2mu14_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_2mu14_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_2mu14_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_2mu14_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_2mu14_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_2mu14_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_2mu14_QualMedium_IsoGradient", &lep_0_NOMINAL_MuEffSF_HLT_2mu14_QualMedium_IsoGradient, &b_lep_0_NOMINAL_MuEffSF_HLT_2mu14_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_2mu14_QualMedium_IsoLoose", &lep_0_NOMINAL_MuEffSF_HLT_2mu14_QualMedium_IsoLoose, &b_lep_0_NOMINAL_MuEffSF_HLT_2mu14_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_2mu14_QualMedium_IsoNone", &lep_0_NOMINAL_MuEffSF_HLT_2mu14_QualMedium_IsoNone, &b_lep_0_NOMINAL_MuEffSF_HLT_2mu14_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_2mu14_QualMedium_IsoTight", &lep_0_NOMINAL_MuEffSF_HLT_2mu14_QualMedium_IsoTight, &b_lep_0_NOMINAL_MuEffSF_HLT_2mu14_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu10_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu10_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu10_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu10_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu10_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu10_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu10_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu10_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu10_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu10_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu10_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu10_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu10_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu10_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu10_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu10_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu10_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu10_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu10_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu10_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu10_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu10_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu10_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu10_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu10_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu10_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu10_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu10_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu10_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu10_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu10_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu10_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu10_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu10_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu10_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu10_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu10_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu10_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu10_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu10_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu10_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu10_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu10_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu10_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu10_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu10_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu10_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu10_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu10_QualMedium_IsoGradient", &lep_0_NOMINAL_MuEffSF_HLT_mu10_QualMedium_IsoGradient, &b_lep_0_NOMINAL_MuEffSF_HLT_mu10_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu10_QualMedium_IsoLoose", &lep_0_NOMINAL_MuEffSF_HLT_mu10_QualMedium_IsoLoose, &b_lep_0_NOMINAL_MuEffSF_HLT_mu10_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu10_QualMedium_IsoNone", &lep_0_NOMINAL_MuEffSF_HLT_mu10_QualMedium_IsoNone, &b_lep_0_NOMINAL_MuEffSF_HLT_mu10_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu10_QualMedium_IsoTight", &lep_0_NOMINAL_MuEffSF_HLT_mu10_QualMedium_IsoTight, &b_lep_0_NOMINAL_MuEffSF_HLT_mu10_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu14_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu14_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu14_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu14_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu14_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu14_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu14_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu14_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu14_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu14_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu14_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu14_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu14_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu14_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu14_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu14_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu14_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu14_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu14_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu14_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu14_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu14_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu14_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu14_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu14_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu14_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu14_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu14_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu14_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu14_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu14_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu14_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu14_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu14_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu14_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu14_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu14_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu14_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu14_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu14_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu14_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu14_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu14_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu14_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu14_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu14_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu14_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu14_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu14_QualMedium_IsoGradient", &lep_0_NOMINAL_MuEffSF_HLT_mu14_QualMedium_IsoGradient, &b_lep_0_NOMINAL_MuEffSF_HLT_mu14_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu14_QualMedium_IsoLoose", &lep_0_NOMINAL_MuEffSF_HLT_mu14_QualMedium_IsoLoose, &b_lep_0_NOMINAL_MuEffSF_HLT_mu14_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu14_QualMedium_IsoNone", &lep_0_NOMINAL_MuEffSF_HLT_mu14_QualMedium_IsoNone, &b_lep_0_NOMINAL_MuEffSF_HLT_mu14_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu14_QualMedium_IsoTight", &lep_0_NOMINAL_MuEffSF_HLT_mu14_QualMedium_IsoTight, &b_lep_0_NOMINAL_MuEffSF_HLT_mu14_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu18_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu18_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu18_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu18_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu18_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu18_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu18_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu18_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu18_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu18_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu18_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu18_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu18_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu18_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu18_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu18_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu18_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu18_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu18_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu18_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu18_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu18_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu18_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu18_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu18_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu18_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu18_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu18_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu18_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu18_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu18_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu18_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu18_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu18_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu18_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu18_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu18_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu18_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu18_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu18_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu18_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu18_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu18_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu18_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu18_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu18_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu18_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu18_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu18_QualMedium_IsoGradient", &lep_0_NOMINAL_MuEffSF_HLT_mu18_QualMedium_IsoGradient, &b_lep_0_NOMINAL_MuEffSF_HLT_mu18_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu18_QualMedium_IsoLoose", &lep_0_NOMINAL_MuEffSF_HLT_mu18_QualMedium_IsoLoose, &b_lep_0_NOMINAL_MuEffSF_HLT_mu18_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu18_QualMedium_IsoNone", &lep_0_NOMINAL_MuEffSF_HLT_mu18_QualMedium_IsoNone, &b_lep_0_NOMINAL_MuEffSF_HLT_mu18_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu18_QualMedium_IsoTight", &lep_0_NOMINAL_MuEffSF_HLT_mu18_QualMedium_IsoTight, &b_lep_0_NOMINAL_MuEffSF_HLT_mu18_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoGradient", &lep_0_NOMINAL_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoGradient, &b_lep_0_NOMINAL_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoLoose", &lep_0_NOMINAL_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoLoose, &b_lep_0_NOMINAL_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoNone", &lep_0_NOMINAL_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoNone, &b_lep_0_NOMINAL_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoTight", &lep_0_NOMINAL_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoTight, &b_lep_0_NOMINAL_MuEffSF_HLT_mu18_mu8noL1_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoGradient", &lep_0_NOMINAL_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoGradient, &b_lep_0_NOMINAL_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoLoose", &lep_0_NOMINAL_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoLoose, &b_lep_0_NOMINAL_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoNone", &lep_0_NOMINAL_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoNone, &b_lep_0_NOMINAL_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoTight", &lep_0_NOMINAL_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoTight, &b_lep_0_NOMINAL_MuEffSF_HLT_mu20_iloose_L1MU15_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoGradient", &lep_0_NOMINAL_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoGradient, &b_lep_0_NOMINAL_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoLoose", &lep_0_NOMINAL_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoLoose, &b_lep_0_NOMINAL_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoNone", &lep_0_NOMINAL_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoNone, &b_lep_0_NOMINAL_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoTight", &lep_0_NOMINAL_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoTight, &b_lep_0_NOMINAL_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoGradient", &lep_0_NOMINAL_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoGradient, &b_lep_0_NOMINAL_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoLoose", &lep_0_NOMINAL_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoLoose, &b_lep_0_NOMINAL_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoNone", &lep_0_NOMINAL_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoNone, &b_lep_0_NOMINAL_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoTight", &lep_0_NOMINAL_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoTight, &b_lep_0_NOMINAL_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu22_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu22_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu22_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu22_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu22_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu22_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu22_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu22_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu22_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu22_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu22_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu22_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu22_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu22_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu22_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu22_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu22_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu22_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu22_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu22_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu22_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu22_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu22_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu22_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu22_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu22_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu22_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu22_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu22_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu22_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu22_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu22_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu22_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu22_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu22_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu22_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu22_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu22_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu22_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu22_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu22_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu22_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu22_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu22_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu22_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu22_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu22_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu22_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu22_QualMedium_IsoGradient", &lep_0_NOMINAL_MuEffSF_HLT_mu22_QualMedium_IsoGradient, &b_lep_0_NOMINAL_MuEffSF_HLT_mu22_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu22_QualMedium_IsoLoose", &lep_0_NOMINAL_MuEffSF_HLT_mu22_QualMedium_IsoLoose, &b_lep_0_NOMINAL_MuEffSF_HLT_mu22_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu22_QualMedium_IsoNone", &lep_0_NOMINAL_MuEffSF_HLT_mu22_QualMedium_IsoNone, &b_lep_0_NOMINAL_MuEffSF_HLT_mu22_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu22_QualMedium_IsoTight", &lep_0_NOMINAL_MuEffSF_HLT_mu22_QualMedium_IsoTight, &b_lep_0_NOMINAL_MuEffSF_HLT_mu22_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoGradient", &lep_0_NOMINAL_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoGradient, &b_lep_0_NOMINAL_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoLoose", &lep_0_NOMINAL_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoLoose, &b_lep_0_NOMINAL_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoNone", &lep_0_NOMINAL_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoNone, &b_lep_0_NOMINAL_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoTight", &lep_0_NOMINAL_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoTight, &b_lep_0_NOMINAL_MuEffSF_HLT_mu22_mu8noL1_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu24_QualMedium_IsoGradient", &lep_0_NOMINAL_MuEffSF_HLT_mu24_QualMedium_IsoGradient, &b_lep_0_NOMINAL_MuEffSF_HLT_mu24_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu24_QualMedium_IsoLoose", &lep_0_NOMINAL_MuEffSF_HLT_mu24_QualMedium_IsoLoose, &b_lep_0_NOMINAL_MuEffSF_HLT_mu24_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu24_QualMedium_IsoNone", &lep_0_NOMINAL_MuEffSF_HLT_mu24_QualMedium_IsoNone, &b_lep_0_NOMINAL_MuEffSF_HLT_mu24_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu24_QualMedium_IsoTight", &lep_0_NOMINAL_MuEffSF_HLT_mu24_QualMedium_IsoTight, &b_lep_0_NOMINAL_MuEffSF_HLT_mu24_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoGradient", &lep_0_NOMINAL_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoGradient, &b_lep_0_NOMINAL_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoLoose", &lep_0_NOMINAL_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoLoose, &b_lep_0_NOMINAL_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoNone", &lep_0_NOMINAL_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoNone, &b_lep_0_NOMINAL_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoTight", &lep_0_NOMINAL_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoTight, &b_lep_0_NOMINAL_MuEffSF_HLT_mu24_iloose_L1MU15_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoGradient", &lep_0_NOMINAL_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoGradient, &b_lep_0_NOMINAL_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoLoose", &lep_0_NOMINAL_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoLoose, &b_lep_0_NOMINAL_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoNone", &lep_0_NOMINAL_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoNone, &b_lep_0_NOMINAL_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoTight", &lep_0_NOMINAL_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoTight, &b_lep_0_NOMINAL_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu40_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoGradient", &lep_0_NOMINAL_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoGradient, &b_lep_0_NOMINAL_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoLoose", &lep_0_NOMINAL_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoLoose, &b_lep_0_NOMINAL_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoNone", &lep_0_NOMINAL_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoNone, &b_lep_0_NOMINAL_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoTight", &lep_0_NOMINAL_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoTight, &b_lep_0_NOMINAL_MuEffSF_HLT_mu24_iloose_L1MU15_OR_HLT_mu50_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_imedium_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_imedium_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_imedium_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_imedium_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_imedium_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_imedium_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_imedium_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_imedium_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_imedium_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_imedium_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_imedium_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_imedium_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_imedium_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_imedium_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_imedium_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_imedium_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_imedium_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_imedium_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_imedium_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_imedium_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_imedium_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_imedium_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_imedium_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_imedium_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_imedium_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_imedium_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_imedium_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_imedium_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_imedium_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_imedium_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_imedium_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_imedium_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_imedium_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_imedium_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_imedium_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_imedium_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_imedium_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_imedium_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_imedium_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_imedium_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_imedium_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_imedium_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_imedium_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_imedium_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_imedium_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_imedium_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_imedium_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_imedium_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu24_imedium_QualMedium_IsoGradient", &lep_0_NOMINAL_MuEffSF_HLT_mu24_imedium_QualMedium_IsoGradient, &b_lep_0_NOMINAL_MuEffSF_HLT_mu24_imedium_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu24_imedium_QualMedium_IsoLoose", &lep_0_NOMINAL_MuEffSF_HLT_mu24_imedium_QualMedium_IsoLoose, &b_lep_0_NOMINAL_MuEffSF_HLT_mu24_imedium_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu24_imedium_QualMedium_IsoNone", &lep_0_NOMINAL_MuEffSF_HLT_mu24_imedium_QualMedium_IsoNone, &b_lep_0_NOMINAL_MuEffSF_HLT_mu24_imedium_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu24_imedium_QualMedium_IsoTight", &lep_0_NOMINAL_MuEffSF_HLT_mu24_imedium_QualMedium_IsoTight, &b_lep_0_NOMINAL_MuEffSF_HLT_mu24_imedium_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoGradient", &lep_0_NOMINAL_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoGradient, &b_lep_0_NOMINAL_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoLoose", &lep_0_NOMINAL_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoLoose, &b_lep_0_NOMINAL_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoNone", &lep_0_NOMINAL_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoNone, &b_lep_0_NOMINAL_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoTight", &lep_0_NOMINAL_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoTight, &b_lep_0_NOMINAL_MuEffSF_HLT_mu24_imedium_OR_HLT_mu40_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoGradient", &lep_0_NOMINAL_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoGradient, &b_lep_0_NOMINAL_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoLoose", &lep_0_NOMINAL_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoLoose, &b_lep_0_NOMINAL_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoNone", &lep_0_NOMINAL_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoNone, &b_lep_0_NOMINAL_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoTight", &lep_0_NOMINAL_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoTight, &b_lep_0_NOMINAL_MuEffSF_HLT_mu24_imedium_OR_HLT_mu50_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoGradient", &lep_0_NOMINAL_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoGradient, &b_lep_0_NOMINAL_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoLoose", &lep_0_NOMINAL_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoLoose, &b_lep_0_NOMINAL_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoNone", &lep_0_NOMINAL_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoNone, &b_lep_0_NOMINAL_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoTight", &lep_0_NOMINAL_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoTight, &b_lep_0_NOMINAL_MuEffSF_HLT_mu24_mu8noL1_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu26_imedium_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu26_imedium_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu26_imedium_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu26_imedium_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu26_imedium_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu26_imedium_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu26_imedium_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu26_imedium_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu26_imedium_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu26_imedium_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu26_imedium_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu26_imedium_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu26_imedium_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu26_imedium_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu26_imedium_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu26_imedium_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu26_imedium_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu26_imedium_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu26_imedium_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu26_imedium_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu26_imedium_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu26_imedium_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu26_imedium_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu26_imedium_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu26_imedium_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu26_imedium_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu26_imedium_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu26_imedium_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu26_imedium_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu26_imedium_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu26_imedium_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu26_imedium_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu26_imedium_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu26_imedium_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu26_imedium_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu26_imedium_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu26_imedium_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu26_imedium_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu26_imedium_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu26_imedium_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu26_imedium_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu26_imedium_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu26_imedium_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu26_imedium_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu26_imedium_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu26_imedium_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu26_imedium_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu26_imedium_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu26_imedium_QualMedium_IsoGradient", &lep_0_NOMINAL_MuEffSF_HLT_mu26_imedium_QualMedium_IsoGradient, &b_lep_0_NOMINAL_MuEffSF_HLT_mu26_imedium_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu26_imedium_QualMedium_IsoLoose", &lep_0_NOMINAL_MuEffSF_HLT_mu26_imedium_QualMedium_IsoLoose, &b_lep_0_NOMINAL_MuEffSF_HLT_mu26_imedium_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu26_imedium_QualMedium_IsoNone", &lep_0_NOMINAL_MuEffSF_HLT_mu26_imedium_QualMedium_IsoNone, &b_lep_0_NOMINAL_MuEffSF_HLT_mu26_imedium_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu26_imedium_QualMedium_IsoTight", &lep_0_NOMINAL_MuEffSF_HLT_mu26_imedium_QualMedium_IsoTight, &b_lep_0_NOMINAL_MuEffSF_HLT_mu26_imedium_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoGradient", &lep_0_NOMINAL_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoGradient, &b_lep_0_NOMINAL_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoLoose", &lep_0_NOMINAL_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoLoose, &b_lep_0_NOMINAL_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoNone", &lep_0_NOMINAL_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoNone, &b_lep_0_NOMINAL_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoTight", &lep_0_NOMINAL_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoTight, &b_lep_0_NOMINAL_MuEffSF_HLT_mu26_imedium_OR_HLT_mu40_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoGradient", &lep_0_NOMINAL_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoGradient, &b_lep_0_NOMINAL_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoLoose", &lep_0_NOMINAL_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoLoose, &b_lep_0_NOMINAL_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoNone", &lep_0_NOMINAL_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoNone, &b_lep_0_NOMINAL_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoTight", &lep_0_NOMINAL_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoTight, &b_lep_0_NOMINAL_MuEffSF_HLT_mu26_imedium_OR_HLT_mu50_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu40_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu40_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu40_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu40_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu40_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu40_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu40_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu40_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu40_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu40_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu40_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu40_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu40_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu40_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu40_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu40_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu40_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu40_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu40_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu40_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu40_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu40_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu40_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu40_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu40_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu40_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu40_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu40_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu40_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu40_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu40_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu40_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu40_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu40_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu40_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu40_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu40_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu40_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu40_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu40_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu40_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu40_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu40_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu40_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu40_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu40_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu40_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu40_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu40_QualMedium_IsoGradient", &lep_0_NOMINAL_MuEffSF_HLT_mu40_QualMedium_IsoGradient, &b_lep_0_NOMINAL_MuEffSF_HLT_mu40_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu40_QualMedium_IsoLoose", &lep_0_NOMINAL_MuEffSF_HLT_mu40_QualMedium_IsoLoose, &b_lep_0_NOMINAL_MuEffSF_HLT_mu40_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu40_QualMedium_IsoNone", &lep_0_NOMINAL_MuEffSF_HLT_mu40_QualMedium_IsoNone, &b_lep_0_NOMINAL_MuEffSF_HLT_mu40_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu40_QualMedium_IsoTight", &lep_0_NOMINAL_MuEffSF_HLT_mu40_QualMedium_IsoTight, &b_lep_0_NOMINAL_MuEffSF_HLT_mu40_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu50_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu50_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu50_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu50_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu50_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu50_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu50_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu50_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu50_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu50_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu50_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu50_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu50_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu50_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu50_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu50_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu50_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu50_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu50_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu50_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu50_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu50_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu50_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu50_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu50_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu50_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu50_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu50_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu50_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu50_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu50_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu50_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu50_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu50_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu50_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu50_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu50_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu50_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu50_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu50_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu50_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu50_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu50_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu50_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu50_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu50_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu50_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu50_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu50_QualMedium_IsoGradient", &lep_0_NOMINAL_MuEffSF_HLT_mu50_QualMedium_IsoGradient, &b_lep_0_NOMINAL_MuEffSF_HLT_mu50_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu50_QualMedium_IsoLoose", &lep_0_NOMINAL_MuEffSF_HLT_mu50_QualMedium_IsoLoose, &b_lep_0_NOMINAL_MuEffSF_HLT_mu50_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu50_QualMedium_IsoNone", &lep_0_NOMINAL_MuEffSF_HLT_mu50_QualMedium_IsoNone, &b_lep_0_NOMINAL_MuEffSF_HLT_mu50_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu50_QualMedium_IsoTight", &lep_0_NOMINAL_MuEffSF_HLT_mu50_QualMedium_IsoTight, &b_lep_0_NOMINAL_MuEffSF_HLT_mu50_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu8noL1_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu8noL1_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu8noL1_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu8noL1_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu8noL1_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu8noL1_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu8noL1_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu8noL1_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu8noL1_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu8noL1_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu8noL1_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigStatUncertainty_1down_MuEffSF_HLT_mu8noL1_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu8noL1_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu8noL1_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu8noL1_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu8noL1_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu8noL1_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu8noL1_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu8noL1_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu8noL1_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu8noL1_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu8noL1_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu8noL1_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigStatUncertainty_1up_MuEffSF_HLT_mu8noL1_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu8noL1_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu8noL1_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu8noL1_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu8noL1_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu8noL1_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu8noL1_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu8noL1_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu8noL1_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu8noL1_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu8noL1_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu8noL1_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigSystUncertainty_1down_MuEffSF_HLT_mu8noL1_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu8noL1_QualMedium_IsoGradient", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu8noL1_QualMedium_IsoGradient, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu8noL1_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu8noL1_QualMedium_IsoLoose", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu8noL1_QualMedium_IsoLoose, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu8noL1_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu8noL1_QualMedium_IsoNone", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu8noL1_QualMedium_IsoNone, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu8noL1_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu8noL1_QualMedium_IsoTight", &lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu8noL1_QualMedium_IsoTight, &b_lep_0_MUON_EFF_TrigSystUncertainty_1up_MuEffSF_HLT_mu8noL1_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu8noL1_QualMedium_IsoGradient", &lep_0_NOMINAL_MuEffSF_HLT_mu8noL1_QualMedium_IsoGradient, &b_lep_0_NOMINAL_MuEffSF_HLT_mu8noL1_QualMedium_IsoGradient);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu8noL1_QualMedium_IsoLoose", &lep_0_NOMINAL_MuEffSF_HLT_mu8noL1_QualMedium_IsoLoose, &b_lep_0_NOMINAL_MuEffSF_HLT_mu8noL1_QualMedium_IsoLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu8noL1_QualMedium_IsoNone", &lep_0_NOMINAL_MuEffSF_HLT_mu8noL1_QualMedium_IsoNone, &b_lep_0_NOMINAL_MuEffSF_HLT_mu8noL1_QualMedium_IsoNone);
   fChain->SetBranchAddress("lep_0_NOMINAL_MuEffSF_HLT_mu8noL1_QualMedium_IsoTight", &lep_0_NOMINAL_MuEffSF_HLT_mu8noL1_QualMedium_IsoTight, &b_lep_0_NOMINAL_MuEffSF_HLT_mu8noL1_QualMedium_IsoTight);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_offline_RecoTrk", &lep_0_NOMINAL_effSF_offline_RecoTrk, &b_lep_0_NOMINAL_effSF_offline_RecoTrk);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_offline_LooseAndBLayerLLH_d0z0_v11_correlationID", &lep_0_NOMINAL_effSF_offline_LooseAndBLayerLLH_d0z0_v11_correlationID, &b_lep_0_NOMINAL_effSF_offline_LooseAndBLayerLLH_d0z0_v11_correlationID);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_offline_LooseAndBLayerLLH_d0z0_v11", &lep_0_NOMINAL_effSF_offline_LooseAndBLayerLLH_d0z0_v11, &b_lep_0_NOMINAL_effSF_offline_LooseAndBLayerLLH_d0z0_v11);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_offline_MediumLLH_d0z0_v11_correlationID", &lep_0_NOMINAL_effSF_offline_MediumLLH_d0z0_v11_correlationID, &b_lep_0_NOMINAL_effSF_offline_MediumLLH_d0z0_v11_correlationID);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_offline_MediumLLH_d0z0_v11", &lep_0_NOMINAL_effSF_offline_MediumLLH_d0z0_v11, &b_lep_0_NOMINAL_effSF_offline_MediumLLH_d0z0_v11);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_offline_TightLLH_d0z0_v11_correlationID", &lep_0_NOMINAL_effSF_offline_TightLLH_d0z0_v11_correlationID, &b_lep_0_NOMINAL_effSF_offline_TightLLH_d0z0_v11_correlationID);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_offline_TightLLH_d0z0_v11", &lep_0_NOMINAL_effSF_offline_TightLLH_d0z0_v11, &b_lep_0_NOMINAL_effSF_offline_TightLLH_d0z0_v11);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_offline_LooseAndBLayerLLH_v11_correlationID", &lep_0_NOMINAL_effSF_offline_LooseAndBLayerLLH_v11_correlationID, &b_lep_0_NOMINAL_effSF_offline_LooseAndBLayerLLH_v11_correlationID);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_offline_LooseAndBLayerLLH_v11", &lep_0_NOMINAL_effSF_offline_LooseAndBLayerLLH_v11, &b_lep_0_NOMINAL_effSF_offline_LooseAndBLayerLLH_v11);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_offline_MediumLLH_v11_correlationID", &lep_0_NOMINAL_effSF_offline_MediumLLH_v11_correlationID, &b_lep_0_NOMINAL_effSF_offline_MediumLLH_v11_correlationID);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_offline_MediumLLH_v11", &lep_0_NOMINAL_effSF_offline_MediumLLH_v11, &b_lep_0_NOMINAL_effSF_offline_MediumLLH_v11);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_offline_TightLLH_v11_correlationID", &lep_0_NOMINAL_effSF_offline_TightLLH_v11_correlationID, &b_lep_0_NOMINAL_effSF_offline_TightLLH_v11_correlationID);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_offline_TightLLH_v11", &lep_0_NOMINAL_effSF_offline_TightLLH_v11, &b_lep_0_NOMINAL_effSF_offline_TightLLH_v11);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_Isolation_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose", &lep_0_NOMINAL_effSF_Isolation_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose, &b_lep_0_NOMINAL_effSF_Isolation_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_Isolation_LooseAndBLayerLLH_d0z0_v11_isolFixedCutTight", &lep_0_NOMINAL_effSF_Isolation_LooseAndBLayerLLH_d0z0_v11_isolFixedCutTight, &b_lep_0_NOMINAL_effSF_Isolation_LooseAndBLayerLLH_d0z0_v11_isolFixedCutTight);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_Isolation_LooseAndBLayerLLH_d0z0_v11_isolFixedCutTightTrackOnly", &lep_0_NOMINAL_effSF_Isolation_LooseAndBLayerLLH_d0z0_v11_isolFixedCutTightTrackOnly, &b_lep_0_NOMINAL_effSF_Isolation_LooseAndBLayerLLH_d0z0_v11_isolFixedCutTightTrackOnly);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_Isolation_LooseAndBLayerLLH_d0z0_v11_isolGradientLoose", &lep_0_NOMINAL_effSF_Isolation_LooseAndBLayerLLH_d0z0_v11_isolGradientLoose, &b_lep_0_NOMINAL_effSF_Isolation_LooseAndBLayerLLH_d0z0_v11_isolGradientLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_Isolation_LooseAndBLayerLLH_d0z0_v11_isolGradient", &lep_0_NOMINAL_effSF_Isolation_LooseAndBLayerLLH_d0z0_v11_isolGradient, &b_lep_0_NOMINAL_effSF_Isolation_LooseAndBLayerLLH_d0z0_v11_isolGradient);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_Isolation_LooseAndBLayerLLH_d0z0_v11_isolLoose", &lep_0_NOMINAL_effSF_Isolation_LooseAndBLayerLLH_d0z0_v11_isolLoose, &b_lep_0_NOMINAL_effSF_Isolation_LooseAndBLayerLLH_d0z0_v11_isolLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_Isolation_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly", &lep_0_NOMINAL_effSF_Isolation_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly, &b_lep_0_NOMINAL_effSF_Isolation_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_Isolation_LooseAndBLayerLLH_d0z0_v11_isolTight", &lep_0_NOMINAL_effSF_Isolation_LooseAndBLayerLLH_d0z0_v11_isolTight, &b_lep_0_NOMINAL_effSF_Isolation_LooseAndBLayerLLH_d0z0_v11_isolTight);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_Isolation_MediumLLH_d0z0_v11_isolFixedCutLoose", &lep_0_NOMINAL_effSF_Isolation_MediumLLH_d0z0_v11_isolFixedCutLoose, &b_lep_0_NOMINAL_effSF_Isolation_MediumLLH_d0z0_v11_isolFixedCutLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_Isolation_MediumLLH_d0z0_v11_isolFixedCutTight", &lep_0_NOMINAL_effSF_Isolation_MediumLLH_d0z0_v11_isolFixedCutTight, &b_lep_0_NOMINAL_effSF_Isolation_MediumLLH_d0z0_v11_isolFixedCutTight);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_Isolation_MediumLLH_d0z0_v11_isolFixedCutTightTrackOnly", &lep_0_NOMINAL_effSF_Isolation_MediumLLH_d0z0_v11_isolFixedCutTightTrackOnly, &b_lep_0_NOMINAL_effSF_Isolation_MediumLLH_d0z0_v11_isolFixedCutTightTrackOnly);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_Isolation_MediumLLH_d0z0_v11_isolGradientLoose", &lep_0_NOMINAL_effSF_Isolation_MediumLLH_d0z0_v11_isolGradientLoose, &b_lep_0_NOMINAL_effSF_Isolation_MediumLLH_d0z0_v11_isolGradientLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_Isolation_MediumLLH_d0z0_v11_isolGradient", &lep_0_NOMINAL_effSF_Isolation_MediumLLH_d0z0_v11_isolGradient, &b_lep_0_NOMINAL_effSF_Isolation_MediumLLH_d0z0_v11_isolGradient);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_Isolation_MediumLLH_d0z0_v11_isolLoose", &lep_0_NOMINAL_effSF_Isolation_MediumLLH_d0z0_v11_isolLoose, &b_lep_0_NOMINAL_effSF_Isolation_MediumLLH_d0z0_v11_isolLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_Isolation_MediumLLH_d0z0_v11_isolLooseTrackOnly", &lep_0_NOMINAL_effSF_Isolation_MediumLLH_d0z0_v11_isolLooseTrackOnly, &b_lep_0_NOMINAL_effSF_Isolation_MediumLLH_d0z0_v11_isolLooseTrackOnly);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_Isolation_MediumLLH_d0z0_v11_isolTight", &lep_0_NOMINAL_effSF_Isolation_MediumLLH_d0z0_v11_isolTight, &b_lep_0_NOMINAL_effSF_Isolation_MediumLLH_d0z0_v11_isolTight);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_Isolation_TightLLH_d0z0_v11_isolFixedCutLoose", &lep_0_NOMINAL_effSF_Isolation_TightLLH_d0z0_v11_isolFixedCutLoose, &b_lep_0_NOMINAL_effSF_Isolation_TightLLH_d0z0_v11_isolFixedCutLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_Isolation_TightLLH_d0z0_v11_isolFixedCutTight", &lep_0_NOMINAL_effSF_Isolation_TightLLH_d0z0_v11_isolFixedCutTight, &b_lep_0_NOMINAL_effSF_Isolation_TightLLH_d0z0_v11_isolFixedCutTight);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_Isolation_TightLLH_d0z0_v11_isolFixedCutTightTrackOnly", &lep_0_NOMINAL_effSF_Isolation_TightLLH_d0z0_v11_isolFixedCutTightTrackOnly, &b_lep_0_NOMINAL_effSF_Isolation_TightLLH_d0z0_v11_isolFixedCutTightTrackOnly);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_Isolation_TightLLH_d0z0_v11_isolGradientLoose", &lep_0_NOMINAL_effSF_Isolation_TightLLH_d0z0_v11_isolGradientLoose, &b_lep_0_NOMINAL_effSF_Isolation_TightLLH_d0z0_v11_isolGradientLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_Isolation_TightLLH_d0z0_v11_isolGradient", &lep_0_NOMINAL_effSF_Isolation_TightLLH_d0z0_v11_isolGradient, &b_lep_0_NOMINAL_effSF_Isolation_TightLLH_d0z0_v11_isolGradient);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_Isolation_TightLLH_d0z0_v11_isolLoose", &lep_0_NOMINAL_effSF_Isolation_TightLLH_d0z0_v11_isolLoose, &b_lep_0_NOMINAL_effSF_Isolation_TightLLH_d0z0_v11_isolLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_Isolation_TightLLH_d0z0_v11_isolLooseTrackOnly", &lep_0_NOMINAL_effSF_Isolation_TightLLH_d0z0_v11_isolLooseTrackOnly, &b_lep_0_NOMINAL_effSF_Isolation_TightLLH_d0z0_v11_isolLooseTrackOnly);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_Isolation_TightLLH_d0z0_v11_isolTight", &lep_0_NOMINAL_effSF_Isolation_TightLLH_d0z0_v11_isolTight, &b_lep_0_NOMINAL_effSF_Isolation_TightLLH_d0z0_v11_isolTight);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose", &lep_0_NOMINAL_effSF_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose, &b_lep_0_NOMINAL_effSF_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly", &lep_0_NOMINAL_effSF_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly, &b_lep_0_NOMINAL_effSF_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11", &lep_0_NOMINAL_effSF_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11, &b_lep_0_NOMINAL_effSF_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_MediumLLH_d0z0_v11_isolGradient", &lep_0_NOMINAL_effSF_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_MediumLLH_d0z0_v11_isolGradient, &b_lep_0_NOMINAL_effSF_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_MediumLLH_d0z0_v11_isolGradient);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_MediumLLH_d0z0_v11_isolLoose", &lep_0_NOMINAL_effSF_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_MediumLLH_d0z0_v11_isolLoose, &b_lep_0_NOMINAL_effSF_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_MediumLLH_d0z0_v11_isolLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_MediumLLH_d0z0_v11_isolLooseTrackOnly", &lep_0_NOMINAL_effSF_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_MediumLLH_d0z0_v11_isolLooseTrackOnly, &b_lep_0_NOMINAL_effSF_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_MediumLLH_d0z0_v11_isolLooseTrackOnly);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_MediumLLH_d0z0_v11", &lep_0_NOMINAL_effSF_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_MediumLLH_d0z0_v11, &b_lep_0_NOMINAL_effSF_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_MediumLLH_d0z0_v11);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_TightLLH_d0z0_v11_isolGradient", &lep_0_NOMINAL_effSF_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_TightLLH_d0z0_v11_isolGradient, &b_lep_0_NOMINAL_effSF_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_TightLLH_d0z0_v11_isolGradient);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_TightLLH_d0z0_v11_isolLoose", &lep_0_NOMINAL_effSF_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_TightLLH_d0z0_v11_isolLoose, &b_lep_0_NOMINAL_effSF_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_TightLLH_d0z0_v11_isolLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_TightLLH_d0z0_v11_isolLooseTrackOnly", &lep_0_NOMINAL_effSF_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_TightLLH_d0z0_v11_isolLooseTrackOnly, &b_lep_0_NOMINAL_effSF_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_TightLLH_d0z0_v11_isolLooseTrackOnly);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_TightLLH_d0z0_v11_isolTight", &lep_0_NOMINAL_effSF_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_TightLLH_d0z0_v11_isolTight, &b_lep_0_NOMINAL_effSF_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_TightLLH_d0z0_v11_isolTight);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_TightLLH_d0z0_v11", &lep_0_NOMINAL_effSF_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_TightLLH_d0z0_v11, &b_lep_0_NOMINAL_effSF_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_TightLLH_d0z0_v11);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose", &lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose, &b_lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly", &lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly, &b_lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_LooseAndBLayerLLH_d0z0_v11", &lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_LooseAndBLayerLLH_d0z0_v11, &b_lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_LooseAndBLayerLLH_d0z0_v11);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_MediumLLH_d0z0_v11_isolGradient", &lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_MediumLLH_d0z0_v11_isolGradient, &b_lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_MediumLLH_d0z0_v11_isolGradient);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_MediumLLH_d0z0_v11_isolLoose", &lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_MediumLLH_d0z0_v11_isolLoose, &b_lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_MediumLLH_d0z0_v11_isolLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_MediumLLH_d0z0_v11_isolLooseTrackOnly", &lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_MediumLLH_d0z0_v11_isolLooseTrackOnly, &b_lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_MediumLLH_d0z0_v11_isolLooseTrackOnly);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_MediumLLH_d0z0_v11", &lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_MediumLLH_d0z0_v11, &b_lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_MediumLLH_d0z0_v11);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_TightLLH_d0z0_v11_isolGradient", &lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_TightLLH_d0z0_v11_isolGradient, &b_lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_TightLLH_d0z0_v11_isolGradient);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_TightLLH_d0z0_v11_isolLoose", &lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_TightLLH_d0z0_v11_isolLoose, &b_lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_TightLLH_d0z0_v11_isolLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_TightLLH_d0z0_v11_isolLooseTrackOnly", &lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_TightLLH_d0z0_v11_isolLooseTrackOnly, &b_lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_TightLLH_d0z0_v11_isolLooseTrackOnly);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_TightLLH_d0z0_v11_isolTight", &lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_TightLLH_d0z0_v11_isolTight, &b_lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_TightLLH_d0z0_v11_isolTight);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_TightLLH_d0z0_v11", &lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_TightLLH_d0z0_v11, &b_lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_TightLLH_d0z0_v11);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose", &lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose, &b_lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly", &lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly, &b_lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_LooseAndBLayerLLH_d0z0_v11", &lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_LooseAndBLayerLLH_d0z0_v11, &b_lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_LooseAndBLayerLLH_d0z0_v11);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_MediumLLH_d0z0_v11_isolGradient", &lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_MediumLLH_d0z0_v11_isolGradient, &b_lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_MediumLLH_d0z0_v11_isolGradient);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_MediumLLH_d0z0_v11_isolLoose", &lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_MediumLLH_d0z0_v11_isolLoose, &b_lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_MediumLLH_d0z0_v11_isolLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_MediumLLH_d0z0_v11_isolLooseTrackOnly", &lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_MediumLLH_d0z0_v11_isolLooseTrackOnly, &b_lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_MediumLLH_d0z0_v11_isolLooseTrackOnly);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_MediumLLH_d0z0_v11", &lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_MediumLLH_d0z0_v11, &b_lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_MediumLLH_d0z0_v11);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_TightLLH_d0z0_v11_isolGradient", &lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_TightLLH_d0z0_v11_isolGradient, &b_lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_TightLLH_d0z0_v11_isolGradient);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_TightLLH_d0z0_v11_isolLoose", &lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_TightLLH_d0z0_v11_isolLoose, &b_lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_TightLLH_d0z0_v11_isolLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_TightLLH_d0z0_v11_isolLooseTrackOnly", &lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_TightLLH_d0z0_v11_isolLooseTrackOnly, &b_lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_TightLLH_d0z0_v11_isolLooseTrackOnly);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_TightLLH_d0z0_v11_isolTight", &lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_TightLLH_d0z0_v11_isolTight, &b_lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_TightLLH_d0z0_v11_isolTight);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_TightLLH_d0z0_v11", &lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_TightLLH_d0z0_v11, &b_lep_0_NOMINAL_effSF_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_TightLLH_d0z0_v11);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_DI_E_2015_e17_lhloose_2016_e17_lhloose_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose", &lep_0_NOMINAL_effSF_DI_E_2015_e17_lhloose_2016_e17_lhloose_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose, &b_lep_0_NOMINAL_effSF_DI_E_2015_e17_lhloose_2016_e17_lhloose_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_DI_E_2015_e17_lhloose_2016_e17_lhloose_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly", &lep_0_NOMINAL_effSF_DI_E_2015_e17_lhloose_2016_e17_lhloose_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly, &b_lep_0_NOMINAL_effSF_DI_E_2015_e17_lhloose_2016_e17_lhloose_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_DI_E_2015_e17_lhloose_2016_e17_lhloose_LooseAndBLayerLLH_d0z0_v11", &lep_0_NOMINAL_effSF_DI_E_2015_e17_lhloose_2016_e17_lhloose_LooseAndBLayerLLH_d0z0_v11, &b_lep_0_NOMINAL_effSF_DI_E_2015_e17_lhloose_2016_e17_lhloose_LooseAndBLayerLLH_d0z0_v11);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_DI_E_2015_e17_lhloose_2016_e17_lhloose_MediumLLH_d0z0_v11_isolGradient", &lep_0_NOMINAL_effSF_DI_E_2015_e17_lhloose_2016_e17_lhloose_MediumLLH_d0z0_v11_isolGradient, &b_lep_0_NOMINAL_effSF_DI_E_2015_e17_lhloose_2016_e17_lhloose_MediumLLH_d0z0_v11_isolGradient);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_DI_E_2015_e17_lhloose_2016_e17_lhloose_MediumLLH_d0z0_v11_isolLoose", &lep_0_NOMINAL_effSF_DI_E_2015_e17_lhloose_2016_e17_lhloose_MediumLLH_d0z0_v11_isolLoose, &b_lep_0_NOMINAL_effSF_DI_E_2015_e17_lhloose_2016_e17_lhloose_MediumLLH_d0z0_v11_isolLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_DI_E_2015_e17_lhloose_2016_e17_lhloose_MediumLLH_d0z0_v11_isolLooseTrackOnly", &lep_0_NOMINAL_effSF_DI_E_2015_e17_lhloose_2016_e17_lhloose_MediumLLH_d0z0_v11_isolLooseTrackOnly, &b_lep_0_NOMINAL_effSF_DI_E_2015_e17_lhloose_2016_e17_lhloose_MediumLLH_d0z0_v11_isolLooseTrackOnly);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_DI_E_2015_e17_lhloose_2016_e17_lhloose_MediumLLH_d0z0_v11", &lep_0_NOMINAL_effSF_DI_E_2015_e17_lhloose_2016_e17_lhloose_MediumLLH_d0z0_v11, &b_lep_0_NOMINAL_effSF_DI_E_2015_e17_lhloose_2016_e17_lhloose_MediumLLH_d0z0_v11);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_DI_E_2015_e17_lhloose_2016_e17_lhloose_TightLLH_d0z0_v11_isolGradient", &lep_0_NOMINAL_effSF_DI_E_2015_e17_lhloose_2016_e17_lhloose_TightLLH_d0z0_v11_isolGradient, &b_lep_0_NOMINAL_effSF_DI_E_2015_e17_lhloose_2016_e17_lhloose_TightLLH_d0z0_v11_isolGradient);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_DI_E_2015_e17_lhloose_2016_e17_lhloose_TightLLH_d0z0_v11_isolLoose", &lep_0_NOMINAL_effSF_DI_E_2015_e17_lhloose_2016_e17_lhloose_TightLLH_d0z0_v11_isolLoose, &b_lep_0_NOMINAL_effSF_DI_E_2015_e17_lhloose_2016_e17_lhloose_TightLLH_d0z0_v11_isolLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_DI_E_2015_e17_lhloose_2016_e17_lhloose_TightLLH_d0z0_v11_isolLooseTrackOnly", &lep_0_NOMINAL_effSF_DI_E_2015_e17_lhloose_2016_e17_lhloose_TightLLH_d0z0_v11_isolLooseTrackOnly, &b_lep_0_NOMINAL_effSF_DI_E_2015_e17_lhloose_2016_e17_lhloose_TightLLH_d0z0_v11_isolLooseTrackOnly);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_DI_E_2015_e17_lhloose_2016_e17_lhloose_TightLLH_d0z0_v11_isolTight", &lep_0_NOMINAL_effSF_DI_E_2015_e17_lhloose_2016_e17_lhloose_TightLLH_d0z0_v11_isolTight, &b_lep_0_NOMINAL_effSF_DI_E_2015_e17_lhloose_2016_e17_lhloose_TightLLH_d0z0_v11_isolTight);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_DI_E_2015_e17_lhloose_2016_e17_lhloose_TightLLH_d0z0_v11", &lep_0_NOMINAL_effSF_DI_E_2015_e17_lhloose_2016_e17_lhloose_TightLLH_d0z0_v11, &b_lep_0_NOMINAL_effSF_DI_E_2015_e17_lhloose_2016_e17_lhloose_TightLLH_d0z0_v11);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose", &lep_0_NOMINAL_effSF_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose, &b_lep_0_NOMINAL_effSF_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly", &lep_0_NOMINAL_effSF_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly, &b_lep_0_NOMINAL_effSF_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11", &lep_0_NOMINAL_effSF_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11, &b_lep_0_NOMINAL_effSF_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_MediumLLH_d0z0_v11_isolGradient", &lep_0_NOMINAL_effSF_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_MediumLLH_d0z0_v11_isolGradient, &b_lep_0_NOMINAL_effSF_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_MediumLLH_d0z0_v11_isolGradient);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_MediumLLH_d0z0_v11_isolLoose", &lep_0_NOMINAL_effSF_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_MediumLLH_d0z0_v11_isolLoose, &b_lep_0_NOMINAL_effSF_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_MediumLLH_d0z0_v11_isolLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_MediumLLH_d0z0_v11_isolLooseTrackOnly", &lep_0_NOMINAL_effSF_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_MediumLLH_d0z0_v11_isolLooseTrackOnly, &b_lep_0_NOMINAL_effSF_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_MediumLLH_d0z0_v11_isolLooseTrackOnly);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_MediumLLH_d0z0_v11", &lep_0_NOMINAL_effSF_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_MediumLLH_d0z0_v11, &b_lep_0_NOMINAL_effSF_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_MediumLLH_d0z0_v11);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11_isolGradient", &lep_0_NOMINAL_effSF_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11_isolGradient, &b_lep_0_NOMINAL_effSF_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11_isolGradient);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11_isolLoose", &lep_0_NOMINAL_effSF_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11_isolLoose, &b_lep_0_NOMINAL_effSF_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11_isolLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11_isolLooseTrackOnly", &lep_0_NOMINAL_effSF_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11_isolLooseTrackOnly, &b_lep_0_NOMINAL_effSF_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11_isolLooseTrackOnly);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11_isolTight", &lep_0_NOMINAL_effSF_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11_isolTight, &b_lep_0_NOMINAL_effSF_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11_isolTight);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11", &lep_0_NOMINAL_effSF_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11, &b_lep_0_NOMINAL_effSF_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose", &lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose, &b_lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly", &lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly, &b_lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11", &lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11, &b_lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_MediumLLH_d0z0_v11_isolGradient", &lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_MediumLLH_d0z0_v11_isolGradient, &b_lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_MediumLLH_d0z0_v11_isolGradient);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_MediumLLH_d0z0_v11_isolLoose", &lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_MediumLLH_d0z0_v11_isolLoose, &b_lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_MediumLLH_d0z0_v11_isolLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_MediumLLH_d0z0_v11_isolLooseTrackOnly", &lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_MediumLLH_d0z0_v11_isolLooseTrackOnly, &b_lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_MediumLLH_d0z0_v11_isolLooseTrackOnly);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_MediumLLH_d0z0_v11", &lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_MediumLLH_d0z0_v11, &b_lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_MediumLLH_d0z0_v11);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_TightLLH_d0z0_v11_isolGradient", &lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_TightLLH_d0z0_v11_isolGradient, &b_lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_TightLLH_d0z0_v11_isolGradient);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_TightLLH_d0z0_v11_isolLoose", &lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_TightLLH_d0z0_v11_isolLoose, &b_lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_TightLLH_d0z0_v11_isolLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_TightLLH_d0z0_v11_isolLooseTrackOnly", &lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_TightLLH_d0z0_v11_isolLooseTrackOnly, &b_lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_TightLLH_d0z0_v11_isolLooseTrackOnly);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_TightLLH_d0z0_v11_isolTight", &lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_TightLLH_d0z0_v11_isolTight, &b_lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_TightLLH_d0z0_v11_isolTight);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_TightLLH_d0z0_v11", &lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_TightLLH_d0z0_v11, &b_lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_TightLLH_d0z0_v11);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose", &lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose, &b_lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly", &lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly, &b_lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_LooseAndBLayerLLH_d0z0_v11", &lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_LooseAndBLayerLLH_d0z0_v11, &b_lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_LooseAndBLayerLLH_d0z0_v11);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_MediumLLH_d0z0_v11_isolGradient", &lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_MediumLLH_d0z0_v11_isolGradient, &b_lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_MediumLLH_d0z0_v11_isolGradient);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_MediumLLH_d0z0_v11_isolLoose", &lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_MediumLLH_d0z0_v11_isolLoose, &b_lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_MediumLLH_d0z0_v11_isolLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_MediumLLH_d0z0_v11_isolLooseTrackOnly", &lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_MediumLLH_d0z0_v11_isolLooseTrackOnly, &b_lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_MediumLLH_d0z0_v11_isolLooseTrackOnly);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_MediumLLH_d0z0_v11", &lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_MediumLLH_d0z0_v11, &b_lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_MediumLLH_d0z0_v11);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_TightLLH_d0z0_v11_isolGradient", &lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_TightLLH_d0z0_v11_isolGradient, &b_lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_TightLLH_d0z0_v11_isolGradient);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_TightLLH_d0z0_v11_isolLoose", &lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_TightLLH_d0z0_v11_isolLoose, &b_lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_TightLLH_d0z0_v11_isolLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_TightLLH_d0z0_v11_isolLooseTrackOnly", &lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_TightLLH_d0z0_v11_isolLooseTrackOnly, &b_lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_TightLLH_d0z0_v11_isolLooseTrackOnly);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_TightLLH_d0z0_v11_isolTight", &lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_TightLLH_d0z0_v11_isolTight, &b_lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_TightLLH_d0z0_v11_isolTight);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_TightLLH_d0z0_v11", &lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_TightLLH_d0z0_v11, &b_lep_0_NOMINAL_effSF_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_TightLLH_d0z0_v11);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose", &lep_0_NOMINAL_effSF_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose, &b_lep_0_NOMINAL_effSF_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly", &lep_0_NOMINAL_effSF_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly, &b_lep_0_NOMINAL_effSF_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11", &lep_0_NOMINAL_effSF_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11, &b_lep_0_NOMINAL_effSF_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_MediumLLH_d0z0_v11_isolGradient", &lep_0_NOMINAL_effSF_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_MediumLLH_d0z0_v11_isolGradient, &b_lep_0_NOMINAL_effSF_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_MediumLLH_d0z0_v11_isolGradient);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_MediumLLH_d0z0_v11_isolLoose", &lep_0_NOMINAL_effSF_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_MediumLLH_d0z0_v11_isolLoose, &b_lep_0_NOMINAL_effSF_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_MediumLLH_d0z0_v11_isolLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_MediumLLH_d0z0_v11_isolLooseTrackOnly", &lep_0_NOMINAL_effSF_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_MediumLLH_d0z0_v11_isolLooseTrackOnly, &b_lep_0_NOMINAL_effSF_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_MediumLLH_d0z0_v11_isolLooseTrackOnly);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_MediumLLH_d0z0_v11", &lep_0_NOMINAL_effSF_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_MediumLLH_d0z0_v11, &b_lep_0_NOMINAL_effSF_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_MediumLLH_d0z0_v11);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_TightLLH_d0z0_v11_isolGradient", &lep_0_NOMINAL_effSF_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_TightLLH_d0z0_v11_isolGradient, &b_lep_0_NOMINAL_effSF_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_TightLLH_d0z0_v11_isolGradient);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_TightLLH_d0z0_v11_isolLoose", &lep_0_NOMINAL_effSF_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_TightLLH_d0z0_v11_isolLoose, &b_lep_0_NOMINAL_effSF_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_TightLLH_d0z0_v11_isolLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_TightLLH_d0z0_v11_isolLooseTrackOnly", &lep_0_NOMINAL_effSF_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_TightLLH_d0z0_v11_isolLooseTrackOnly, &b_lep_0_NOMINAL_effSF_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_TightLLH_d0z0_v11_isolLooseTrackOnly);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_TightLLH_d0z0_v11_isolTight", &lep_0_NOMINAL_effSF_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_TightLLH_d0z0_v11_isolTight, &b_lep_0_NOMINAL_effSF_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_TightLLH_d0z0_v11_isolTight);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_TightLLH_d0z0_v11", &lep_0_NOMINAL_effSF_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_TightLLH_d0z0_v11, &b_lep_0_NOMINAL_effSF_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_TightLLH_d0z0_v11);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose", &lep_0_NOMINAL_effSF_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose, &b_lep_0_NOMINAL_effSF_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly", &lep_0_NOMINAL_effSF_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly, &b_lep_0_NOMINAL_effSF_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11", &lep_0_NOMINAL_effSF_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11, &b_lep_0_NOMINAL_effSF_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_MediumLLH_d0z0_v11_isolGradient", &lep_0_NOMINAL_effSF_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_MediumLLH_d0z0_v11_isolGradient, &b_lep_0_NOMINAL_effSF_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_MediumLLH_d0z0_v11_isolGradient);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_MediumLLH_d0z0_v11_isolLoose", &lep_0_NOMINAL_effSF_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_MediumLLH_d0z0_v11_isolLoose, &b_lep_0_NOMINAL_effSF_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_MediumLLH_d0z0_v11_isolLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_MediumLLH_d0z0_v11_isolLooseTrackOnly", &lep_0_NOMINAL_effSF_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_MediumLLH_d0z0_v11_isolLooseTrackOnly, &b_lep_0_NOMINAL_effSF_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_MediumLLH_d0z0_v11_isolLooseTrackOnly);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_MediumLLH_d0z0_v11", &lep_0_NOMINAL_effSF_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_MediumLLH_d0z0_v11, &b_lep_0_NOMINAL_effSF_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_MediumLLH_d0z0_v11);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11_isolGradient", &lep_0_NOMINAL_effSF_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11_isolGradient, &b_lep_0_NOMINAL_effSF_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11_isolGradient);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11_isolLoose", &lep_0_NOMINAL_effSF_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11_isolLoose, &b_lep_0_NOMINAL_effSF_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11_isolLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11_isolLooseTrackOnly", &lep_0_NOMINAL_effSF_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11_isolLooseTrackOnly, &b_lep_0_NOMINAL_effSF_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11_isolLooseTrackOnly);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11_isolTight", &lep_0_NOMINAL_effSF_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11_isolTight, &b_lep_0_NOMINAL_effSF_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11_isolTight);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11", &lep_0_NOMINAL_effSF_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11, &b_lep_0_NOMINAL_effSF_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose", &lep_0_NOMINAL_effSF_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose, &b_lep_0_NOMINAL_effSF_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly", &lep_0_NOMINAL_effSF_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly, &b_lep_0_NOMINAL_effSF_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_LooseAndBLayerLLH_d0z0_v11", &lep_0_NOMINAL_effSF_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_LooseAndBLayerLLH_d0z0_v11, &b_lep_0_NOMINAL_effSF_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_LooseAndBLayerLLH_d0z0_v11);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_MediumLLH_d0z0_v11_isolGradient", &lep_0_NOMINAL_effSF_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_MediumLLH_d0z0_v11_isolGradient, &b_lep_0_NOMINAL_effSF_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_MediumLLH_d0z0_v11_isolGradient);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_MediumLLH_d0z0_v11_isolLoose", &lep_0_NOMINAL_effSF_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_MediumLLH_d0z0_v11_isolLoose, &b_lep_0_NOMINAL_effSF_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_MediumLLH_d0z0_v11_isolLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_MediumLLH_d0z0_v11_isolLooseTrackOnly", &lep_0_NOMINAL_effSF_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_MediumLLH_d0z0_v11_isolLooseTrackOnly, &b_lep_0_NOMINAL_effSF_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_MediumLLH_d0z0_v11_isolLooseTrackOnly);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_MediumLLH_d0z0_v11", &lep_0_NOMINAL_effSF_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_MediumLLH_d0z0_v11, &b_lep_0_NOMINAL_effSF_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_MediumLLH_d0z0_v11);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_TightLLH_d0z0_v11_isolGradient", &lep_0_NOMINAL_effSF_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_TightLLH_d0z0_v11_isolGradient, &b_lep_0_NOMINAL_effSF_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_TightLLH_d0z0_v11_isolGradient);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_TightLLH_d0z0_v11_isolLoose", &lep_0_NOMINAL_effSF_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_TightLLH_d0z0_v11_isolLoose, &b_lep_0_NOMINAL_effSF_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_TightLLH_d0z0_v11_isolLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_TightLLH_d0z0_v11_isolLooseTrackOnly", &lep_0_NOMINAL_effSF_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_TightLLH_d0z0_v11_isolLooseTrackOnly, &b_lep_0_NOMINAL_effSF_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_TightLLH_d0z0_v11_isolLooseTrackOnly);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_TightLLH_d0z0_v11_isolTight", &lep_0_NOMINAL_effSF_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_TightLLH_d0z0_v11_isolTight, &b_lep_0_NOMINAL_effSF_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_TightLLH_d0z0_v11_isolTight);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_TightLLH_d0z0_v11", &lep_0_NOMINAL_effSF_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_TightLLH_d0z0_v11, &b_lep_0_NOMINAL_effSF_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_TightLLH_d0z0_v11);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose", &lep_0_NOMINAL_effSF_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose, &b_lep_0_NOMINAL_effSF_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly", &lep_0_NOMINAL_effSF_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly, &b_lep_0_NOMINAL_effSF_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_LooseAndBLayerLLH_d0z0_v11", &lep_0_NOMINAL_effSF_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_LooseAndBLayerLLH_d0z0_v11, &b_lep_0_NOMINAL_effSF_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_LooseAndBLayerLLH_d0z0_v11);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_MediumLLH_d0z0_v11_isolGradient", &lep_0_NOMINAL_effSF_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_MediumLLH_d0z0_v11_isolGradient, &b_lep_0_NOMINAL_effSF_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_MediumLLH_d0z0_v11_isolGradient);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_MediumLLH_d0z0_v11_isolLoose", &lep_0_NOMINAL_effSF_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_MediumLLH_d0z0_v11_isolLoose, &b_lep_0_NOMINAL_effSF_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_MediumLLH_d0z0_v11_isolLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_MediumLLH_d0z0_v11_isolLooseTrackOnly", &lep_0_NOMINAL_effSF_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_MediumLLH_d0z0_v11_isolLooseTrackOnly, &b_lep_0_NOMINAL_effSF_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_MediumLLH_d0z0_v11_isolLooseTrackOnly);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_MediumLLH_d0z0_v11", &lep_0_NOMINAL_effSF_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_MediumLLH_d0z0_v11, &b_lep_0_NOMINAL_effSF_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_MediumLLH_d0z0_v11);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_TightLLH_d0z0_v11_isolGradient", &lep_0_NOMINAL_effSF_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_TightLLH_d0z0_v11_isolGradient, &b_lep_0_NOMINAL_effSF_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_TightLLH_d0z0_v11_isolGradient);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_TightLLH_d0z0_v11_isolLoose", &lep_0_NOMINAL_effSF_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_TightLLH_d0z0_v11_isolLoose, &b_lep_0_NOMINAL_effSF_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_TightLLH_d0z0_v11_isolLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_TightLLH_d0z0_v11_isolLooseTrackOnly", &lep_0_NOMINAL_effSF_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_TightLLH_d0z0_v11_isolLooseTrackOnly, &b_lep_0_NOMINAL_effSF_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_TightLLH_d0z0_v11_isolLooseTrackOnly);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_TightLLH_d0z0_v11_isolTight", &lep_0_NOMINAL_effSF_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_TightLLH_d0z0_v11_isolTight, &b_lep_0_NOMINAL_effSF_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_TightLLH_d0z0_v11_isolTight);
   fChain->SetBranchAddress("lep_0_NOMINAL_effSF_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_TightLLH_d0z0_v11", &lep_0_NOMINAL_effSF_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_TightLLH_d0z0_v11, &b_lep_0_NOMINAL_effSF_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_TightLLH_d0z0_v11);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose", &lep_0_NOMINAL_eff_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose, &b_lep_0_NOMINAL_eff_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly", &lep_0_NOMINAL_eff_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly, &b_lep_0_NOMINAL_eff_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11", &lep_0_NOMINAL_eff_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11, &b_lep_0_NOMINAL_eff_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_MediumLLH_d0z0_v11_isolGradient", &lep_0_NOMINAL_eff_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_MediumLLH_d0z0_v11_isolGradient, &b_lep_0_NOMINAL_eff_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_MediumLLH_d0z0_v11_isolGradient);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_MediumLLH_d0z0_v11_isolLoose", &lep_0_NOMINAL_eff_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_MediumLLH_d0z0_v11_isolLoose, &b_lep_0_NOMINAL_eff_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_MediumLLH_d0z0_v11_isolLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_MediumLLH_d0z0_v11_isolLooseTrackOnly", &lep_0_NOMINAL_eff_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_MediumLLH_d0z0_v11_isolLooseTrackOnly, &b_lep_0_NOMINAL_eff_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_MediumLLH_d0z0_v11_isolLooseTrackOnly);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_MediumLLH_d0z0_v11", &lep_0_NOMINAL_eff_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_MediumLLH_d0z0_v11, &b_lep_0_NOMINAL_eff_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_MediumLLH_d0z0_v11);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_TightLLH_d0z0_v11_isolGradient", &lep_0_NOMINAL_eff_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_TightLLH_d0z0_v11_isolGradient, &b_lep_0_NOMINAL_eff_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_TightLLH_d0z0_v11_isolGradient);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_TightLLH_d0z0_v11_isolLoose", &lep_0_NOMINAL_eff_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_TightLLH_d0z0_v11_isolLoose, &b_lep_0_NOMINAL_eff_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_TightLLH_d0z0_v11_isolLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_TightLLH_d0z0_v11_isolLooseTrackOnly", &lep_0_NOMINAL_eff_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_TightLLH_d0z0_v11_isolLooseTrackOnly, &b_lep_0_NOMINAL_eff_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_TightLLH_d0z0_v11_isolLooseTrackOnly);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_TightLLH_d0z0_v11_isolTight", &lep_0_NOMINAL_eff_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_TightLLH_d0z0_v11_isolTight, &b_lep_0_NOMINAL_eff_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_TightLLH_d0z0_v11_isolTight);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_TightLLH_d0z0_v11", &lep_0_NOMINAL_eff_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_TightLLH_d0z0_v11, &b_lep_0_NOMINAL_eff_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_e24_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_TightLLH_d0z0_v11);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose", &lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose, &b_lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly", &lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly, &b_lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_LooseAndBLayerLLH_d0z0_v11", &lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_LooseAndBLayerLLH_d0z0_v11, &b_lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_LooseAndBLayerLLH_d0z0_v11);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_MediumLLH_d0z0_v11_isolGradient", &lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_MediumLLH_d0z0_v11_isolGradient, &b_lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_MediumLLH_d0z0_v11_isolGradient);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_MediumLLH_d0z0_v11_isolLoose", &lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_MediumLLH_d0z0_v11_isolLoose, &b_lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_MediumLLH_d0z0_v11_isolLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_MediumLLH_d0z0_v11_isolLooseTrackOnly", &lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_MediumLLH_d0z0_v11_isolLooseTrackOnly, &b_lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_MediumLLH_d0z0_v11_isolLooseTrackOnly);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_MediumLLH_d0z0_v11", &lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_MediumLLH_d0z0_v11, &b_lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_MediumLLH_d0z0_v11);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_TightLLH_d0z0_v11_isolGradient", &lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_TightLLH_d0z0_v11_isolGradient, &b_lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_TightLLH_d0z0_v11_isolGradient);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_TightLLH_d0z0_v11_isolLoose", &lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_TightLLH_d0z0_v11_isolLoose, &b_lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_TightLLH_d0z0_v11_isolLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_TightLLH_d0z0_v11_isolLooseTrackOnly", &lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_TightLLH_d0z0_v11_isolLooseTrackOnly, &b_lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_TightLLH_d0z0_v11_isolLooseTrackOnly);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_TightLLH_d0z0_v11_isolTight", &lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_TightLLH_d0z0_v11_isolTight, &b_lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_TightLLH_d0z0_v11_isolTight);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_TightLLH_d0z0_v11", &lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_TightLLH_d0z0_v11, &b_lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e15_lhvloose_nod0_L1EM13VH_TightLLH_d0z0_v11);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose", &lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose, &b_lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly", &lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly, &b_lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_LooseAndBLayerLLH_d0z0_v11", &lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_LooseAndBLayerLLH_d0z0_v11, &b_lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_LooseAndBLayerLLH_d0z0_v11);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_MediumLLH_d0z0_v11_isolGradient", &lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_MediumLLH_d0z0_v11_isolGradient, &b_lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_MediumLLH_d0z0_v11_isolGradient);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_MediumLLH_d0z0_v11_isolLoose", &lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_MediumLLH_d0z0_v11_isolLoose, &b_lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_MediumLLH_d0z0_v11_isolLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_MediumLLH_d0z0_v11_isolLooseTrackOnly", &lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_MediumLLH_d0z0_v11_isolLooseTrackOnly, &b_lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_MediumLLH_d0z0_v11_isolLooseTrackOnly);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_MediumLLH_d0z0_v11", &lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_MediumLLH_d0z0_v11, &b_lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_MediumLLH_d0z0_v11);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_TightLLH_d0z0_v11_isolGradient", &lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_TightLLH_d0z0_v11_isolGradient, &b_lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_TightLLH_d0z0_v11_isolGradient);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_TightLLH_d0z0_v11_isolLoose", &lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_TightLLH_d0z0_v11_isolLoose, &b_lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_TightLLH_d0z0_v11_isolLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_TightLLH_d0z0_v11_isolLooseTrackOnly", &lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_TightLLH_d0z0_v11_isolLooseTrackOnly, &b_lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_TightLLH_d0z0_v11_isolLooseTrackOnly);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_TightLLH_d0z0_v11_isolTight", &lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_TightLLH_d0z0_v11_isolTight, &b_lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_TightLLH_d0z0_v11_isolTight);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_TightLLH_d0z0_v11", &lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_TightLLH_d0z0_v11, &b_lep_0_NOMINAL_eff_DI_E_2015_e12_lhloose_L1EM10VH_2016_e17_lhvloose_nod0_TightLLH_d0z0_v11);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_DI_E_2015_e17_lhloose_2016_e17_lhloose_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose", &lep_0_NOMINAL_eff_DI_E_2015_e17_lhloose_2016_e17_lhloose_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose, &b_lep_0_NOMINAL_eff_DI_E_2015_e17_lhloose_2016_e17_lhloose_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_DI_E_2015_e17_lhloose_2016_e17_lhloose_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly", &lep_0_NOMINAL_eff_DI_E_2015_e17_lhloose_2016_e17_lhloose_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly, &b_lep_0_NOMINAL_eff_DI_E_2015_e17_lhloose_2016_e17_lhloose_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_DI_E_2015_e17_lhloose_2016_e17_lhloose_LooseAndBLayerLLH_d0z0_v11", &lep_0_NOMINAL_eff_DI_E_2015_e17_lhloose_2016_e17_lhloose_LooseAndBLayerLLH_d0z0_v11, &b_lep_0_NOMINAL_eff_DI_E_2015_e17_lhloose_2016_e17_lhloose_LooseAndBLayerLLH_d0z0_v11);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_DI_E_2015_e17_lhloose_2016_e17_lhloose_MediumLLH_d0z0_v11_isolGradient", &lep_0_NOMINAL_eff_DI_E_2015_e17_lhloose_2016_e17_lhloose_MediumLLH_d0z0_v11_isolGradient, &b_lep_0_NOMINAL_eff_DI_E_2015_e17_lhloose_2016_e17_lhloose_MediumLLH_d0z0_v11_isolGradient);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_DI_E_2015_e17_lhloose_2016_e17_lhloose_MediumLLH_d0z0_v11_isolLoose", &lep_0_NOMINAL_eff_DI_E_2015_e17_lhloose_2016_e17_lhloose_MediumLLH_d0z0_v11_isolLoose, &b_lep_0_NOMINAL_eff_DI_E_2015_e17_lhloose_2016_e17_lhloose_MediumLLH_d0z0_v11_isolLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_DI_E_2015_e17_lhloose_2016_e17_lhloose_MediumLLH_d0z0_v11_isolLooseTrackOnly", &lep_0_NOMINAL_eff_DI_E_2015_e17_lhloose_2016_e17_lhloose_MediumLLH_d0z0_v11_isolLooseTrackOnly, &b_lep_0_NOMINAL_eff_DI_E_2015_e17_lhloose_2016_e17_lhloose_MediumLLH_d0z0_v11_isolLooseTrackOnly);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_DI_E_2015_e17_lhloose_2016_e17_lhloose_MediumLLH_d0z0_v11", &lep_0_NOMINAL_eff_DI_E_2015_e17_lhloose_2016_e17_lhloose_MediumLLH_d0z0_v11, &b_lep_0_NOMINAL_eff_DI_E_2015_e17_lhloose_2016_e17_lhloose_MediumLLH_d0z0_v11);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_DI_E_2015_e17_lhloose_2016_e17_lhloose_TightLLH_d0z0_v11_isolGradient", &lep_0_NOMINAL_eff_DI_E_2015_e17_lhloose_2016_e17_lhloose_TightLLH_d0z0_v11_isolGradient, &b_lep_0_NOMINAL_eff_DI_E_2015_e17_lhloose_2016_e17_lhloose_TightLLH_d0z0_v11_isolGradient);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_DI_E_2015_e17_lhloose_2016_e17_lhloose_TightLLH_d0z0_v11_isolLoose", &lep_0_NOMINAL_eff_DI_E_2015_e17_lhloose_2016_e17_lhloose_TightLLH_d0z0_v11_isolLoose, &b_lep_0_NOMINAL_eff_DI_E_2015_e17_lhloose_2016_e17_lhloose_TightLLH_d0z0_v11_isolLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_DI_E_2015_e17_lhloose_2016_e17_lhloose_TightLLH_d0z0_v11_isolLooseTrackOnly", &lep_0_NOMINAL_eff_DI_E_2015_e17_lhloose_2016_e17_lhloose_TightLLH_d0z0_v11_isolLooseTrackOnly, &b_lep_0_NOMINAL_eff_DI_E_2015_e17_lhloose_2016_e17_lhloose_TightLLH_d0z0_v11_isolLooseTrackOnly);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_DI_E_2015_e17_lhloose_2016_e17_lhloose_TightLLH_d0z0_v11_isolTight", &lep_0_NOMINAL_eff_DI_E_2015_e17_lhloose_2016_e17_lhloose_TightLLH_d0z0_v11_isolTight, &b_lep_0_NOMINAL_eff_DI_E_2015_e17_lhloose_2016_e17_lhloose_TightLLH_d0z0_v11_isolTight);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_DI_E_2015_e17_lhloose_2016_e17_lhloose_TightLLH_d0z0_v11", &lep_0_NOMINAL_eff_DI_E_2015_e17_lhloose_2016_e17_lhloose_TightLLH_d0z0_v11, &b_lep_0_NOMINAL_eff_DI_E_2015_e17_lhloose_2016_e17_lhloose_TightLLH_d0z0_v11);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose", &lep_0_NOMINAL_eff_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose, &b_lep_0_NOMINAL_eff_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly", &lep_0_NOMINAL_eff_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly, &b_lep_0_NOMINAL_eff_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11", &lep_0_NOMINAL_eff_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11, &b_lep_0_NOMINAL_eff_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_MediumLLH_d0z0_v11_isolGradient", &lep_0_NOMINAL_eff_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_MediumLLH_d0z0_v11_isolGradient, &b_lep_0_NOMINAL_eff_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_MediumLLH_d0z0_v11_isolGradient);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_MediumLLH_d0z0_v11_isolLoose", &lep_0_NOMINAL_eff_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_MediumLLH_d0z0_v11_isolLoose, &b_lep_0_NOMINAL_eff_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_MediumLLH_d0z0_v11_isolLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_MediumLLH_d0z0_v11_isolLooseTrackOnly", &lep_0_NOMINAL_eff_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_MediumLLH_d0z0_v11_isolLooseTrackOnly, &b_lep_0_NOMINAL_eff_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_MediumLLH_d0z0_v11_isolLooseTrackOnly);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_MediumLLH_d0z0_v11", &lep_0_NOMINAL_eff_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_MediumLLH_d0z0_v11, &b_lep_0_NOMINAL_eff_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_MediumLLH_d0z0_v11);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11_isolGradient", &lep_0_NOMINAL_eff_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11_isolGradient, &b_lep_0_NOMINAL_eff_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11_isolGradient);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11_isolLoose", &lep_0_NOMINAL_eff_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11_isolLoose, &b_lep_0_NOMINAL_eff_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11_isolLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11_isolLooseTrackOnly", &lep_0_NOMINAL_eff_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11_isolLooseTrackOnly, &b_lep_0_NOMINAL_eff_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11_isolLooseTrackOnly);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11_isolTight", &lep_0_NOMINAL_eff_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11_isolTight, &b_lep_0_NOMINAL_eff_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11_isolTight);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11", &lep_0_NOMINAL_eff_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11, &b_lep_0_NOMINAL_eff_TRI_E_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose", &lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose, &b_lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly", &lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly, &b_lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11", &lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11, &b_lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_MediumLLH_d0z0_v11_isolGradient", &lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_MediumLLH_d0z0_v11_isolGradient, &b_lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_MediumLLH_d0z0_v11_isolGradient);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_MediumLLH_d0z0_v11_isolLoose", &lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_MediumLLH_d0z0_v11_isolLoose, &b_lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_MediumLLH_d0z0_v11_isolLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_MediumLLH_d0z0_v11_isolLooseTrackOnly", &lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_MediumLLH_d0z0_v11_isolLooseTrackOnly, &b_lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_MediumLLH_d0z0_v11_isolLooseTrackOnly);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_MediumLLH_d0z0_v11", &lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_MediumLLH_d0z0_v11, &b_lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_MediumLLH_d0z0_v11);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_TightLLH_d0z0_v11_isolGradient", &lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_TightLLH_d0z0_v11_isolGradient, &b_lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_TightLLH_d0z0_v11_isolGradient);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_TightLLH_d0z0_v11_isolLoose", &lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_TightLLH_d0z0_v11_isolLoose, &b_lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_TightLLH_d0z0_v11_isolLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_TightLLH_d0z0_v11_isolLooseTrackOnly", &lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_TightLLH_d0z0_v11_isolLooseTrackOnly, &b_lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_TightLLH_d0z0_v11_isolLooseTrackOnly);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_TightLLH_d0z0_v11_isolTight", &lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_TightLLH_d0z0_v11_isolTight, &b_lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_TightLLH_d0z0_v11_isolTight);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_TightLLH_d0z0_v11", &lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_TightLLH_d0z0_v11, &b_lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhloose_nod0_TightLLH_d0z0_v11);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose", &lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose, &b_lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly", &lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly, &b_lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_LooseAndBLayerLLH_d0z0_v11", &lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_LooseAndBLayerLLH_d0z0_v11, &b_lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_LooseAndBLayerLLH_d0z0_v11);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_MediumLLH_d0z0_v11_isolGradient", &lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_MediumLLH_d0z0_v11_isolGradient, &b_lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_MediumLLH_d0z0_v11_isolGradient);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_MediumLLH_d0z0_v11_isolLoose", &lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_MediumLLH_d0z0_v11_isolLoose, &b_lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_MediumLLH_d0z0_v11_isolLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_MediumLLH_d0z0_v11_isolLooseTrackOnly", &lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_MediumLLH_d0z0_v11_isolLooseTrackOnly, &b_lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_MediumLLH_d0z0_v11_isolLooseTrackOnly);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_MediumLLH_d0z0_v11", &lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_MediumLLH_d0z0_v11, &b_lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_MediumLLH_d0z0_v11);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_TightLLH_d0z0_v11_isolGradient", &lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_TightLLH_d0z0_v11_isolGradient, &b_lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_TightLLH_d0z0_v11_isolGradient);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_TightLLH_d0z0_v11_isolLoose", &lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_TightLLH_d0z0_v11_isolLoose, &b_lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_TightLLH_d0z0_v11_isolLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_TightLLH_d0z0_v11_isolLooseTrackOnly", &lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_TightLLH_d0z0_v11_isolLooseTrackOnly, &b_lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_TightLLH_d0z0_v11_isolLooseTrackOnly);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_TightLLH_d0z0_v11_isolTight", &lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_TightLLH_d0z0_v11_isolTight, &b_lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_TightLLH_d0z0_v11_isolTight);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_TightLLH_d0z0_v11", &lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_TightLLH_d0z0_v11, &b_lep_0_NOMINAL_eff_TRI_E_2015_e9_lhloose_2016_e9_lhmedium_nod0_TightLLH_d0z0_v11);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose", &lep_0_NOMINAL_eff_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose, &b_lep_0_NOMINAL_eff_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly", &lep_0_NOMINAL_eff_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly, &b_lep_0_NOMINAL_eff_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11", &lep_0_NOMINAL_eff_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11, &b_lep_0_NOMINAL_eff_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_MediumLLH_d0z0_v11_isolGradient", &lep_0_NOMINAL_eff_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_MediumLLH_d0z0_v11_isolGradient, &b_lep_0_NOMINAL_eff_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_MediumLLH_d0z0_v11_isolGradient);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_MediumLLH_d0z0_v11_isolLoose", &lep_0_NOMINAL_eff_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_MediumLLH_d0z0_v11_isolLoose, &b_lep_0_NOMINAL_eff_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_MediumLLH_d0z0_v11_isolLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_MediumLLH_d0z0_v11_isolLooseTrackOnly", &lep_0_NOMINAL_eff_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_MediumLLH_d0z0_v11_isolLooseTrackOnly, &b_lep_0_NOMINAL_eff_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_MediumLLH_d0z0_v11_isolLooseTrackOnly);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_MediumLLH_d0z0_v11", &lep_0_NOMINAL_eff_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_MediumLLH_d0z0_v11, &b_lep_0_NOMINAL_eff_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_MediumLLH_d0z0_v11);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_TightLLH_d0z0_v11_isolGradient", &lep_0_NOMINAL_eff_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_TightLLH_d0z0_v11_isolGradient, &b_lep_0_NOMINAL_eff_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_TightLLH_d0z0_v11_isolGradient);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_TightLLH_d0z0_v11_isolLoose", &lep_0_NOMINAL_eff_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_TightLLH_d0z0_v11_isolLoose, &b_lep_0_NOMINAL_eff_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_TightLLH_d0z0_v11_isolLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_TightLLH_d0z0_v11_isolLooseTrackOnly", &lep_0_NOMINAL_eff_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_TightLLH_d0z0_v11_isolLooseTrackOnly, &b_lep_0_NOMINAL_eff_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_TightLLH_d0z0_v11_isolLooseTrackOnly);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_TightLLH_d0z0_v11_isolTight", &lep_0_NOMINAL_eff_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_TightLLH_d0z0_v11_isolTight, &b_lep_0_NOMINAL_eff_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_TightLLH_d0z0_v11_isolTight);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_TightLLH_d0z0_v11", &lep_0_NOMINAL_eff_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_TightLLH_d0z0_v11, &b_lep_0_NOMINAL_eff_MULTI_L_2015_e12_lhloose_2016_e12_lhloose_nod0_TightLLH_d0z0_v11);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose", &lep_0_NOMINAL_eff_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose, &b_lep_0_NOMINAL_eff_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly", &lep_0_NOMINAL_eff_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly, &b_lep_0_NOMINAL_eff_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11", &lep_0_NOMINAL_eff_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11, &b_lep_0_NOMINAL_eff_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_LooseAndBLayerLLH_d0z0_v11);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_MediumLLH_d0z0_v11_isolGradient", &lep_0_NOMINAL_eff_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_MediumLLH_d0z0_v11_isolGradient, &b_lep_0_NOMINAL_eff_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_MediumLLH_d0z0_v11_isolGradient);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_MediumLLH_d0z0_v11_isolLoose", &lep_0_NOMINAL_eff_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_MediumLLH_d0z0_v11_isolLoose, &b_lep_0_NOMINAL_eff_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_MediumLLH_d0z0_v11_isolLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_MediumLLH_d0z0_v11_isolLooseTrackOnly", &lep_0_NOMINAL_eff_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_MediumLLH_d0z0_v11_isolLooseTrackOnly, &b_lep_0_NOMINAL_eff_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_MediumLLH_d0z0_v11_isolLooseTrackOnly);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_MediumLLH_d0z0_v11", &lep_0_NOMINAL_eff_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_MediumLLH_d0z0_v11, &b_lep_0_NOMINAL_eff_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_MediumLLH_d0z0_v11);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11_isolGradient", &lep_0_NOMINAL_eff_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11_isolGradient, &b_lep_0_NOMINAL_eff_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11_isolGradient);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11_isolLoose", &lep_0_NOMINAL_eff_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11_isolLoose, &b_lep_0_NOMINAL_eff_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11_isolLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11_isolLooseTrackOnly", &lep_0_NOMINAL_eff_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11_isolLooseTrackOnly, &b_lep_0_NOMINAL_eff_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11_isolLooseTrackOnly);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11_isolTight", &lep_0_NOMINAL_eff_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11_isolTight, &b_lep_0_NOMINAL_eff_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11_isolTight);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11", &lep_0_NOMINAL_eff_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11, &b_lep_0_NOMINAL_eff_MULTI_L_2015_e17_lhloose_2016_e17_lhloose_nod0_TightLLH_d0z0_v11);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose", &lep_0_NOMINAL_eff_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose, &b_lep_0_NOMINAL_eff_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly", &lep_0_NOMINAL_eff_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly, &b_lep_0_NOMINAL_eff_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_LooseAndBLayerLLH_d0z0_v11", &lep_0_NOMINAL_eff_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_LooseAndBLayerLLH_d0z0_v11, &b_lep_0_NOMINAL_eff_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_LooseAndBLayerLLH_d0z0_v11);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_MediumLLH_d0z0_v11_isolGradient", &lep_0_NOMINAL_eff_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_MediumLLH_d0z0_v11_isolGradient, &b_lep_0_NOMINAL_eff_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_MediumLLH_d0z0_v11_isolGradient);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_MediumLLH_d0z0_v11_isolLoose", &lep_0_NOMINAL_eff_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_MediumLLH_d0z0_v11_isolLoose, &b_lep_0_NOMINAL_eff_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_MediumLLH_d0z0_v11_isolLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_MediumLLH_d0z0_v11_isolLooseTrackOnly", &lep_0_NOMINAL_eff_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_MediumLLH_d0z0_v11_isolLooseTrackOnly, &b_lep_0_NOMINAL_eff_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_MediumLLH_d0z0_v11_isolLooseTrackOnly);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_MediumLLH_d0z0_v11", &lep_0_NOMINAL_eff_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_MediumLLH_d0z0_v11, &b_lep_0_NOMINAL_eff_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_MediumLLH_d0z0_v11);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_TightLLH_d0z0_v11_isolGradient", &lep_0_NOMINAL_eff_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_TightLLH_d0z0_v11_isolGradient, &b_lep_0_NOMINAL_eff_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_TightLLH_d0z0_v11_isolGradient);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_TightLLH_d0z0_v11_isolLoose", &lep_0_NOMINAL_eff_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_TightLLH_d0z0_v11_isolLoose, &b_lep_0_NOMINAL_eff_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_TightLLH_d0z0_v11_isolLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_TightLLH_d0z0_v11_isolLooseTrackOnly", &lep_0_NOMINAL_eff_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_TightLLH_d0z0_v11_isolLooseTrackOnly, &b_lep_0_NOMINAL_eff_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_TightLLH_d0z0_v11_isolLooseTrackOnly);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_TightLLH_d0z0_v11_isolTight", &lep_0_NOMINAL_eff_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_TightLLH_d0z0_v11_isolTight, &b_lep_0_NOMINAL_eff_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_TightLLH_d0z0_v11_isolTight);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_TightLLH_d0z0_v11", &lep_0_NOMINAL_eff_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_TightLLH_d0z0_v11, &b_lep_0_NOMINAL_eff_MULTI_L_2015_e24_lhmedium_L1EM20VHI_2016_e24_lhmedium_nod0_L1EM20VHI_TightLLH_d0z0_v11);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose", &lep_0_NOMINAL_eff_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose, &b_lep_0_NOMINAL_eff_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_LooseAndBLayerLLH_d0z0_v11_isolFixedCutLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly", &lep_0_NOMINAL_eff_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly, &b_lep_0_NOMINAL_eff_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_LooseAndBLayerLLH_d0z0_v11_isolLooseTrackOnly);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_LooseAndBLayerLLH_d0z0_v11", &lep_0_NOMINAL_eff_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_LooseAndBLayerLLH_d0z0_v11, &b_lep_0_NOMINAL_eff_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_LooseAndBLayerLLH_d0z0_v11);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_MediumLLH_d0z0_v11_isolGradient", &lep_0_NOMINAL_eff_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_MediumLLH_d0z0_v11_isolGradient, &b_lep_0_NOMINAL_eff_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_MediumLLH_d0z0_v11_isolGradient);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_MediumLLH_d0z0_v11_isolLoose", &lep_0_NOMINAL_eff_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_MediumLLH_d0z0_v11_isolLoose, &b_lep_0_NOMINAL_eff_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_MediumLLH_d0z0_v11_isolLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_MediumLLH_d0z0_v11_isolLooseTrackOnly", &lep_0_NOMINAL_eff_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_MediumLLH_d0z0_v11_isolLooseTrackOnly, &b_lep_0_NOMINAL_eff_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_MediumLLH_d0z0_v11_isolLooseTrackOnly);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_MediumLLH_d0z0_v11", &lep_0_NOMINAL_eff_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_MediumLLH_d0z0_v11, &b_lep_0_NOMINAL_eff_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_MediumLLH_d0z0_v11);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_TightLLH_d0z0_v11_isolGradient", &lep_0_NOMINAL_eff_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_TightLLH_d0z0_v11_isolGradient, &b_lep_0_NOMINAL_eff_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_TightLLH_d0z0_v11_isolGradient);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_TightLLH_d0z0_v11_isolLoose", &lep_0_NOMINAL_eff_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_TightLLH_d0z0_v11_isolLoose, &b_lep_0_NOMINAL_eff_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_TightLLH_d0z0_v11_isolLoose);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_TightLLH_d0z0_v11_isolLooseTrackOnly", &lep_0_NOMINAL_eff_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_TightLLH_d0z0_v11_isolLooseTrackOnly, &b_lep_0_NOMINAL_eff_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_TightLLH_d0z0_v11_isolLooseTrackOnly);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_TightLLH_d0z0_v11_isolTight", &lep_0_NOMINAL_eff_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_TightLLH_d0z0_v11_isolTight, &b_lep_0_NOMINAL_eff_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_TightLLH_d0z0_v11_isolTight);
   fChain->SetBranchAddress("lep_0_NOMINAL_eff_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_TightLLH_d0z0_v11", &lep_0_NOMINAL_eff_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_TightLLH_d0z0_v11, &b_lep_0_NOMINAL_eff_MULTI_L_2015_e7_lhmedium_2016_e7_lhmedium_nod0_TightLLH_d0z0_v11);
   fChain->SetBranchAddress("tau_0_NOMINAL_TauEffSF_reco", &tau_0_NOMINAL_TauEffSF_reco, &b_tau_0_NOMINAL_TauEffSF_reco);
   fChain->SetBranchAddress("tau_0_TAUS_TRUEHADTAU_EFF_RECO_HIGHPT_1down_TauEffSF_reco", &tau_0_TAUS_TRUEHADTAU_EFF_RECO_HIGHPT_1down_TauEffSF_reco, &b_tau_0_TAUS_TRUEHADTAU_EFF_RECO_HIGHPT_1down_TauEffSF_reco);
   fChain->SetBranchAddress("tau_0_TAUS_TRUEHADTAU_EFF_RECO_HIGHPT_1up_TauEffSF_reco", &tau_0_TAUS_TRUEHADTAU_EFF_RECO_HIGHPT_1up_TauEffSF_reco, &b_tau_0_TAUS_TRUEHADTAU_EFF_RECO_HIGHPT_1up_TauEffSF_reco);
   fChain->SetBranchAddress("tau_0_TAUS_TRUEHADTAU_EFF_RECO_TOTAL_1down_TauEffSF_reco", &tau_0_TAUS_TRUEHADTAU_EFF_RECO_TOTAL_1down_TauEffSF_reco, &b_tau_0_TAUS_TRUEHADTAU_EFF_RECO_TOTAL_1down_TauEffSF_reco);
   fChain->SetBranchAddress("tau_0_TAUS_TRUEHADTAU_EFF_RECO_TOTAL_1up_TauEffSF_reco", &tau_0_TAUS_TRUEHADTAU_EFF_RECO_TOTAL_1up_TauEffSF_reco, &b_tau_0_TAUS_TRUEHADTAU_EFF_RECO_TOTAL_1up_TauEffSF_reco);
   fChain->SetBranchAddress("tau_0_NOMINAL_TauEffSF_selection", &tau_0_NOMINAL_TauEffSF_selection, &b_tau_0_NOMINAL_TauEffSF_selection);
   fChain->SetBranchAddress("tau_0_TAUS_TRUEELECTRON_EFF_ELEOLR_TOTAL_1down_TauEffSF_selection", &tau_0_TAUS_TRUEELECTRON_EFF_ELEOLR_TOTAL_1down_TauEffSF_selection, &b_tau_0_TAUS_TRUEELECTRON_EFF_ELEOLR_TOTAL_1down_TauEffSF_selection);
   fChain->SetBranchAddress("tau_0_TAUS_TRUEELECTRON_EFF_ELEOLR_TOTAL_1up_TauEffSF_selection", &tau_0_TAUS_TRUEELECTRON_EFF_ELEOLR_TOTAL_1up_TauEffSF_selection, &b_tau_0_TAUS_TRUEELECTRON_EFF_ELEOLR_TOTAL_1up_TauEffSF_selection);
   fChain->SetBranchAddress("tau_0_TAUS_TRUEHADTAU_EFF_ELEOLR_TOTAL_1down_TauEffSF_selection", &tau_0_TAUS_TRUEHADTAU_EFF_ELEOLR_TOTAL_1down_TauEffSF_selection, &b_tau_0_TAUS_TRUEHADTAU_EFF_ELEOLR_TOTAL_1down_TauEffSF_selection);
   fChain->SetBranchAddress("tau_0_TAUS_TRUEHADTAU_EFF_ELEOLR_TOTAL_1up_TauEffSF_selection", &tau_0_TAUS_TRUEHADTAU_EFF_ELEOLR_TOTAL_1up_TauEffSF_selection, &b_tau_0_TAUS_TRUEHADTAU_EFF_ELEOLR_TOTAL_1up_TauEffSF_selection);
   fChain->SetBranchAddress("tau_0_TAUS_TRUEHADTAU_EFF_RECO_HIGHPT_1down_TauEffSF_selection", &tau_0_TAUS_TRUEHADTAU_EFF_RECO_HIGHPT_1down_TauEffSF_selection, &b_tau_0_TAUS_TRUEHADTAU_EFF_RECO_HIGHPT_1down_TauEffSF_selection);
   fChain->SetBranchAddress("tau_0_TAUS_TRUEHADTAU_EFF_RECO_HIGHPT_1up_TauEffSF_selection", &tau_0_TAUS_TRUEHADTAU_EFF_RECO_HIGHPT_1up_TauEffSF_selection, &b_tau_0_TAUS_TRUEHADTAU_EFF_RECO_HIGHPT_1up_TauEffSF_selection);
   fChain->SetBranchAddress("tau_0_TAUS_TRUEHADTAU_EFF_RECO_TOTAL_1down_TauEffSF_selection", &tau_0_TAUS_TRUEHADTAU_EFF_RECO_TOTAL_1down_TauEffSF_selection, &b_tau_0_TAUS_TRUEHADTAU_EFF_RECO_TOTAL_1down_TauEffSF_selection);
   fChain->SetBranchAddress("tau_0_TAUS_TRUEHADTAU_EFF_RECO_TOTAL_1up_TauEffSF_selection", &tau_0_TAUS_TRUEHADTAU_EFF_RECO_TOTAL_1up_TauEffSF_selection, &b_tau_0_TAUS_TRUEHADTAU_EFF_RECO_TOTAL_1up_TauEffSF_selection);
   fChain->SetBranchAddress("tau_0_NOMINAL_TauEffSF_JetBDTloose", &tau_0_NOMINAL_TauEffSF_JetBDTloose, &b_tau_0_NOMINAL_TauEffSF_JetBDTloose);
   fChain->SetBranchAddress("tau_0_NOMINAL_TauEffSF_JetBDTmedium", &tau_0_NOMINAL_TauEffSF_JetBDTmedium, &b_tau_0_NOMINAL_TauEffSF_JetBDTmedium);
   fChain->SetBranchAddress("tau_0_NOMINAL_TauEffSF_JetBDTtight", &tau_0_NOMINAL_TauEffSF_JetBDTtight, &b_tau_0_NOMINAL_TauEffSF_JetBDTtight);
   fChain->SetBranchAddress("tau_0_TAUS_TRUEHADTAU_EFF_JETID_HIGHPT_1down_TauEffSF_JetBDTloose", &tau_0_TAUS_TRUEHADTAU_EFF_JETID_HIGHPT_1down_TauEffSF_JetBDTloose, &b_tau_0_TAUS_TRUEHADTAU_EFF_JETID_HIGHPT_1down_TauEffSF_JetBDTloose);
   fChain->SetBranchAddress("tau_0_TAUS_TRUEHADTAU_EFF_JETID_HIGHPT_1down_TauEffSF_JetBDTmedium", &tau_0_TAUS_TRUEHADTAU_EFF_JETID_HIGHPT_1down_TauEffSF_JetBDTmedium, &b_tau_0_TAUS_TRUEHADTAU_EFF_JETID_HIGHPT_1down_TauEffSF_JetBDTmedium);
   fChain->SetBranchAddress("tau_0_TAUS_TRUEHADTAU_EFF_JETID_HIGHPT_1down_TauEffSF_JetBDTtight", &tau_0_TAUS_TRUEHADTAU_EFF_JETID_HIGHPT_1down_TauEffSF_JetBDTtight, &b_tau_0_TAUS_TRUEHADTAU_EFF_JETID_HIGHPT_1down_TauEffSF_JetBDTtight);
   fChain->SetBranchAddress("tau_0_TAUS_TRUEHADTAU_EFF_JETID_HIGHPT_1up_TauEffSF_JetBDTloose", &tau_0_TAUS_TRUEHADTAU_EFF_JETID_HIGHPT_1up_TauEffSF_JetBDTloose, &b_tau_0_TAUS_TRUEHADTAU_EFF_JETID_HIGHPT_1up_TauEffSF_JetBDTloose);
   fChain->SetBranchAddress("tau_0_TAUS_TRUEHADTAU_EFF_JETID_HIGHPT_1up_TauEffSF_JetBDTmedium", &tau_0_TAUS_TRUEHADTAU_EFF_JETID_HIGHPT_1up_TauEffSF_JetBDTmedium, &b_tau_0_TAUS_TRUEHADTAU_EFF_JETID_HIGHPT_1up_TauEffSF_JetBDTmedium);
   fChain->SetBranchAddress("tau_0_TAUS_TRUEHADTAU_EFF_JETID_HIGHPT_1up_TauEffSF_JetBDTtight", &tau_0_TAUS_TRUEHADTAU_EFF_JETID_HIGHPT_1up_TauEffSF_JetBDTtight, &b_tau_0_TAUS_TRUEHADTAU_EFF_JETID_HIGHPT_1up_TauEffSF_JetBDTtight);
   fChain->SetBranchAddress("tau_0_TAUS_TRUEHADTAU_EFF_JETID_TOTAL_1down_TauEffSF_JetBDTloose", &tau_0_TAUS_TRUEHADTAU_EFF_JETID_TOTAL_1down_TauEffSF_JetBDTloose, &b_tau_0_TAUS_TRUEHADTAU_EFF_JETID_TOTAL_1down_TauEffSF_JetBDTloose);
   fChain->SetBranchAddress("tau_0_TAUS_TRUEHADTAU_EFF_JETID_TOTAL_1down_TauEffSF_JetBDTmedium", &tau_0_TAUS_TRUEHADTAU_EFF_JETID_TOTAL_1down_TauEffSF_JetBDTmedium, &b_tau_0_TAUS_TRUEHADTAU_EFF_JETID_TOTAL_1down_TauEffSF_JetBDTmedium);
   fChain->SetBranchAddress("tau_0_TAUS_TRUEHADTAU_EFF_JETID_TOTAL_1down_TauEffSF_JetBDTtight", &tau_0_TAUS_TRUEHADTAU_EFF_JETID_TOTAL_1down_TauEffSF_JetBDTtight, &b_tau_0_TAUS_TRUEHADTAU_EFF_JETID_TOTAL_1down_TauEffSF_JetBDTtight);
   fChain->SetBranchAddress("tau_0_TAUS_TRUEHADTAU_EFF_JETID_TOTAL_1up_TauEffSF_JetBDTloose", &tau_0_TAUS_TRUEHADTAU_EFF_JETID_TOTAL_1up_TauEffSF_JetBDTloose, &b_tau_0_TAUS_TRUEHADTAU_EFF_JETID_TOTAL_1up_TauEffSF_JetBDTloose);
   fChain->SetBranchAddress("tau_0_TAUS_TRUEHADTAU_EFF_JETID_TOTAL_1up_TauEffSF_JetBDTmedium", &tau_0_TAUS_TRUEHADTAU_EFF_JETID_TOTAL_1up_TauEffSF_JetBDTmedium, &b_tau_0_TAUS_TRUEHADTAU_EFF_JETID_TOTAL_1up_TauEffSF_JetBDTmedium);
   fChain->SetBranchAddress("tau_0_TAUS_TRUEHADTAU_EFF_JETID_TOTAL_1up_TauEffSF_JetBDTtight", &tau_0_TAUS_TRUEHADTAU_EFF_JETID_TOTAL_1up_TauEffSF_JetBDTtight, &b_tau_0_TAUS_TRUEHADTAU_EFF_JETID_TOTAL_1up_TauEffSF_JetBDTtight);
   fChain->SetBranchAddress("tau_0_NOMINAL_TauEffSF_LooseLlhEleOLR_electron", &tau_0_NOMINAL_TauEffSF_LooseLlhEleOLR_electron, &b_tau_0_NOMINAL_TauEffSF_LooseLlhEleOLR_electron);
   fChain->SetBranchAddress("tau_0_NOMINAL_TauEffSF_MediumLlhEleOLR_electron", &tau_0_NOMINAL_TauEffSF_MediumLlhEleOLR_electron, &b_tau_0_NOMINAL_TauEffSF_MediumLlhEleOLR_electron);
   fChain->SetBranchAddress("tau_0_NOMINAL_TauEffSF_TightLlhEleOLR_electron", &tau_0_NOMINAL_TauEffSF_TightLlhEleOLR_electron, &b_tau_0_NOMINAL_TauEffSF_TightLlhEleOLR_electron);
   fChain->SetBranchAddress("tau_0_NOMINAL_TauEffSF_VeryLooseLlhEleOLR_electron", &tau_0_NOMINAL_TauEffSF_VeryLooseLlhEleOLR_electron, &b_tau_0_NOMINAL_TauEffSF_VeryLooseLlhEleOLR_electron);
   fChain->SetBranchAddress("tau_0_TAUS_TRUEELECTRON_EFF_ELEOLR_TOTAL_1down_TauEffSF_LooseLlhEleOLR_electron", &tau_0_TAUS_TRUEELECTRON_EFF_ELEOLR_TOTAL_1down_TauEffSF_LooseLlhEleOLR_electron, &b_tau_0_TAUS_TRUEELECTRON_EFF_ELEOLR_TOTAL_1down_TauEffSF_LooseLlhEleOLR_electron);
   fChain->SetBranchAddress("tau_0_TAUS_TRUEELECTRON_EFF_ELEOLR_TOTAL_1down_TauEffSF_MediumLlhEleOLR_electron", &tau_0_TAUS_TRUEELECTRON_EFF_ELEOLR_TOTAL_1down_TauEffSF_MediumLlhEleOLR_electron, &b_tau_0_TAUS_TRUEELECTRON_EFF_ELEOLR_TOTAL_1down_TauEffSF_MediumLlhEleOLR_electron);
   fChain->SetBranchAddress("tau_0_TAUS_TRUEELECTRON_EFF_ELEOLR_TOTAL_1down_TauEffSF_TightLlhEleOLR_electron", &tau_0_TAUS_TRUEELECTRON_EFF_ELEOLR_TOTAL_1down_TauEffSF_TightLlhEleOLR_electron, &b_tau_0_TAUS_TRUEELECTRON_EFF_ELEOLR_TOTAL_1down_TauEffSF_TightLlhEleOLR_electron);
   fChain->SetBranchAddress("tau_0_TAUS_TRUEELECTRON_EFF_ELEOLR_TOTAL_1down_TauEffSF_VeryLooseLlhEleOLR_electron", &tau_0_TAUS_TRUEELECTRON_EFF_ELEOLR_TOTAL_1down_TauEffSF_VeryLooseLlhEleOLR_electron, &b_tau_0_TAUS_TRUEELECTRON_EFF_ELEOLR_TOTAL_1down_TauEffSF_VeryLooseLlhEleOLR_electron);
   fChain->SetBranchAddress("tau_0_TAUS_TRUEELECTRON_EFF_ELEOLR_TOTAL_1up_TauEffSF_LooseLlhEleOLR_electron", &tau_0_TAUS_TRUEELECTRON_EFF_ELEOLR_TOTAL_1up_TauEffSF_LooseLlhEleOLR_electron, &b_tau_0_TAUS_TRUEELECTRON_EFF_ELEOLR_TOTAL_1up_TauEffSF_LooseLlhEleOLR_electron);
   fChain->SetBranchAddress("tau_0_TAUS_TRUEELECTRON_EFF_ELEOLR_TOTAL_1up_TauEffSF_MediumLlhEleOLR_electron", &tau_0_TAUS_TRUEELECTRON_EFF_ELEOLR_TOTAL_1up_TauEffSF_MediumLlhEleOLR_electron, &b_tau_0_TAUS_TRUEELECTRON_EFF_ELEOLR_TOTAL_1up_TauEffSF_MediumLlhEleOLR_electron);
   fChain->SetBranchAddress("tau_0_TAUS_TRUEELECTRON_EFF_ELEOLR_TOTAL_1up_TauEffSF_TightLlhEleOLR_electron", &tau_0_TAUS_TRUEELECTRON_EFF_ELEOLR_TOTAL_1up_TauEffSF_TightLlhEleOLR_electron, &b_tau_0_TAUS_TRUEELECTRON_EFF_ELEOLR_TOTAL_1up_TauEffSF_TightLlhEleOLR_electron);
   fChain->SetBranchAddress("tau_0_TAUS_TRUEELECTRON_EFF_ELEOLR_TOTAL_1up_TauEffSF_VeryLooseLlhEleOLR_electron", &tau_0_TAUS_TRUEELECTRON_EFF_ELEOLR_TOTAL_1up_TauEffSF_VeryLooseLlhEleOLR_electron, &b_tau_0_TAUS_TRUEELECTRON_EFF_ELEOLR_TOTAL_1up_TauEffSF_VeryLooseLlhEleOLR_electron);
   fChain->SetBranchAddress("tau_0_NOMINAL_TauEffSF_HadTauEleOLR_tauhad", &tau_0_NOMINAL_TauEffSF_HadTauEleOLR_tauhad, &b_tau_0_NOMINAL_TauEffSF_HadTauEleOLR_tauhad);
   fChain->SetBranchAddress("tau_0_TAUS_TRUEHADTAU_EFF_ELEOLR_TOTAL_1down_TauEffSF_HadTauEleOLR_tauhad", &tau_0_TAUS_TRUEHADTAU_EFF_ELEOLR_TOTAL_1down_TauEffSF_HadTauEleOLR_tauhad, &b_tau_0_TAUS_TRUEHADTAU_EFF_ELEOLR_TOTAL_1down_TauEffSF_HadTauEleOLR_tauhad);
   fChain->SetBranchAddress("tau_0_TAUS_TRUEHADTAU_EFF_ELEOLR_TOTAL_1up_TauEffSF_HadTauEleOLR_tauhad", &tau_0_TAUS_TRUEHADTAU_EFF_ELEOLR_TOTAL_1up_TauEffSF_HadTauEleOLR_tauhad, &b_tau_0_TAUS_TRUEHADTAU_EFF_ELEOLR_TOTAL_1up_TauEffSF_HadTauEleOLR_tauhad);
   fChain->SetBranchAddress("jet_0_NOMINAL_effSF_MVX", &jet_0_NOMINAL_effSF_MVX, &b_jet_0_NOMINAL_effSF_MVX);
   fChain->SetBranchAddress("jet_0_NOMINAL_ineffSF_MVX", &jet_0_NOMINAL_ineffSF_MVX, &b_jet_0_NOMINAL_ineffSF_MVX);
   fChain->SetBranchAddress("jet_0_FT_EFF_Eigen_B_0_1down_effSF_MVX", &jet_0_FT_EFF_Eigen_B_0_1down_effSF_MVX, &b_jet_0_FT_EFF_Eigen_B_0_1down_effSF_MVX);
   fChain->SetBranchAddress("jet_0_FT_EFF_Eigen_B_0_1down_ineffSF_MVX", &jet_0_FT_EFF_Eigen_B_0_1down_ineffSF_MVX, &b_jet_0_FT_EFF_Eigen_B_0_1down_ineffSF_MVX);
   fChain->SetBranchAddress("jet_0_FT_EFF_Eigen_B_0_1up_effSF_MVX", &jet_0_FT_EFF_Eigen_B_0_1up_effSF_MVX, &b_jet_0_FT_EFF_Eigen_B_0_1up_effSF_MVX);
   fChain->SetBranchAddress("jet_0_FT_EFF_Eigen_B_0_1up_ineffSF_MVX", &jet_0_FT_EFF_Eigen_B_0_1up_ineffSF_MVX, &b_jet_0_FT_EFF_Eigen_B_0_1up_ineffSF_MVX);
   fChain->SetBranchAddress("jet_0_FT_EFF_Eigen_B_1_1down_effSF_MVX", &jet_0_FT_EFF_Eigen_B_1_1down_effSF_MVX, &b_jet_0_FT_EFF_Eigen_B_1_1down_effSF_MVX);
   fChain->SetBranchAddress("jet_0_FT_EFF_Eigen_B_1_1down_ineffSF_MVX", &jet_0_FT_EFF_Eigen_B_1_1down_ineffSF_MVX, &b_jet_0_FT_EFF_Eigen_B_1_1down_ineffSF_MVX);
   fChain->SetBranchAddress("jet_0_FT_EFF_Eigen_B_1_1up_effSF_MVX", &jet_0_FT_EFF_Eigen_B_1_1up_effSF_MVX, &b_jet_0_FT_EFF_Eigen_B_1_1up_effSF_MVX);
   fChain->SetBranchAddress("jet_0_FT_EFF_Eigen_B_1_1up_ineffSF_MVX", &jet_0_FT_EFF_Eigen_B_1_1up_ineffSF_MVX, &b_jet_0_FT_EFF_Eigen_B_1_1up_ineffSF_MVX);
   fChain->SetBranchAddress("jet_0_FT_EFF_Eigen_B_2_1down_effSF_MVX", &jet_0_FT_EFF_Eigen_B_2_1down_effSF_MVX, &b_jet_0_FT_EFF_Eigen_B_2_1down_effSF_MVX);
   fChain->SetBranchAddress("jet_0_FT_EFF_Eigen_B_2_1down_ineffSF_MVX", &jet_0_FT_EFF_Eigen_B_2_1down_ineffSF_MVX, &b_jet_0_FT_EFF_Eigen_B_2_1down_ineffSF_MVX);
   fChain->SetBranchAddress("jet_0_FT_EFF_Eigen_B_2_1up_effSF_MVX", &jet_0_FT_EFF_Eigen_B_2_1up_effSF_MVX, &b_jet_0_FT_EFF_Eigen_B_2_1up_effSF_MVX);
   fChain->SetBranchAddress("jet_0_FT_EFF_Eigen_B_2_1up_ineffSF_MVX", &jet_0_FT_EFF_Eigen_B_2_1up_ineffSF_MVX, &b_jet_0_FT_EFF_Eigen_B_2_1up_ineffSF_MVX);
   fChain->SetBranchAddress("jet_0_FT_EFF_Eigen_C_0_1down_effSF_MVX", &jet_0_FT_EFF_Eigen_C_0_1down_effSF_MVX, &b_jet_0_FT_EFF_Eigen_C_0_1down_effSF_MVX);
   fChain->SetBranchAddress("jet_0_FT_EFF_Eigen_C_0_1down_ineffSF_MVX", &jet_0_FT_EFF_Eigen_C_0_1down_ineffSF_MVX, &b_jet_0_FT_EFF_Eigen_C_0_1down_ineffSF_MVX);
   fChain->SetBranchAddress("jet_0_FT_EFF_Eigen_C_0_1up_effSF_MVX", &jet_0_FT_EFF_Eigen_C_0_1up_effSF_MVX, &b_jet_0_FT_EFF_Eigen_C_0_1up_effSF_MVX);
   fChain->SetBranchAddress("jet_0_FT_EFF_Eigen_C_0_1up_ineffSF_MVX", &jet_0_FT_EFF_Eigen_C_0_1up_ineffSF_MVX, &b_jet_0_FT_EFF_Eigen_C_0_1up_ineffSF_MVX);
   fChain->SetBranchAddress("jet_0_FT_EFF_Eigen_C_1_1down_effSF_MVX", &jet_0_FT_EFF_Eigen_C_1_1down_effSF_MVX, &b_jet_0_FT_EFF_Eigen_C_1_1down_effSF_MVX);
   fChain->SetBranchAddress("jet_0_FT_EFF_Eigen_C_1_1down_ineffSF_MVX", &jet_0_FT_EFF_Eigen_C_1_1down_ineffSF_MVX, &b_jet_0_FT_EFF_Eigen_C_1_1down_ineffSF_MVX);
   fChain->SetBranchAddress("jet_0_FT_EFF_Eigen_C_1_1up_effSF_MVX", &jet_0_FT_EFF_Eigen_C_1_1up_effSF_MVX, &b_jet_0_FT_EFF_Eigen_C_1_1up_effSF_MVX);
   fChain->SetBranchAddress("jet_0_FT_EFF_Eigen_C_1_1up_ineffSF_MVX", &jet_0_FT_EFF_Eigen_C_1_1up_ineffSF_MVX, &b_jet_0_FT_EFF_Eigen_C_1_1up_ineffSF_MVX);
   fChain->SetBranchAddress("jet_0_FT_EFF_Eigen_C_2_1down_effSF_MVX", &jet_0_FT_EFF_Eigen_C_2_1down_effSF_MVX, &b_jet_0_FT_EFF_Eigen_C_2_1down_effSF_MVX);
   fChain->SetBranchAddress("jet_0_FT_EFF_Eigen_C_2_1down_ineffSF_MVX", &jet_0_FT_EFF_Eigen_C_2_1down_ineffSF_MVX, &b_jet_0_FT_EFF_Eigen_C_2_1down_ineffSF_MVX);
   fChain->SetBranchAddress("jet_0_FT_EFF_Eigen_C_2_1up_effSF_MVX", &jet_0_FT_EFF_Eigen_C_2_1up_effSF_MVX, &b_jet_0_FT_EFF_Eigen_C_2_1up_effSF_MVX);
   fChain->SetBranchAddress("jet_0_FT_EFF_Eigen_C_2_1up_ineffSF_MVX", &jet_0_FT_EFF_Eigen_C_2_1up_ineffSF_MVX, &b_jet_0_FT_EFF_Eigen_C_2_1up_ineffSF_MVX);
   fChain->SetBranchAddress("jet_0_FT_EFF_Eigen_C_3_1down_effSF_MVX", &jet_0_FT_EFF_Eigen_C_3_1down_effSF_MVX, &b_jet_0_FT_EFF_Eigen_C_3_1down_effSF_MVX);
   fChain->SetBranchAddress("jet_0_FT_EFF_Eigen_C_3_1down_ineffSF_MVX", &jet_0_FT_EFF_Eigen_C_3_1down_ineffSF_MVX, &b_jet_0_FT_EFF_Eigen_C_3_1down_ineffSF_MVX);
   fChain->SetBranchAddress("jet_0_FT_EFF_Eigen_C_3_1up_effSF_MVX", &jet_0_FT_EFF_Eigen_C_3_1up_effSF_MVX, &b_jet_0_FT_EFF_Eigen_C_3_1up_effSF_MVX);
   fChain->SetBranchAddress("jet_0_FT_EFF_Eigen_C_3_1up_ineffSF_MVX", &jet_0_FT_EFF_Eigen_C_3_1up_ineffSF_MVX, &b_jet_0_FT_EFF_Eigen_C_3_1up_ineffSF_MVX);
   fChain->SetBranchAddress("jet_0_FT_EFF_Eigen_Light_0_1down_effSF_MVX", &jet_0_FT_EFF_Eigen_Light_0_1down_effSF_MVX, &b_jet_0_FT_EFF_Eigen_Light_0_1down_effSF_MVX);
   fChain->SetBranchAddress("jet_0_FT_EFF_Eigen_Light_0_1down_ineffSF_MVX", &jet_0_FT_EFF_Eigen_Light_0_1down_ineffSF_MVX, &b_jet_0_FT_EFF_Eigen_Light_0_1down_ineffSF_MVX);
   fChain->SetBranchAddress("jet_0_FT_EFF_Eigen_Light_0_1up_effSF_MVX", &jet_0_FT_EFF_Eigen_Light_0_1up_effSF_MVX, &b_jet_0_FT_EFF_Eigen_Light_0_1up_effSF_MVX);
   fChain->SetBranchAddress("jet_0_FT_EFF_Eigen_Light_0_1up_ineffSF_MVX", &jet_0_FT_EFF_Eigen_Light_0_1up_ineffSF_MVX, &b_jet_0_FT_EFF_Eigen_Light_0_1up_ineffSF_MVX);
   fChain->SetBranchAddress("jet_0_FT_EFF_Eigen_Light_1_1down_effSF_MVX", &jet_0_FT_EFF_Eigen_Light_1_1down_effSF_MVX, &b_jet_0_FT_EFF_Eigen_Light_1_1down_effSF_MVX);
   fChain->SetBranchAddress("jet_0_FT_EFF_Eigen_Light_1_1down_ineffSF_MVX", &jet_0_FT_EFF_Eigen_Light_1_1down_ineffSF_MVX, &b_jet_0_FT_EFF_Eigen_Light_1_1down_ineffSF_MVX);
   fChain->SetBranchAddress("jet_0_FT_EFF_Eigen_Light_1_1up_effSF_MVX", &jet_0_FT_EFF_Eigen_Light_1_1up_effSF_MVX, &b_jet_0_FT_EFF_Eigen_Light_1_1up_effSF_MVX);
   fChain->SetBranchAddress("jet_0_FT_EFF_Eigen_Light_1_1up_ineffSF_MVX", &jet_0_FT_EFF_Eigen_Light_1_1up_ineffSF_MVX, &b_jet_0_FT_EFF_Eigen_Light_1_1up_ineffSF_MVX);
   fChain->SetBranchAddress("jet_0_FT_EFF_Eigen_Light_2_1down_effSF_MVX", &jet_0_FT_EFF_Eigen_Light_2_1down_effSF_MVX, &b_jet_0_FT_EFF_Eigen_Light_2_1down_effSF_MVX);
   fChain->SetBranchAddress("jet_0_FT_EFF_Eigen_Light_2_1down_ineffSF_MVX", &jet_0_FT_EFF_Eigen_Light_2_1down_ineffSF_MVX, &b_jet_0_FT_EFF_Eigen_Light_2_1down_ineffSF_MVX);
   fChain->SetBranchAddress("jet_0_FT_EFF_Eigen_Light_2_1up_effSF_MVX", &jet_0_FT_EFF_Eigen_Light_2_1up_effSF_MVX, &b_jet_0_FT_EFF_Eigen_Light_2_1up_effSF_MVX);
   fChain->SetBranchAddress("jet_0_FT_EFF_Eigen_Light_2_1up_ineffSF_MVX", &jet_0_FT_EFF_Eigen_Light_2_1up_ineffSF_MVX, &b_jet_0_FT_EFF_Eigen_Light_2_1up_ineffSF_MVX);
   fChain->SetBranchAddress("jet_0_FT_EFF_Eigen_Light_3_1down_effSF_MVX", &jet_0_FT_EFF_Eigen_Light_3_1down_effSF_MVX, &b_jet_0_FT_EFF_Eigen_Light_3_1down_effSF_MVX);
   fChain->SetBranchAddress("jet_0_FT_EFF_Eigen_Light_3_1down_ineffSF_MVX", &jet_0_FT_EFF_Eigen_Light_3_1down_ineffSF_MVX, &b_jet_0_FT_EFF_Eigen_Light_3_1down_ineffSF_MVX);
   fChain->SetBranchAddress("jet_0_FT_EFF_Eigen_Light_3_1up_effSF_MVX", &jet_0_FT_EFF_Eigen_Light_3_1up_effSF_MVX, &b_jet_0_FT_EFF_Eigen_Light_3_1up_effSF_MVX);
   fChain->SetBranchAddress("jet_0_FT_EFF_Eigen_Light_3_1up_ineffSF_MVX", &jet_0_FT_EFF_Eigen_Light_3_1up_ineffSF_MVX, &b_jet_0_FT_EFF_Eigen_Light_3_1up_ineffSF_MVX);
   fChain->SetBranchAddress("jet_0_FT_EFF_Eigen_Light_4_1down_effSF_MVX", &jet_0_FT_EFF_Eigen_Light_4_1down_effSF_MVX, &b_jet_0_FT_EFF_Eigen_Light_4_1down_effSF_MVX);
   fChain->SetBranchAddress("jet_0_FT_EFF_Eigen_Light_4_1down_ineffSF_MVX", &jet_0_FT_EFF_Eigen_Light_4_1down_ineffSF_MVX, &b_jet_0_FT_EFF_Eigen_Light_4_1down_ineffSF_MVX);
   fChain->SetBranchAddress("jet_0_FT_EFF_Eigen_Light_4_1up_effSF_MVX", &jet_0_FT_EFF_Eigen_Light_4_1up_effSF_MVX, &b_jet_0_FT_EFF_Eigen_Light_4_1up_effSF_MVX);
   fChain->SetBranchAddress("jet_0_FT_EFF_Eigen_Light_4_1up_ineffSF_MVX", &jet_0_FT_EFF_Eigen_Light_4_1up_ineffSF_MVX, &b_jet_0_FT_EFF_Eigen_Light_4_1up_ineffSF_MVX);
   fChain->SetBranchAddress("jet_0_FT_EFF_extrapolation_1down_effSF_MVX", &jet_0_FT_EFF_extrapolation_1down_effSF_MVX, &b_jet_0_FT_EFF_extrapolation_1down_effSF_MVX);
   fChain->SetBranchAddress("jet_0_FT_EFF_extrapolation_1down_ineffSF_MVX", &jet_0_FT_EFF_extrapolation_1down_ineffSF_MVX, &b_jet_0_FT_EFF_extrapolation_1down_ineffSF_MVX);
   fChain->SetBranchAddress("jet_0_FT_EFF_extrapolation_1up_effSF_MVX", &jet_0_FT_EFF_extrapolation_1up_effSF_MVX, &b_jet_0_FT_EFF_extrapolation_1up_effSF_MVX);
   fChain->SetBranchAddress("jet_0_FT_EFF_extrapolation_1up_ineffSF_MVX", &jet_0_FT_EFF_extrapolation_1up_ineffSF_MVX, &b_jet_0_FT_EFF_extrapolation_1up_ineffSF_MVX);
   fChain->SetBranchAddress("jet_0_FT_EFF_extrapolation_from_charm_1down_effSF_MVX", &jet_0_FT_EFF_extrapolation_from_charm_1down_effSF_MVX, &b_jet_0_FT_EFF_extrapolation_from_charm_1down_effSF_MVX);
   fChain->SetBranchAddress("jet_0_FT_EFF_extrapolation_from_charm_1down_ineffSF_MVX", &jet_0_FT_EFF_extrapolation_from_charm_1down_ineffSF_MVX, &b_jet_0_FT_EFF_extrapolation_from_charm_1down_ineffSF_MVX);
   fChain->SetBranchAddress("jet_0_FT_EFF_extrapolation_from_charm_1up_effSF_MVX", &jet_0_FT_EFF_extrapolation_from_charm_1up_effSF_MVX, &b_jet_0_FT_EFF_extrapolation_from_charm_1up_effSF_MVX);
   fChain->SetBranchAddress("jet_0_FT_EFF_extrapolation_from_charm_1up_ineffSF_MVX", &jet_0_FT_EFF_extrapolation_from_charm_1up_ineffSF_MVX, &b_jet_0_FT_EFF_extrapolation_from_charm_1up_ineffSF_MVX);
   fChain->SetBranchAddress("jet_0_NOMINAL_effSF_JVT", &jet_0_NOMINAL_effSF_JVT, &b_jet_0_NOMINAL_effSF_JVT);
   fChain->SetBranchAddress("jet_NOMINAL_global_effSF_MVX", &jet_NOMINAL_global_effSF_MVX, &b_jet_NOMINAL_global_effSF_MVX);
   fChain->SetBranchAddress("jet_NOMINAL_global_ineffSF_MVX", &jet_NOMINAL_global_ineffSF_MVX, &b_jet_NOMINAL_global_ineffSF_MVX);
   fChain->SetBranchAddress("jet_FT_EFF_Eigen_B_0_1down_global_effSF_MVX", &jet_FT_EFF_Eigen_B_0_1down_global_effSF_MVX, &b_jet_FT_EFF_Eigen_B_0_1down_global_effSF_MVX);
   fChain->SetBranchAddress("jet_FT_EFF_Eigen_B_0_1down_global_ineffSF_MVX", &jet_FT_EFF_Eigen_B_0_1down_global_ineffSF_MVX, &b_jet_FT_EFF_Eigen_B_0_1down_global_ineffSF_MVX);
   fChain->SetBranchAddress("jet_FT_EFF_Eigen_B_0_1up_global_effSF_MVX", &jet_FT_EFF_Eigen_B_0_1up_global_effSF_MVX, &b_jet_FT_EFF_Eigen_B_0_1up_global_effSF_MVX);
   fChain->SetBranchAddress("jet_FT_EFF_Eigen_B_0_1up_global_ineffSF_MVX", &jet_FT_EFF_Eigen_B_0_1up_global_ineffSF_MVX, &b_jet_FT_EFF_Eigen_B_0_1up_global_ineffSF_MVX);
   fChain->SetBranchAddress("jet_FT_EFF_Eigen_B_1_1down_global_effSF_MVX", &jet_FT_EFF_Eigen_B_1_1down_global_effSF_MVX, &b_jet_FT_EFF_Eigen_B_1_1down_global_effSF_MVX);
   fChain->SetBranchAddress("jet_FT_EFF_Eigen_B_1_1down_global_ineffSF_MVX", &jet_FT_EFF_Eigen_B_1_1down_global_ineffSF_MVX, &b_jet_FT_EFF_Eigen_B_1_1down_global_ineffSF_MVX);
   fChain->SetBranchAddress("jet_FT_EFF_Eigen_B_1_1up_global_effSF_MVX", &jet_FT_EFF_Eigen_B_1_1up_global_effSF_MVX, &b_jet_FT_EFF_Eigen_B_1_1up_global_effSF_MVX);
   fChain->SetBranchAddress("jet_FT_EFF_Eigen_B_1_1up_global_ineffSF_MVX", &jet_FT_EFF_Eigen_B_1_1up_global_ineffSF_MVX, &b_jet_FT_EFF_Eigen_B_1_1up_global_ineffSF_MVX);
   fChain->SetBranchAddress("jet_FT_EFF_Eigen_B_2_1down_global_effSF_MVX", &jet_FT_EFF_Eigen_B_2_1down_global_effSF_MVX, &b_jet_FT_EFF_Eigen_B_2_1down_global_effSF_MVX);
   fChain->SetBranchAddress("jet_FT_EFF_Eigen_B_2_1down_global_ineffSF_MVX", &jet_FT_EFF_Eigen_B_2_1down_global_ineffSF_MVX, &b_jet_FT_EFF_Eigen_B_2_1down_global_ineffSF_MVX);
   fChain->SetBranchAddress("jet_FT_EFF_Eigen_B_2_1up_global_effSF_MVX", &jet_FT_EFF_Eigen_B_2_1up_global_effSF_MVX, &b_jet_FT_EFF_Eigen_B_2_1up_global_effSF_MVX);
   fChain->SetBranchAddress("jet_FT_EFF_Eigen_B_2_1up_global_ineffSF_MVX", &jet_FT_EFF_Eigen_B_2_1up_global_ineffSF_MVX, &b_jet_FT_EFF_Eigen_B_2_1up_global_ineffSF_MVX);
   fChain->SetBranchAddress("jet_FT_EFF_Eigen_C_0_1down_global_effSF_MVX", &jet_FT_EFF_Eigen_C_0_1down_global_effSF_MVX, &b_jet_FT_EFF_Eigen_C_0_1down_global_effSF_MVX);
   fChain->SetBranchAddress("jet_FT_EFF_Eigen_C_0_1down_global_ineffSF_MVX", &jet_FT_EFF_Eigen_C_0_1down_global_ineffSF_MVX, &b_jet_FT_EFF_Eigen_C_0_1down_global_ineffSF_MVX);
   fChain->SetBranchAddress("jet_FT_EFF_Eigen_C_0_1up_global_effSF_MVX", &jet_FT_EFF_Eigen_C_0_1up_global_effSF_MVX, &b_jet_FT_EFF_Eigen_C_0_1up_global_effSF_MVX);
   fChain->SetBranchAddress("jet_FT_EFF_Eigen_C_0_1up_global_ineffSF_MVX", &jet_FT_EFF_Eigen_C_0_1up_global_ineffSF_MVX, &b_jet_FT_EFF_Eigen_C_0_1up_global_ineffSF_MVX);
   fChain->SetBranchAddress("jet_FT_EFF_Eigen_C_1_1down_global_effSF_MVX", &jet_FT_EFF_Eigen_C_1_1down_global_effSF_MVX, &b_jet_FT_EFF_Eigen_C_1_1down_global_effSF_MVX);
   fChain->SetBranchAddress("jet_FT_EFF_Eigen_C_1_1down_global_ineffSF_MVX", &jet_FT_EFF_Eigen_C_1_1down_global_ineffSF_MVX, &b_jet_FT_EFF_Eigen_C_1_1down_global_ineffSF_MVX);
   fChain->SetBranchAddress("jet_FT_EFF_Eigen_C_1_1up_global_effSF_MVX", &jet_FT_EFF_Eigen_C_1_1up_global_effSF_MVX, &b_jet_FT_EFF_Eigen_C_1_1up_global_effSF_MVX);
   fChain->SetBranchAddress("jet_FT_EFF_Eigen_C_1_1up_global_ineffSF_MVX", &jet_FT_EFF_Eigen_C_1_1up_global_ineffSF_MVX, &b_jet_FT_EFF_Eigen_C_1_1up_global_ineffSF_MVX);
   fChain->SetBranchAddress("jet_FT_EFF_Eigen_C_2_1down_global_effSF_MVX", &jet_FT_EFF_Eigen_C_2_1down_global_effSF_MVX, &b_jet_FT_EFF_Eigen_C_2_1down_global_effSF_MVX);
   fChain->SetBranchAddress("jet_FT_EFF_Eigen_C_2_1down_global_ineffSF_MVX", &jet_FT_EFF_Eigen_C_2_1down_global_ineffSF_MVX, &b_jet_FT_EFF_Eigen_C_2_1down_global_ineffSF_MVX);
   fChain->SetBranchAddress("jet_FT_EFF_Eigen_C_2_1up_global_effSF_MVX", &jet_FT_EFF_Eigen_C_2_1up_global_effSF_MVX, &b_jet_FT_EFF_Eigen_C_2_1up_global_effSF_MVX);
   fChain->SetBranchAddress("jet_FT_EFF_Eigen_C_2_1up_global_ineffSF_MVX", &jet_FT_EFF_Eigen_C_2_1up_global_ineffSF_MVX, &b_jet_FT_EFF_Eigen_C_2_1up_global_ineffSF_MVX);
   fChain->SetBranchAddress("jet_FT_EFF_Eigen_C_3_1down_global_effSF_MVX", &jet_FT_EFF_Eigen_C_3_1down_global_effSF_MVX, &b_jet_FT_EFF_Eigen_C_3_1down_global_effSF_MVX);
   fChain->SetBranchAddress("jet_FT_EFF_Eigen_C_3_1down_global_ineffSF_MVX", &jet_FT_EFF_Eigen_C_3_1down_global_ineffSF_MVX, &b_jet_FT_EFF_Eigen_C_3_1down_global_ineffSF_MVX);
   fChain->SetBranchAddress("jet_FT_EFF_Eigen_C_3_1up_global_effSF_MVX", &jet_FT_EFF_Eigen_C_3_1up_global_effSF_MVX, &b_jet_FT_EFF_Eigen_C_3_1up_global_effSF_MVX);
   fChain->SetBranchAddress("jet_FT_EFF_Eigen_C_3_1up_global_ineffSF_MVX", &jet_FT_EFF_Eigen_C_3_1up_global_ineffSF_MVX, &b_jet_FT_EFF_Eigen_C_3_1up_global_ineffSF_MVX);
   fChain->SetBranchAddress("jet_FT_EFF_Eigen_Light_0_1down_global_effSF_MVX", &jet_FT_EFF_Eigen_Light_0_1down_global_effSF_MVX, &b_jet_FT_EFF_Eigen_Light_0_1down_global_effSF_MVX);
   fChain->SetBranchAddress("jet_FT_EFF_Eigen_Light_0_1down_global_ineffSF_MVX", &jet_FT_EFF_Eigen_Light_0_1down_global_ineffSF_MVX, &b_jet_FT_EFF_Eigen_Light_0_1down_global_ineffSF_MVX);
   fChain->SetBranchAddress("jet_FT_EFF_Eigen_Light_0_1up_global_effSF_MVX", &jet_FT_EFF_Eigen_Light_0_1up_global_effSF_MVX, &b_jet_FT_EFF_Eigen_Light_0_1up_global_effSF_MVX);
   fChain->SetBranchAddress("jet_FT_EFF_Eigen_Light_0_1up_global_ineffSF_MVX", &jet_FT_EFF_Eigen_Light_0_1up_global_ineffSF_MVX, &b_jet_FT_EFF_Eigen_Light_0_1up_global_ineffSF_MVX);
   fChain->SetBranchAddress("jet_FT_EFF_Eigen_Light_1_1down_global_effSF_MVX", &jet_FT_EFF_Eigen_Light_1_1down_global_effSF_MVX, &b_jet_FT_EFF_Eigen_Light_1_1down_global_effSF_MVX);
   fChain->SetBranchAddress("jet_FT_EFF_Eigen_Light_1_1down_global_ineffSF_MVX", &jet_FT_EFF_Eigen_Light_1_1down_global_ineffSF_MVX, &b_jet_FT_EFF_Eigen_Light_1_1down_global_ineffSF_MVX);
   fChain->SetBranchAddress("jet_FT_EFF_Eigen_Light_1_1up_global_effSF_MVX", &jet_FT_EFF_Eigen_Light_1_1up_global_effSF_MVX, &b_jet_FT_EFF_Eigen_Light_1_1up_global_effSF_MVX);
   fChain->SetBranchAddress("jet_FT_EFF_Eigen_Light_1_1up_global_ineffSF_MVX", &jet_FT_EFF_Eigen_Light_1_1up_global_ineffSF_MVX, &b_jet_FT_EFF_Eigen_Light_1_1up_global_ineffSF_MVX);
   fChain->SetBranchAddress("jet_FT_EFF_Eigen_Light_2_1down_global_effSF_MVX", &jet_FT_EFF_Eigen_Light_2_1down_global_effSF_MVX, &b_jet_FT_EFF_Eigen_Light_2_1down_global_effSF_MVX);
   fChain->SetBranchAddress("jet_FT_EFF_Eigen_Light_2_1down_global_ineffSF_MVX", &jet_FT_EFF_Eigen_Light_2_1down_global_ineffSF_MVX, &b_jet_FT_EFF_Eigen_Light_2_1down_global_ineffSF_MVX);
   fChain->SetBranchAddress("jet_FT_EFF_Eigen_Light_2_1up_global_effSF_MVX", &jet_FT_EFF_Eigen_Light_2_1up_global_effSF_MVX, &b_jet_FT_EFF_Eigen_Light_2_1up_global_effSF_MVX);
   fChain->SetBranchAddress("jet_FT_EFF_Eigen_Light_2_1up_global_ineffSF_MVX", &jet_FT_EFF_Eigen_Light_2_1up_global_ineffSF_MVX, &b_jet_FT_EFF_Eigen_Light_2_1up_global_ineffSF_MVX);
   fChain->SetBranchAddress("jet_FT_EFF_Eigen_Light_3_1down_global_effSF_MVX", &jet_FT_EFF_Eigen_Light_3_1down_global_effSF_MVX, &b_jet_FT_EFF_Eigen_Light_3_1down_global_effSF_MVX);
   fChain->SetBranchAddress("jet_FT_EFF_Eigen_Light_3_1down_global_ineffSF_MVX", &jet_FT_EFF_Eigen_Light_3_1down_global_ineffSF_MVX, &b_jet_FT_EFF_Eigen_Light_3_1down_global_ineffSF_MVX);
   fChain->SetBranchAddress("jet_FT_EFF_Eigen_Light_3_1up_global_effSF_MVX", &jet_FT_EFF_Eigen_Light_3_1up_global_effSF_MVX, &b_jet_FT_EFF_Eigen_Light_3_1up_global_effSF_MVX);
   fChain->SetBranchAddress("jet_FT_EFF_Eigen_Light_3_1up_global_ineffSF_MVX", &jet_FT_EFF_Eigen_Light_3_1up_global_ineffSF_MVX, &b_jet_FT_EFF_Eigen_Light_3_1up_global_ineffSF_MVX);
   fChain->SetBranchAddress("jet_FT_EFF_Eigen_Light_4_1down_global_effSF_MVX", &jet_FT_EFF_Eigen_Light_4_1down_global_effSF_MVX, &b_jet_FT_EFF_Eigen_Light_4_1down_global_effSF_MVX);
   fChain->SetBranchAddress("jet_FT_EFF_Eigen_Light_4_1down_global_ineffSF_MVX", &jet_FT_EFF_Eigen_Light_4_1down_global_ineffSF_MVX, &b_jet_FT_EFF_Eigen_Light_4_1down_global_ineffSF_MVX);
   fChain->SetBranchAddress("jet_FT_EFF_Eigen_Light_4_1up_global_effSF_MVX", &jet_FT_EFF_Eigen_Light_4_1up_global_effSF_MVX, &b_jet_FT_EFF_Eigen_Light_4_1up_global_effSF_MVX);
   fChain->SetBranchAddress("jet_FT_EFF_Eigen_Light_4_1up_global_ineffSF_MVX", &jet_FT_EFF_Eigen_Light_4_1up_global_ineffSF_MVX, &b_jet_FT_EFF_Eigen_Light_4_1up_global_ineffSF_MVX);
   fChain->SetBranchAddress("jet_FT_EFF_extrapolation_1down_global_effSF_MVX", &jet_FT_EFF_extrapolation_1down_global_effSF_MVX, &b_jet_FT_EFF_extrapolation_1down_global_effSF_MVX);
   fChain->SetBranchAddress("jet_FT_EFF_extrapolation_1down_global_ineffSF_MVX", &jet_FT_EFF_extrapolation_1down_global_ineffSF_MVX, &b_jet_FT_EFF_extrapolation_1down_global_ineffSF_MVX);
   fChain->SetBranchAddress("jet_FT_EFF_extrapolation_1up_global_effSF_MVX", &jet_FT_EFF_extrapolation_1up_global_effSF_MVX, &b_jet_FT_EFF_extrapolation_1up_global_effSF_MVX);
   fChain->SetBranchAddress("jet_FT_EFF_extrapolation_1up_global_ineffSF_MVX", &jet_FT_EFF_extrapolation_1up_global_ineffSF_MVX, &b_jet_FT_EFF_extrapolation_1up_global_ineffSF_MVX);
   fChain->SetBranchAddress("jet_FT_EFF_extrapolation_from_charm_1down_global_effSF_MVX", &jet_FT_EFF_extrapolation_from_charm_1down_global_effSF_MVX, &b_jet_FT_EFF_extrapolation_from_charm_1down_global_effSF_MVX);
   fChain->SetBranchAddress("jet_FT_EFF_extrapolation_from_charm_1down_global_ineffSF_MVX", &jet_FT_EFF_extrapolation_from_charm_1down_global_ineffSF_MVX, &b_jet_FT_EFF_extrapolation_from_charm_1down_global_ineffSF_MVX);
   fChain->SetBranchAddress("jet_FT_EFF_extrapolation_from_charm_1up_global_effSF_MVX", &jet_FT_EFF_extrapolation_from_charm_1up_global_effSF_MVX, &b_jet_FT_EFF_extrapolation_from_charm_1up_global_effSF_MVX);
   fChain->SetBranchAddress("jet_FT_EFF_extrapolation_from_charm_1up_global_ineffSF_MVX", &jet_FT_EFF_extrapolation_from_charm_1up_global_ineffSF_MVX, &b_jet_FT_EFF_extrapolation_from_charm_1up_global_ineffSF_MVX);
   fChain->SetBranchAddress("jet_NOMINAL_global_effSF_JVT", &jet_NOMINAL_global_effSF_JVT, &b_jet_NOMINAL_global_effSF_JVT);
   fChain->SetBranchAddress("NOMINAL_pileup_combined_weight", &NOMINAL_pileup_combined_weight, &b_NOMINAL_pileup_combined_weight);
   fChain->SetBranchAddress("PRW_DATASF_1down_pileup_combined_weight", &PRW_DATASF_1down_pileup_combined_weight, &b_PRW_DATASF_1down_pileup_combined_weight);
   fChain->SetBranchAddress("PRW_DATASF_1up_pileup_combined_weight", &PRW_DATASF_1up_pileup_combined_weight, &b_PRW_DATASF_1up_pileup_combined_weight);
   fChain->SetBranchAddress("HLT_e120_lhloose", &HLT_e120_lhloose, &b_HLT_e120_lhloose);
   fChain->SetBranchAddress("HLT_e120_lhloose_nod0", &HLT_e120_lhloose_nod0, &b_HLT_e120_lhloose_nod0);
   fChain->SetBranchAddress("HLT_e140_lhloose", &HLT_e140_lhloose, &b_HLT_e140_lhloose);
   fChain->SetBranchAddress("HLT_e140_lhloose_nod0", &HLT_e140_lhloose_nod0, &b_HLT_e140_lhloose_nod0);
   fChain->SetBranchAddress("HLT_e17_lhloose_nod0_L1EM15", &HLT_e17_lhloose_nod0_L1EM15, &b_HLT_e17_lhloose_nod0_L1EM15);
   fChain->SetBranchAddress("HLT_e24_lhmedium_iloose_L1EM18VH", &HLT_e24_lhmedium_iloose_L1EM18VH, &b_HLT_e24_lhmedium_iloose_L1EM18VH);
   fChain->SetBranchAddress("HLT_e24_lhmedium_iloose_L1EM20VH", &HLT_e24_lhmedium_iloose_L1EM20VH, &b_HLT_e24_lhmedium_iloose_L1EM20VH);
   fChain->SetBranchAddress("HLT_e24_lhtight_iloose", &HLT_e24_lhtight_iloose, &b_HLT_e24_lhtight_iloose);
   fChain->SetBranchAddress("HLT_e26_lhtight_iloose", &HLT_e26_lhtight_iloose, &b_HLT_e26_lhtight_iloose);
   fChain->SetBranchAddress("HLT_e60_lhmedium", &HLT_e60_lhmedium, &b_HLT_e60_lhmedium);
   fChain->SetBranchAddress("HLT_mu24_imedium", &HLT_mu24_imedium, &b_HLT_mu24_imedium);
   fChain->SetBranchAddress("HLT_mu26_imedium", &HLT_mu26_imedium, &b_HLT_mu26_imedium);
   fChain->SetBranchAddress("HLT_mu26_ivarmedium", &HLT_mu26_ivarmedium, &b_HLT_mu26_ivarmedium);
   fChain->SetBranchAddress("HLT_mu50", &HLT_mu50, &b_HLT_mu50);
   fChain->SetBranchAddress("HLT_tau125_medium1_tracktwo_resurrected", &HLT_tau125_medium1_tracktwo_resurrected, &b_HLT_tau125_medium1_tracktwo_resurrected);
   fChain->SetBranchAddress("HLT_tau160_medium1_tracktwo_resurrected", &HLT_tau160_medium1_tracktwo_resurrected, &b_HLT_tau160_medium1_tracktwo_resurrected);
   fChain->SetBranchAddress("HLT_tau25_idperf_track_resurrected", &HLT_tau25_idperf_track_resurrected, &b_HLT_tau25_idperf_track_resurrected);
   fChain->SetBranchAddress("HLT_tau25_idperf_tracktwo_resurrected", &HLT_tau25_idperf_tracktwo_resurrected, &b_HLT_tau25_idperf_tracktwo_resurrected);
   fChain->SetBranchAddress("HLT_tau25_loose1_ptonly_resurrected", &HLT_tau25_loose1_ptonly_resurrected, &b_HLT_tau25_loose1_ptonly_resurrected);
   fChain->SetBranchAddress("HLT_tau25_loose1_tracktwo_resurrected", &HLT_tau25_loose1_tracktwo_resurrected, &b_HLT_tau25_loose1_tracktwo_resurrected);
   fChain->SetBranchAddress("HLT_tau25_medium1_mvonly_resurrected", &HLT_tau25_medium1_mvonly_resurrected, &b_HLT_tau25_medium1_mvonly_resurrected);
   fChain->SetBranchAddress("HLT_tau25_medium1_ptonly_resurrected", &HLT_tau25_medium1_ptonly_resurrected, &b_HLT_tau25_medium1_ptonly_resurrected);
   fChain->SetBranchAddress("HLT_tau25_medium1_track_resurrected", &HLT_tau25_medium1_track_resurrected, &b_HLT_tau25_medium1_track_resurrected);
   fChain->SetBranchAddress("HLT_tau25_medium1_tracktwo_resurrected", &HLT_tau25_medium1_tracktwo_resurrected, &b_HLT_tau25_medium1_tracktwo_resurrected);
   fChain->SetBranchAddress("HLT_tau25_medium1_tracktwo_L1TAU12_resurrected", &HLT_tau25_medium1_tracktwo_L1TAU12_resurrected, &b_HLT_tau25_medium1_tracktwo_L1TAU12_resurrected);
   fChain->SetBranchAddress("HLT_tau25_medium1_tracktwo_L1TAU12IL_resurrected", &HLT_tau25_medium1_tracktwo_L1TAU12IL_resurrected, &b_HLT_tau25_medium1_tracktwo_L1TAU12IL_resurrected);
   fChain->SetBranchAddress("HLT_tau25_medium1_tracktwo_L1TAU12IT_resurrected", &HLT_tau25_medium1_tracktwo_L1TAU12IT_resurrected, &b_HLT_tau25_medium1_tracktwo_L1TAU12IT_resurrected);
   fChain->SetBranchAddress("HLT_tau25_perf_ptonly_resurrected", &HLT_tau25_perf_ptonly_resurrected, &b_HLT_tau25_perf_ptonly_resurrected);
   fChain->SetBranchAddress("HLT_tau25_perf_track_resurrected", &HLT_tau25_perf_track_resurrected, &b_HLT_tau25_perf_track_resurrected);
   fChain->SetBranchAddress("HLT_tau25_perf_tracktwo_resurrected", &HLT_tau25_perf_tracktwo_resurrected, &b_HLT_tau25_perf_tracktwo_resurrected);
   fChain->SetBranchAddress("HLT_tau25_tight1_ptonly_resurrected", &HLT_tau25_tight1_ptonly_resurrected, &b_HLT_tau25_tight1_ptonly_resurrected);
   fChain->SetBranchAddress("HLT_tau25_tight1_tracktwo_resurrected", &HLT_tau25_tight1_tracktwo_resurrected, &b_HLT_tau25_tight1_tracktwo_resurrected);
   fChain->SetBranchAddress("HLT_tau35_medium1_tracktwo_resurrected", &HLT_tau35_medium1_tracktwo_resurrected, &b_HLT_tau35_medium1_tracktwo_resurrected);
   fChain->SetBranchAddress("HLT_tau50_medium1_tracktwo_L1TAU12_resurrected", &HLT_tau50_medium1_tracktwo_L1TAU12_resurrected, &b_HLT_tau50_medium1_tracktwo_L1TAU12_resurrected);
   fChain->SetBranchAddress("HLT_tau80_medium1_tracktwo_resurrected", &HLT_tau80_medium1_tracktwo_resurrected, &b_HLT_tau80_medium1_tracktwo_resurrected);
   fChain->SetBranchAddress("HLT_tau80_medium1_tracktwo_L1TAU60_resurrected", &HLT_tau80_medium1_tracktwo_L1TAU60_resurrected, &b_HLT_tau80_medium1_tracktwo_L1TAU60_resurrected);
   fChain->SetBranchAddress("L1_TAU12_resurrected", &L1_TAU12_resurrected, &b_L1_TAU12_resurrected);
   fChain->SetBranchAddress("L1_TAU12IM_resurrected", &L1_TAU12IM_resurrected, &b_L1_TAU12IM_resurrected);
   fChain->SetBranchAddress("L1_TAU20_resurrected", &L1_TAU20_resurrected, &b_L1_TAU20_resurrected);
   fChain->SetBranchAddress("L1_TAU20IM_resurrected", &L1_TAU20IM_resurrected, &b_L1_TAU20IM_resurrected);
   fChain->SetBranchAddress("tau_0_id_centFracCorrected", &tau_0_id_centFracCorrected, &b_tau_0_id_centFracCorrected);
   fChain->SetBranchAddress("tau_0_id_etOverPtLeadTrkCorrected", &tau_0_id_etOverPtLeadTrkCorrected, &b_tau_0_id_etOverPtLeadTrkCorrected);
   fChain->SetBranchAddress("tau_0_id_innerTrkAvgDistCorrected", &tau_0_id_innerTrkAvgDistCorrected, &b_tau_0_id_innerTrkAvgDistCorrected);
   fChain->SetBranchAddress("tau_0_id_ipSigLeadTrkCorrected", &tau_0_id_ipSigLeadTrkCorrected, &b_tau_0_id_ipSigLeadTrkCorrected);
   fChain->SetBranchAddress("tau_0_id_SumPtTrkFracCorrected", &tau_0_id_SumPtTrkFracCorrected, &b_tau_0_id_SumPtTrkFracCorrected);
   fChain->SetBranchAddress("tau_0_id_ptRatioEflowApproxCorrected", &tau_0_id_ptRatioEflowApproxCorrected, &b_tau_0_id_ptRatioEflowApproxCorrected);
   fChain->SetBranchAddress("tau_0_id_mEflowApproxCorrected", &tau_0_id_mEflowApproxCorrected, &b_tau_0_id_mEflowApproxCorrected);
   fChain->SetBranchAddress("tau_0_id_ChPiEMEOverCaloEMECorrected", &tau_0_id_ChPiEMEOverCaloEMECorrected, &b_tau_0_id_ChPiEMEOverCaloEMECorrected);
   fChain->SetBranchAddress("tau_0_id_EMPOverTrkSysPCorrected", &tau_0_id_EMPOverTrkSysPCorrected, &b_tau_0_id_EMPOverTrkSysPCorrected);
   fChain->SetBranchAddress("tau_0_id_dRmaxCorrected", &tau_0_id_dRmaxCorrected, &b_tau_0_id_dRmaxCorrected);
   fChain->SetBranchAddress("tau_0_id_trFlightPathSigCorrected", &tau_0_id_trFlightPathSigCorrected, &b_tau_0_id_trFlightPathSigCorrected);
   fChain->SetBranchAddress("tau_0_id_massTrkSysCorrected", &tau_0_id_massTrkSysCorrected, &b_tau_0_id_massTrkSysCorrected);
   fChain->SetBranchAddress("tau_0_id_centFrac", &tau_0_id_centFrac, &b_tau_0_id_centFrac);
   fChain->SetBranchAddress("tau_0_id_etOverPtLeadTrk", &tau_0_id_etOverPtLeadTrk, &b_tau_0_id_etOverPtLeadTrk);
   fChain->SetBranchAddress("tau_0_id_innerTrkAvgDist", &tau_0_id_innerTrkAvgDist, &b_tau_0_id_innerTrkAvgDist);
   fChain->SetBranchAddress("tau_0_id_ipSigLeadTrk", &tau_0_id_ipSigLeadTrk, &b_tau_0_id_ipSigLeadTrk);
   fChain->SetBranchAddress("tau_0_id_SumPtTrkFrac", &tau_0_id_SumPtTrkFrac, &b_tau_0_id_SumPtTrkFrac);
   fChain->SetBranchAddress("tau_0_id_ptRatioEflowApprox", &tau_0_id_ptRatioEflowApprox, &b_tau_0_id_ptRatioEflowApprox);
   fChain->SetBranchAddress("tau_0_id_mEflowApprox", &tau_0_id_mEflowApprox, &b_tau_0_id_mEflowApprox);
   fChain->SetBranchAddress("tau_0_id_ChPiEMEOverCaloEME", &tau_0_id_ChPiEMEOverCaloEME, &b_tau_0_id_ChPiEMEOverCaloEME);
   fChain->SetBranchAddress("tau_0_id_EMPOverTrkSysP", &tau_0_id_EMPOverTrkSysP, &b_tau_0_id_EMPOverTrkSysP);
   fChain->SetBranchAddress("tau_0_id_dRmax", &tau_0_id_dRmax, &b_tau_0_id_dRmax);
   fChain->SetBranchAddress("tau_0_id_trFlightPathSig", &tau_0_id_trFlightPathSig, &b_tau_0_id_trFlightPathSig);
   fChain->SetBranchAddress("tau_0_id_massTrkSys", &tau_0_id_massTrkSys, &b_tau_0_id_massTrkSys);
   fChain->SetBranchAddress("tau_0_truth", &tau_0_truth, &b_tau_0_truth);
   fChain->SetBranchAddress("tau_0_truth_eta", &tau_0_truth_eta, &b_tau_0_truth_eta);
   fChain->SetBranchAddress("tau_0_truth_phi", &tau_0_truth_phi, &b_tau_0_truth_phi);
   fChain->SetBranchAddress("tau_0_truth_pt", &tau_0_truth_pt, &b_tau_0_truth_pt);
   fChain->SetBranchAddress("tau_0_truth_et", &tau_0_truth_et, &b_tau_0_truth_et);
   fChain->SetBranchAddress("tau_0_truth_m", &tau_0_truth_m, &b_tau_0_truth_m);
   fChain->SetBranchAddress("tau_0_truth_q", &tau_0_truth_q, &b_tau_0_truth_q);
   fChain->SetBranchAddress("tau_0_truth_pdgId", &tau_0_truth_pdgId, &b_tau_0_truth_pdgId);
   fChain->SetBranchAddress("tau_0_truth_mother_pdgId", &tau_0_truth_mother_pdgId, &b_tau_0_truth_mother_pdgId);
   fChain->SetBranchAddress("tau_0_truth_origin", &tau_0_truth_origin, &b_tau_0_truth_origin);
   fChain->SetBranchAddress("tau_0_truth_type", &tau_0_truth_type, &b_tau_0_truth_type);
   fChain->SetBranchAddress("tau_0_truth_isTau", &tau_0_truth_isTau, &b_tau_0_truth_isTau);
   fChain->SetBranchAddress("tau_0_truth_isHadTau", &tau_0_truth_isHadTau, &b_tau_0_truth_isHadTau);
   fChain->SetBranchAddress("tau_0_truth_isEle", &tau_0_truth_isEle, &b_tau_0_truth_isEle);
   fChain->SetBranchAddress("tau_0_truth_isMuon", &tau_0_truth_isMuon, &b_tau_0_truth_isMuon);
   fChain->SetBranchAddress("tau_0_truth_isJet", &tau_0_truth_isJet, &b_tau_0_truth_isJet);
   fChain->SetBranchAddress("tau_0_truth_classifierParticleType", &tau_0_truth_classifierParticleType, &b_tau_0_truth_classifierParticleType);
   fChain->SetBranchAddress("tau_0_truth_classifierParticleOrigin", &tau_0_truth_classifierParticleOrigin, &b_tau_0_truth_classifierParticleOrigin);
   fChain->SetBranchAddress("tau_0_truth_pt_vis", &tau_0_truth_pt_vis, &b_tau_0_truth_pt_vis);
   fChain->SetBranchAddress("tau_0_truth_eta_vis", &tau_0_truth_eta_vis, &b_tau_0_truth_eta_vis);
   fChain->SetBranchAddress("tau_0_truth_phi_vis", &tau_0_truth_phi_vis, &b_tau_0_truth_phi_vis);
   fChain->SetBranchAddress("tau_0_truth_m_vis", &tau_0_truth_m_vis, &b_tau_0_truth_m_vis);
   fChain->SetBranchAddress("tau_0_truth_decay_mode", &tau_0_truth_decay_mode, &b_tau_0_truth_decay_mode);
   fChain->SetBranchAddress("tau_0_truth_n_charged", &tau_0_truth_n_charged, &b_tau_0_truth_n_charged);
   fChain->SetBranchAddress("tau_0_truth_n_charged_pion", &tau_0_truth_n_charged_pion, &b_tau_0_truth_n_charged_pion);
   fChain->SetBranchAddress("tau_0_truth_n_neutral", &tau_0_truth_n_neutral, &b_tau_0_truth_n_neutral);
   fChain->SetBranchAddress("tau_0_truth_n_neutral_pion", &tau_0_truth_n_neutral_pion, &b_tau_0_truth_n_neutral_pion);
   fChain->SetBranchAddress("lep_0_matched", &lep_0_matched, &b_lep_0_matched);
   fChain->SetBranchAddress("lep_0_matched_eta", &lep_0_matched_eta, &b_lep_0_matched_eta);
   fChain->SetBranchAddress("lep_0_matched_phi", &lep_0_matched_phi, &b_lep_0_matched_phi);
   fChain->SetBranchAddress("lep_0_matched_pt", &lep_0_matched_pt, &b_lep_0_matched_pt);
   fChain->SetBranchAddress("lep_0_matched_et", &lep_0_matched_et, &b_lep_0_matched_et);
   fChain->SetBranchAddress("lep_0_matched_m", &lep_0_matched_m, &b_lep_0_matched_m);
   fChain->SetBranchAddress("lep_0_matched_q", &lep_0_matched_q, &b_lep_0_matched_q);
   fChain->SetBranchAddress("lep_0_matched_pdgId", &lep_0_matched_pdgId, &b_lep_0_matched_pdgId);
   fChain->SetBranchAddress("lep_0_matched_mother_pdgId", &lep_0_matched_mother_pdgId, &b_lep_0_matched_mother_pdgId);
   fChain->SetBranchAddress("lep_0_matched_isHad", &lep_0_matched_isHad, &b_lep_0_matched_isHad);
   fChain->SetBranchAddress("lep_0_matched_origin", &lep_0_matched_origin, &b_lep_0_matched_origin);
   fChain->SetBranchAddress("lep_0_matched_type", &lep_0_matched_type, &b_lep_0_matched_type);
   fChain->SetBranchAddress("muTrigMatch_0_HLT_mu24_imedium", &muTrigMatch_0_HLT_mu24_imedium, &b_muTrigMatch_0_HLT_mu24_imedium);
   fChain->SetBranchAddress("muTrigMatch_0_HLT_mu50", &muTrigMatch_0_HLT_mu50, &b_muTrigMatch_0_HLT_mu50);
   fChain->SetBranchAddress("muTrigMatch_0_HLT_mu26_ivarmedium", &muTrigMatch_0_HLT_mu26_ivarmedium, &b_muTrigMatch_0_HLT_mu26_ivarmedium);
   fChain->SetBranchAddress("muTrigMatch_0_HLT_mu26_imedium", &muTrigMatch_0_HLT_mu26_imedium, &b_muTrigMatch_0_HLT_mu26_imedium);
   fChain->SetBranchAddress("eleTrigMatch_0_HLT_e26_lhtight_iloose", &eleTrigMatch_0_HLT_e26_lhtight_iloose, &b_eleTrigMatch_0_HLT_e26_lhtight_iloose);
   fChain->SetBranchAddress("eleTrigMatch_0_HLT_e60_lhmedium", &eleTrigMatch_0_HLT_e60_lhmedium, &b_eleTrigMatch_0_HLT_e60_lhmedium);
   fChain->SetBranchAddress("eleTrigMatch_0_HLT_e24_lhmedium_iloose_L1EM18VH", &eleTrigMatch_0_HLT_e24_lhmedium_iloose_L1EM18VH, &b_eleTrigMatch_0_HLT_e24_lhmedium_iloose_L1EM18VH);
   fChain->SetBranchAddress("eleTrigMatch_0_HLT_e24_lhmedium_iloose_L1EM20VH", &eleTrigMatch_0_HLT_e24_lhmedium_iloose_L1EM20VH, &b_eleTrigMatch_0_HLT_e24_lhmedium_iloose_L1EM20VH);
   fChain->SetBranchAddress("eleTrigMatch_0_HLT_e24_lhtight_iloose", &eleTrigMatch_0_HLT_e24_lhtight_iloose, &b_eleTrigMatch_0_HLT_e24_lhtight_iloose);
   fChain->SetBranchAddress("eleTrigMatch_0_HLT_e120_lhloose", &eleTrigMatch_0_HLT_e120_lhloose, &b_eleTrigMatch_0_HLT_e120_lhloose);
   fChain->SetBranchAddress("eleTrigMatch_0_HLT_e120_lhloose_nod0", &eleTrigMatch_0_HLT_e120_lhloose_nod0, &b_eleTrigMatch_0_HLT_e120_lhloose_nod0);
   fChain->SetBranchAddress("eleTrigMatch_0_HLT_e17_lhloose_nod0_L1EM15", &eleTrigMatch_0_HLT_e17_lhloose_nod0_L1EM15, &b_eleTrigMatch_0_HLT_e17_lhloose_nod0_L1EM15);
   fChain->SetBranchAddress("eleTrigMatch_0_HLT_e140_lhloose_nod0", &eleTrigMatch_0_HLT_e140_lhloose_nod0, &b_eleTrigMatch_0_HLT_e140_lhloose_nod0);
   fChain->SetBranchAddress("eleTrigMatch_0_HLT_e140_lhloose", &eleTrigMatch_0_HLT_e140_lhloose, &b_eleTrigMatch_0_HLT_e140_lhloose);
   fChain->SetBranchAddress("tau_0_trig_HLT_tau25_medium1_tracktwo", &tau_0_trig_HLT_tau25_medium1_tracktwo, &b_tau_0_trig_HLT_tau25_medium1_tracktwo);
   fChain->SetBranchAddress("tau_0_trig_HLT_tau25_idperf_tracktwo", &tau_0_trig_HLT_tau25_idperf_tracktwo, &b_tau_0_trig_HLT_tau25_idperf_tracktwo);
   fChain->SetBranchAddress("tau_0_trig_HLT_tau35_medium1_tracktwo", &tau_0_trig_HLT_tau35_medium1_tracktwo, &b_tau_0_trig_HLT_tau35_medium1_tracktwo);
   fChain->SetBranchAddress("tau_0_trig_HLT_tau50_medium1_tracktwo_L1TAU12", &tau_0_trig_HLT_tau50_medium1_tracktwo_L1TAU12, &b_tau_0_trig_HLT_tau50_medium1_tracktwo_L1TAU12);
   fChain->SetBranchAddress("tau_0_trig_HLT_tau80_medium1_tracktwo", &tau_0_trig_HLT_tau80_medium1_tracktwo, &b_tau_0_trig_HLT_tau80_medium1_tracktwo);
   fChain->SetBranchAddress("tau_0_trig_HLT_tau80_medium1_tracktwo_L1TAU60", &tau_0_trig_HLT_tau80_medium1_tracktwo_L1TAU60, &b_tau_0_trig_HLT_tau80_medium1_tracktwo_L1TAU60);
   fChain->SetBranchAddress("tau_0_trig_HLT_tau125_medium1_tracktwo", &tau_0_trig_HLT_tau125_medium1_tracktwo, &b_tau_0_trig_HLT_tau125_medium1_tracktwo);
   fChain->SetBranchAddress("tau_0_trig_HLT_tau160_medium1_tracktwo", &tau_0_trig_HLT_tau160_medium1_tracktwo, &b_tau_0_trig_HLT_tau160_medium1_tracktwo);
   fChain->SetBranchAddress("tau_0_trig_L1_TAU12IM", &tau_0_trig_L1_TAU12IM, &b_tau_0_trig_L1_TAU12IM);
   fChain->SetBranchAddress("tau_0_trig_L1_TAU20IM", &tau_0_trig_L1_TAU20IM, &b_tau_0_trig_L1_TAU20IM);
   fChain->SetBranchAddress("tau_0_trig_HLT_tau25_perf_ptonly", &tau_0_trig_HLT_tau25_perf_ptonly, &b_tau_0_trig_HLT_tau25_perf_ptonly);
   fChain->SetBranchAddress("tau_0_trig_HLT_tau25_idperf_track", &tau_0_trig_HLT_tau25_idperf_track, &b_tau_0_trig_HLT_tau25_idperf_track);
   fChain->SetBranchAddress("tau_0_trig_HLT_tau25_perf_track", &tau_0_trig_HLT_tau25_perf_track, &b_tau_0_trig_HLT_tau25_perf_track);
   fChain->SetBranchAddress("tau_0_trig_HLT_tau25_perf_tracktwo", &tau_0_trig_HLT_tau25_perf_tracktwo, &b_tau_0_trig_HLT_tau25_perf_tracktwo);
   fChain->SetBranchAddress("tau_0_trig_HLT_tau25_loose1_ptonly", &tau_0_trig_HLT_tau25_loose1_ptonly, &b_tau_0_trig_HLT_tau25_loose1_ptonly);
   fChain->SetBranchAddress("tau_0_trig_HLT_tau25_loose1_tracktwo", &tau_0_trig_HLT_tau25_loose1_tracktwo, &b_tau_0_trig_HLT_tau25_loose1_tracktwo);
   fChain->SetBranchAddress("tau_0_trig_HLT_tau25_medium1_mvonly", &tau_0_trig_HLT_tau25_medium1_mvonly, &b_tau_0_trig_HLT_tau25_medium1_mvonly);
   fChain->SetBranchAddress("tau_0_trig_HLT_tau25_medium1_ptonly", &tau_0_trig_HLT_tau25_medium1_ptonly, &b_tau_0_trig_HLT_tau25_medium1_ptonly);
   fChain->SetBranchAddress("tau_0_trig_HLT_tau25_medium1_track", &tau_0_trig_HLT_tau25_medium1_track, &b_tau_0_trig_HLT_tau25_medium1_track);
   fChain->SetBranchAddress("tau_0_trig_HLT_tau25_tight1_ptonly", &tau_0_trig_HLT_tau25_tight1_ptonly, &b_tau_0_trig_HLT_tau25_tight1_ptonly);
   fChain->SetBranchAddress("tau_0_trig_HLT_tau25_tight1_tracktwo", &tau_0_trig_HLT_tau25_tight1_tracktwo, &b_tau_0_trig_HLT_tau25_tight1_tracktwo);
   fChain->SetBranchAddress("tau_0_trig_HLT_tau25_medium1_tracktwo_L1TAU12", &tau_0_trig_HLT_tau25_medium1_tracktwo_L1TAU12, &b_tau_0_trig_HLT_tau25_medium1_tracktwo_L1TAU12);
   fChain->SetBranchAddress("tau_0_trig_HLT_tau25_medium1_tracktwo_L1TAU12IL", &tau_0_trig_HLT_tau25_medium1_tracktwo_L1TAU12IL, &b_tau_0_trig_HLT_tau25_medium1_tracktwo_L1TAU12IL);
   fChain->SetBranchAddress("tau_0_trig_HLT_tau25_medium1_tracktwo_L1TAU12IT", &tau_0_trig_HLT_tau25_medium1_tracktwo_L1TAU12IT, &b_tau_0_trig_HLT_tau25_medium1_tracktwo_L1TAU12IT);
   fChain->SetBranchAddress("tau_0_trig_L1_TAU12", &tau_0_trig_L1_TAU12, &b_tau_0_trig_L1_TAU12);
   fChain->SetBranchAddress("tau_0_trig_L1_TAU20", &tau_0_trig_L1_TAU20, &b_tau_0_trig_L1_TAU20);
   fChain->SetBranchAddress("tau_0", &tau_0, &b_tau_0);
   fChain->SetBranchAddress("tau_0_eta", &tau_0_eta, &b_tau_0_eta);
   fChain->SetBranchAddress("tau_0_phi", &tau_0_phi, &b_tau_0_phi);
   fChain->SetBranchAddress("tau_0_pt", &tau_0_pt, &b_tau_0_pt);
   fChain->SetBranchAddress("tau_0_et", &tau_0_et, &b_tau_0_et);
   fChain->SetBranchAddress("tau_0_m", &tau_0_m, &b_tau_0_m);
   fChain->SetBranchAddress("tau_0_q", &tau_0_q, &b_tau_0_q);
   fChain->SetBranchAddress("tau_0_n_tracks", &tau_0_n_tracks, &b_tau_0_n_tracks);
   fChain->SetBranchAddress("tau_0_n_wide_tracks", &tau_0_n_wide_tracks, &b_tau_0_n_wide_tracks);
   fChain->SetBranchAddress("tau_0_jet_bdt_loose", &tau_0_jet_bdt_loose, &b_tau_0_jet_bdt_loose);
   fChain->SetBranchAddress("tau_0_jet_bdt_medium", &tau_0_jet_bdt_medium, &b_tau_0_jet_bdt_medium);
   fChain->SetBranchAddress("tau_0_jet_bdt_tight", &tau_0_jet_bdt_tight, &b_tau_0_jet_bdt_tight);
   fChain->SetBranchAddress("tau_0_jet_bdt_score", &tau_0_jet_bdt_score, &b_tau_0_jet_bdt_score);
   fChain->SetBranchAddress("tau_0_ele_bdt_loose", &tau_0_ele_bdt_loose, &b_tau_0_ele_bdt_loose);
   fChain->SetBranchAddress("tau_0_ele_bdt_medium", &tau_0_ele_bdt_medium, &b_tau_0_ele_bdt_medium);
   fChain->SetBranchAddress("tau_0_ele_bdt_tight", &tau_0_ele_bdt_tight, &b_tau_0_ele_bdt_tight);
   fChain->SetBranchAddress("tau_0_ele_bdt_score", &tau_0_ele_bdt_score, &b_tau_0_ele_bdt_score);
   fChain->SetBranchAddress("tau_0_ele_bdt_eff_sf", &tau_0_ele_bdt_eff_sf, &b_tau_0_ele_bdt_eff_sf);
   fChain->SetBranchAddress("tau_0_ele_match_lhscore", &tau_0_ele_match_lhscore, &b_tau_0_ele_match_lhscore);
   fChain->SetBranchAddress("tau_0_ele_olr_pass", &tau_0_ele_olr_pass, &b_tau_0_ele_olr_pass);
   fChain->SetBranchAddress("tau_0_decay_mode", &tau_0_decay_mode, &b_tau_0_decay_mode);
   fChain->SetBranchAddress("tau_0_leadTrk_pt", &tau_0_leadTrk_pt, &b_tau_0_leadTrk_pt);
   fChain->SetBranchAddress("tau_0_leadTrk_eta", &tau_0_leadTrk_eta, &b_tau_0_leadTrk_eta);
   fChain->SetBranchAddress("tau_0_leadTrk_phi", &tau_0_leadTrk_phi, &b_tau_0_leadTrk_phi);
   fChain->SetBranchAddress("tau_0_mvx", &tau_0_mvx, &b_tau_0_mvx);
   fChain->SetBranchAddress("tau_0_mvx_tagged", &tau_0_mvx_tagged, &b_tau_0_mvx_tagged);
   fChain->SetBranchAddress("tau_0_ParticleFlowCombined_pt", &tau_0_ParticleFlowCombined_pt, &b_tau_0_ParticleFlowCombined_pt);
   fChain->SetBranchAddress("tau_0_ParticleFlowCombined_eta", &tau_0_ParticleFlowCombined_eta, &b_tau_0_ParticleFlowCombined_eta);
   fChain->SetBranchAddress("tau_0_ParticleFlowCombined_phi", &tau_0_ParticleFlowCombined_phi, &b_tau_0_ParticleFlowCombined_phi);
   fChain->SetBranchAddress("tau_0_ParticleFlowCombined_m", &tau_0_ParticleFlowCombined_m, &b_tau_0_ParticleFlowCombined_m);
   fChain->SetBranchAddress("lephad", &lephad, &b_lephad);
   fChain->SetBranchAddress("lephad_qxq", &lephad_qxq, &b_lephad_qxq);
   fChain->SetBranchAddress("lephad_dpt", &lephad_dpt, &b_lephad_dpt);
   fChain->SetBranchAddress("lephad_deta", &lephad_deta, &b_lephad_deta);
   fChain->SetBranchAddress("lephad_dphi", &lephad_dphi, &b_lephad_dphi);
   fChain->SetBranchAddress("lephad_dr", &lephad_dr, &b_lephad_dr);
   fChain->SetBranchAddress("lephad_vis_mass", &lephad_vis_mass, &b_lephad_vis_mass);
   fChain->SetBranchAddress("lephad_cosalpha", &lephad_cosalpha, &b_lephad_cosalpha);
   fChain->SetBranchAddress("lephad_vect_sum_pt", &lephad_vect_sum_pt, &b_lephad_vect_sum_pt);
   fChain->SetBranchAddress("lephad_scal_sum_pt", &lephad_scal_sum_pt, &b_lephad_scal_sum_pt);
   fChain->SetBranchAddress("lephad_ptx", &lephad_ptx, &b_lephad_ptx);
   fChain->SetBranchAddress("lephad_pty", &lephad_pty, &b_lephad_pty);
   fChain->SetBranchAddress("lephad_met_centrality", &lephad_met_centrality, &b_lephad_met_centrality);
   fChain->SetBranchAddress("lephad_met_bisect", &lephad_met_bisect, &b_lephad_met_bisect);
   fChain->SetBranchAddress("lephad_met_min_dphi", &lephad_met_min_dphi, &b_lephad_met_min_dphi);
   fChain->SetBranchAddress("lephad_met_sum_cos_dphi", &lephad_met_sum_cos_dphi, &b_lephad_met_sum_cos_dphi);
   fChain->SetBranchAddress("lephad_met_lep0_cos_dphi", &lephad_met_lep0_cos_dphi, &b_lephad_met_lep0_cos_dphi);
   fChain->SetBranchAddress("lephad_met_lep1_cos_dphi", &lephad_met_lep1_cos_dphi, &b_lephad_met_lep1_cos_dphi);
   fChain->SetBranchAddress("lephad_coll_approx", &lephad_coll_approx, &b_lephad_coll_approx);
   fChain->SetBranchAddress("lephad_coll_approx_m", &lephad_coll_approx_m, &b_lephad_coll_approx_m);
   fChain->SetBranchAddress("lephad_coll_approx_x0", &lephad_coll_approx_x0, &b_lephad_coll_approx_x0);
   fChain->SetBranchAddress("lephad_coll_approx_x1", &lephad_coll_approx_x1, &b_lephad_coll_approx_x1);
   fChain->SetBranchAddress("lephad_mt_lep0_met", &lephad_mt_lep0_met, &b_lephad_mt_lep0_met);
   fChain->SetBranchAddress("lephad_mt_lep1_met", &lephad_mt_lep1_met, &b_lephad_mt_lep1_met);
   fChain->SetBranchAddress("lephad_ParticleFlowCombined_dpt", &lephad_ParticleFlowCombined_dpt, &b_lephad_ParticleFlowCombined_dpt);
   fChain->SetBranchAddress("lephad_ParticleFlowCombined_deta", &lephad_ParticleFlowCombined_deta, &b_lephad_ParticleFlowCombined_deta);
   fChain->SetBranchAddress("lephad_ParticleFlowCombined_dphi", &lephad_ParticleFlowCombined_dphi, &b_lephad_ParticleFlowCombined_dphi);
   fChain->SetBranchAddress("lephad_ParticleFlowCombined_dr", &lephad_ParticleFlowCombined_dr, &b_lephad_ParticleFlowCombined_dr);
   fChain->SetBranchAddress("lephad_ParticleFlowCombined_vis_mass", &lephad_ParticleFlowCombined_vis_mass, &b_lephad_ParticleFlowCombined_vis_mass);
   fChain->SetBranchAddress("lephad_ParticleFlowCombined_cosalpha", &lephad_ParticleFlowCombined_cosalpha, &b_lephad_ParticleFlowCombined_cosalpha);
   fChain->SetBranchAddress("lephad_ParticleFlowCombined_vect_sum_pt", &lephad_ParticleFlowCombined_vect_sum_pt, &b_lephad_ParticleFlowCombined_vect_sum_pt);
   fChain->SetBranchAddress("lephad_ParticleFlowCombined_scal_sum_pt", &lephad_ParticleFlowCombined_scal_sum_pt, &b_lephad_ParticleFlowCombined_scal_sum_pt);
   fChain->SetBranchAddress("lephad_ParticleFlowCombined_met_centrality", &lephad_ParticleFlowCombined_met_centrality, &b_lephad_ParticleFlowCombined_met_centrality);
   fChain->SetBranchAddress("lephad_ParticleFlowCombined_met_bisect", &lephad_ParticleFlowCombined_met_bisect, &b_lephad_ParticleFlowCombined_met_bisect);
   fChain->SetBranchAddress("lephad_ParticleFlowCombined_met_min_dphi", &lephad_ParticleFlowCombined_met_min_dphi, &b_lephad_ParticleFlowCombined_met_min_dphi);
   fChain->SetBranchAddress("lephad_ParticleFlowCombined_met_sum_cos_dphi", &lephad_ParticleFlowCombined_met_sum_cos_dphi, &b_lephad_ParticleFlowCombined_met_sum_cos_dphi);
   fChain->SetBranchAddress("lephad_ParticleFlowCombined_met_lep0_cos_dphi", &lephad_ParticleFlowCombined_met_lep0_cos_dphi, &b_lephad_ParticleFlowCombined_met_lep0_cos_dphi);
   fChain->SetBranchAddress("lephad_ParticleFlowCombined_met_lep1_cos_dphi", &lephad_ParticleFlowCombined_met_lep1_cos_dphi, &b_lephad_ParticleFlowCombined_met_lep1_cos_dphi);
   fChain->SetBranchAddress("lephad_ParticleFlowCombined_coll_approx", &lephad_ParticleFlowCombined_coll_approx, &b_lephad_ParticleFlowCombined_coll_approx);
   fChain->SetBranchAddress("lephad_ParticleFlowCombined_coll_approx_m", &lephad_ParticleFlowCombined_coll_approx_m, &b_lephad_ParticleFlowCombined_coll_approx_m);
   fChain->SetBranchAddress("lephad_ParticleFlowCombined_coll_approx_x0", &lephad_ParticleFlowCombined_coll_approx_x0, &b_lephad_ParticleFlowCombined_coll_approx_x0);
   fChain->SetBranchAddress("lephad_ParticleFlowCombined_coll_approx_x1", &lephad_ParticleFlowCombined_coll_approx_x1, &b_lephad_ParticleFlowCombined_coll_approx_x1);
   fChain->SetBranchAddress("lephad_ParticleFlowCombined_mt_lep0_met", &lephad_ParticleFlowCombined_mt_lep0_met, &b_lephad_ParticleFlowCombined_mt_lep0_met);
   fChain->SetBranchAddress("lephad_ParticleFlowCombined_mt_lep1_met", &lephad_ParticleFlowCombined_mt_lep1_met, &b_lephad_ParticleFlowCombined_mt_lep1_met);
   fChain->SetBranchAddress("jet_0", &jet_0, &b_jet_0);
   fChain->SetBranchAddress("jet_0_eta", &jet_0_eta, &b_jet_0_eta);
   fChain->SetBranchAddress("jet_0_phi", &jet_0_phi, &b_jet_0_phi);
   fChain->SetBranchAddress("jet_0_pt", &jet_0_pt, &b_jet_0_pt);
   fChain->SetBranchAddress("jet_0_et", &jet_0_et, &b_jet_0_et);
   fChain->SetBranchAddress("jet_0_m", &jet_0_m, &b_jet_0_m);
   fChain->SetBranchAddress("jet_0_q", &jet_0_q, &b_jet_0_q);
   fChain->SetBranchAddress("jet_0_jvt", &jet_0_jvt, &b_jet_0_jvt);
   fChain->SetBranchAddress("jet_0_mvx", &jet_0_mvx, &b_jet_0_mvx);
   fChain->SetBranchAddress("jet_0_mvx_tagged", &jet_0_mvx_tagged, &b_jet_0_mvx_tagged);
   fChain->SetBranchAddress("jet_0_flavorlabel", &jet_0_flavorlabel, &b_jet_0_flavorlabel);
   fChain->SetBranchAddress("jet_0_flavorlabel_part", &jet_0_flavorlabel_part, &b_jet_0_flavorlabel_part);
   fChain->SetBranchAddress("jet_0_flavorlabel_cone", &jet_0_flavorlabel_cone, &b_jet_0_flavorlabel_cone);
   fChain->SetBranchAddress("lep_0_iso_etcone20", &lep_0_iso_etcone20, &b_lep_0_iso_etcone20);
   fChain->SetBranchAddress("lep_0_iso_etcone30", &lep_0_iso_etcone30, &b_lep_0_iso_etcone30);
   fChain->SetBranchAddress("lep_0_iso_etcone40", &lep_0_iso_etcone40, &b_lep_0_iso_etcone40);
   fChain->SetBranchAddress("lep_0_iso_topoetcone20", &lep_0_iso_topoetcone20, &b_lep_0_iso_topoetcone20);
   fChain->SetBranchAddress("lep_0_iso_topoetcone30", &lep_0_iso_topoetcone30, &b_lep_0_iso_topoetcone30);
   fChain->SetBranchAddress("lep_0_iso_topoetcone40", &lep_0_iso_topoetcone40, &b_lep_0_iso_topoetcone40);
   fChain->SetBranchAddress("lep_0_iso_ptcone20", &lep_0_iso_ptcone20, &b_lep_0_iso_ptcone20);
   fChain->SetBranchAddress("lep_0_iso_ptcone30", &lep_0_iso_ptcone30, &b_lep_0_iso_ptcone30);
   fChain->SetBranchAddress("lep_0_iso_ptcone40", &lep_0_iso_ptcone40, &b_lep_0_iso_ptcone40);
   fChain->SetBranchAddress("lep_0_iso_ptvarcone20", &lep_0_iso_ptvarcone20, &b_lep_0_iso_ptvarcone20);
   fChain->SetBranchAddress("lep_0_iso_ptvarcone30", &lep_0_iso_ptvarcone30, &b_lep_0_iso_ptvarcone30);
   fChain->SetBranchAddress("lep_0_iso_ptvarcone40", &lep_0_iso_ptvarcone40, &b_lep_0_iso_ptvarcone40);
   fChain->SetBranchAddress("lep_1", &lep_1, &b_lep_1);
   fChain->SetBranchAddress("lep_1_eta", &lep_1_eta, &b_lep_1_eta);
   fChain->SetBranchAddress("lep_1_phi", &lep_1_phi, &b_lep_1_phi);
   fChain->SetBranchAddress("lep_1_pt", &lep_1_pt, &b_lep_1_pt);
   fChain->SetBranchAddress("lep_1_et", &lep_1_et, &b_lep_1_et);
   fChain->SetBranchAddress("lep_1_m", &lep_1_m, &b_lep_1_m);
   fChain->SetBranchAddress("lep_1_q", &lep_1_q, &b_lep_1_q);
   fChain->SetBranchAddress("lep_1_trk_d0", &lep_1_trk_d0, &b_lep_1_trk_d0);
   fChain->SetBranchAddress("lep_1_trk_d0_sig", &lep_1_trk_d0_sig, &b_lep_1_trk_d0_sig);
   fChain->SetBranchAddress("lep_1_trk_z0", &lep_1_trk_z0, &b_lep_1_trk_z0);
   fChain->SetBranchAddress("lep_1_trk_z0_sintheta", &lep_1_trk_z0_sintheta, &b_lep_1_trk_z0_sintheta);
   fChain->SetBranchAddress("lep_1_trk_z0_sig", &lep_1_trk_z0_sig, &b_lep_1_trk_z0_sig);
   fChain->SetBranchAddress("lep_1_trk_pvx_z0", &lep_1_trk_pvx_z0, &b_lep_1_trk_pvx_z0);
   fChain->SetBranchAddress("lep_1_trk_pvx_z0_sintheta", &lep_1_trk_pvx_z0_sintheta, &b_lep_1_trk_pvx_z0_sintheta);
   fChain->SetBranchAddress("lep_1_trk_pvx_z0_sig", &lep_1_trk_pvx_z0_sig, &b_lep_1_trk_pvx_z0_sig);
   fChain->SetBranchAddress("lep_1_trk_pt_error", &lep_1_trk_pt_error, &b_lep_1_trk_pt_error);
   fChain->SetBranchAddress("lep_1_iso_wp", &lep_1_iso_wp, &b_lep_1_iso_wp);
   fChain->SetBranchAddress("lep_1_id_veryloose", &lep_1_id_veryloose, &b_lep_1_id_veryloose);
   fChain->SetBranchAddress("lep_1_id_loose", &lep_1_id_loose, &b_lep_1_id_loose);
   fChain->SetBranchAddress("lep_1_id_medium", &lep_1_id_medium, &b_lep_1_id_medium);
   fChain->SetBranchAddress("lep_1_id_tight", &lep_1_id_tight, &b_lep_1_id_tight);
   fChain->SetBranchAddress("lep_1_id_bad", &lep_1_id_bad, &b_lep_1_id_bad);
   fChain->SetBranchAddress("lep_1_muonType", &lep_1_muonType, &b_lep_1_muonType);
   fChain->SetBranchAddress("lep_1_cluster_eta", &lep_1_cluster_eta, &b_lep_1_cluster_eta);
   fChain->SetBranchAddress("lep_1_cluster_eta_be2", &lep_1_cluster_eta_be2, &b_lep_1_cluster_eta_be2);
   fChain->SetBranchAddress("dilep_m", &dilep_m, &b_dilep_m);
   fChain->SetBranchAddress("tau_1", &tau_1, &b_tau_1);
   fChain->SetBranchAddress("tau_1_eta", &tau_1_eta, &b_tau_1_eta);
   fChain->SetBranchAddress("tau_1_phi", &tau_1_phi, &b_tau_1_phi);
   fChain->SetBranchAddress("tau_1_pt", &tau_1_pt, &b_tau_1_pt);
   fChain->SetBranchAddress("tau_1_et", &tau_1_et, &b_tau_1_et);
   fChain->SetBranchAddress("tau_1_m", &tau_1_m, &b_tau_1_m);
   fChain->SetBranchAddress("tau_1_q", &tau_1_q, &b_tau_1_q);
   fChain->SetBranchAddress("tau_1_n_tracks", &tau_1_n_tracks, &b_tau_1_n_tracks);
   fChain->SetBranchAddress("tau_1_n_wide_tracks", &tau_1_n_wide_tracks, &b_tau_1_n_wide_tracks);
   fChain->SetBranchAddress("tau_1_jet_bdt_loose", &tau_1_jet_bdt_loose, &b_tau_1_jet_bdt_loose);
   fChain->SetBranchAddress("tau_1_jet_bdt_medium", &tau_1_jet_bdt_medium, &b_tau_1_jet_bdt_medium);
   fChain->SetBranchAddress("tau_1_jet_bdt_tight", &tau_1_jet_bdt_tight, &b_tau_1_jet_bdt_tight);
   fChain->SetBranchAddress("tau_1_jet_bdt_score", &tau_1_jet_bdt_score, &b_tau_1_jet_bdt_score);
   fChain->SetBranchAddress("tau_1_ele_bdt_loose", &tau_1_ele_bdt_loose, &b_tau_1_ele_bdt_loose);
   fChain->SetBranchAddress("tau_1_ele_bdt_medium", &tau_1_ele_bdt_medium, &b_tau_1_ele_bdt_medium);
   fChain->SetBranchAddress("tau_1_ele_bdt_tight", &tau_1_ele_bdt_tight, &b_tau_1_ele_bdt_tight);
   fChain->SetBranchAddress("tau_1_ele_bdt_score", &tau_1_ele_bdt_score, &b_tau_1_ele_bdt_score);
   fChain->SetBranchAddress("tau_1_ele_bdt_eff_sf", &tau_1_ele_bdt_eff_sf, &b_tau_1_ele_bdt_eff_sf);
   fChain->SetBranchAddress("tau_1_ele_match_lhscore", &tau_1_ele_match_lhscore, &b_tau_1_ele_match_lhscore);
   fChain->SetBranchAddress("tau_1_ele_olr_pass", &tau_1_ele_olr_pass, &b_tau_1_ele_olr_pass);
   fChain->SetBranchAddress("tau_1_decay_mode", &tau_1_decay_mode, &b_tau_1_decay_mode);
   fChain->SetBranchAddress("tau_1_leadTrk_pt", &tau_1_leadTrk_pt, &b_tau_1_leadTrk_pt);
   fChain->SetBranchAddress("tau_1_leadTrk_eta", &tau_1_leadTrk_eta, &b_tau_1_leadTrk_eta);
   fChain->SetBranchAddress("tau_1_leadTrk_phi", &tau_1_leadTrk_phi, &b_tau_1_leadTrk_phi);
   fChain->SetBranchAddress("tau_1_mvx", &tau_1_mvx, &b_tau_1_mvx);
   fChain->SetBranchAddress("tau_1_mvx_tagged", &tau_1_mvx_tagged, &b_tau_1_mvx_tagged);
   fChain->SetBranchAddress("tau_0_sub_n_neutral", &tau_0_sub_n_neutral, &b_tau_0_sub_n_neutral);
   fChain->SetBranchAddress("tau_0_sub_n_charged", &tau_0_sub_n_charged, &b_tau_0_sub_n_charged);
   fChain->SetBranchAddress("tau_0_sub_PanTauCellBased_pt", &tau_0_sub_PanTauCellBased_pt, &b_tau_0_sub_PanTauCellBased_pt);
   fChain->SetBranchAddress("tau_0_sub_PanTauCellBased_eta", &tau_0_sub_PanTauCellBased_eta, &b_tau_0_sub_PanTauCellBased_eta);
   fChain->SetBranchAddress("tau_0_sub_PanTauCellBased_phi", &tau_0_sub_PanTauCellBased_phi, &b_tau_0_sub_PanTauCellBased_phi);
   fChain->SetBranchAddress("tau_0_sub_PanTauCellBased_m", &tau_0_sub_PanTauCellBased_m, &b_tau_0_sub_PanTauCellBased_m);
   fChain->SetBranchAddress("tau_0_sub_ctrk0_cellBased_pt", &tau_0_sub_ctrk0_cellBased_pt, &b_tau_0_sub_ctrk0_cellBased_pt);
   fChain->SetBranchAddress("tau_0_sub_ctrk0_cellBased_eta", &tau_0_sub_ctrk0_cellBased_eta, &b_tau_0_sub_ctrk0_cellBased_eta);
   fChain->SetBranchAddress("tau_0_sub_ctrk0_cellBased_phi", &tau_0_sub_ctrk0_cellBased_phi, &b_tau_0_sub_ctrk0_cellBased_phi);
   fChain->SetBranchAddress("tau_0_sub_ctrk1_cellBased_pt", &tau_0_sub_ctrk1_cellBased_pt, &b_tau_0_sub_ctrk1_cellBased_pt);
   fChain->SetBranchAddress("tau_0_sub_ctrk1_cellBased_eta", &tau_0_sub_ctrk1_cellBased_eta, &b_tau_0_sub_ctrk1_cellBased_eta);
   fChain->SetBranchAddress("tau_0_sub_ctrk1_cellBased_phi", &tau_0_sub_ctrk1_cellBased_phi, &b_tau_0_sub_ctrk1_cellBased_phi);
   fChain->SetBranchAddress("tau_0_sub_ctrk2_cellBased_pt", &tau_0_sub_ctrk2_cellBased_pt, &b_tau_0_sub_ctrk2_cellBased_pt);
   fChain->SetBranchAddress("tau_0_sub_ctrk2_cellBased_eta", &tau_0_sub_ctrk2_cellBased_eta, &b_tau_0_sub_ctrk2_cellBased_eta);
   fChain->SetBranchAddress("tau_0_sub_ctrk2_cellBased_phi", &tau_0_sub_ctrk2_cellBased_phi, &b_tau_0_sub_ctrk2_cellBased_phi);
   fChain->SetBranchAddress("tau_0_sub_ConstituentBased_pt", &tau_0_sub_ConstituentBased_pt, &b_tau_0_sub_ConstituentBased_pt);
   fChain->SetBranchAddress("tau_0_sub_ConstituentBased_eta", &tau_0_sub_ConstituentBased_eta, &b_tau_0_sub_ConstituentBased_eta);
   fChain->SetBranchAddress("tau_0_sub_ConstituentBased_phi", &tau_0_sub_ConstituentBased_phi, &b_tau_0_sub_ConstituentBased_phi);
   fChain->SetBranchAddress("tau_0_sub_ConstituentBased_m", &tau_0_sub_ConstituentBased_m, &b_tau_0_sub_ConstituentBased_m);
   fChain->SetBranchAddress("tau_0_sub_ParticleFlowCombined_pt", &tau_0_sub_ParticleFlowCombined_pt, &b_tau_0_sub_ParticleFlowCombined_pt);
   fChain->SetBranchAddress("tau_0_sub_ParticleFlowCombined_eta", &tau_0_sub_ParticleFlowCombined_eta, &b_tau_0_sub_ParticleFlowCombined_eta);
   fChain->SetBranchAddress("tau_0_sub_ParticleFlowCombined_phi", &tau_0_sub_ParticleFlowCombined_phi, &b_tau_0_sub_ParticleFlowCombined_phi);
   fChain->SetBranchAddress("tau_0_sub_ParticleFlowCombined_m", &tau_0_sub_ParticleFlowCombined_m, &b_tau_0_sub_ParticleFlowCombined_m);
   fChain->SetBranchAddress("tau_0_sub_neu0_bdtPi0Score", &tau_0_sub_neu0_bdtPi0Score, &b_tau_0_sub_neu0_bdtPi0Score);
   fChain->SetBranchAddress("tau_0_sub_neu0_cellBased_pt", &tau_0_sub_neu0_cellBased_pt, &b_tau_0_sub_neu0_cellBased_pt);
   fChain->SetBranchAddress("tau_0_sub_neu0_cellBased_eta", &tau_0_sub_neu0_cellBased_eta, &b_tau_0_sub_neu0_cellBased_eta);
   fChain->SetBranchAddress("tau_0_sub_neu0_cellBased_phi", &tau_0_sub_neu0_cellBased_phi, &b_tau_0_sub_neu0_cellBased_phi);
   fChain->SetBranchAddress("tau_0_sub_neu0_cellBased_FIRST_ETA", &tau_0_sub_neu0_cellBased_FIRST_ETA, &b_tau_0_sub_neu0_cellBased_FIRST_ETA);
   fChain->SetBranchAddress("tau_0_sub_neu0_cellBased_SECOND_R", &tau_0_sub_neu0_cellBased_SECOND_R, &b_tau_0_sub_neu0_cellBased_SECOND_R);
   fChain->SetBranchAddress("tau_0_sub_neu0_cellBased_SECOND_LAMBDA", &tau_0_sub_neu0_cellBased_SECOND_LAMBDA, &b_tau_0_sub_neu0_cellBased_SECOND_LAMBDA);
   fChain->SetBranchAddress("tau_0_sub_neu0_cellBased_DELTA_PHI", &tau_0_sub_neu0_cellBased_DELTA_PHI, &b_tau_0_sub_neu0_cellBased_DELTA_PHI);
   fChain->SetBranchAddress("tau_0_sub_neu0_cellBased_DELTA_THETA", &tau_0_sub_neu0_cellBased_DELTA_THETA, &b_tau_0_sub_neu0_cellBased_DELTA_THETA);
   fChain->SetBranchAddress("tau_0_sub_neu0_cellBased_CENTER_LAMBDA", &tau_0_sub_neu0_cellBased_CENTER_LAMBDA, &b_tau_0_sub_neu0_cellBased_CENTER_LAMBDA);
   fChain->SetBranchAddress("tau_0_sub_neu0_cellBased_LATERAL", &tau_0_sub_neu0_cellBased_LATERAL, &b_tau_0_sub_neu0_cellBased_LATERAL);
   fChain->SetBranchAddress("tau_0_sub_neu0_cellBased_LONGITUDINAL", &tau_0_sub_neu0_cellBased_LONGITUDINAL, &b_tau_0_sub_neu0_cellBased_LONGITUDINAL);
   fChain->SetBranchAddress("tau_0_sub_neu0_cellBased_ENG_FRAC_EM", &tau_0_sub_neu0_cellBased_ENG_FRAC_EM, &b_tau_0_sub_neu0_cellBased_ENG_FRAC_EM);
   fChain->SetBranchAddress("tau_0_sub_neu0_cellBased_ENG_FRAC_MAX", &tau_0_sub_neu0_cellBased_ENG_FRAC_MAX, &b_tau_0_sub_neu0_cellBased_ENG_FRAC_MAX);
   fChain->SetBranchAddress("tau_0_sub_neu0_cellBased_ENG_FRAC_CORE", &tau_0_sub_neu0_cellBased_ENG_FRAC_CORE, &b_tau_0_sub_neu0_cellBased_ENG_FRAC_CORE);
   fChain->SetBranchAddress("tau_0_sub_neu0_cellBased_SECOND_ENG_DENS", &tau_0_sub_neu0_cellBased_SECOND_ENG_DENS, &b_tau_0_sub_neu0_cellBased_SECOND_ENG_DENS);
   fChain->SetBranchAddress("tau_0_sub_neu0_cellBased_EM1CoreFrac", &tau_0_sub_neu0_cellBased_EM1CoreFrac, &b_tau_0_sub_neu0_cellBased_EM1CoreFrac);
   fChain->SetBranchAddress("tau_0_sub_neu0_cellBased_asymmetryInEM1WRTTrk", &tau_0_sub_neu0_cellBased_asymmetryInEM1WRTTrk, &b_tau_0_sub_neu0_cellBased_asymmetryInEM1WRTTrk);
   fChain->SetBranchAddress("tau_0_sub_neu0_cellBased_NHitsInEM1", &tau_0_sub_neu0_cellBased_NHitsInEM1, &b_tau_0_sub_neu0_cellBased_NHitsInEM1);
   fChain->SetBranchAddress("tau_0_sub_neu0_cellBased_NPosECells_PS", &tau_0_sub_neu0_cellBased_NPosECells_PS, &b_tau_0_sub_neu0_cellBased_NPosECells_PS);
   fChain->SetBranchAddress("tau_0_sub_neu0_cellBased_NPosECells_EM1", &tau_0_sub_neu0_cellBased_NPosECells_EM1, &b_tau_0_sub_neu0_cellBased_NPosECells_EM1);
   fChain->SetBranchAddress("tau_0_sub_neu0_cellBased_NPosECells_EM2", &tau_0_sub_neu0_cellBased_NPosECells_EM2, &b_tau_0_sub_neu0_cellBased_NPosECells_EM2);
   fChain->SetBranchAddress("tau_0_sub_neu0_cellBased_firstEtaWRTClusterPosition_EM1", &tau_0_sub_neu0_cellBased_firstEtaWRTClusterPosition_EM1, &b_tau_0_sub_neu0_cellBased_firstEtaWRTClusterPosition_EM1);
   fChain->SetBranchAddress("tau_0_sub_neu0_cellBased_firstEtaWRTClusterPosition_EM2", &tau_0_sub_neu0_cellBased_firstEtaWRTClusterPosition_EM2, &b_tau_0_sub_neu0_cellBased_firstEtaWRTClusterPosition_EM2);
   fChain->SetBranchAddress("tau_0_sub_neu0_cellBased_secondEtaWRTClusterPosition_EM1", &tau_0_sub_neu0_cellBased_secondEtaWRTClusterPosition_EM1, &b_tau_0_sub_neu0_cellBased_secondEtaWRTClusterPosition_EM1);
   fChain->SetBranchAddress("tau_0_sub_neu0_cellBased_secondEtaWRTClusterPosition_EM2", &tau_0_sub_neu0_cellBased_secondEtaWRTClusterPosition_EM2, &b_tau_0_sub_neu0_cellBased_secondEtaWRTClusterPosition_EM2);
   fChain->SetBranchAddress("tau_0_sub_neu0_cellBased_energy_EM1", &tau_0_sub_neu0_cellBased_energy_EM1, &b_tau_0_sub_neu0_cellBased_energy_EM1);
   fChain->SetBranchAddress("tau_0_sub_neu0_cellBased_energy_EM2", &tau_0_sub_neu0_cellBased_energy_EM2, &b_tau_0_sub_neu0_cellBased_energy_EM2);
   fChain->SetBranchAddress("tau_0_sub_neu1_bdtPi0Score", &tau_0_sub_neu1_bdtPi0Score, &b_tau_0_sub_neu1_bdtPi0Score);
   fChain->SetBranchAddress("tau_0_sub_neu1_cellBased_pt", &tau_0_sub_neu1_cellBased_pt, &b_tau_0_sub_neu1_cellBased_pt);
   fChain->SetBranchAddress("tau_0_sub_neu1_cellBased_eta", &tau_0_sub_neu1_cellBased_eta, &b_tau_0_sub_neu1_cellBased_eta);
   fChain->SetBranchAddress("tau_0_sub_neu1_cellBased_phi", &tau_0_sub_neu1_cellBased_phi, &b_tau_0_sub_neu1_cellBased_phi);
   fChain->SetBranchAddress("tau_0_sub_neu1_cellBased_FIRST_ETA", &tau_0_sub_neu1_cellBased_FIRST_ETA, &b_tau_0_sub_neu1_cellBased_FIRST_ETA);
   fChain->SetBranchAddress("tau_0_sub_neu1_cellBased_SECOND_R", &tau_0_sub_neu1_cellBased_SECOND_R, &b_tau_0_sub_neu1_cellBased_SECOND_R);
   fChain->SetBranchAddress("tau_0_sub_neu1_cellBased_SECOND_LAMBDA", &tau_0_sub_neu1_cellBased_SECOND_LAMBDA, &b_tau_0_sub_neu1_cellBased_SECOND_LAMBDA);
   fChain->SetBranchAddress("tau_0_sub_neu1_cellBased_DELTA_PHI", &tau_0_sub_neu1_cellBased_DELTA_PHI, &b_tau_0_sub_neu1_cellBased_DELTA_PHI);
   fChain->SetBranchAddress("tau_0_sub_neu1_cellBased_DELTA_THETA", &tau_0_sub_neu1_cellBased_DELTA_THETA, &b_tau_0_sub_neu1_cellBased_DELTA_THETA);
   fChain->SetBranchAddress("tau_0_sub_neu1_cellBased_CENTER_LAMBDA", &tau_0_sub_neu1_cellBased_CENTER_LAMBDA, &b_tau_0_sub_neu1_cellBased_CENTER_LAMBDA);
   fChain->SetBranchAddress("tau_0_sub_neu1_cellBased_LATERAL", &tau_0_sub_neu1_cellBased_LATERAL, &b_tau_0_sub_neu1_cellBased_LATERAL);
   fChain->SetBranchAddress("tau_0_sub_neu1_cellBased_LONGITUDINAL", &tau_0_sub_neu1_cellBased_LONGITUDINAL, &b_tau_0_sub_neu1_cellBased_LONGITUDINAL);
   fChain->SetBranchAddress("tau_0_sub_neu1_cellBased_ENG_FRAC_EM", &tau_0_sub_neu1_cellBased_ENG_FRAC_EM, &b_tau_0_sub_neu1_cellBased_ENG_FRAC_EM);
   fChain->SetBranchAddress("tau_0_sub_neu1_cellBased_ENG_FRAC_MAX", &tau_0_sub_neu1_cellBased_ENG_FRAC_MAX, &b_tau_0_sub_neu1_cellBased_ENG_FRAC_MAX);
   fChain->SetBranchAddress("tau_0_sub_neu1_cellBased_ENG_FRAC_CORE", &tau_0_sub_neu1_cellBased_ENG_FRAC_CORE, &b_tau_0_sub_neu1_cellBased_ENG_FRAC_CORE);
   fChain->SetBranchAddress("tau_0_sub_neu1_cellBased_SECOND_ENG_DENS", &tau_0_sub_neu1_cellBased_SECOND_ENG_DENS, &b_tau_0_sub_neu1_cellBased_SECOND_ENG_DENS);
   fChain->SetBranchAddress("tau_0_sub_neu1_cellBased_EM1CoreFrac", &tau_0_sub_neu1_cellBased_EM1CoreFrac, &b_tau_0_sub_neu1_cellBased_EM1CoreFrac);
   fChain->SetBranchAddress("tau_0_sub_neu1_cellBased_asymmetryInEM1WRTTrk", &tau_0_sub_neu1_cellBased_asymmetryInEM1WRTTrk, &b_tau_0_sub_neu1_cellBased_asymmetryInEM1WRTTrk);
   fChain->SetBranchAddress("tau_0_sub_neu1_cellBased_NHitsInEM1", &tau_0_sub_neu1_cellBased_NHitsInEM1, &b_tau_0_sub_neu1_cellBased_NHitsInEM1);
   fChain->SetBranchAddress("tau_0_sub_neu1_cellBased_NPosECells_PS", &tau_0_sub_neu1_cellBased_NPosECells_PS, &b_tau_0_sub_neu1_cellBased_NPosECells_PS);
   fChain->SetBranchAddress("tau_0_sub_neu1_cellBased_NPosECells_EM1", &tau_0_sub_neu1_cellBased_NPosECells_EM1, &b_tau_0_sub_neu1_cellBased_NPosECells_EM1);
   fChain->SetBranchAddress("tau_0_sub_neu1_cellBased_NPosECells_EM2", &tau_0_sub_neu1_cellBased_NPosECells_EM2, &b_tau_0_sub_neu1_cellBased_NPosECells_EM2);
   fChain->SetBranchAddress("tau_0_sub_neu1_cellBased_firstEtaWRTClusterPosition_EM1", &tau_0_sub_neu1_cellBased_firstEtaWRTClusterPosition_EM1, &b_tau_0_sub_neu1_cellBased_firstEtaWRTClusterPosition_EM1);
   fChain->SetBranchAddress("tau_0_sub_neu1_cellBased_firstEtaWRTClusterPosition_EM2", &tau_0_sub_neu1_cellBased_firstEtaWRTClusterPosition_EM2, &b_tau_0_sub_neu1_cellBased_firstEtaWRTClusterPosition_EM2);
   fChain->SetBranchAddress("tau_0_sub_neu1_cellBased_secondEtaWRTClusterPosition_EM1", &tau_0_sub_neu1_cellBased_secondEtaWRTClusterPosition_EM1, &b_tau_0_sub_neu1_cellBased_secondEtaWRTClusterPosition_EM1);
   fChain->SetBranchAddress("tau_0_sub_neu1_cellBased_secondEtaWRTClusterPosition_EM2", &tau_0_sub_neu1_cellBased_secondEtaWRTClusterPosition_EM2, &b_tau_0_sub_neu1_cellBased_secondEtaWRTClusterPosition_EM2);
   fChain->SetBranchAddress("tau_0_sub_neu1_cellBased_energy_EM1", &tau_0_sub_neu1_cellBased_energy_EM1, &b_tau_0_sub_neu1_cellBased_energy_EM1);
   fChain->SetBranchAddress("tau_0_sub_neu1_cellBased_energy_EM2", &tau_0_sub_neu1_cellBased_energy_EM2, &b_tau_0_sub_neu1_cellBased_energy_EM2);
   fChain->SetBranchAddress("tau_0_sub_pantau_CellBasedInput_isPanTauCandidate", &tau_0_sub_pantau_CellBasedInput_isPanTauCandidate, &b_tau_0_sub_pantau_CellBasedInput_isPanTauCandidate);
   fChain->SetBranchAddress("tau_0_sub_pantau_CellBasedInput_DecayModeProto", &tau_0_sub_pantau_CellBasedInput_DecayModeProto, &b_tau_0_sub_pantau_CellBasedInput_DecayModeProto);
   fChain->SetBranchAddress("tau_0_sub_pantau_CellBasedInput_DecayMode", &tau_0_sub_pantau_CellBasedInput_DecayMode, &b_tau_0_sub_pantau_CellBasedInput_DecayMode);
   fChain->SetBranchAddress("tau_0_sub_pantau_CellBasedInput_BDTValue_1p0n_vs_1p1n", &tau_0_sub_pantau_CellBasedInput_BDTValue_1p0n_vs_1p1n, &b_tau_0_sub_pantau_CellBasedInput_BDTValue_1p0n_vs_1p1n);
   fChain->SetBranchAddress("tau_0_sub_pantau_CellBasedInput_BDTValue_1p1n_vs_1pXn", &tau_0_sub_pantau_CellBasedInput_BDTValue_1p1n_vs_1pXn, &b_tau_0_sub_pantau_CellBasedInput_BDTValue_1p1n_vs_1pXn);
   fChain->SetBranchAddress("tau_0_sub_pantau_CellBasedInput_BDTValue_3p0n_vs_3pXn", &tau_0_sub_pantau_CellBasedInput_BDTValue_3p0n_vs_3pXn, &b_tau_0_sub_pantau_CellBasedInput_BDTValue_3p0n_vs_3pXn);
   fChain->SetBranchAddress("tau_0_sub_pantau_CellBasedInput_BDTVar_Basic_NNeutralConsts", &tau_0_sub_pantau_CellBasedInput_BDTVar_Basic_NNeutralConsts, &b_tau_0_sub_pantau_CellBasedInput_BDTVar_Basic_NNeutralConsts);
   fChain->SetBranchAddress("tau_0_sub_pantau_CellBasedInput_BDTVar_Charged_JetMoment_EtDRxTotalEt", &tau_0_sub_pantau_CellBasedInput_BDTVar_Charged_JetMoment_EtDRxTotalEt, &b_tau_0_sub_pantau_CellBasedInput_BDTVar_Charged_JetMoment_EtDRxTotalEt);
   fChain->SetBranchAddress("tau_0_sub_pantau_CellBasedInput_BDTVar_Charged_StdDev_Et_WrtEtAllConsts", &tau_0_sub_pantau_CellBasedInput_BDTVar_Charged_StdDev_Et_WrtEtAllConsts, &b_tau_0_sub_pantau_CellBasedInput_BDTVar_Charged_StdDev_Et_WrtEtAllConsts);
   fChain->SetBranchAddress("tau_0_sub_pantau_CellBasedInput_BDTVar_Neutral_HLV_SumM", &tau_0_sub_pantau_CellBasedInput_BDTVar_Neutral_HLV_SumM, &b_tau_0_sub_pantau_CellBasedInput_BDTVar_Neutral_HLV_SumM);
   fChain->SetBranchAddress("tau_0_sub_pantau_CellBasedInput_BDTVar_Neutral_PID_BDTValues_BDTSort_1", &tau_0_sub_pantau_CellBasedInput_BDTVar_Neutral_PID_BDTValues_BDTSort_1, &b_tau_0_sub_pantau_CellBasedInput_BDTVar_Neutral_PID_BDTValues_BDTSort_1);
   fChain->SetBranchAddress("tau_0_sub_pantau_CellBasedInput_BDTVar_Neutral_PID_BDTValues_BDTSort_2", &tau_0_sub_pantau_CellBasedInput_BDTVar_Neutral_PID_BDTValues_BDTSort_2, &b_tau_0_sub_pantau_CellBasedInput_BDTVar_Neutral_PID_BDTValues_BDTSort_2);
   fChain->SetBranchAddress("tau_0_sub_pantau_CellBasedInput_BDTVar_Neutral_Ratio_1stBDTEtOverEtAllConsts", &tau_0_sub_pantau_CellBasedInput_BDTVar_Neutral_Ratio_1stBDTEtOverEtAllConsts, &b_tau_0_sub_pantau_CellBasedInput_BDTVar_Neutral_Ratio_1stBDTEtOverEtAllConsts);
   fChain->SetBranchAddress("tau_0_sub_pantau_CellBasedInput_BDTVar_Neutral_Ratio_EtOverEtAllConsts", &tau_0_sub_pantau_CellBasedInput_BDTVar_Neutral_Ratio_EtOverEtAllConsts, &b_tau_0_sub_pantau_CellBasedInput_BDTVar_Neutral_Ratio_EtOverEtAllConsts);
   fChain->SetBranchAddress("tau_0_sub_pantau_CellBasedInput_BDTVar_Neutral_Shots_NPhotonsInSeed", &tau_0_sub_pantau_CellBasedInput_BDTVar_Neutral_Shots_NPhotonsInSeed, &b_tau_0_sub_pantau_CellBasedInput_BDTVar_Neutral_Shots_NPhotonsInSeed);
   fChain->SetBranchAddress("tau_0_sub_pantau_CellBasedInput_BDTVar_Combined_DeltaR1stNeutralTo1stCharged", &tau_0_sub_pantau_CellBasedInput_BDTVar_Combined_DeltaR1stNeutralTo1stCharged, &b_tau_0_sub_pantau_CellBasedInput_BDTVar_Combined_DeltaR1stNeutralTo1stCharged);
   fChain->SetBranchAddress("tau_0_sub_pantau_CellBasedInput_BDTVar_Charged_HLV_SumM", &tau_0_sub_pantau_CellBasedInput_BDTVar_Charged_HLV_SumM, &b_tau_0_sub_pantau_CellBasedInput_BDTVar_Charged_HLV_SumM);
   fChain->SetBranchAddress("tau_0_trig1_HLT_matched", &tau_0_trig1_HLT_matched, &b_tau_0_trig1_HLT_matched);
   fChain->SetBranchAddress("tau_0_trig1_HLT_pt", &tau_0_trig1_HLT_pt, &b_tau_0_trig1_HLT_pt);
   fChain->SetBranchAddress("tau_0_trig1_HLT_etraw", &tau_0_trig1_HLT_etraw, &b_tau_0_trig1_HLT_etraw);
   fChain->SetBranchAddress("tau_0_trig1_HLT_eraw", &tau_0_trig1_HLT_eraw, &b_tau_0_trig1_HLT_eraw);
   fChain->SetBranchAddress("tau_0_trig1_HLT_eta", &tau_0_trig1_HLT_eta, &b_tau_0_trig1_HLT_eta);
   fChain->SetBranchAddress("tau_0_trig1_HLT_phi", &tau_0_trig1_HLT_phi, &b_tau_0_trig1_HLT_phi);
   fChain->SetBranchAddress("tau_0_trig1_HLT_m", &tau_0_trig1_HLT_m, &b_tau_0_trig1_HLT_m);
   fChain->SetBranchAddress("tau_0_trig1_HLT_n_tracks", &tau_0_trig1_HLT_n_tracks, &b_tau_0_trig1_HLT_n_tracks);
   fChain->SetBranchAddress("tau_0_trig1_HLT_n_wide_tracks", &tau_0_trig1_HLT_n_wide_tracks, &b_tau_0_trig1_HLT_n_wide_tracks);
   fChain->SetBranchAddress("tau_0_trig1_HLT_jet_bdt_loose", &tau_0_trig1_HLT_jet_bdt_loose, &b_tau_0_trig1_HLT_jet_bdt_loose);
   fChain->SetBranchAddress("tau_0_trig1_HLT_jet_bdt_medium", &tau_0_trig1_HLT_jet_bdt_medium, &b_tau_0_trig1_HLT_jet_bdt_medium);
   fChain->SetBranchAddress("tau_0_trig1_HLT_jet_bdt_tight", &tau_0_trig1_HLT_jet_bdt_tight, &b_tau_0_trig1_HLT_jet_bdt_tight);
   fChain->SetBranchAddress("tau_0_trig1_HLT_jet_bdt_score", &tau_0_trig1_HLT_jet_bdt_score, &b_tau_0_trig1_HLT_jet_bdt_score);
   fChain->SetBranchAddress("tau_0_trig1_HLT_centFracCorrected", &tau_0_trig1_HLT_centFracCorrected, &b_tau_0_trig1_HLT_centFracCorrected);
   fChain->SetBranchAddress("tau_0_trig1_HLT_etOverPtLeadTrkCorrected", &tau_0_trig1_HLT_etOverPtLeadTrkCorrected, &b_tau_0_trig1_HLT_etOverPtLeadTrkCorrected);
   fChain->SetBranchAddress("tau_0_trig1_HLT_innerTrkAvgDistCorrected", &tau_0_trig1_HLT_innerTrkAvgDistCorrected, &b_tau_0_trig1_HLT_innerTrkAvgDistCorrected);
   fChain->SetBranchAddress("tau_0_trig1_HLT_ipSigLeadTrkCorrected", &tau_0_trig1_HLT_ipSigLeadTrkCorrected, &b_tau_0_trig1_HLT_ipSigLeadTrkCorrected);
   fChain->SetBranchAddress("tau_0_trig1_HLT_SumPtTrkFracCorrected", &tau_0_trig1_HLT_SumPtTrkFracCorrected, &b_tau_0_trig1_HLT_SumPtTrkFracCorrected);
   fChain->SetBranchAddress("tau_0_trig1_HLT_ptRatioEflowApproxCorrected", &tau_0_trig1_HLT_ptRatioEflowApproxCorrected, &b_tau_0_trig1_HLT_ptRatioEflowApproxCorrected);
   fChain->SetBranchAddress("tau_0_trig1_HLT_mEflowApproxCorrected", &tau_0_trig1_HLT_mEflowApproxCorrected, &b_tau_0_trig1_HLT_mEflowApproxCorrected);
   fChain->SetBranchAddress("tau_0_trig1_HLT_ChPiEMEOverCaloEMECorrected", &tau_0_trig1_HLT_ChPiEMEOverCaloEMECorrected, &b_tau_0_trig1_HLT_ChPiEMEOverCaloEMECorrected);
   fChain->SetBranchAddress("tau_0_trig1_HLT_EMPOverTrkSysPCorrected", &tau_0_trig1_HLT_EMPOverTrkSysPCorrected, &b_tau_0_trig1_HLT_EMPOverTrkSysPCorrected);
   fChain->SetBranchAddress("tau_0_trig1_HLT_dRmaxCorrected", &tau_0_trig1_HLT_dRmaxCorrected, &b_tau_0_trig1_HLT_dRmaxCorrected);
   fChain->SetBranchAddress("tau_0_trig1_HLT_trFlightPathSigCorrected", &tau_0_trig1_HLT_trFlightPathSigCorrected, &b_tau_0_trig1_HLT_trFlightPathSigCorrected);
   fChain->SetBranchAddress("tau_0_trig1_HLT_massTrkSysCorrected", &tau_0_trig1_HLT_massTrkSysCorrected, &b_tau_0_trig1_HLT_massTrkSysCorrected);
   fChain->SetBranchAddress("tau_0_trig1_HLT_centFrac", &tau_0_trig1_HLT_centFrac, &b_tau_0_trig1_HLT_centFrac);
   fChain->SetBranchAddress("tau_0_trig1_HLT_etOverPtLeadTrk", &tau_0_trig1_HLT_etOverPtLeadTrk, &b_tau_0_trig1_HLT_etOverPtLeadTrk);
   fChain->SetBranchAddress("tau_0_trig1_HLT_innerTrkAvgDist", &tau_0_trig1_HLT_innerTrkAvgDist, &b_tau_0_trig1_HLT_innerTrkAvgDist);
   fChain->SetBranchAddress("tau_0_trig1_HLT_ipSigLeadTrk", &tau_0_trig1_HLT_ipSigLeadTrk, &b_tau_0_trig1_HLT_ipSigLeadTrk);
   fChain->SetBranchAddress("tau_0_trig1_HLT_SumPtTrkFrac", &tau_0_trig1_HLT_SumPtTrkFrac, &b_tau_0_trig1_HLT_SumPtTrkFrac);
   fChain->SetBranchAddress("tau_0_trig1_HLT_ptRatioEflowApprox", &tau_0_trig1_HLT_ptRatioEflowApprox, &b_tau_0_trig1_HLT_ptRatioEflowApprox);
   fChain->SetBranchAddress("tau_0_trig1_HLT_mEflowApprox", &tau_0_trig1_HLT_mEflowApprox, &b_tau_0_trig1_HLT_mEflowApprox);
   fChain->SetBranchAddress("tau_0_trig1_HLT_ChPiEMEOverCaloEME", &tau_0_trig1_HLT_ChPiEMEOverCaloEME, &b_tau_0_trig1_HLT_ChPiEMEOverCaloEME);
   fChain->SetBranchAddress("tau_0_trig1_HLT_EMPOverTrkSysP", &tau_0_trig1_HLT_EMPOverTrkSysP, &b_tau_0_trig1_HLT_EMPOverTrkSysP);
   fChain->SetBranchAddress("tau_0_trig1_HLT_dRmax", &tau_0_trig1_HLT_dRmax, &b_tau_0_trig1_HLT_dRmax);
   fChain->SetBranchAddress("tau_0_trig1_HLT_trFlightPathSig", &tau_0_trig1_HLT_trFlightPathSig, &b_tau_0_trig1_HLT_trFlightPathSig);
   fChain->SetBranchAddress("tau_0_trig1_HLT_massTrkSys", &tau_0_trig1_HLT_massTrkSys, &b_tau_0_trig1_HLT_massTrkSys);
   fChain->SetBranchAddress("tau_0_trig2_PreselTrig_matched", &tau_0_trig2_PreselTrig_matched, &b_tau_0_trig2_PreselTrig_matched);
   fChain->SetBranchAddress("tau_0_trig2_PreselTrig_pt", &tau_0_trig2_PreselTrig_pt, &b_tau_0_trig2_PreselTrig_pt);
   fChain->SetBranchAddress("tau_0_trig2_PreselTrig_eta", &tau_0_trig2_PreselTrig_eta, &b_tau_0_trig2_PreselTrig_eta);
   fChain->SetBranchAddress("tau_0_trig2_PreselTrig_phi", &tau_0_trig2_PreselTrig_phi, &b_tau_0_trig2_PreselTrig_phi);
   fChain->SetBranchAddress("tau_0_trig2_PreselTrig_m", &tau_0_trig2_PreselTrig_m, &b_tau_0_trig2_PreselTrig_m);
   fChain->SetBranchAddress("tau_0_trig2_PreselTrig_n_tracks", &tau_0_trig2_PreselTrig_n_tracks, &b_tau_0_trig2_PreselTrig_n_tracks);
   fChain->SetBranchAddress("tau_0_trig2_PreselTrig_n_wide_tracks", &tau_0_trig2_PreselTrig_n_wide_tracks, &b_tau_0_trig2_PreselTrig_n_wide_tracks);
   fChain->SetBranchAddress("tau_0_leadTrk_d0", &tau_0_leadTrk_d0, &b_tau_0_leadTrk_d0);
   fChain->SetBranchAddress("tau_0_leadTrk_d0_sig", &tau_0_leadTrk_d0_sig, &b_tau_0_leadTrk_d0_sig);
   fChain->SetBranchAddress("tau_0_leadTrk_z0", &tau_0_leadTrk_z0, &b_tau_0_leadTrk_z0);
   fChain->SetBranchAddress("tau_0_leadTrk_z0_sintheta", &tau_0_leadTrk_z0_sintheta, &b_tau_0_leadTrk_z0_sintheta);
   fChain->SetBranchAddress("tau_0_leadTrk_z0_sig", &tau_0_leadTrk_z0_sig, &b_tau_0_leadTrk_z0_sig);
   fChain->SetBranchAddress("tau_0_leadTrk_pvx_z0", &tau_0_leadTrk_pvx_z0, &b_tau_0_leadTrk_pvx_z0);
   fChain->SetBranchAddress("tau_0_leadTrk_pvx_z0_sintheta", &tau_0_leadTrk_pvx_z0_sintheta, &b_tau_0_leadTrk_pvx_z0_sintheta);
   fChain->SetBranchAddress("tau_0_leadTrk_pvx_z0_sig", &tau_0_leadTrk_pvx_z0_sig, &b_tau_0_leadTrk_pvx_z0_sig);
   fChain->SetBranchAddress("tau_0_trk_multi_cw_dr60_n_l5", &tau_0_trk_multi_cw_dr60_n_l5, &b_tau_0_trk_multi_cw_dr60_n_l5);
   fChain->SetBranchAddress("tau_0_trk_multi_cw_dr60_d04_n_l5", &tau_0_trk_multi_cw_dr60_d04_n_l5, &b_tau_0_trk_multi_cw_dr60_d04_n_l5);
   fChain->SetBranchAddress("tau_0_trk_multi_cw_dr60_n_lp5", &tau_0_trk_multi_cw_dr60_n_lp5, &b_tau_0_trk_multi_cw_dr60_n_lp5);
   fChain->SetBranchAddress("tau_0_trk_multi_cw_dr60_d04_n_lp5", &tau_0_trk_multi_cw_dr60_d04_n_lp5, &b_tau_0_trk_multi_cw_dr60_d04_n_lp5);
   fChain->SetBranchAddress("tau_0_trk_multi_cw_dr60_n_t5", &tau_0_trk_multi_cw_dr60_n_t5, &b_tau_0_trk_multi_cw_dr60_n_t5);
   fChain->SetBranchAddress("tau_0_trk_multi_cw_dr60_d04_n_t5", &tau_0_trk_multi_cw_dr60_d04_n_t5, &b_tau_0_trk_multi_cw_dr60_d04_n_t5);
   fChain->SetBranchAddress("tau_0_trk_multi_cws_dr60_n_l5", &tau_0_trk_multi_cws_dr60_n_l5, &b_tau_0_trk_multi_cws_dr60_n_l5);
   fChain->SetBranchAddress("tau_0_trk_multi_cws_dr60_d04_n_l5", &tau_0_trk_multi_cws_dr60_d04_n_l5, &b_tau_0_trk_multi_cws_dr60_d04_n_l5);
   fChain->SetBranchAddress("tau_0_trk_multi_cws_dr60_n_lp5", &tau_0_trk_multi_cws_dr60_n_lp5, &b_tau_0_trk_multi_cws_dr60_n_lp5);
   fChain->SetBranchAddress("tau_0_trk_multi_cws_dr60_d04_n_lp5", &tau_0_trk_multi_cws_dr60_d04_n_lp5, &b_tau_0_trk_multi_cws_dr60_d04_n_lp5);
   fChain->SetBranchAddress("tau_0_trk_multi_cws_dr60_n_t5", &tau_0_trk_multi_cws_dr60_n_t5, &b_tau_0_trk_multi_cws_dr60_n_t5);
   fChain->SetBranchAddress("tau_0_trk_multi_cws_dr60_d04_n_t5", &tau_0_trk_multi_cws_dr60_d04_n_t5, &b_tau_0_trk_multi_cws_dr60_d04_n_t5);
   fChain->SetBranchAddress("tau_0_trk_multi_cw_dr80_n_l5", &tau_0_trk_multi_cw_dr80_n_l5, &b_tau_0_trk_multi_cw_dr80_n_l5);
   fChain->SetBranchAddress("tau_0_trk_multi_cw_dr80_d04_n_l5", &tau_0_trk_multi_cw_dr80_d04_n_l5, &b_tau_0_trk_multi_cw_dr80_d04_n_l5);
   fChain->SetBranchAddress("tau_0_trk_multi_cw_dr80_n_lp5", &tau_0_trk_multi_cw_dr80_n_lp5, &b_tau_0_trk_multi_cw_dr80_n_lp5);
   fChain->SetBranchAddress("tau_0_trk_multi_cw_dr80_d04_n_lp5", &tau_0_trk_multi_cw_dr80_d04_n_lp5, &b_tau_0_trk_multi_cw_dr80_d04_n_lp5);
   fChain->SetBranchAddress("tau_0_trk_multi_cw_dr80_n_t5", &tau_0_trk_multi_cw_dr80_n_t5, &b_tau_0_trk_multi_cw_dr80_n_t5);
   fChain->SetBranchAddress("tau_0_trk_multi_cw_dr80_d04_n_t5", &tau_0_trk_multi_cw_dr80_d04_n_t5, &b_tau_0_trk_multi_cw_dr80_d04_n_t5);
   fChain->SetBranchAddress("tau_0_trk_multi_cws_dr80_n_l5", &tau_0_trk_multi_cws_dr80_n_l5, &b_tau_0_trk_multi_cws_dr80_n_l5);
   fChain->SetBranchAddress("tau_0_trk_multi_cws_dr80_d04_n_l5", &tau_0_trk_multi_cws_dr80_d04_n_l5, &b_tau_0_trk_multi_cws_dr80_d04_n_l5);
   fChain->SetBranchAddress("tau_0_trk_multi_cws_dr80_n_lp5", &tau_0_trk_multi_cws_dr80_n_lp5, &b_tau_0_trk_multi_cws_dr80_n_lp5);
   fChain->SetBranchAddress("tau_0_trk_multi_cws_dr80_d04_n_lp5", &tau_0_trk_multi_cws_dr80_d04_n_lp5, &b_tau_0_trk_multi_cws_dr80_d04_n_lp5);
   fChain->SetBranchAddress("tau_0_trk_multi_cws_dr80_n_t5", &tau_0_trk_multi_cws_dr80_n_t5, &b_tau_0_trk_multi_cws_dr80_n_t5);
   fChain->SetBranchAddress("tau_0_trk_multi_cws_dr80_d04_n_t5", &tau_0_trk_multi_cws_dr80_d04_n_t5, &b_tau_0_trk_multi_cws_dr80_d04_n_t5);
   fChain->SetBranchAddress("tau_0_trk_multi_ckt4iso_n", &tau_0_trk_multi_ckt4iso_n, &b_tau_0_trk_multi_ckt4iso_n);
   fChain->SetBranchAddress("tau_0_trk_multi_diag_n_had_tracks", &tau_0_trk_multi_diag_n_had_tracks, &b_tau_0_trk_multi_diag_n_had_tracks);
   fChain->SetBranchAddress("tau_0_trk_multi_diag_purity", &tau_0_trk_multi_diag_purity, &b_tau_0_trk_multi_diag_purity);
   fChain->SetBranchAddress("tau_0_trk_multi_diag_n_tau_tracks", &tau_0_trk_multi_diag_n_tau_tracks, &b_tau_0_trk_multi_diag_n_tau_tracks);
   fChain->SetBranchAddress("tau_0_trk_multi_diag_n_spu_tracks", &tau_0_trk_multi_diag_n_spu_tracks, &b_tau_0_trk_multi_diag_n_spu_tracks);
   fChain->SetBranchAddress("tau_0_trk_multi_diag_n_spu_uc_tracks", &tau_0_trk_multi_diag_n_spu_uc_tracks, &b_tau_0_trk_multi_diag_n_spu_uc_tracks);
   fChain->SetBranchAddress("tau_0_trk_multi_diag_n_spu_cv_tracks", &tau_0_trk_multi_diag_n_spu_cv_tracks, &b_tau_0_trk_multi_diag_n_spu_cv_tracks);
   fChain->SetBranchAddress("tau_0_trk_multi_diag_n_spu_pu_tracks", &tau_0_trk_multi_diag_n_spu_pu_tracks, &b_tau_0_trk_multi_diag_n_spu_pu_tracks);
   fChain->SetBranchAddress("tau_0_trk_multi_diag_n_spu_ue_tracks", &tau_0_trk_multi_diag_n_spu_ue_tracks, &b_tau_0_trk_multi_diag_n_spu_ue_tracks);
   fChain->SetBranchAddress("tau_0_trk_multi_diag_n_spu_fk_tracks", &tau_0_trk_multi_diag_n_spu_fk_tracks, &b_tau_0_trk_multi_diag_n_spu_fk_tracks);
   fChain->SetBranchAddress("tau_tes_alpha_pt_shift", &tau_tes_alpha_pt_shift, &b_tau_tes_alpha_pt_shift);
   Notify();
}

Bool_t makeclass::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void makeclass::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t makeclass::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef makeclass_cxx
