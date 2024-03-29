#!/bin/bash

hostname

infilename=${1}
outfilename=${2}
inputDir=${3}
outputDir=${4}

scratch=${PWD}
macroDir=${PWD}
source /cvmfs/cms.cern.ch/cmsset_default.sh
export SCRAM_ARCH=slc7_amd64_gcc700
#scramv1 project CMSSW CMSSW_9_4_11
#cd CMSSW_9_4_11
scramv1 project CMSSW CMSSW_10_2_10
cd CMSSW_10_2_10
eval `scramv1 runtime -sh`
cd -

export PATH=$PATH:$macroDir

XRDpath=root://cmseos.fnal.gov/$inputDir
root -l -b -q makeStep1.C\(\"$macroDir\",\"$XRDpath/$infilename\",\"$outfilename\"\)

echo "ROOT Files:"
ls -l *.root

# copy output to eos

echo "xrdcp output for condor"
for FILE in *.root
do
  echo "xrdcp -f ${FILE} root://cmseos.fnal.gov/${outputDir}/${FILE}"
  xrdcp -f ${FILE} root://cmseos.fnal.gov/${outputDir}/${FILE} 2>&1
  XRDEXIT=$?
  if [[ $XRDEXIT -ne 0 ]]; then
    rm *.root
    echo "exit code $XRDEXIT, failure in xrdcp"
    exit $XRDEXIT
  fi
  rm ${FILE}
done
