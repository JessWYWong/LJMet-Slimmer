import os,sys,datetime,time,math
from ROOT import *
execfile("/uscms_data/d3/wywong/EOSSafeUtils.py")

start_time = time.time()

#IO directories must be full paths
input  = sys.argv[1]
output = sys.argv[2]
#shift = sys.argv[3]

#inputDir='/eos/uscms/store/group/lpcljm/'+input #+'/'+shift
inputDir='/eos/uscms/store/user/wywong/'+input

outputDir='/eos/uscms/store/user/wywong/'+output #+'/'+shift


inDir=inputDir[10:]
outDir=outputDir[10:]

os.system('eos root://cmseos.fnal.gov/ mkdir -p '+outDir)

signalList = [
#     'TprimeTprime_M-700_TuneCP5_13TeV-madgraph-pythia8',
     #'TprimeTprime_M-1000_TuneCP5_13TeV-madgraph-pythia8',
     #'TprimeTprime_M-1100_TuneCP5_13TeV-madgraph-pythia8',
     #'TprimeTprime_M-1200_TuneCP5_13TeV-madgraph-pythia8',
     #'TprimeTprime_M-1300_TuneCP5_13TeV-madgraph-pythia8',
     #'TprimeTprime_M-1400_TuneCP5_13TeV-madgraph-pythia8',
     #'TprimeTprime_M-1500_TuneCP5_13TeV-madgraph-pythia8',
     #'TprimeTprime_M-1600_TuneCP5_13TeV-madgraph-pythia8',
     #'TprimeTprime_M-1700_TuneCP5_13TeV-madgraph-pythia8',
     #'TprimeTprime_M-1800_TuneCP5_13TeV-madgraph-pythia8',
    ]
 
signalOutList = [''] #'BWBW','TZBW','THBW','TZTH','TZTZ','THTH']
signalOutList = ['BWBW','TZBW','THBW','TZTH','TZTZ','THTH']
 
for sample in signalList:
    for outlabel in signalOutList:
        rootfiles = EOSlist_root_files(inputDir+'/'+sample+'_'+outlabel)
        #rootfiles = EOSlist_root_files(inputDir+'/'+sample) #+'_'+outlabel)
#        print 'N root files in',sample,'=',len(rootfiles)
        haddcommand = 'hadd -f root://cmseos.fnal.gov/'+outDir+'/'+sample+'_'+outlabel+'_hadd.root '
        #haddcommand = 'hadd -f root://cmseos.fnal.gov/'+outDir+'/'+sample+'_hadd.root ' #+'_'+outlabel+'_hadd.root '

        print '##########'*15
        print 'HADDING:', sample#,'_',outlabel
        print '##########'*15

        for file in rootfiles:
            haddcommand+=' root://cmseos.fnal.gov/'+inDir+'/'+sample+'_'+outlabel+'/'+file
            #haddcommand+=' root://cmseos.fnal.gov/'+inDir+'/'+sample+'/'+file# +'_'+outlabel+'/'+file

        os.system(haddcommand)
#        print haddcommand


signalList = [
    'BprimeBprime_M-900_TuneCP5_13TeV-madgraph-pythia8',
    'BprimeBprime_M-1000_TuneCP5_13TeV-madgraph-pythia8',
    'BprimeBprime_M-1100_TuneCP5_13TeV-madgraph-pythia8',
    'BprimeBprime_M-1200_TuneCP5_13TeV-madgraph-pythia8',
    'BprimeBprime_M-1300_TuneCP5_13TeV-madgraph-pythia8',
    'BprimeBprime_M-1400_TuneCP5_13TeV-madgraph-pythia8',
    'BprimeBprime_M-1500_TuneCP5_13TeV-madgraph-pythia8',
    'BprimeBprime_M-1600_TuneCP5_13TeV-madgraph-pythia8',
    'BprimeBprime_M-1700_TuneCP5_13TeV-madgraph-pythia8',
    'BprimeBprime_M-1800_TuneCP5_13TeV-madgraph-pythia8',
    ]

signalOutList = ['']
signalOutList = ['TWTW','BZTW','BHTW','BZBH','BZBZ','BHBH']

for sample in signalList:
    for outlabel in signalOutList:
        rootfiles = EOSlist_root_files(inputDir+'/'+sample+'_'+outlabel)
        #rootfiles = EOSlist_root_files(inputDir+'/'+sample)#+'_'+outlabel)
