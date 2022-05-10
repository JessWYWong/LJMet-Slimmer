import os,sys,datetime,time,math
import subprocess
from ROOT import *
execfile("/uscms_data/d3/wywong/EOSSafeUtils.py")

start_time = time.time()

#IO directories must be full paths
input  = sys.argv[1]
output = sys.argv[2]

inputDir='/eos/uscms/store/user/wywong/'+input

outputDir='/eos/uscms/store/user/wywong/'+output #+'/'+shift


inDir=inputDir[10:]
outDir=outputDir[10:]

os.system('eos root://cmseos.fnal.gov/ mkdir -p '+outDir)

newsignalList = [
     #'X53X53_M-900_RH_TuneCP5_13TeV-madgraph-pythia8',
     #'X53X53_M-1000_RH_TuneCP5_13TeV-madgraph-pythia8',
     #'X53X53_M-1100_RH_TuneCP5_13TeV-madgraph-pythia8',
     #'X53X53_M-1200_RH_TuneCP5_13TeV-madgraph-pythia8',
     #'X53X53_M-1300_RH_TuneCP5_13TeV-madgraph-pythia8',
     #'X53X53_M-1400_RH_TuneCP5_13TeV-madgraph-pythia8',
     #'X53X53_M-1600_RH_TuneCP5_13TeV-madgraph-pythia8',
     #'X53X53_M-1700_RH_TuneCP5_13TeV-madgraph-pythia8',

     #'X53X53_M-1100_LH_TuneCP5_13TeV-madgraph-pythia8',
     #'X53X53_M-1200_LH_TuneCP5_13TeV-madgraph-pythia8',
     #'X53X53_M-1400_LH_TuneCP5_13TeV-madgraph-pythia8',
     #'X53X53_M-1500_LH_TuneCP5_13TeV-madgraph-pythia8',
     #'X53X53_M-1700_LH_TuneCP5_13TeV-madgraph-pythia8',
]
signalOutList = ['TWTW']
for sample in newsignalList:
    for outlabel in signalOutList:
        rootfiles = EOSlist_root_files(inputDir+'/'+sample+'_'+outlabel)

        print '##########'*15
        print 'HADDING:', sample#,'_',outlabel
        print '##########'*15

        print 'N root files in',sample,'=',len(rootfiles)

        haddcommand = 'hadd -f root://cmseos.fnal.gov/'+outDir+'/'+sample+'_'+outlabel+'_hadd.root '

	nFilesPerHadd = 500
	print 'split into file extension ',range(int(math.ceil(len(rootfiles)/(nFilesPerHadd*1.0))))

	if len(rootfiles) < nFilesPerHadd:
		haddcommand = 'hadd -f /eos/uscms/'+outDir+'/'+sample+'_'+outlabel+'_hadd.root '

	        for file in rootfiles:
			if os.path.getsize('/eos/uscms/'+inDir+'/'+sample+'_'+outlabel+'/'+file) < 1501: continue
            		haddcommand+=' root://cmseos.fnal.gov/'+inDir+'/'+sample+'_'+outlabel+'/'+file
		os.system(haddcommand)
	else:
		for i in range(int(math.ceil(len(rootfiles)/(1.0*nFilesPerHadd)))):
			haddcommand = 'hadd -f /eos/uscms/'+outDir+'/'+sample+'_'+outlabel+'_'+str(i+1)+'_hadd.root '
			begin=i*nFilesPerHadd
		        end=begin+nFilesPerHadd
            		if end >len(rootfiles) : end=len(rootfiles)
           		print 'file ',i,' with root files ', begin, ' to ', end
            		for j in range(begin,end):
				if os.path.getsize('/eos/uscms/'+inDir+'/'+sample+'_'+outlabel+'/'+rootfiles[j]) < 1501: continue
				haddcommand+=' root://cmseos.fnal.gov/'+inDir+'/'+sample+'_'+outlabel+'/'+rootfiles[j]
        		os.system(haddcommand)

