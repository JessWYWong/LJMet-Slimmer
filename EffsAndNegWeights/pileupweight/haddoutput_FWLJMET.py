import os,sys,datetime,time,math
from ROOT import *
execfile("/uscms_data/d3/wywong/EOSSafeUtils.py")
import subprocess

start_time = time.time()

#IO directories must be full paths
input  = sys.argv[1]
output = sys.argv[2]
#shift = sys.argv[3]

inputDir='/eos/uscms/store/group/lpcljm/'+input #+'/'+shift
#inputDir='/eos/uscms/store/user/wywong/'+input

#outputDir='/eos/uscms/store/group/lpcljm/'+output #+'/'+shift
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
#signalOutList = ['BWBW','TZBW','THBW','TZTH','TZTZ','THTH']
 
for sample in signalList:
    for outlabel in signalOutList:
        path =''
	while len([i for i in EOSlistdir(inputDir+'/'+sample+path) if '.root' in i])==0:
            if len(EOSlistSubdirs(inputDir+'/'+sample+path))==1:
	        path += '/'+EOSlistSubdirs(inputDir+'/'+sample+path)[0]
            else:
                print ('multiple dir')

        #rootfiles = EOSlist_root_files(inputDir+'/'+sample+'_'+outlabel)
        rootfiles = EOSlist_root_files(inputDir+'/'+sample+path) #+'_'+outlabel)
#        print 'N root files in',sample,'=',len(rootfiles)
        #haddcommand = 'hadd root://cmseos.fnal.gov/'+outDir+'/'+sample+'_'+outlabel+'_hadd.root '
        haddcommand = 'hadd -f root://cmseos.fnal.gov/'+outDir+'/'+sample+'_hadd.root ' #+'_'+outlabel+'_hadd.root '

        print '##########'*15
        print 'HADDING:', sample#,'_',outlabel
        print '##########'*15

        for file in rootfiles:
            #haddcommand+=' root://cmseos.fnal.gov/'+inDir+'/'+sample+'_'+outlabel+'/'+file
            haddcommand+=' root://cmseos.fnal.gov/'+inDir+'/'+sample+path+'/'+file# +'_'+outlabel+'/'+file
        os.system(haddcommand)
        #print haddcommand

