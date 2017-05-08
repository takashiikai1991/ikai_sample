
for period  in all
do
for i_prong in  0
do
for s_eta in 0   #0 1 2
do
for s_tauID in 2 # 0 1 2 3
do
for trig in  0 #0 25 ##
do
for s_pt in 0   #0 1 2  ###->region
do
    echo "${i_prong}prong  start..... "
    
    #root "PreSelection2.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_jet_bdt_score\",  20,0.6,1 , ${s_pt} )" -l -b -q
    #root "PreSelection2.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"(tau_0_pt-tau_0_trig1_HLT_pt)/tau_0_pt\",  20,-0.1,0.1 , ${s_pt} )" -l -b -q
    
    #root "PreSelection2.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_pt\", 20,20,70 , ${s_pt} )" -l -b -q
    # root "PreSelection2.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_eta\", 20,-2.5,2.5 , ${s_pt} )" -l -b -q
    # root "PreSelection2.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_phi\", 20,-3.2,3.2 , ${s_pt} )" -l -b -q
    # root "PreSelection2.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_n_wide_tracks\", 5,-0.5,4.5 , ${s_pt} )" -l -b -q
    # root "PreSelection2.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_decay_mode\", 6,-0.5,5.5 , ${s_pt} )" -l -b -q
	#root "PreSelection2.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_n_tracks\", 5,-0.5,4.5 , ${s_pt} )" -l -b -q
	# root "PreSelection2.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_leadTrk_z0-lep_0_trk_z0\", 25,-1.5,1.5 , ${s_pt} )" -l -b -q 
	# root "PreSelection2.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_leadTrk_z0\", 25,-100,100 , ${s_pt} )" -l -b -q      		       
    
    # root "PreSelection2.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"n_avg_int_cor\", 15,0,30, ${s_pt} )" -l -b -q
    # root "PreSelection2.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"n_vx\", 15,0,30, ${s_pt} )" -l -b -q
    
    # root "PreSelection2.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"lep_0_pt\", 20,20,60 , ${s_pt} )" -l -b -q
    # root "PreSelection2.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"lep_0_eta\", 20,-2.5,2.5 , ${s_pt} )" -l -b -q
    # root "PreSelection2.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"lep_0_phi\", 20,-3.2,3.2 , ${s_pt} )" -l -b -q
	# root "PreSelection2.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"lep_0_trk_d0\", 20,-0.5,0.5 , ${s_pt} )" -l -b -q
	# #root "PreSelection2.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"lep_0_trk_z0\", 25,-100,100 , ${s_pt} )" -l -b -q      		    
	# root "PreSelection2.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"lep_0_trk_pvx_z0_sintheta\", 20,-0.2,0.2 , ${s_pt} )" -l -b -q	
	# root "PreSelection2.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"lep_0_iso_ptvarcone30\", 60,-0.1,0.5 , ${s_pt} )" -l -b -q
	# root "PreSelection2.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"lep_0_iso_topoetcone20\", 60,-0.1,0.5 , ${s_pt} )" -l -b -q
    
     #root "PreSelection2.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"lep_0_iso_ptvarcone20\", 60,-0.1.,0.5 , ${s_pt} )" -l -b -q
     # root "PreSelection2.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"lep_0_iso_ptvarcone40\", 60,-0.1.,0.5 , ${s_pt} )" -l -b -q
     # root "PreSelection2.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"lep_0_iso_topoetcone30\", 60,-0.1,0.5 , ${s_pt} )" -l -b -q
     # root "PreSelection2.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"lep_0_iso_topoetcone40\", 60,-0.1,0.5 , ${s_pt} )" -l -b -q
     # root "PreSelection2.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"lep_0_iso_ptcone20\", 60,-0.1.,0.5 , ${s_pt} )" -l -b -q    
     # root "PreSelection2.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"lep_0_iso_ptcone30\", 60,-0.1.,0.5 , ${s_pt} )" -l -b -q    
     # root "PreSelection2.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"lep_0_iso_ptcone40\", 60,-0.1.,0.5 , ${s_pt} )" -l -b -q    
     # root "PreSelection2.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"lep_0_iso_etcone20\", 60,-0.1.,0.5 , ${s_pt} )" -l -b -q    
     # root "PreSelection2.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"lep_0_iso_etcone30\", 60,-0.1.,0.5 , ${s_pt} )" -l -b -q    
     # root "PreSelection2.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"lep_0_iso_etcone40\", 60,-0.1.,0.5 , ${s_pt} )" -l -b -q    
    
    	# # # # kinematic
    # root "PreSelection2.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"lephad_vis_mass\", 20,40,90 , ${s_pt} )" -l -b -q      		    	
    # root "PreSelection2.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"lephad_met_sum_cos_dphi\", 20,-1.5,1.5 , ${s_pt} )" -l -b -q
    # root "PreSelection2.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"lephad_mt_lep0_met\", 20,0,80 , ${s_pt} )" -l -b -q
    
    root "PreSelection2.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"lephad_vis_mass\", 30,20,170 , ${s_pt} )" -l -b -q      		    
    #root "PreSelection2.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"lephad_met_sum_cos_dphi\", 20,-1.5,1.5 , ${s_pt} )" -l -b -q
    #root "PreSelection2.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"lephad_mt_lep0_met\", 30,0,150 , ${s_pt} )" -l -b -q	
    

    

    # root "PreSelection2.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"n_jets\",  6,-0.5,5.5 , ${s_pt} )" -l -b -q
    # root "PreSelection2.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"jet_0_pt\", 18,10,100 , ${s_pt} )" -l -b -q
    # root "PreSelection2.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"jet_0_eta\", 20,-5,5 , ${s_pt} )" -l -b -q
    # root "PreSelection2.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"jet_0_phi\", 20,-3.2,3.2 , ${s_pt} )" -l -b -q
    # root "PreSelection2.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"met_reco_et\", 20,0,100 , ${s_pt} )" -l -b -q
    # root "PreSelection2.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"met_reco_phi\", 20,-3.2,3.2 , ${s_pt} )" -l -b -q    
    # root "PreSelection2.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"lephad_met_centrality\", 20,-1.5,1.5 , ${s_pt} )" -l -b -q

    

    # root "PreSelection2.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"lephad_dr\", 20,0,4 , ${s_pt} )" -l -b -q
    # root "PreSelection2.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"lephad_dpt\", 20,-40,40 , ${s_pt} )" -l -b -q
    # root "PreSelection2.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"lephad_dphi\", 20,0,3.2 , ${s_pt} )" -l -b -q
    # root "PreSelection2.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"lephad_deta\", 20,0,3 , ${s_pt} )" -l -b -q
    # root "PreSelection2.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"lephad_cosalpha\", 22,-1.1,1.1 , ${s_pt} )" -l -b -q
    # root "PreSelection2.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"lephad_met_min_dphi\", 20,0,2.5 , ${s_pt} )" -l -b -q
    # 	#root "PreSelection2.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"lephad_met_lep0_cos_dphi\", 20,0,3.2 , ${s_pt} )" -l -b -q

    