signalList = [
     #'TprimeTprime_M-700_TuneCP5_13TeV-madgraph-pythia8',
     'TprimeTprime_M-1000_TuneCP5_13TeV-madgraph-pythia8',
     #'TprimeTprime_M-1100_TuneCP5_13TeV-madgraph-pythia8',
     #'TprimeTprime_M-1200_TuneCP5_13TeV-madgraph-pythia8',
     #'TprimeTprime_M-1300_TuneCP5_13TeV-madgraph-pythia8',
     #'TprimeTprime_M-1400_TuneCP5_13TeV-madgraph-pythia8',
     'TprimeTprime_M-1500_TuneCP5_13TeV-madgraph-pythia8',
     #'TprimeTprime_M-1600_TuneCP5_13TeV-madgraph-pythia8',
     #'TprimeTprime_M-1700_TuneCP5_13TeV-madgraph-pythia8',
     #'TprimeTprime_M-1800_TuneCP5_13TeV-madgraph-pythia8',
    ]
 
signalOutList = ['BWBW','TZBW','THBW','TZTH','TZTZ','THTH']
 
for sample in signalList:
    for outlabel in signalOutList:
        rootfiles = EOSlist_root_files(inputDir+'/'+sample+'_'+outlabel)
#        print 'N root files in',sample,'=',len(rootfiles)
        haddcommand = 'hadd -f root://cmseos.fnal.gov/'+outDir+'/'+sample+'_'+outlabel+'_hadd.root '

        print '##########'*15
        print 'HADDING:', sample#,'_',outlabel
        print '##########'*15

        for file in rootfiles:
            haddcommand+=' root://cmseos.fnal.gov/'+inDir+'/'+sample+'_'+outlabel+'/'+file

        os.system(haddcommand)

signalList = [
    #'BprimeBprime_M-900_TuneCP5_13TeV-madgraph-pythia8',
    #'BprimeBprime_M-1000_TuneCP5_13TeV-madgraph-pythia8',
    #'BprimeBprime_M-1100_TuneCP5_13TeV-madgraph-pythia8',
    #'BprimeBprime_M-1200_TuneCP5_13TeV-madgraph-pythia8',
    #'BprimeBprime_M-1300_TuneCP5_13TeV-madgraph-pythia8',
    #'BprimeBprime_M-1400_TuneCP5_13TeV-madgraph-pythia8',
    #'BprimeBprime_M-1500_TuneCP5_13TeV-madgraph-pythia8',
    #'BprimeBprime_M-1600_TuneCP5_13TeV-madgraph-pythia8',
    #'BprimeBprime_M-1700_TuneCP5_13TeV-madgraph-pythia8',
    #'BprimeBprime_M-1800_TuneCP5_13TeV-madgraph-pythia8',
    ]

signalOutList = ['']
signalOutList = ['TWTW','BZTW','BHTW','BZBH','BZBZ','BHBH']

for sample in signalList:
    for outlabel in signalOutList:
        rootfiles = EOSlist_root_files(inputDir+'/'+sample+'_'+outlabel)
#        print 'N root files in',sample,'=',len(rootfiles)
        haddcommand = 'hadd -f root://cmseos.fnal.gov/'+outDir+'/'+sample+'_'+outlabel+'_hadd.root '

        print '##########'*15
        print 'HADDING:', sample#,'_',outlabel
        print '##########'*15

        nFile = 0
        for file in rootfiles:
            if os.path.getsize('/eos/uscms/'+inDir+'/'+sample+'_'+outlabel+'/'+file) < 1501: continue
            haddcommand+=' root://cmseos.fnal.gov/'+inDir+'/'+sample+'_'+outlabel+'/'+file
            nFile += 1

	print nFile
        if nFile > 0: os.system(haddcommand)