#        print 'N root files in',sample,'=',len(rootfiles)
        haddcommand = 'hadd -f root://cmseos.fnal.gov/'+outDir+'/'+sample+'_'+outlabel+'_hadd.root '
	#haddcommand = 'hadd -f ./'+sample+'_'+outlabel+'_hadd.root '
        #haddcommand = 'hadd root://cmseos.fnal.gov/'+outDir+'/'+sample+'_hadd.root ' #+'_'+outlabel+'_hadd.root '

        print '##########'*15
        print 'HADDING:', sample#,'_',outlabel
        print '##########'*15

        nFile = 0
        for file in rootfiles:
            if os.path.getsize('/eos/uscms/'+inDir+'/'+sample+'_'+outlabel+'/'+file) < 1501: continue
            haddcommand+=' root://cmseos.fnal.gov/'+inDir+'/'+sample+'_'+outlabel+'/'+file
            #haddcommand+=' root://cmseos.fnal.gov/'+inDir+'/'+sample+'/'+file # +'_'+outlabel+'/'+file
            nFile += 1

	print nFile
        if nFile > 0: os.system(haddcommand)
#        print haddcommand


dirList = [
	#### As requested by Cristina Botta (ARC B2G-17-011).
# 	'TTGJets_TuneCUETP8M1_13TeV-amcatnloFXFX-madspin-pythia8',
# 	'ZGTo2LG_TuneCUETP8M1_13TeV-amcatnloFXFX-pythia8',
# 	'TTZToLL_M-1to10_TuneCUETP8M1_13TeV-madgraphMLM-pythia8',

# 	'WZTo3LNu_13TeV-powheg-pythia8',
# 	'ZZTo4L_13TeV_powheg_pythia8',
# 	'WWW_4F_TuneCP5_13TeV-amcatnlo-pythia8',
#	'WWZ_4F_TuneCP5_13TeV-amcatnlo-pythia8',
# 	'WZZ_TuneCP5_13TeV-amcatnlo-pythia8',
# 	'ZZZ_TuneCP5_13TeV-amcatnlo-pythia8',
# 	'TTWJetsToLNu_TuneCP5_13TeV-amcatnloFXFX-madspin-pythia8',
# 	'TTZToLLNuNu_M-10_TuneCP5_13TeV-amcatnlo-pythia8',
# 	'WW_TuneCP5_13TeV-pythia8',	

	#######################################
        #'TTWJetsToLNu_TuneCP5_13TeV-amcatnloFXFX-madspin-pythia8/0000',
        #'TTZToLLNuNu_M-10_TuneCP5_13TeV-amcatnlo-pythia8/0000',
        #'WWW_4F_TuneCP5_13TeV-amcatnlo-pythia8/0000',
        #'WWZ_4F_TuneCP5_13TeV-amcatnlo-pythia8/0000',
        #'WZTo3LNu_TuneCP5_13TeV-amcatnloFXFX-pythia8/0000',
        #'WZZ_TuneCP5_13TeV-amcatnlo-pythia8/0000',
        #'ZZTo4L_13TeV_powheg_pythia8/0000',
        #'ZZZ_TuneCP5_13TeV-amcatnlo-pythia8/0000',
        
        #'DoubleEGRun2017B/0000',
        #'DoubleEGRun2017E/0000',
        #'DoubleEGRun2017C/0000',
        #'DoubleEGRun2017F/0000',
        #'DoubleEGRun2017D/0000',
        #'DoubleMuonRun2017C/0000',
        #'DoubleMuonRun2017F/0000',
        #'DoubleMuonRun2017D/0000',
        #'DoubleMuonRun2017B/0000',
        #'DoubleMuonRun2017E/0000',
        #'MuonEGRun2017C/0000',
        #'MuonEGRun2017F/0000',
        #'MuonEGRun2017D/0000',
        #'MuonEGRun2017B/0000',
        #'MuonEGRun2017E/0000',

	#'TTTo2L2Nu_TuneCP5_PSweights_13TeV-powheg-pythia8/multiLep2017/191021_194953/0000',
	#'TTTo2L2Nu_TuneCP5_PSweights_13TeV-powheg-pythia8/0000',
	#'TTTo2L2Nu_TuneCP5_PSweights_13TeV-powheg-pythia8/0001',
	#'TTToHadronic_TuneCP5_PSweights_13TeV-powheg-pythia8',
	#'TTToSemiLeptonic_TuneCP5_PSweights_13TeV-powheg-pythia8',
	
    ]

