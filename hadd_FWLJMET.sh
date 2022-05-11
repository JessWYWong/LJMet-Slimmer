#!/bin/bash

input=FWLJMET102X_3lep2018_wywong_052020_step1_FRv6_PRv4_ANv8_uFRupdate #_etaFR #_unityElPR

postStr=_hadds
output=$input$postStr

echo "HADDING NOMINAL"
python -u haddoutput_FWLJMET.py $input $output nominal

echo "DONE"

