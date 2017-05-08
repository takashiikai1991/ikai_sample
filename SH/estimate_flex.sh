

for code  in Nui
do
for period  in all
do

for i_prong in 1 3 #1 3 0 #0 1 3  
do
for s_eta in 0 #1 2     #0 1 2
do
for s_tauID in 2 #1 2 3 #1 2 3 # 0 1 2 3
do
for trig in 0 #25  #0 25 ##
do
for s_pt in 0 # 1 2 #0   #0 1 2  ###->region
do
for loop in 0 #highpt #kinematic # tau mu bdt pileup  #lephad kinematic  #pileup bdt tau jet kinematic lephad    #  pileup bdt tau #jet kinematic lephad   
#for loop in 0 #mutrig kinematic  #     bdt tau pileup mu jet kinematic lephad   
#for loop in jet kinematic lephad    #0 1 2  ###->region
do
    continue;
    root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"lephad_vis_mass\", 20,40,90 , ${s_pt} )" -l -b -q      		    	
    # root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"lephad_met_sum_cos_dphi\", 20,-1.5,1.5 , ${s_pt} )" -l -b -q
    # root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"lephad_mt_lep0_met\", 20,0,80 , ${s_pt} )" -l -b -q
    
    #root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_pt\", 11,70,180 , ${s_pt} )" -l -b -q
    #root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_pt\", 20,20,70 , ${s_pt} )" -l -b -q
    #continue;
    
    echo " ${code} );"
    echo 'all ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig}  ${s_pt} );'
    echo "all ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig}  ${s_pt} );"
    #root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"(tau_0_pt-tau_0_trig1_HLT_pt)/tau_0_pt\",  20,-0.1,0.1 , ${s_pt} )" -l -b -q
    
    if test ${loop} = highpt ;then
    	echo "${loop}  start..... "
	for bin in 10
	do

	    # root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_jet_bdt_score\",  ${bin} ,0.5,1 , ${s_pt} )" -l -b -q
	    # root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_pt\", 14,60,200 , ${s_pt} )" -l -b -q
    	    # root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_eta\", ${bin},-2.5,2.5 , ${s_pt} )" -l -b -q
    	    # root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_phi\", ${bin},-3.2,3.2 , ${s_pt} )" -l -b -q    	
    	    # root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_decay_mode\", 6,-0.5,5.5 , ${s_pt} )" -l -b -q
	    
	    # continue;
	    
	    # root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"lep_0_pt\", ${bin},20,100 , ${s_pt} )" -l -b -q
    	    # root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"lep_0_eta\", ${bin},-2.5,2.5 , ${s_pt} )" -l -b -q
    	    # root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"lep_0_phi\", ${bin},-3.2,3.2 , ${s_pt} )" -l -b -q
	    
    	    # root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"n_avg_int_cor\", 10,0,30, ${s_pt} )" -l -b -q
    	    # root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"n_vx\", 10,0,30, ${s_pt} )" -l -b -q
	    
	    # root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"lephad_vis_mass\", ${bin},40,90 , ${s_pt} )" -l -b -q      		    	
    	    # root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"lephad_met_sum_cos_dphi\", ${bin},-1.5,1.5 , ${s_pt} )" -l -b -q
    	    # root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"lephad_mt_lep0_met\", ${bin},0,80 , ${s_pt} )" -l -b -q

	    root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"lephad_dr\", ${bin},0,4 , ${s_pt} )" -l -b -q
    	    root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"lephad_dpt\", ${bin},-80,80 , ${s_pt} )" -l -b -q
    	    root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"lephad_dphi\", ${bin},0,3.2 , ${s_pt} )" -l -b -q
    	    root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"lephad_deta\", ${bin},0,4 , ${s_pt} )" -l -b -q
	done
	
    fi    

    
    if test ${loop} = mutrig ;then
    	echo "${loop}  start..... "
	root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"lep_0_pt\", 20,20,60 , ${s_pt} )" -l -b -q
    	root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"lep_0_eta\", 20,-2.5,2.5 , ${s_pt} )" -l -b -q
    	root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"lep_0_phi\", 20,-3.2,3.2 , ${s_pt} )" -l -b -q
	
	root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_jet_bdt_score\",  25,0.5,1 , ${s_pt} )" -l -b -q
	root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_pt\", 20,20,70 , ${s_pt} )" -l -b -q
    	root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_eta\", 20,-2.5,2.5 , ${s_pt} )" -l -b -q
    	root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_phi\", 20,-3.2,3.2 , ${s_pt} )" -l -b -q    	
    	root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_decay_mode\", 6,-0.5,5.5 , ${s_pt} )" -l -b -q
	
    	root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"n_avg_int_cor\", 15,0,30, ${s_pt} )" -l -b -q
    	root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"n_vx\", 15,0,30, ${s_pt} )" -l -b -q
	
	root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"lephad_vis_mass\", 20,40,90 , ${s_pt} )" -l -b -q      		    	
    	root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"lephad_met_sum_cos_dphi\", 20,-1.5,1.5 , ${s_pt} )" -l -b -q
    	root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"lephad_mt_lep0_met\", 20,0,80 , ${s_pt} )" -l -b -q
	
    fi    
    
    if test ${loop} = bdt ;then
    	echo "${loop}  start..... "
    	root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_jet_bdt_score\",  25,0.5,1 , ${s_pt} )" -l -b -q
	#root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_jet_bdt_score\",  20,0.6,1 , ${s_pt} )" -l -b -q
    fi
    
    if test ${loop} = tau ;then
    	echo "${loop}  start..... "   
	#root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_tauRec_pt\", 20,20,70 , ${s_pt} )" -l -b -q    	
	
	root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_pt\", 20,20,70 , ${s_pt} )" -l -b -q
    	root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_eta\", 20,-2.5,2.5 , ${s_pt} )" -l -b -q
    	root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_phi\", 20,-3.2,3.2 , ${s_pt} )" -l -b -q
    	root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_n_wide_tracks\", 5,-0.5,4.5 , ${s_pt} )" -l -b -q
    	root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_decay_mode\", 6,-0.5,5.5 , ${s_pt} )" -l -b -q
    	root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_n_tracks\", 5,-0.5,4.5 , ${s_pt} )" -l -b -q
    	root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_leadTrk_z0-lep_0_trk_z0\", 25,-1.5,1.5 , ${s_pt} )" -l -b -q 
    	root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_leadTrk_z0\", 25,-100,100 , ${s_pt} )" -l -b -q      		       
    fi
    
    if test ${loop} = pileup ;then
    	echo "${loop}  start..... "    
    	root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"n_avg_int_cor\", 15,0,30, ${s_pt} )" -l -b -q
    	root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"n_vx\", 15,0,30, ${s_pt} )" -l -b -q
    fi
    
    if test ${loop} = mu ;then
    	echo "${loop}  start..... "    
    	root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"lep_0_pt\", 20,20,60 , ${s_pt} )" -l -b -q
    	root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"lep_0_eta\", 20,-2.5,2.5 , ${s_pt} )" -l -b -q
    	root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"lep_0_phi\", 20,-3.2,3.2 , ${s_pt} )" -l -b -q
    	root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"lep_0_trk_d0\", 20,-0.5,0.5 , ${s_pt} )" -l -b -q
    	root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"lep_0_trk_z0\", 25,-100,100 , ${s_pt} )" -l -b -q      		    
    	root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"lep_0_trk_pvx_z0_sintheta\", 20,-0.2,0.2 , ${s_pt} )" -l -b -q	
    	root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"lep_0_iso_ptvarcone30\", 40,-0.1,0.3 , ${s_pt} )" -l -b -q
    	root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"lep_0_iso_topoetcone20\", 40,-0.1,0.3 , ${s_pt} )" -l -b -q
	
    #  #root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"lep_0_iso_ptvarcone20\", 60,-0.1.,0.5 , ${s_pt} )" -l -b -q
    #  # root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"lep_0_iso_ptvarcone40\", 60,-0.1.,0.5 , ${s_pt} )" -l -b -q
    #  # root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"lep_0_iso_topoetcone30\", 60,-0.1,0.5 , ${s_pt} )" -l -b -q
    #  # root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"lep_0_iso_topoetcone40\", 60,-0.1,0.5 , ${s_pt} )" -l -b -q
    #  # root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"lep_0_iso_ptcone20\", 60,-0.1.,0.5 , ${s_pt} )" -l -b -q    
    #  # root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"lep_0_iso_ptcone30\", 60,-0.1.,0.5 , ${s_pt} )" -l -b -q    
    #  # root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"lep_0_iso_ptcone40\", 60,-0.1.,0.5 , ${s_pt} )" -l -b -q    
    #  # root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"lep_0_iso_etcone20\", 60,-0.1.,0.5 , ${s_pt} )" -l -b -q    
    #  # root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"lep_0_iso_etcone30\", 60,-0.1.,0.5 , ${s_pt} )" -l -b -q    
    #  # root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"lep_0_iso_etcone40\", 60,-0.1.,0.5 , ${s_pt} )" -l -b -q    
    fi

    
    if test ${loop} = kinematic ;then
    	echo "${loop}  start..... "        
    	root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"lephad_vis_mass\", 20,40,90 , ${s_pt} )" -l -b -q      		    	
    	root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"lephad_met_sum_cos_dphi\", 20,-1.5,1.5 , ${s_pt} )" -l -b -q
    	root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"lephad_mt_lep0_met\", 20,0,80 , ${s_pt} )" -l -b -q
        # root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"lephad_vis_mass\", 20,20,120 , ${s_pt} )" -l -b -q      		    
    	# root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"lephad_met_sum_cos_dphi\", 20,-1.5,1.5 , ${s_pt} )" -l -b -q
    	# root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"lephad_mt_lep0_met\", 30,0,150 , ${s_pt} )" -l -b -q	
    fi
    
    
    if test ${loop} = jet ;then
    	echo "${loop}  start..... "        
    	root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"n_jets\",  6,-0.5,5.5 , ${s_pt} )" -l -b -q
    	root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"jet_0_pt\", 18,10,100 , ${s_pt} )" -l -b -q
    	root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"jet_0_eta\", 20,-5,5 , ${s_pt} )" -l -b -q
    	root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"jet_0_phi\", 20,-3.2,3.2 , ${s_pt} )" -l -b -q
    	root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"met_reco_et\", 20,0,100 , ${s_pt} )" -l -b -q
    	root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"met_reco_phi\", 20,-3.2,3.2 , ${s_pt} )" -l -b -q    
    	root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"lephad_met_centrality\", 20,-1.5,1.5 , ${s_pt} )" -l -b -q
    fi
    
    if test ${loop} = lephad ;then
    	echo "${loop}  start..... "        	
    	root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"lephad_dr\", 20,0,4 , ${s_pt} )" -l -b -q
    	root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"lephad_dpt\", 20,-40,40 , ${s_pt} )" -l -b -q
    	# root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"lephad_dphi\", 20,0,3.2 , ${s_pt} )" -l -b -q
    	# root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"lephad_deta\", 20,0,3 , ${s_pt} )" -l -b -q
    	# root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"lephad_cosalpha\", 22,-1.1,1.1 , ${s_pt} )" -l -b -q
    	# root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"lephad_met_min_dphi\", 20,0,2.5 , ${s_pt} )" -l -b -q
    	#root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"lephad_met_lep0_cos_dphi\", 20,0,3.2 , ${s_pt} )" -l -b -q
    fi


 ##################################################################
    if test ${trig} -ne 0 ;then                                                                                                                                                                                                         
    	root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"(tau_0_pt-tau_0_trig1_HLT_pt)/tau_0_pt\",  20,-0.1,0.1 , ${s_pt} )" -l -b -q
    fi
    
    