done
done
done
done
done
done


	



for period  in all
do
for i_prong in 1 3 #1 3
do
for s_eta in 0  #1 3 4 5  ###->region
do
for s_tauID in  2
do
for trig in  25 ##
do
for s_pt in 0 #1 2  #1 3 4 5  ###->region
do	
    echo "${i_prong}prong  start..... "
    echo '$....................... '
    # # # # #BDT para #need 1 3prongs
    
    # root "PreSelection2.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_id_ptRatioEflowApproxCorrected\", 20,0.6,2 , ${s_pt} )" -l -b -q
    # root "PreSelection2.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_id_centFracCorrected\", 20,0.4,1.1 , ${s_pt} )" -l -b -q
    # root "PreSelection2.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_id_etOverPtLeadTrkCorrected\", 20,0,6 , ${s_pt} )" -l -b -q
    # root "PreSelection2.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_id_innerTrkAvgDistCorrected\", 20,-0,0.15 , ${s_pt} )" -l -b -q
    # root "PreSelection2.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_id_mEflowApproxCorrected\", 20,0,3*1000 , ${s_pt} )" -l -b -q
    # root "PreSelection2.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_id_ChPiEMEOverCaloEMECorrected\", 20,-1,2 , ${s_pt} )" -l -b -q 
    # root "PreSelection2.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_id_EMPOverTrkSysPCorrected\", 20,0,10 , ${s_pt} )" -l -b -q
    
    # if test ${i_prong} -eq 1 ;then                                                                                                                                                                                                     
    # 	echo 1p                                                                                                                                                                                                                        
    # 	root "PreSelection2.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_id_ipSigLeadTrkCorrected\", 20,-0,15 , ${s_pt} )" -l -b -q  #1p
    # 	root "PreSelection2.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_id_SumPtTrkFracCorrected\", 20,-0.002,0.018 , ${s_pt} )" -l -b -q #1p
    # fi    
    
    # if test ${i_prong} -eq 3 ;then
    # 	echo 3p                                                                                                                                                                                                                        
    # 	root "PreSelection2.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_id_dRmaxCorrected\", 20,0,0.2 , ${s_pt} )" -l -b -q  #3p
    # 	root "PreSelection2.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_id_trFlightPathSigCorrected\", 20,-5,20 , ${s_pt} )" -l -b -q #3p
    # 	root "PreSelection2.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_id_massTrkSysCorrected\", 20,500,3*1000 , ${s_pt} )" -l -b -q  #3p
    # fi
    




