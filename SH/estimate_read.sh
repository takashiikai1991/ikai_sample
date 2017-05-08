



for i_prong in 0 1 3   #3para
do 
for s_eta in 0 1 2  # 0 1 2  #3para
do
for s_tauID in 2 #3 #2 #1 2 3 #1 2 3 # 0 1 2 3 7 8 #
do
for trig in 0  # 0 25 35 80 125 #5para
do    
    
    echo " read "
    root -l -b -q "read.C+( \"all\" , ${i_prong} , ${s_eta} , ${s_tauID} ,${trig} )"
    
done    
done
done
done