done
done
done
done
done
done
done
done

	

for code  in Nui
do
for period  in all
do
for i_prong in 0  1 3
do
for s_eta in 0  #1 3 4 5  ###->region
do
for s_tauID in 2 1 # 2 
do
for trig in 0 25  ##
do
for s_pt in 0 #96  #1 2  #1 3 4 5  ###->region
do	
    # root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_id_ipSigLeadTrkCorrected\", 15,-1,14 , ${s_pt} )" -l -b -q  #1p
    # root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_id_ipSigLeadTrk\", 15,-1,14 , ${s_pt} )" -l -b -q  #1p
    
    
    #continue;
    echo 'all ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig}  ${s_pt} );'
    echo "all ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig}  ${s_pt} );"
    
    echo "${i_prong}prong  start..... "
    echo '$....................... '
    # # # # #BDT para #need 1 3prongs
    
    root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_id_ptRatioEflowApproxCorrected\", 20,0.6,2 , ${s_pt} )" -l -b -q
    root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_id_centFracCorrected\", 20,0.4,1.1 , ${s_pt} )" -l -b -q
    root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_id_etOverPtLeadTrkCorrected\", 20,0,6 , ${s_pt} )" -l -b -q
    root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_id_innerTrkAvgDistCorrected\", 20,-0,0.15 , ${s_pt} )" -l -b -q
    root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_id_mEflowApproxCorrected\", 20,0,3*1000 , ${s_pt} )" -l -b -q
    root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_id_ChPiEMEOverCaloEMECorrected\", 20,-1,2 , ${s_pt} )" -l -b -q 
    root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_id_EMPOverTrkSysPCorrected\", 20,0,10 , ${s_pt} )" -l -b -q
    
    if test ${i_prong} -eq 1 ;then                                                                                                                                                                                                     
    	echo 1p                                                                                                                                                                                                                        
    	root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_id_ipSigLeadTrkCorrected\", 20,-0,15 , ${s_pt} )" -l -b -q  #1p
    	root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_id_SumPtTrkFracCorrected\", 20,-0.1,0.1 , ${s_pt} )" -l -b -q #1p
    fi    
    
    if test ${i_prong} -eq 3 ;then
    	echo 3p                                                                                                                                                                                                                        
    	root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_id_dRmaxCorrected\", 20,0,0.2 , ${s_pt} )" -l -b -q  #3p
    	root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_id_trFlightPathSigCorrected\", 20,-5,20 , ${s_pt} )" -l -b -q #3p
    	root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_id_massTrkSysCorrected\", 20,500,3*1000 , ${s_pt} )" -l -b -q  #3p
    fi



    #continue;
    root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_id_ptRatioEflowApprox\", 20,0.6,2 , ${s_pt} )" -l -b -q
    root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_id_centFrac\", 20,0.4,1.1 , ${s_pt} )" -l -b -q
    root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_id_etOverPtLeadTrk\", 20,0,6 , ${s_pt} )" -l -b -q
    root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_id_innerTrkAvgDist\", 20,-0,0.15 , ${s_pt} )" -l -b -q
    root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_id_mEflowApprox\", 20,0,3*1000 , ${s_pt} )" -l -b -q
    root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_id_ChPiEMEOverCaloEME\", 20,-1,2 , ${s_pt} )" -l -b -q 
    root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_id_EMPOverTrkSysP\", 20,0,10 , ${s_pt} )" -l -b -q
    
    if test ${i_prong} -eq 1 ;then                                                                                                                                                                                                     
    	echo 1p
        root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_id_ipSigLeadTrk\", 20,-0,15 , ${s_pt} )" -l -b -q  #1p
    	root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_id_SumPtTrkFrac\", 20,-0.1,0.1 , ${s_pt} )" -l -b -q #1p
    fi    
    
    if test ${i_prong} -eq 3 ;then
    	echo 3p                                   
    	root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_id_dRmax\", 20,0,0.2 , ${s_pt} )" -l -b -q  #3p
    	root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_id_trFlightPathSig\", 20,-5,20 , ${s_pt} )" -l -b -q #3p
    	root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_id_massTrkSys\", 20,500,3*1000 , ${s_pt} )" -l -b -q  #3p
    fi
    
    
    if test ${trig} -eq 0 ;then
	continue;
    fi
