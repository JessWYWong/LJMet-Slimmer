#!/bin/bash

######### Check FR,PR in fakerate_3lep_ptEta_rizki.h
######### Check input/outputs in runCondorSlimmerJobs.py
######### select correct step1.C below!

date

#source switchTo_LJMet94x_rizki_2017data_8Nov2018.sh #1st attempt for 2017data

echo "SUBMITTING nominal"

python -u runCondorSlimmerJobs.py nominal

sleep 5

# echo "SUBMITTING JECup"
#
# python -u runCondorSlimmerJobs.py JECup
#
# sleep 5
#
# echo "SUBMITTING JECdown"
#
# python -u runCondorSlimmerJobs.py JECdown
#
# sleep 5
#
# echo "SUBMITTING JERup"
#
# python -u runCondorSlimmerJobs.py JERup
#
# sleep 5
#
# echo "SUBMITTING JERdown"
#
# python -u runCondorSlimmerJobs.py JERdown
#
# sleep 5

echo "DONE"

date

