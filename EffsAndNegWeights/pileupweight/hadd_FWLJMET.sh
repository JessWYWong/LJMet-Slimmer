#!/bin/bash

input=FWLJMET102X_3lep2017_wywong_012020

postStr=_hadds
output=$input$postStr

echo "HADDING NOMINAL"
python -u haddoutput_FWLJMET.py $input $output nominal

echo "DONE"