# # # # # # HLT-BDT para #need 1 3prongs && trigger
    
    
    root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_trig1_HLT_jet_bdt_score\",  16,0.4,1 , ${s_pt} )" -l -b -q
    
    root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_trig1_HLT_ptRatioEflowApproxCorrected\", 20,0.6,2 , ${s_pt} )" -l -b -q
    root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_trig1_HLT_centFracCorrected\", 20,0.4,1.1 , ${s_pt} )" -l -b -q
    root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_trig1_HLT_etOverPtLeadTrkCorrected\", 20,0,6 , ${s_pt} )" -l -b -q
    root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_trig1_HLT_innerTrkAvgDistCorrected\", 20,-0,0.15 , ${s_pt} )" -l -b -q
    root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_trig1_HLT_mEflowApproxCorrected\", 20,0,3*1000 , ${s_pt} )" -l -b -q
    root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_trig1_HLT_ChPiEMEOverCaloEMECorrected\", 20,-1,2 , ${s_pt} )" -l -b -q 
    root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_trig1_HLT_EMPOverTrkSysPCorrected\", 20,0,10 , ${s_pt} )" -l -b -q
    
    if test ${i_prong} -eq 1 ;then                                                                                                                                                                                                     
    	echo 1p                                                                                                                                                                                                                        
    	root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_trig1_HLT_ipSigLeadTrkCorrected\", 20,-0,15 , ${s_pt} )" -l -b -q  #1p
    	root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_trig1_HLT_SumPtTrkFracCorrected\", 20,-0.002,0.018 , ${s_pt} )" -l -b -q #1p
    fi    
    
    if test ${i_prong} -eq 3 ;then
    	echo 3p                                                                                                                                                                                                                        
    	root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_trig1_HLT_dRmaxCorrected\", 20,0,0.2 , ${s_pt} )" -l -b -q  #3p
    	root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_trig1_HLT_trFlightPathSigCorrected\", 20,-5,20 , ${s_pt} )" -l -b -q #3p
    	root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_trig1_HLT_massTrkSysCorrected\", 20,500,3*1000 , ${s_pt} )" -l -b -q  #3p
    fi
    
    
    
    
    root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_trig1_HLT_ptRatioEflowApprox\", 20,0.6,2 , ${s_pt} )" -l -b -q
    root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_trig1_HLT_centFrac\", 20,0.4,1.1 , ${s_pt} )" -l -b -q
    root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_trig1_HLT_etOverPtLeadTrk\", 20,0,6 , ${s_pt} )" -l -b -q
    root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_trig1_HLT_innerTrkAvgDist\", 20,-0,0.15 , ${s_pt} )" -l -b -q
    root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_trig1_HLT_mEflowApprox\", 20,0,3*1000 , ${s_pt} )" -l -b -q
    root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_trig1_HLT_ChPiEMEOverCaloEME\", 20,-1,2 , ${s_pt} )" -l -b -q 
    root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_trig1_HLT_EMPOverTrkSysP\", 20,0,10 , ${s_pt} )" -l -b -q
    
    if test ${i_prong} -eq 1 ;then                                                                                                                                                                                                     
    	echo 1p                                                                                                                                                                                                                        
    	root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_trig1_HLT_ipSigLeadTrk\", 20,-0,15 , ${s_pt} )" -l -b -q  #1p
    	root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_trig1_HLT_SumPtTrkFrac\", 20,-0.002,0.018 , ${s_pt} )" -l -b -q #1p
    fi    
    
    if test ${i_prong} -eq 3 ;then
    	echo 3p                                                                                                                                                                                                                        
    	root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_trig1_HLT_dRmax\", 20,0,0.2 , ${s_pt} )" -l -b -q  #3p
    	root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_trig1_HLT_trFlightPathSig\", 20,-5,20 , ${s_pt} )" -l -b -q #3p
    	root "${code}.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_trig1_HLT_massTrkSys\", 20,500,3*1000 , ${s_pt} )" -l -b -q  #3p
    fi
    


	
done	
done	
done	
done
done
done
done