signalList = [
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
#signalOutList = ['BZBH','BZBZ']#['TWTW','BZTW','BHTW','BZBH','BZBZ','BHBH']

for sample in signalList:
    for outlabel in signalOutList:
        path =''
        while len([i for i in EOSlistdir(inputDir+'/'+sample+path) if '.root' in i])==0:
            if len(EOSlistSubdirs(inputDir+'/'+sample+path))==1:
                path += '/'+EOSlistSubdirs(inputDir+'/'+sample+path)[0]
            else:
                print ('multiple dir')

        #rootfiles = EOSlist_root_files(inputDir+'/'+sample+'_'+outlabel)
        rootfiles = EOSlist_root_files(inputDir+'/'+sample+path)#+'_'+outlabel)
#        print 'N root files in',sample,'=',len(rootfiles)
        #haddcommand = 'hadd root://cmseos.fnal.gov/'+outDir+'/'+sample+'_'+outlabel+'_hadd.root '
        haddcommand = 'hadd root://cmseos.fnal.gov/'+outDir+'/'+sample+'_hadd.root ' #+'_'+outlabel+'_hadd.root '

        print '##########'*15
        print 'HADDING:', sample#,'_',outlabel
        print '##########'*15

        for file in rootfiles:
            #haddcommand+=' root://cmseos.fnal.gov/'+inDir+'/'+sample+'_'+outlabel+'/'+file
            haddcommand+=' root://cmseos.fnal.gov/'+inDir+'/'+sample+path+'/'+file # +'_'+outlabel+'/'+file

        os.system(haddcommand)
        #print haddcommand


dirList = [
        "TTTT_TuneCP5_PSweights_13TeV-amcatnlo-pythia8_correctnPartonsInBorn",

        #"X53X53_M-900_RH_TuneCP5_13TeV-madgraph-pythia8",
        #"X53X53_M-1000_RH_TuneCP5_13TeV-madgraph-pythia8",
        #"X53X53_M-1100_RH_TuneCP5_13TeV-madgraph-pythia8",
        #"X53X53_M-1200_RH_TuneCP5_13TeV-madgraph-pythia8",
        #"X53X53_M-1300_RH_TuneCP5_13TeV-madgraph-pythia8",
        #"X53X53_M-1400_RH_TuneCP5_13TeV-madgraph-pythia8",
        #"X53X53_M-1600_RH_TuneCP5_13TeV-madgraph-pythia8",
        #"X53X53_M-1700_RH_TuneCP5_13TeV-madgraph-pythia8",

        #"X53X53_M-1100_LH_TuneCP5_13TeV-madgraph-pythia8",
        #"X53X53_M-1200_LH_TuneCP5_13TeV-madgraph-pythia8",
        #"X53X53_M-1400_LH_TuneCP5_13TeV-madgraph-pythia8",
        #"X53X53_M-1500_LH_TuneCP5_13TeV-madgraph-pythia8",
        #"X53X53_M-1700_LH_TuneCP5_13TeV-madgraph-pythia8",
	
	#### 2018 samples
	#'WZTo3LNu_TuneCP5_13TeV-powheg-pythia8', 
	#'ZZTo4L_TuneCP5_13TeV_powheg_pythia8', 
	#'WWW_4F_TuneCP5_13TeV-amcatnlo-pythia8', 
	#'WWZ_TuneCP5_13TeV-amcatnlo-pythia8', 
	#'WZZ_TuneCP5_13TeV-amcatnlo-pythia8', 
	#'ZZZ_TuneCP5_13TeV-amcatnlo-pythia8', 
	#'TTWJetsToLNu_TuneCP5_13TeV-amcatnloFXFX-madspin-pythia8', 
	#'TTZToLLNuNu_M-10_TuneCP5_13TeV-amcatnlo-pythia8', 
	#'TTTo2L2Nu_TuneCP5_13TeV-powheg-pythia8',
	
	#### As requested by Cristina Botta (ARC B2G-17-011).
# 	'TTGJets_TuneCUETP8M1_13TeV-amcatnloFXFX-madspin-pythia8',
# 	'ZGTo2LG_TuneCUETP8M1_13TeV-amcatnloFXFX-pythia8',
# 	'TTZToLL_M-1to10_TuneCUETP8M1_13TeV-madgraphMLM-pythia8',

 	#'WZTo3LNu_13TeV-powheg-pythia8',
 	#'ZZTo4L_13TeV_powheg_pythia8',
 	#'WWW_4F_TuneCP5_13TeV-amcatnlo-pythia8',
	#'WWZ_4F_TuneCP5_13TeV-amcatnlo-pythia8',
 	#'WZZ_TuneCP5_13TeV-amcatnlo-pythia8',
 	#'ZZZ_TuneCP5_13TeV-amcatnlo-pythia8',
 	#'TTWJetsToLNu_TuneCP5_13TeV-amcatnloFXFX-madspin-pythia8',
 	#'TTZToLLNuNu_M-10_TuneCP5_13TeV-amcatnlo-pythia8',
 	#'WW_TuneCP5_13TeV-pythia8',	

        #'TTWJetsToLNu_TuneCP5_13TeV-amcatnloFXFX-madspin-pythia8',
        #'TTZToLLNuNu_M-10_TuneCP5_13TeV-amcatnlo-pythia8',
        #'WWW_4F_TuneCP5_13TeV-amcatnlo-pythia8',
        #'WWZ_4F_TuneCP5_13TeV-amcatnlo-pythia8',
        #'WZTo3LNu_TuneCP5_13TeV-amcatnloFXFX-pythia8',
        #'WZZ_TuneCP5_13TeV-amcatnlo-pythia8',
        #'WZZTo3L1Nu2Q_4f_TuneCP5_13TeV_amcatnlo_pythia8',
        #'WZZ_ZTo2L_WToAll_4f_TuneCP5_13TeV_amcatnlo_pythia8',
        #'ZZTo4L_13TeV_powheg_pythia8',
        #'ZZZ_TuneCP5_13TeV-amcatnlo-pythia8',
 
#       'MuonEG/multiLep2017/190905_030235/0000',        
        #'TTTo2L2Nu_TuneCP5_PSweights_13TeV-powheg-pythia8',
        #'TTToHadronic_TuneCP5_PSweights_13TeV-powheg-pythia8',
	#'TTToSemiLeptonic_TuneCP5_PSweights_13TeV-powheg-pythia8',
        #'DoubleEGRun2017B',
        #'DoubleEGRun2017E',
        #'DoubleEGRun2017C',
        #'DoubleEGRun2017F',
        #'DoubleEGRun2017D',
        #'DoubleMuonRun2017C',
        #'DoubleMuonRun2017F',
        #'DoubleMuonRun2017D',
        #'DoubleMuonRun2017B',
        #'DoubleMuonRun2017E',
        #'MuonEGRun2017C',
        #'MuonEGRun2017F',
        #'MuonEGRun2017D',
        #'MuonEGRun2017B',
        #'MuonEGRun2017E',
	
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

    nFilesPerHadd = 300
    rootfiles = []
    for sub in subdir:
        ListRootfiles = EOSlist_root_files(inputDir+'/'+sample+path+'/'+sub)
        for file in ListRootfiles:
            rootfiles.append(sub+'/'+file)
    print 'N root files in',sample,'/',sub,'=',len(rootfiles)
    haddcommand = 'hadd -f root://cmseos.fnal.gov/'+outDir+'/'+sample+'_hadd.root '

    #print 'len(rootfiles)/nFilesPerHadd = ', len(rootfiles), '/',nFilesPerHadd,' = ', len(rootfiles)/(nFilesPerHadd*1.0)
    print 'split into file extension ',range(int(math.ceil(len(rootfiles)/(nFilesPerHadd*1.0))))

    if len(rootfiles) < nFilesPerHadd:
        haddcommand = 'hadd -f root://cmseos.fnal.gov/'+outDir+'/'+sample+'_hadd.root '
        for file in rootfiles:
            haddcommand+=' root://cmseos.fnal.gov/'+inDir+'/'+sample+path+'/'+file
        os.system(haddcommand)
        #print haddcommand
    else:
        for i in range(int(math.ceil(len(rootfiles)/(1.0*nFilesPerHadd)))):
            haddcommand = 'hadd -f root://cmseos.fnal.gov/'+outDir+'/'+sample+'_'+str(i+1)+'_hadd.root '
            begin=i*nFilesPerHadd
            end=begin+nFilesPerHadd
            if len(rootfiles) - end < nFilesPerHadd: end=len(rootfiles)
            print 'file ',i,' with root files ', begin, ' to ', end
            for j in range(begin,end):
                haddcommand+=' root://cmseos.fnal.gov/'+inDir+'/'+sample+path+'/'+rootfiles[j]
            os.system(haddcommand)
            #print haddcommand

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