dirList = [
	#### new signal samples (no decay!)
        #'TTTT_TuneCP5_PSweights_13TeV-amcatnlo-pythia8_correctnPartonsInBorn',

	################# FWLJMET ######################
        'TTWJetsToLNu_TuneCP5_13TeV-amcatnloFXFX-madspin-pythia8/0000',
        'TTZToLLNuNu_M-10_TuneCP5_13TeV-amcatnlo-pythia8/0000',
        'WWW_4F_TuneCP5_13TeV-amcatnlo-pythia8/0000',
        'WWZ_4F_TuneCP5_13TeV-amcatnlo-pythia8/0000',
        'WZTo3LNu_TuneCP5_13TeV-amcatnloFXFX-pythia8/0000',
        'WZZ_TuneCP5_13TeV-amcatnlo-pythia8/0000',
        'WZZTo3L1Nu2Q_4f_TuneCP5_13TeV_amcatnlo_pythia8/0000',
        'WZZ_ZTo2L_WToAll_4f_TuneCP5_13TeV_amcatnlo_pythia8/0000',
        'ZZTo4L_13TeV_powheg_pythia8/0000',
        'ZZZ_TuneCP5_13TeV-amcatnlo-pythia8/0000',
        
        'DoubleEGRun2017B/0000',
        'DoubleEGRun2017E/0000',
        'DoubleEGRun2017C/0000',
        'DoubleEGRun2017F/0000',
        'DoubleEGRun2017D/0000',
        'DoubleMuonRun2017C/0000',
        'DoubleMuonRun2017F/0000',
        'DoubleMuonRun2017D/0000',
        'DoubleMuonRun2017B/0000',
        'DoubleMuonRun2017E/0000',
        'MuonEGRun2017C/0000',
        'MuonEGRun2017F/0000',
        'MuonEGRun2017D/0000',
        'MuonEGRun2017B/0000',
        'MuonEGRun2017E/0000',

	#'TTTo2L2Nu_TuneCP5_PSweights_13TeV-powheg-pythia8/0000',
	#'TTTo2L2Nu_TuneCP5_PSweights_13TeV-powheg-pythia8/0001',
	
    ]

for samplePath in dirList:

    rootfiles = EOSlist_root_files(inputDir+'/'+samplePath)
    sample = samplePath.split('/')[0]
    
    print 'N root files in',sample,'=',len(rootfiles)
    haddcommand = 'hadd -f /eos/uscms/'+outDir+'/'+sample+'_hadd.root '

    nFilesPerHadd = 400
    #print 'len(rootfiles)/nFilesPerHadd = ', len(rootfiles), '/',nFilesPerHadd,' = ', len(rootfiles)/(nFilesPerHadd*1.0)
    print 'split into file extension ',range(int(math.ceil(len(rootfiles)/(nFilesPerHadd*1.0))))

    if len(rootfiles) < nFilesPerHadd:
        haddcommand = 'hadd -f /eos/uscms/'+outDir+'/'+sample+'_hadd.root '
        for file in rootfiles:
            if os.path.getsize('/eos/uscms/'+inDir+'/'+samplePath+'/'+file) < 1501: continue
            haddcommand+=' root://cmseos.fnal.gov/'+inDir+'/'+samplePath+'/'+file
        os.system(haddcommand)
    else:
        for i in range(int(math.ceil(len(rootfiles)/(1.0*nFilesPerHadd)))):
            haddcommand = 'hadd -f /eos/uscms/'+outDir+'/'+sample+'_'+str(i+1)+'_hadd.root '
            begin=i*nFilesPerHadd
            end=begin+nFilesPerHadd
            if end >len(rootfiles) : end=len(rootfiles)
            print 'file ',i,' with root files ', begin, ' to ', end
            for j in range(begin,end):
                haddcommand+=' root://cmseos.fnal.gov/'+inDir+'/'+samplePath+'/'+rootfiles[j]
            os.system(haddcommand)
