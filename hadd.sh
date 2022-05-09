#!/bin/bash

input=FWLJMET102X_3lep2017_062019_wiwong_step1

postStr=hadds
output=$input$postStr

echo "HADDING NOMINAL"
python -u haddoutput.py $input $output nominal

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

