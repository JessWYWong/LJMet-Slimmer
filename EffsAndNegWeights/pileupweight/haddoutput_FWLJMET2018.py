import os,sys,datetime,time,math
from ROOT import *
execfile("/uscms_data/d3/wywong/EOSSafeUtils.py")
import subprocess

start_time = time.time()

#IO directories must be full paths
input  = sys.argv[1]
output = sys.argv[2]

inputDir='/eos/uscms/store/user/wywong/'+input

outputDir='/eos/uscms/store/user/wywong/'+output

inDir=inputDir[10:]
outDir=outputDir[10:]

os.system('eos root://cmseos.fnal.gov/ mkdir -p '+outDir)

signalList = [
     'TprimeTprime_M-900_TuneCP5_PSweights_13TeV-madgraph-pythia8',
     #'TprimeTprime_M-1000_TuneCP5_PSweights_13TeV-madgraph-pythia8',
     #'TprimeTprime_M-1100_TuneCP5_PSweights_13TeV-madgraph-pythia8',
     #'TprimeTprime_M-1200_TuneCP5_PSweights_13TeV-madgraph-pythia8',
     #'TprimeTprime_M-1300_TuneCP5_PSweights_13TeV-madgraph-pythia8',
     #'TprimeTprime_M-1400_TuneCP5_PSweights_13TeV-madgraph-pythia8',
     #'TprimeTprime_M-1500_TuneCP5_PSweights_13TeV-madgraph-pythia8',
     #'TprimeTprime_M-1600_TuneCP5_PSweights_13TeV-madgraph-pythia8',
     #'TprimeTprime_M-1700_TuneCP5_PSweights_13TeV-madgraph-pythia8',
     #'TprimeTprime_M-1800_TuneCP5_PSweights_13TeV-madgraph-pythia8',
    ]
 
signalOutList = ['BWBW','TZBW','THBW','TZTH','TZTZ','THTH']
 
for sample in signalList:
    for outlabel in signalOutList:
        path =''
	while len([i for i in EOSlistdir(inputDir+'/'+sample+path) if '.root' in i])==0:
            if len(EOSlistSubdirs(inputDir+'/'+sample+path))==1:
	        path += '/'+EOSlistSubdirs(inputDir+'/'+sample+path)[0]
            else:
                print ('multiple dir')

        rootfiles = EOSlist_root_files(inputDir+'/'+sample+path) #+'_'+outlabel)
#        print 'N root files in',sample,'=',len(rootfiles)
        haddcommand = 'hadd -f root://cmseos.fnal.gov/'+outDir+'/'+sample+'_hadd.root ' #+'_'+outlabel+'_hadd.root '

        print '##########'*15
        print 'HADDING:', sample #,'_',outlabel
        print '##########'*15

        for file in rootfiles:
            haddcommand+=' root://cmseos.fnal.gov/'+inDir+'/'+sample+path+'/'+file # +'_'+outlabel+'/'+file
        os.system(haddcommand)

signalList = [
    #'BprimeBprime_M-1000_TuneCP5_PSweights_13TeV-madgraph-pythia8',
    #'BprimeBprime_M-1100_TuneCP5_PSweights_13TeV-madgraph-pythia8',
    #'BprimeBprime_M-1200_TuneCP5_PSweights_13TeV-madgraph-pythia8',
    #'BprimeBprime_M-1300_TuneCP5_PSweights_13TeV-madgraph-pythia8',
    #'BprimeBprime_M-1400_TuneCP5_PSweights_13TeV-madgraph-pythia8',
    #'BprimeBprime_M-1500_TuneCP5_PSweights_13TeV-madgraph-pythia8',
    #'BprimeBprime_M-1600_TuneCP5_PSweights_13TeV-madgraph-pythia8',
    #'BprimeBprime_M-1700_TuneCP5_PSweights_13TeV-madgraph-pythia8',
    #'BprimeBprime_M-1800_TuneCP5_PSweights_13TeV-madgraph-pythia8',
    ]

signalOutList = ['TWTW','BZTW','BHTW','BZBH','BZBZ','BHBH']

for sample in signalList:
    for outlabel in signalOutList:
        path =''
        while len([i for i in EOSlistdir(inputDir+'/'+sample+path) if '.root' in i])==0:
            if len(EOSlistSubdirs(inputDir+'/'+sample+path))==1:
                path += '/'+EOSlistSubdirs(inputDir+'/'+sample+path)[0]
            else:
                print ('multiple dir')

        rootfiles = EOSlist_root_files(inputDir+'/'+sample+path) #+'_'+outlabel)
