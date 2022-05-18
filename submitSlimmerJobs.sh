#!/bin/bash

######### Check FR,PR in fakerate.h
######### Check input/outputs in runCondorSlimmerJobs.py
######### select correct step1.C below!

date

echo "SUBMITTING nominal"

python -u runCondorSlimmerJobs.py nominal

sleep 5

echo "DONE"

date