# # # # # # HLT-BDT para #need 1 3prongs && trigger


    # root "PreSelection2.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_trig1_HLT_jet_bdt_score\",  20,0.6,1 , ${s_pt} )" -l -b -q
    
    # root "PreSelection2.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_trig1_HLT_ptRatioEflowApproxCorrected\", 20,0.6,2 , ${s_pt} )" -l -b -q
    # root "PreSelection2.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_trig1_HLT_centFracCorrected\", 20,0.4,1.1 , ${s_pt} )" -l -b -q
    # root "PreSelection2.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_trig1_HLT_etOverPtLeadTrkCorrected\", 20,0,6 , ${s_pt} )" -l -b -q
    # root "PreSelection2.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_trig1_HLT_innerTrkAvgDistCorrected\", 20,-0,0.15 , ${s_pt} )" -l -b -q
    # root "PreSelection2.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_trig1_HLT_mEflowApproxCorrected\", 20,0,3*1000 , ${s_pt} )" -l -b -q
    # root "PreSelection2.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_trig1_HLT_ChPiEMEOverCaloEMECorrected\", 20,-1,2 , ${s_pt} )" -l -b -q 
    # root "PreSelection2.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_trig1_HLT_EMPOverTrkSysPCorrected\", 20,0,10 , ${s_pt} )" -l -b -q
    
    # if test ${i_prong} -eq 1 ;then                                                                                                                                                                                                     
    # 	echo 1p                                                                                                                                                                                                                        
    # 	root "PreSelection2.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_trig1_HLT_ipSigLeadTrkCorrected\", 20,-0,15 , ${s_pt} )" -l -b -q  #1p
    # 	root "PreSelection2.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_trig1_HLT_SumPtTrkFracCorrected\", 20,-0.002,0.018 , ${s_pt} )" -l -b -q #1p
    # fi    
    
    # if test ${i_prong} -eq 3 ;then
    # 	echo 3p                                                                                                                                                                                                                        
    # 	root "PreSelection2.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_trig1_HLT_dRmaxCorrected\", 20,0,0.2 , ${s_pt} )" -l -b -q  #3p
    # 	root "PreSelection2.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_trig1_HLT_trFlightPathSigCorrected\", 20,-5,20 , ${s_pt} )" -l -b -q #3p
    # 	root "PreSelection2.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_trig1_HLT_massTrkSysCorrected\", 20,500,3*1000 , ${s_pt} )" -l -b -q  #3p
    # fi
    

	
done	
done	
done
done
done
done


