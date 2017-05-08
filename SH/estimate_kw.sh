
#for period in D G EFH23J EFGH23J all
for i_prong in 0 1 3 #0 1 3 #3para
do 
for s_eta in 0 # 1 2  # #3para
do
for s_tauID in 1 2  3  #3para
do
for Pt in 1 2   #3 4 5  #3para
do
for trig in 25  # 0 25 35 80 125 #5para
do    
for OSSS in 0 1   #2para 0or1
do
    
    root -l -b -q "kw2.C+( \"all\" , ${i_prong} , ${s_eta} , ${s_tauID} , ${OSSS} ,${Pt} ,${trig} )"

done
done
done
done
done
done
done
#done

