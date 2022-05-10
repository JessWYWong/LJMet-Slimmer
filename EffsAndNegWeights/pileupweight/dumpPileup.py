import os,sys
from ROOT import *

inDir = "/store/user/wywong/FWLJMET102X_3lep2017_wywong_012020_hadds/"

MClist = [
#### 2017
	#"TTWJetsToLNu_TuneCP5_13TeV-amcatnloFXFX-madspin-pythia8_hadd.root", 
	#"TTZToLLNuNu_M-10_TuneCP5_13TeV-amcatnlo-pythia8_hadd.root", 
	#"WWW_4F_TuneCP5_13TeV-amcatnlo-pythia8_hadd.root", 
	#"WWZ_4F_TuneCP5_13TeV-amcatnlo-pythia8_hadd.root", 
	#"WZTo3LNu_TuneCP5_13TeV-amcatnloFXFX-pythia8_hadd.root", 
	#"WZZ_TuneCP5_13TeV-amcatnlo-pythia8_hadd.root", 
	#"ZZTo4L_13TeV_powheg_pythia8_hadd.root", 
	#"ZZZ_TuneCP5_13TeV-amcatnlo-pythia8_hadd.root", 

	"BprimeBprime_M-900_TuneCP5_13TeV-madgraph-pythia8_hadd.root", 
	#"BprimeBprime_M-1000_TuneCP5_13TeV-madgraph-pythia8_hadd.root", 
	#"BprimeBprime_M-1100_TuneCP5_13TeV-madgraph-pythia8_hadd.root", 
	#"BprimeBprime_M-1200_TuneCP5_13TeV-madgraph-pythia8_hadd.root", 
	#"BprimeBprime_M-1300_TuneCP5_13TeV-madgraph-pythia8_hadd.root", 
	#"BprimeBprime_M-1400_TuneCP5_13TeV-madgraph-pythia8_hadd.root", 
	#"BprimeBprime_M-1500_TuneCP5_13TeV-madgraph-pythia8_hadd.root", 
	#"BprimeBprime_M-1600_TuneCP5_13TeV-madgraph-pythia8_hadd.root", 
	#"BprimeBprime_M-1700_TuneCP5_13TeV-madgraph-pythia8_hadd.root", 
	#"BprimeBprime_M-1800_TuneCP5_13TeV-madgraph-pythia8_hadd.root", 
	#"TprimeTprime_M-1000_TuneCP5_13TeV-madgraph-pythia8_hadd.root", 
	#"TprimeTprime_M-1100_TuneCP5_13TeV-madgraph-pythia8_hadd.root", 
	#"TprimeTprime_M-1200_TuneCP5_13TeV-madgraph-pythia8_hadd.root", 
	#"TprimeTprime_M-1300_TuneCP5_13TeV-madgraph-pythia8_hadd.root", 
	#"TprimeTprime_M-1400_TuneCP5_13TeV-madgraph-pythia8_hadd.root", 
	#"TprimeTprime_M-1500_TuneCP5_13TeV-madgraph-pythia8_hadd.root", 
	#"TprimeTprime_M-1600_TuneCP5_13TeV-madgraph-pythia8_hadd.root", 
	#"TprimeTprime_M-1700_TuneCP5_13TeV-madgraph-pythia8_hadd.root", 
	#"TprimeTprime_M-1800_TuneCP5_13TeV-madgraph-pythia8_hadd.root", 
	#"TTTo2L2Nu_TuneCP5_PSweights_13TeV-powheg-pythia8_hadd.root",
	#"TprimeTprime_M-1000_TuneCP5_13TeV-madgraph-pythia8_hadd.root", 
	#"TprimeTprime_M-1100_TuneCP5_13TeV-madgraph-pythia8_hadd.root", 
	#"TprimeTprime_M-1200_TuneCP5_13TeV-madgraph-pythia8_hadd.root",
	#"TprimeTprime_M-1800_TuneCP5_13TeV-madgraph-pythia8_hadd.root", 
        #"BprimeBprime_M-1000_TuneCP5_13TeV-madgraph-pythia8_hadd.root",
        #"BprimeBprime_M-1600_TuneCP5_13TeV-madgraph-pythia8_hadd.root", 
]

