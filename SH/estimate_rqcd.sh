

for i_prong in 0  1 3   #3para
do 
for s_eta in 0 #1 2  # 0 1 2  #3para
do
for s_tauID in 1 2 3 #3 #2 #1 2 3 #1 2 3 # 0 1 2 3 7 8 #
do
for Pt in 96 #1 2 # `seq 51 63`  #1 2 # 3 4 5 #1 2  #0 1 2 #3para
do
for trig in 25  # 0 25 35 80 125 #5para
do    
for var in  3 4 #2para
do
    echo " rqcd"
    root -l -b -q "rqcd2.C+( \"all\" ,${i_prong} , ${s_eta} , ${s_tauID} ,${var} ,${Pt} ,${trig} )"


done    
done    
done    
done
done
done