# if shift == 'nominal':
# 	dirList.append('DoubleEG_RRB')
# 	dirList.append('DoubleMuon_RRB')
# 	dirList.append('MuonEG_RRB')
# 	dirList.append('DoubleEG_RRC')
# 	dirList.append('DoubleMuon_RRC')
# 	dirList.append('MuonEG_RRC')
# 	dirList.append('DoubleEG_RRD')
# 	dirList.append('DoubleMuon_RRD')
# 	dirList.append('MuonEG_RRD')
# 	dirList.append('DoubleEG_RRE')
# 	dirList.append('DoubleMuon_RRE')
# 	dirList.append('MuonEG_RRE')
# 	dirList.append('DoubleEG_RRF')
# 	dirList.append('DoubleMuon_RRF')
# 	dirList.append('MuonEG_RRF')
# 	dirList.append('DoubleEG_RRF_v2')
# 	dirList.append('DoubleMuon_RRF_v2')
# 	dirList.append('MuonEG_RRF_v2')

for samplePath in dirList:

    rootfiles = EOSlist_root_files(inputDir+'/'+samplePath)
    sample = samplePath.split('/')[0]
    
    print 'N root files in',sample,'=',len(rootfiles)
    #haddcommand = 'hadd -f root://cmseos.fnal.gov/'+outDir+'/'+sample+'_hadd.root '
    haddcommand = 'hadd -f /eos/uscms/'+outDir+'/'+sample+'_hadd.root '

    nFilesPerHadd = 500
    #print 'len(rootfiles)/nFilesPerHadd = ', len(rootfiles), '/',nFilesPerHadd,' = ', len(rootfiles)/(nFilesPerHadd*1.0)
    print 'split into file extension ',range(int(math.ceil(len(rootfiles)/(nFilesPerHadd*1.0))))
#     nFilesPerHadd = 10

    if len(rootfiles) < nFilesPerHadd:
        #haddcommand = 'hadd -f root://cmseos.fnal.gov/'+outDir+'/'+sample+'_hadd.root '
        haddcommand = 'hadd -f /eos/uscms/'+outDir+'/'+sample+'_hadd.root '
        for file in rootfiles:
            if os.path.getsize('/eos/uscms/'+inDir+'/'+samplePath+'/'+file) < 1501: continue
            haddcommand+=' root://cmseos.fnal.gov/'+inDir+'/'+samplePath+'/'+file
        os.system(haddcommand)
    else:
        for i in range(int(math.ceil(len(rootfiles)/(1.0*nFilesPerHadd)))):
            #haddcommand = 'hadd -f root://cmseos.fnal.gov/'+outDir+'/'+sample+'_'+str(i+1)+'_hadd.root '
            haddcommand = 'hadd -f /eos/uscms/'+outDir+'/'+sample+'_'+str(i+1)+'_hadd.root '
            begin=i*nFilesPerHadd
            end=begin+nFilesPerHadd
            if end >len(rootfiles) : end=len(rootfiles)
            print 'file ',i,' with root files ', begin, ' to ', end
            for j in range(begin,end):
                if os.path.getsize('/eos/uscms/'+inDir+'/'+samplePath+'/'+rootfiles[j]) < 1501: continue
                haddcommand+=' root://cmseos.fnal.gov/'+inDir+'/'+samplePath+'/'+rootfiles[j]
            os.system(haddcommand)



#
# # not needed yet in 80X, waiting for high mass samples to finish
# sample = 'TT_TuneCUETP8M2T4_13TeV-powheg-pythia8'
# TTOutList = ['Mtt0to700','Mtt700to1000','Mtt1000toInf']
#
# for outlabel in TTOutList:
#
#     rootfiles = EOSlist_root_files(inputDir+'/'+sample+'_'+outlabel)
# #    print 'N root files in',sample,'=',len(rootfiles)
#     haddcommand = 'hadd root://cmseos.fnal.gov/'+outDir+'/'+sample+'_'+outlabel+'_hadd.root '
#
#     print '##########'*15
#     print 'HADDING:', sample,'_',outlabel
#     print '##########'*15
#
#     for file in rootfiles:
#
#         haddcommand+=' root://cmseos.fnal.gov/'+inDir+'/'+sample+'_'+outlabel+'/'+file
#
#     os.system(haddcommand)
#
# print("--- %s minutes ---" % (round(time.time() - start_time, 2)/60))



