#!/bin/bash

input=FWLJMET102X_3lep2018_wywong_052020
#input=FWLJMET102X_1lep2018triggerTnP_wywong_082021_1e1mu

postStr=_hadds
output=$input$postStr

echo "HADDING NOMINAL"
python -u haddoutput_FWLJMET2018.py $input $output nominal

echo "DONE"

