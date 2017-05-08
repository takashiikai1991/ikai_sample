

for i_prong in 0 # 1 3
do
for s_tauID in 2 # 1 2
do
for trig in  0 #
do
for s_pt in 0   
do

continue;
#root "QCD2.C+( \"all\" ,${i_prong} , 0 , ${s_tauID} , ${trig} ,\"tau_0_jet_bdt_score\",  35,0.3,1 , ${s_pt} )" -l -b -q
root "Ztt2.C+( \"all\" ,${i_prong} , 0 , ${s_tauID} , ${trig} ,\"tau_0_jet_bdt_score\",  35,0.3,1 , ${s_pt} )" -l -b -q

done
done
done
done

 
for i_prong in 0 #1 3
do
for s_tauID in 2 #1 2
do
for trig in  0 #
do
for s_pt in 0   
do
for OSSS in 2 3 #2 3
do

root "Wjets2.C+( \"all\" ,${i_prong} , 0 , ${s_tauID} , ${trig} , ${OSSS} ,\"tau_0_jet_bdt_score\",  35,0.3,1 , ${s_pt} )" -l -b -q

done
done
done
done
done
 

# sh /net/wpc17/scratch/ikai/cernbox/ZttGit/2016_Ztt_up/SH/estimate_kw.sh 
# sh /net/wpc17/scratch/ikai/cernbox/ZttGit/2016_Ztt_up/SH/estimate_Z.sh 


