

# # # # for period in D G EFH23J EFGH23J all
for period  in all
do 
#for trig in 12 20 24    #50 80 125 160 #12 25 #35 125 #160 125 80  # 25 35 50 80 125 160
for trig in 25 50 79 80 125 160 # 25 35 50 79 80 125 160
#for trig in `seq 26 30 `  `seq 40 49` 
do

# for i_prong in 1 3 #1 # 0 1 3
# do
# for s_eta in  1 2
# do
# for s_tauID in 2 # 1 2 3  
# do

# for i_prong in 1 3 #1 # 0 1 3
# do
# for s_eta in  1 2
# do
# for s_tauID in 1 # 1 2 3  
# do

# for i_prong in 1 3 #1 # 0 1 3
# do
# for s_eta in  1 2
# do
# for s_tauID in 3 # 1 2 3  
# do

for s_tauID in 1 #2 3 #2 3  #2 3   #1 2 3   # 1 2 3  
do
for s_eta in 0 #1 2
do
for i_prong in 1 #3 #3    #1 # 0 1 3
do
    i_prong=$1
    s_tauID=$2
    
    
    echo Trig_sysSep.C		
    root -l -b -q "Trig_sys2.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} ,${trig} )" #>>  log_${i_prong}p_BDT${s_tauID}_${trig}.txt
    

done    
done
done
done
done

#sh SH/estimate_Z.sh



for period  in all
do
for i_prong in 0 1 3 
do
for s_eta in 0 
do
for s_tauID in 1 2 3
do
for trig in 80 125
do

    continue;
    echo Trig_sysSep.C
    #root -l -b -q "Trig_sysSep.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} ,${trig} )"


done    
done
done
done
done

