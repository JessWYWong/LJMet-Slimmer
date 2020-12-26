#!/bin/bash

#input=FWLJMET102X_3lep2017_wywong_062019 #_wywong_step1_FRv1
input=FWLJMET102X_3lep2017_wywong_012020
#input=FWLJMET102X_3lep2018_wywong_022020

postStr=_hadds
output=$input$postStr
#output=FWLJMET102X_3lep2017_062019$postStr

echo "HADDING NOMINAL"
python -u haddoutput_FWLJMET.py $input $output nominal

# echo "HADDING JECUP"
# python -u haddoutput.py $input $output JECup
#
# echo "HADDING JECDOWN"
# python -u haddoutput.py $input $output JECdown
#
# echo "HADDING JERUP"
# python -u haddoutput.py $input $output JERup
#
# echo "HADDING JERDOWN"
# python -u haddoutput.py $input $output JERdown

echo "DONE"