#        print 'N root files in',sample,'=',len(rootfiles)
        haddcommand = 'hadd -f root://cmseos.fnal.gov/'+outDir+'/'+sample+'_hadd.root ' #+'_'+outlabel+'_hadd.root '

        print '##########'*15
        print 'HADDING:', sample #,'_',outlabel
        print '##########'*15

        for file in rootfiles:
            haddcommand+=' root://cmseos.fnal.gov/'+inDir+'/'+sample+path+'/'+file # +'_'+outlabel+'/'+file

        os.system(haddcommand)


dirList = [
	#### 2018 samples
	#'WZTo3LNu_TuneCP5_13TeV-powheg-pythia8', 
	#'ZZTo4L_TuneCP5_13TeV_powheg_pythia8', 
	#'ZZTo4L_TuneCP5_13TeV_powheg_pythia8-ext2', 
	#'WWW_4F_TuneCP5_13TeV-amcatnlo-pythia8', 
	#'WWZ_TuneCP5_13TeV-amcatnlo-pythia8', 
	##'WZZ_TuneCP5_13TeV-amcatnlo-pythia8', 
        #'WZZTo3L1Nu2Q_4f_TuneCP5_13TeV_amcatnlo_pythia8',
	#'ZZZ_TuneCP5_13TeV-amcatnlo-pythia8', 
	#'TTWJetsToLNu_TuneCP5_13TeV-amcatnloFXFX-madspin-pythia8', 
	#'TTZToLLNuNu_M-10_TuneCP5_13TeV-amcatnlo-pythia8', 
        #'DYJetsToLL_M-50_TuneCP5_13TeV-madgraphMLM-pythia8',
	#'TTTo2L2Nu_TuneCP5_13TeV-powheg-pythia8', #/singleLep2018triggerTnP1e1mu/210411_040637',
    ]

for sample in dirList:
    path =''
    subdir = ['']
    while len([i for i in EOSlistdir(inputDir+'/'+sample+path) if '.root' in i])==0:
        if len(EOSlistSubdirs(inputDir+'/'+sample+path))==1:
            path += '/'+EOSlistSubdirs(inputDir+'/'+sample+path)[0]
            print path
        else:
            subdir = EOSlistSubdirs(inputDir+'/'+sample+path)
            print ('multiple dir', subdir)
            break
    print path, subdir
    
    nFilesPerHadd = 500
    rootfiles = []
    for sub in subdir:
        if len([i for i in EOSlistdir(inputDir+'/'+sample+path+'/'+sub) if '.root' in i])==0:
            sub += '/'+EOSlistSubdirs(inputDir+'/'+sample+path+'/'+sub)[0]
        ListRootfiles = EOSlist_root_files(inputDir+'/'+sample+path+'/'+sub)
        for file in ListRootfiles:
            rootfiles.append(sub+'/'+file)
    print 'N root files in',sample,'/',sub,'=',len(rootfiles)

    haddcommand = 'hadd -f root://cmseos.fnal.gov/'+outDir+'/'+sample+'_hadd.root '

    print 'split into file extension ',range(int(math.ceil(len(rootfiles)/(nFilesPerHadd*1.0))))

    if len(rootfiles) < nFilesPerHadd:
        haddcommand = 'hadd -f root://cmseos.fnal.gov/'+outDir+'/'+sample+'_hadd.root '
        for file in rootfiles:
            haddcommand+=' root://cmseos.fnal.gov/'+inDir+'/'+sample+path+'/'+file
        os.system(haddcommand)
    else:
        for i in range(int(math.ceil(len(rootfiles)/(1.0*nFilesPerHadd)))):
            haddcommand = 'hadd -f root://cmseos.fnal.gov/'+outDir+'/'+sample+'_'+str(i+1)+'_hadd.root '
            begin=i*nFilesPerHadd
            end=begin+nFilesPerHadd
            if end > len(rootfiles) : end=len(rootfiles)
            print 'file ',i,' with root files ', begin, ' to ', end
            for j in range(begin,end):
                haddcommand+=' root://cmseos.fnal.gov/'+inDir+'/'+sample+path+'/'+rootfiles[j]
            os.system(haddcommand)

