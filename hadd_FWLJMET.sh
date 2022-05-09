#!/bin/bash

#input=FWLJMET102X_3lep2017_wywong_102019_saveLooseLep
#input=FWLJMET102X_3lep2017_wywong_102019_saveLooseLep_ttClosureCount_step1_FRv2
#input=FWLJMET102X_3lep2017_wywong_102019_step1_FRv2_UnityElPR
#input=FWLJMET102X_3lep2017_wywong_012020_step1_flatFRv4_TrigEff_uFR
#input=FWLJMET102X_3lep2018_wywong_052020_step1_FRv1_TrigEff
#input=FWLJMET102X_3lep2018_wywong_052020_step1_FRv2_PRv2
#input=FWLJMET102X_3lep2018_wywong_052020_step1_FRv2_PRv2_etaFR
#input=FWLJMET102X_3lep2018_wywong_052020_step1_etaFRv2_DeepCSV
#input=FWLJMET102X_3lep2018_wywong_052020_step1_FRv2_PRv2_elIdSys_TrigEffWeight_pdfNew
#input=FWLJMET102X_3lep2018_wywong_052020_step1_FRv2_PRv2_elIdSys_TrigEffWeight_pdf4LHC
#input=FWLJMET102X_3lep2018_wywong_052020_step1_FRv3_PRv3_rereco
#input=FWLJMET102X_3lep2018_wywong_052020_step1_FRv3_PRv3_rereco_unityMuPR
#input=FWLJMET102X_3lep2018_wywong_052020_step1_FRv3_PRv3_rereco_etaFR
input=FWLJMET102X_3lep2018_wywong_052020_step1_FRv6_PRv4_ANv8_uFRupdate #_etaFR #_unityElPR
#_unityElPR

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