DATACENTRAL = TFile.Open("PileupHistogram-goldenJSON-13tev-2017-69200ub.root")
dataCentral = DATACENTRAL.Get("pileup")
DATADOWN = TFile.Open("PileupHistogram-goldenJSON-13tev-2017-66000ub.root")
dataDown = DATADOWN.Get("pileup")
DATAUP = TFile.Open("PileupHistogram-goldenJSON-13tev-2017-72400ub.root")
dataUp = DATAUP.Get("pileup")
dataCentral.SetDirectory(0)
dataDown.SetDirectory(0)
dataUp.SetDirectory(0)
dataCentral.Scale(1.0/dataCentral.Integral());
dataDown.Scale(1.0/dataDown.Integral());
dataUp.Scale(1.0/dataUp.Integral());

ratioCentral = dataCentral.Clone("ratioCentral");
ratioDown = dataDown.Clone("ratioDown");
ratioUp = dataUp.Clone("ratioUp");

sys.stdout = open('PUweights.h', 'w')
print('#ifndef PUWEIGHTS_H')
print('#define PUWEIGHTS_H')
print('#include "vector"')
print('#include <TString.h>')
print('#include <map>')
print('#include <string.h>')
print('using namespace std;')
print('')

print('class PUweights{')
print('public:')
print('    double GetPUcentral(string FileName, int index){return pileup_central.at(FileName).at(index);}')
print('    double GetPUup(string FileName, int index){return pileup_up.at(FileName).at(index);}')
print('    double GetPUdown(string FileName, int index){return pileup_down.at(FileName).at(index);}')

print('')
print('private:')

print('map<string, vector<double> > pileup_central={')
for MC in MClist:
    SampleName = MC[:-10]
    MCfile = TFile.Open('root://cmseos.fnal.gov/'+inDir+MC)
    MChist = MCfile.Get("mcweightanalyzer/NumTrueHist") ## for FWLJMET
    MChist.SetDirectory(0);
    MChist.Scale(1.0/MChist.Integral())

    ratioCentral.Divide(dataCentral,MChist,1,1)

    print('{ "'+SampleName+'", {'),
    for ibin in range(1,ratioCentral.GetNbinsX()+2):
        print('%.3e, ' % ratioCentral.GetBinContent(ibin)),

    print('} },')
    MCfile.Close()
print('};')

print('map<string, vector<double> > pileup_down={')
for MC in MClist:
    SampleName = MC[:-10]
    MCfile = TFile.Open('root://cmseos.fnal.gov/'+inDir+MC)
    MChist = MCfile.Get("mcweightanalyzer/NumTrueHist")
    MChist.SetDirectory(0);
    MChist.Scale(1.0/MChist.Integral())

    ratioDown.Divide(dataDown,MChist,1,1)

    print('{ "'+SampleName+'", {'),
    for ibin in range(1,ratioDown.GetNbinsX()+2):
        print('%.3e, ' % ratioDown.GetBinContent(ibin)),

    print('} },')
    MCfile.Close()
print('};')

print('map<string, vector<double> > pileup_up={')
for MC in MClist:
    SampleName = MC[:-10]
    MCfile = TFile.Open('root://cmseos.fnal.gov/'+inDir+MC)
    MChist = MCfile.Get("mcweightanalyzer/NumTrueHist")
    MChist.SetDirectory(0);
    MChist.Scale(1.0/MChist.Integral())

    ratioUp.Divide(dataUp,MChist,1,1)

    print('{ "'+SampleName+'", {'),
    for ibin in range(1,ratioUp.GetNbinsX()+2):
        print('%.3e, ' % ratioUp.GetBinContent(ibin)),

    print('} },')
    MCfile.Close()
print('};')

print('};')
print('#endif')
