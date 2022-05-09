#!/bin/bash

#input=FWLJMET102X_3lep2017_wywong_102019_saveLooseLep
#input=FWLJMET102X_3lep2017_wywong_102019_saveLooseLep_ttClosureCount_step1_FRv2
#input=FWLJMET102X_3lep2017_wywong_102019_step1_FRv2_UnityElPR
#input=FWLJMET102X_3lep2017_wywong_012020_step1_FRv4_uFR
#input=FWLJMET102X_3lep2017_wywong_012020_step1_FRv4_prefiring
#input=FWLJMET102X_3lep2017_wywong_012020_step1_etaFRv5
#input=FWLJMET102X_3lep2017_wywong_012020_step1_FRv5_PRv2_prefiring_etaFR #_muPR
#input=FWLJMET102X_3lep2017_wywong_012020_step1_FRv5_PRv2_prefire_elIdSys_TrigEffWeight_pdfNew
#input=FWLJMET102X_3lep2017_wywong_012020_step1_FRv5_PRv2_prefire_elIdSys_TrigEffWeight_pdf4LHC
#input=FWLJMET102X_3lep2017_wywong_012020_step1_FRv5_PRv2_prefire_elIdSys_TrigEffWeight_pdf4LHC_etaFR
input=FWLJMET102X_3lep2017_wywong_012020_step1_FRv5_PRv4_ANv8_uFRupdate #_etaFR #_unityElPR
#_etaFR

postStr=_hadds
output=$input$postStr

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

