


for period  in all #A B C D
do
for i_prong in  1 3  #0  1 3
do
for s_eta in 0 #1 2   #0 1 2
do
for s_tauID in 2 #1 2 3 # 1  2 3  # 0 1 2 3
do
for trig in 0 25 #24 ##
do
for s_pt in 96 #0   #0 1 2  ###->region
do
    # 	root "Ztt2.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"jet_0_pt\", 18,10,100 , ${s_pt} )" -l -b -q
    # root "Ztt2.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"jet_0_jvt\", 30,-0.3,1.2 , ${s_pt} )" -l -b -q
    root "Ztt2.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_pt\", 14,60,200 , ${s_pt} )" -l -b -q
    #root "Ztt2.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"n_avg_int_cor\", 15,2,32, ${s_pt} )" -l -b -q
    #continue;
    echo "${i_prong}prong  start..... "
    echo "${i_prong}prong  start..... "
    echo "${i_prong}prong  start..... "
    
    
	# root "Ztt2.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"lephad_vis_mass\", 20,40,90 , ${s_pt} )" -l -b -q      		    	
    	# root "Ztt2.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"lephad_met_sum_cos_dphi\", 20,-1.5,1.5 , ${s_pt} )" -l -b -q
    	# root "Ztt2.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"lephad_mt_lep0_met\", 20,0,80 , ${s_pt} )" -l -b -q
    
    #root "Bin2.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_pt\", 20,20,70 , ${s_pt} )" -l -b -q
    # root "Ztt2.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_jet_bdt_score\",  25,0.5,1 , ${s_pt} )" -l -b -q
    # root "Ztt2.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_eta\", 20,-2.5,2.5 , ${s_pt} )" -l -b -q
    # root "Ztt2.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_phi\", 20,-3.2,3.2 , ${s_pt} )" -l -b -q    	
    
    

done
done
done
done
done
done

