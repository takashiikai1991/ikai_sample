
for i_prong in 0 #1 3 #0  1 3
do
for s_eta in 0 #1 2   #0 1 2
do
for s_tauID in  2  # 0 1 2 3
do
for trig in  25 #0 25 ##
do
    echo "${i_prong}prong  start..... "
    root "file_TGraph.C+( ${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"tau_0_pt\" )" -l -b -q
    #root "file_TGraph.C+( ${i_prong} , ${s_eta} , ${s_tauID} , ${trig} ,\"n_avg_int_cor\" )" -l -b -q
    
    #
    #continue;
    

done
done
done
done

