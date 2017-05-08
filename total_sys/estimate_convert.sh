

#for period in D G EFH23J EFGH23J all
# for period  in all
# do
#     for trig in 50 80 125
#     do
# 	for i_prong in  1 3 
# 	do
#             for s_eta in  0
#             do
# 		for s_tauID in 2 
# 		do
# 		    root -l -b -q "SF_sys.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} ,${trig} )"
# 		done    
# 	    done
# 	done
#     done
# done




for period  in all
do
for trig in 25 35 50 79 80 125 160
#for trig in 50 #35 #125 50   
do
for i_prong in  1 3 
do
for s_eta in  0 # 1 2
do
for s_tauID in   1 2 3 
do
    
    if test ${trig} -ge 78  ;then     
	if test ${s_eta} -ge 1  ;then     
	    continue;
	fi
    fi
    
    root -l -b -q "convert_SFfile.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} ,${trig} )"
    
done    
done
done
done
done



for period  in all
do
    for trig in 25  35 80 # 125
    do
	for i_prong in  3 #1 3 
	do
            for s_eta in   2
            do
		for s_tauID in  3 # 1 2 3 
		do
		    continue;
		    root -l -b -q "SF_sys.C+( \"${period}\" ,${i_prong} , ${s_eta} , ${s_tauID} ,${trig} )"
		done    
	    done
	done
    done
done

