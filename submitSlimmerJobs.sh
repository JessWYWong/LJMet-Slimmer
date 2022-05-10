#!/bin/bash

######### Check FR,PR in fakerate_3lep_ptEta_rizki.h
######### Check input/outputs in runCondorSlimmerJobs.py
######### select correct step1.C below!

date

echo "SUBMITTING nominal"

python -u runCondorSlimmerJobs.py nominal

sleep 5

echo "DONE"

date

