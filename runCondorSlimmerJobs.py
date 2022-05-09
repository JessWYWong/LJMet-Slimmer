import os,shutil,datetime,time
import getpass
from ROOT import *
execfile("/uscms_data/d3/wywong/EOSSafeUtils.py")

start_time = time.time()

shift = sys.argv[1]

#IO directories must be full paths

relbase = os.environ['CMSSW_BASE']

#inputDir='/eos/uscms/store/user/wywong/FWLJMET102X_3lep2017_wywong_102019_saveLooseLep/'#+shift+'/'
#inputDir='/eos/uscms/store/user/wywong/FWLJMET102X_3lep2017_wywong_062019/'
#inputDir='/eos/uscms/store/user/wywong/FWLJMET102X_3lep2017_wywong_012020/'
inputDir='/eos/uscms/store/user/wywong/FWLJMET102X_3lep2018_wywong_052020/'
#inputDir='/eos/uscms/store/group/lpcljm/FWLJMET102X_3lep2018_wywong_052020/'

#outputDir='/eos/uscms/store/user/wywong/FWLJMET102X_3lep2017_wywong_012020_step1_flatFRv4_TrigEff_uFR/'
#outputDir='/eos/uscms/store/user/wywong/FWLJMET102X_3lep2018_wywong_052020_step1_etaFRv2_DeepCSV/'
#outputDir='/eos/uscms/store/user/wywong/FWLJMET102X_3lep2018_wywong_052020_step1_FRv2_PRv2_etaFR/'
#outputDir='/eos/uscms/store/user/wywong/FWLJMET102X_3lep2018_wywong_052020_step1_FRv2_PRv2_elIdSys_TrigEffWeight_pdf4LHC/'
outputDir='/eos/uscms/store/user/wywong/FWLJMET102X_3lep2018_wywong_052020_step1_FRv6_PRv4_ANv8_uFRupdate/'#_etaFR/'#_unityElPR/'
#outputDir='/eos/uscms/store/user/wywong/FWLJMET102X_3lep2018_wywong_052020_step1_FRv3_PRv3_rereco/'#_unityMuPR/'
#outputDir='/eos/uscms/store/user/wywong/FWLJMET102X_3lep2018_wywong_052020_step1_FRv2_PRv2_pdf4LHC_nPU/'

condorDir=os.environ['CMSSW_BASE']+'/../'+outputDir.split('/')[-2]+'/' #'/FWLJMET102X_3lep2017_wywong_102019_step1_FRv2_UnityElPR/'#+shift+'/'


runDir=os.getcwd()
# Can change the file directory if needed
#if '' not in shift: runDirPost = ''
#else: runDirPost = shift+'Files'
runDirPost = ''
print 'Files from',runDirPost

gROOT.ProcessLine('.x compileStep1.C')

cTime=datetime.datetime.now()
date='%i_%i_%i_%i_%i_%i'%(cTime.year,cTime.month,cTime.day,cTime.hour,cTime.minute,cTime.second)

inDir=inputDir[10:]
outDir=outputDir[10:]

print 'Getting proxy'
proxyPath=os.popen('voms-proxy-info -path')
proxyPath=proxyPath.readline().strip()

print 'Starting submission'
count=0
newsignalList = [
        #'TTTT_TuneCP5_13TeV-amcatnlo-pythia8',
        #'X53X53_M-1000_RH_TuneCP5_13TeV-madgraph-pythia8',
        #'X53X53_M-1100_LH_TuneCP5_13TeV-madgraph-pythia8',
        #'X53X53_M-1100_RH_TuneCP5_13TeV-madgraph-pythia8',
        #'X53X53_M-1200_LH_TuneCP5_13TeV-madgraph-pythia8',
        #'X53X53_M-1200_RH_TuneCP5_13TeV-madgraph-pythia8',
        #'X53X53_M-1300_RH_TuneCP5_13TeV-madgraph-pythia8',
        #'X53X53_M-1400_LH_TuneCP5_13TeV-madgraph-pythia8',
        #'X53X53_M-1400_RH_TuneCP5_13TeV-madgraph-pythia8',
        #'X53X53_M-1500_LH_TuneCP5_13TeV-madgraph-pythia8',
        #'X53X53_M-1500_RH_TuneCP5_13TeV-madgraph-pythia8',
        #'X53X53_M-1600_RH_TuneCP5_13TeV-madgraph-pythia8',
        #'X53X53_M-1700_LH_TuneCP5_13TeV-madgraph-pythia8',
        #'X53X53_M-900_RH_TuneCP5_13TeV-madgraph-pythia8',
] 
for path in newsignalList:
    sample=path.split('/')[0]

    subdir = EOSlistdir(inputDir+path)
    while len(subdir) == 1 and ".root" not in subdir[0]:
        path = path +"/"+ subdir[0]
        subdir = EOSlistdir(inputDir+path)
        #print (inputDir+path, subdir)
    #print path

    rootfiles = []
    if len(subdir) > 1:
        for sub in subdir:
            subpath = path+"/"+sub
            subsubdir = EOSlistdir(inputDir+subpath)
            while len(subsubdir) == 1 and ".root" not in subsubdir[0]:
                subpath = subpath+"/"+ subsubdir[0]
                subsubdir = EOSlistdir(inputDir+subpath)
                #print (inputDir+subpath, subsubdir)
            #print subpath
            rootfiles += [subpath.replace(path,"")+"/"+x for x in EOSlist_root_files(inputDir+subpath)]
    else:
        rootfiles = EOSlist_root_files(inputDir+path)

    #relPath = path
    outPath = sample
    os.system('eos root://cmseos.fnal.gov/ mkdir -p '+outDir+sample)
    os.system('mkdir -p '+condorDir+sample)

    for file in rootfiles:
        relPath = (path+file).replace(file.split("/")[-1],"")
        rawname = (file.split("/")[-1])[:-5]
        count+=1
        dict={'RUNDIR':runDir, 'POST':runDirPost, 'RELPATH':relPath, 'OUTPATH':outPath , 'CONDORDIR':condorDir, 'INPUTDIR':inDir, 'FILENAME':rawname, 'PROXY':proxyPath, 'CMSSWBASE':relbase, 'OUTPUTDIR':outDir}
        jdfName=condorDir+'/%(OUTPATH)s/%(FILENAME)s.job'%dict
        print jdfName
        jdf=open(jdfName,'w')
        jdf.write(
           """x509userproxy = %(PROXY)s
universe = vanilla
Executable = %(RUNDIR)s/makeStep1.sh
Should_Transfer_Files = YES
WhenToTransferOutput = ON_EXIT
Transfer_Input_Files = %(RUNDIR)s/makeStep1.C, %(RUNDIR)s/%(POST)s/step1.cc, %(RUNDIR)s/%(POST)s/step1.h, %(RUNDIR)s/%(POST)s/step1_cc.d, %(RUNDIR)s/%(POST)s/step1_cc.so, %(RUNDIR)s/%(POST)s/fakerate.h, %(RUNDIR)s/%(POST)s/PUweights_X53.h
Output = %(FILENAME)s.out
Error = %(FILENAME)s.err
Log = %(FILENAME)s.log
Notification = Never
Arguments = %(FILENAME)s.root %(FILENAME)s.root %(INPUTDIR)s/%(RELPATH)s %(OUTPUTDIR)s/%(OUTPATH)s

Queue 1"""%dict)
        jdf.close()
        os.chdir('%s/%s'%(condorDir,outPath))
        os.system('condor_submit %(FILENAME)s.job'%dict)
        os.system('sleep 0.5')
        os.chdir('%s'%(runDir))
        print count, "jobs submitted!!!"


signalList = [
##### 2018 #####
     #'TprimeTprime_M-900_TuneCP5_PSweights_13TeV-madgraph-pythia8', 
     #'TprimeTprime_M-1000_TuneCP5_PSweights_13TeV-madgraph-pythia8', 
     #'TprimeTprime_M-1100_TuneCP5_PSweights_13TeV-madgraph-pythia8',
     #'TprimeTprime_M-1200_TuneCP5_PSweights_13TeV-madgraph-pythia8',
     #'TprimeTprime_M-1300_TuneCP5_PSweights_13TeV-madgraph-pythia8',
     #'TprimeTprime_M-1400_TuneCP5_PSweights_13TeV-madgraph-pythia8',
     #'TprimeTprime_M-1500_TuneCP5_PSweights_13TeV-madgraph-pythia8',
     #'TprimeTprime_M-1600_TuneCP5_PSweights_13TeV-madgraph-pythia8',
     #'TprimeTprime_M-1700_TuneCP5_PSweights_13TeV-madgraph-pythia8',
     #'TprimeTprime_M-1800_TuneCP5_PSweights_13TeV-madgraph-pythia8',

## FWLJMET
     #'TprimeTprime_M-1300_TuneCP5_13TeV-madgraph-pythia8',
     #'TprimeTprime_M-1400_TuneCP5_13TeV-madgraph-pythia8',
     #'TprimeTprime_M-1500_TuneCP5_13TeV-madgraph-pythia8',
     #'TprimeTprime_M-1600_TuneCP5_13TeV-madgraph-pythia8',
     #'TprimeTprime_M-1700_TuneCP5_13TeV-madgraph-pythia8',

## FWLJMET_wywong
     #'TprimeTprime_M-1000_TuneCP5_13TeV-madgraph-pythia8',
     #'TprimeTprime_M-1100_TuneCP5_13TeV-madgraph-pythia8',
     #'TprimeTprime_M-1200_TuneCP5_13TeV-madgraph-pythia8',
     #'TprimeTprime_M-1800_TuneCP5_13TeV-madgraph-pythia8',

#    'TprimeTprime_M-1300_TuneCP5_13TeV-madgraph-pythia8/multiLep2017/190620_221349/0000',
#    'TprimeTprime_M-1400_TuneCP5_13TeV-madgraph-pythia8/multiLep2017/190620_222511/0000',
#    'TprimeTprime_M-1500_TuneCP5_13TeV-madgraph-pythia8/multiLep2017/190620_230227/0000',
#    'TprimeTprime_M-1600_TuneCP5_13TeV-madgraph-pythia8/multiLep2017/190620_221126/0000',
#    'TprimeTprime_M-1700_TuneCP5_13TeV-madgraph-pythia8/multiLep2017/190620_221723/0000',
    
#    'TprimeTprime_M-700_TuneCP5_13TeV-madgraph-pythia8/multiLep2017/190806_185958/0000',
#    'TprimeTprime_M-1000_TuneCP5_13TeV-madgraph-pythia8/multiLep2017/190806_190121/0000',
#    'TprimeTprime_M-1100_TuneCP5_13TeV-madgraph-pythia8/multiLep2017/190806_190437/0000',
#    'TprimeTprime_M-1200_TuneCP5_13TeV-madgraph-pythia8/multiLep2017/190806_190546/0000',
#    'TprimeTprime_M-1800_TuneCP5_13TeV-madgraph-pythia8/multiLep2017/190806_190701/0000',    
    ]
 
signalOutList = ['BWBW','TZBW','THBW','TZTH','TZTZ','THTH']

for path in signalList:
    sample=path.split('/')[0]

    subdir = EOSlistdir(inputDir+path)
    while len(subdir) == 1 and ".root" not in subdir[0]:
        print subdir
        path = path +"/"+ subdir[0]
        subdir = EOSlistdir(inputDir+path)
    print path
       
    rootfiles = EOSlist_root_files(inputDir+path)
    relPath = path
    outPath = sample
    for outlabel in signalOutList:
        os.system('eos root://cmseos.fnal.gov/ mkdir -p '+outDir+sample+'_'+outlabel)
        os.system('mkdir -p '+condorDir+sample+'_'+outlabel)
 
        for file in rootfiles:
            #if not any([("_"+str(i)+".root" in file) for i in [100,200,300,400] ]): continue
            #print file
            rawname = file[:-5]
            count+=1
            dict={'RUNDIR':runDir, 'POST':runDirPost, 'RELPATH':relPath, 'OUTPATH':outPath ,'LABEL':outlabel, 'CONDORDIR':condorDir, 'INPUTDIR':inDir, 'FILENAME':rawname, 'PROXY':proxyPath, 'CMSSWBASE':relbase, 'OUTPUTDIR':outDir}
            jdfName=condorDir+'/%(OUTPATH)s_%(LABEL)s/%(FILENAME)s_%(LABEL)s.job'%dict
            print jdfName
            jdf=open(jdfName,'w')
            jdf.write(
               """x509userproxy = %(PROXY)s
universe = vanilla
Executable = %(RUNDIR)s/makeStep1.sh
Should_Transfer_Files = YES
WhenToTransferOutput = ON_EXIT
Transfer_Input_Files = %(RUNDIR)s/makeStep1.C, %(RUNDIR)s/%(POST)s/step1.cc, %(RUNDIR)s/%(POST)s/step1.h, %(RUNDIR)s/%(POST)s/step1_cc.d, %(RUNDIR)s/%(POST)s/step1_cc.so, %(RUNDIR)s/%(POST)s/fakerate.h, %(RUNDIR)s/%(POST)s/PUweights.h
Output = %(FILENAME)s_%(LABEL)s.out
Error = %(FILENAME)s_%(LABEL)s.err
Log = %(FILENAME)s_%(LABEL)s.log
Notification = Never
Arguments = %(FILENAME)s.root %(FILENAME)s_%(LABEL)s.root %(INPUTDIR)s/%(RELPATH)s %(OUTPUTDIR)s/%(OUTPATH)s_%(LABEL)s

Queue 1"""%dict)
            jdf.close()
            os.chdir('%s/%s_%s'%(condorDir,outPath,outlabel))
            os.system('condor_submit %(FILENAME)s_%(LABEL)s.job'%dict)
            os.system('sleep 0.5')
            os.chdir('%s'%(runDir))
            print count, "jobs submitted!!!"
 
#, %(RUNDIR)s/csc2015_Dec01.txt, %(RUNDIR)s/ecalscn1043093_Dec01.txt

signalList = [
##### 2018 #####
     #'BprimeBprime_M-900_TuneCP5_PSweights_13TeV-madgraph-pythia8',
     #'BprimeBprime_M-1000_TuneCP5_PSweights_13TeV-madgraph-pythia8',
     #'BprimeBprime_M-1100_TuneCP5_PSweights_13TeV-madgraph-pythia8',
     #'BprimeBprime_M-1200_TuneCP5_PSweights_13TeV-madgraph-pythia8',
     #'BprimeBprime_M-1300_TuneCP5_PSweights_13TeV-madgraph-pythia8',
     #'BprimeBprime_M-1400_TuneCP5_PSweights_13TeV-madgraph-pythia8',
     #'BprimeBprime_M-1500_TuneCP5_PSweights_13TeV-madgraph-pythia8',
     #'BprimeBprime_M-1600_TuneCP5_PSweights_13TeV-madgraph-pythia8',
     #'BprimeBprime_M-1700_TuneCP5_PSweights_13TeV-madgraph-pythia8',
     #'BprimeBprime_M-1800_TuneCP5_PSweights_13TeV-madgraph-pythia8',

     #'BprimeBprime_M-1000_TuneCP5_13TeV-madgraph-pythia8',
     #'BprimeBprime_M-1100_TuneCP5_13TeV-madgraph-pythia8',
     #'BprimeBprime_M-1200_TuneCP5_13TeV-madgraph-pythia8',
     #'BprimeBprime_M-1300_TuneCP5_13TeV-madgraph-pythia8',
     #'BprimeBprime_M-1400_TuneCP5_13TeV-madgraph-pythia8',
     #'BprimeBprime_M-1500_TuneCP5_13TeV-madgraph-pythia8',
     #'BprimeBprime_M-1600_TuneCP5_13TeV-madgraph-pythia8',
     #'BprimeBprime_M-1700_TuneCP5_13TeV-madgraph-pythia8',
     #'BprimeBprime_M-1800_TuneCP5_13TeV-madgraph-pythia8',

## FWLJMET
     #'BprimeBprime_M-1100_TuneCP5_13TeV-madgraph-pythia8',#/multiLep2017/190620_230122/0000',
     #'BprimeBprime_M-1200_TuneCP5_13TeV-madgraph-pythia8',#/multiLep2017/190620_221456/0000',
     #'BprimeBprime_M-1300_TuneCP5_13TeV-madgraph-pythia8',#/multiLep2017/190620_222622/0000',
     #'BprimeBprime_M-1400_TuneCP5_13TeV-madgraph-pythia8',#/multiLep2017/190620_221236/0000',
     #'BprimeBprime_M-1500_TuneCP5_13TeV-madgraph-pythia8',#/multiLep2017/190620_221835/0000',
     #'BprimeBprime_M-1700_TuneCP5_13TeV-madgraph-pythia8',#/multiLep2017/190620_230014/0000',
     #'BprimeBprime_M-1800_TuneCP5_13TeV-madgraph-pythia8',#/multiLep2017/190620_225908/0000',

## FWLJMET_wywong
     #'BprimeBprime_M-1000_TuneCP5_13TeV-madgraph-pythia8',#/multiLep2017/190806_185500/0000',
     #'BprimeBprime_M-1600_TuneCP5_13TeV-madgraph-pythia8',#/multiLep2017/190806_185643/0000', 
     ]
 
signalOutList = ['TWTW','BZTW','BHTW','BZBH','BZBZ','BHBH']

for path in signalList:
    sample=path.split('/')[0]

    subdir = EOSlistdir(inputDir+path)
    while len(subdir) == 1 and ".root" not in subdir[0]:
        print subdir
        path = path +"/"+ subdir[0]
        subdir = EOSlistdir(inputDir+path)
    print path

    rootfiles = EOSlist_root_files(inputDir+path)
    relPath = path
    outPath = sample
    for outlabel in signalOutList:
         os.system('eos root://cmseos.fnal.gov/ mkdir -p '+outDir+sample+'_'+outlabel)
         os.system('mkdir -p '+condorDir+sample+'_'+outlabel)
 
         for file in rootfiles:
             #        print file
             rawname = file[:-5]
             count+=1
             dict={'RUNDIR':runDir, 'POST':runDirPost,'RELPATH':relPath, 'OUTPATH':outPath , 'LABEL':outlabel, 'CONDORDIR':condorDir, 'INPUTDIR':inDir, 'FILENAME':rawname, 'PROXY':proxyPath, 'CMSSWBASE':relbase, 'OUTPUTDIR':outDir}
             jdfName=condorDir+'/%(OUTPATH)s_%(LABEL)s/%(FILENAME)s_%(LABEL)s.job'%dict
             print jdfName
             jdf=open(jdfName,'w')
             jdf.write(
                 """x509userproxy = %(PROXY)s
universe = vanilla
Executable = %(RUNDIR)s/makeStep1.sh
Should_Transfer_Files = YES
WhenToTransferOutput = ON_EXIT
Transfer_Input_Files = %(RUNDIR)s/makeStep1.C, %(RUNDIR)s/%(POST)s/step1.cc, %(RUNDIR)s/%(POST)s/step1.h, %(RUNDIR)s/%(POST)s/step1_cc.d, %(RUNDIR)s/%(POST)s/step1_cc.so, %(RUNDIR)s/%(POST)s/fakerate.h, %(RUNDIR)s/%(POST)s/PUweights.h
Output = %(FILENAME)s_%(LABEL)s.out
Error = %(FILENAME)s_%(LABEL)s.err
Log = %(FILENAME)s_%(LABEL)s.log
Notification = Never
Arguments = %(FILENAME)s.root %(FILENAME)s_%(LABEL)s.root %(INPUTDIR)s/%(RELPATH)s %(OUTPUTDIR)s/%(OUTPATH)s_%(LABEL)s

Queue 1"""%dict)
             jdf.close()
             os.chdir('%s/%s_%s'%(condorDir,outPath,outlabel))
             os.system('condor_submit %(FILENAME)s_%(LABEL)s.job'%dict)
             os.system('sleep 0.5')
             os.chdir('%s'%(runDir))
             print count, "jobs submitted!!!" 



# #, %(RUNDIR)s/csc2015_Dec01.txt, %(RUNDIR)s/ecalscn1043093_Dec01.txt
# 
dirList = [

	#### As requested by Cristina Botta (ARC B2G-17-011).
# 	'TTGJets_TuneCUETP8M1_13TeV-amcatnloFXFX-madspin-pythia8',
# 	'ZGTo2LG_TuneCUETP8M1_13TeV-amcatnloFXFX-pythia8',
# 	'TTZToLL_M-1to10_TuneCUETP8M1_13TeV-madgraphMLM-pythia8',

## before FWLJMET
# 	'WZTo3LNu_13TeV-powheg-pythia8',
# 	'ZZTo4L_13TeV_powheg_pythia8',
# 	'WWW_4F_TuneCP5_13TeV-amcatnlo-pythia8',
#	'WWZ_4F_TuneCP5_13TeV-amcatnlo-pythia8',
# 	'WZZ_TuneCP5_13TeV-amcatnlo-pythia8',
# 	'ZZZ_TuneCP5_13TeV-amcatnlo-pythia8',
# 	'TTWJetsToLNu_TuneCP5_13TeV-amcatnloFXFX-madspin-pythia8',
# 	'TTZToLLNuNu_M-10_TuneCP5_13TeV-amcatnlo-pythia8',
# 	'WW_TuneCP5_13TeV-pythia8',	


## 2018 FWLJMET

        #'WZTo3LNu_TuneCP5_13TeV-powheg-pythia8', #/multiLep2017/190620_231128/0000',	
        ##'ZZTo4L_TuneCP5_13TeV_powheg_pythia8/multiLep2018/200504_160759/0000', #/multiLep2017/200305_153551/0000',#/multiLep2017/190620_231021/0000',
	'ZZTo4L_TuneCP5_13TeV_powheg_pythia8-ext2/multiLep2018/200504_160922/0000',
        #'ZZTo4L_TuneCP5_13TeV_powheg_pythia8-ext2/multiLep2018/200504_160922/0001',
        #'WWW_4F_TuneCP5_13TeV-amcatnlo-pythia8', #/multiLep2017/190620_230439/0000',
        #'WWZ_TuneCP5_13TeV-amcatnlo-pythia8',#/multiLep2017/190620_230906/0000',
        #'WZZ_TuneCP5_13TeV-amcatnlo-pythia8',#/multiLep2017/190620_230546/0000',
	#'WZZTo3L1Nu2Q_4f_TuneCP5_13TeV_amcatnlo_pythia8',
	#'WZZ_ZTo2L_WToAll_4f_TuneCP5_13TeV_amcatnlo_pythia8',
        #'ZZZ_TuneCP5_13TeV-amcatnlo-pythia8',#/multiLep2017/190620_230652/0000',
        #'TTWJetsToLNu_TuneCP5_13TeV-amcatnloFXFX-madspin-pythia8',#/multiLep2017/190620_230758/0000',
        #'TTZToLLNuNu_M-10_TuneCP5_13TeV-amcatnlo-pythia8',#/multiLep2017/190620_230333/0000',
	#'TTTo2L2Nu_TuneCP5_13TeV-powheg-pythia8',        

        #'EGamma/multiLep2018/210507_002744/0000',#200502_234009/0000',#200103_013654/0000',#190620_231818/0000',
        #'EGamma/multiLep2018/210507_002949/0000',#200502_234115/0000',#200103_160146/0000',#190620_231925/0000',
        #'EGamma/multiLep2018/210507_003043/0000',#200502_234206/0000',#200103_175338/0000',#190620_232145/0000',        
        ####'EGamma/multiLep2018/200502_234656/0000',#200103_175538/0000',#190620_232253/0000',
        #'EGamma/multiLep2018/210508_055555/0000',#210219_000918/0000',
        ####'DoubleEG/multiLep2018/'#200103_193851/0000',#190620_232359/0000',
        #'DoubleMuon/multiLep2018/210508_055916/0000',#200501_002008/0000',#200103_202128/0000',#190620_231237/0000',
        #'DoubleMuon/multiLep2018/210507_004614/0000',#200501_002111/0000',#200103_205150/0000',#190620_231343/0000',
        #'DoubleMuon/multiLep2018/210507_005252/0000',#200501_002234/0000',#200103_205330/0000',#190620_231451/0000',
        #'DoubleMuon/multiLep2018/210507_010057/0000',#200501_005736/0000',#200103_205513/0000',#190620_231557/0000',
        ####'DoubleMuon/multiLep2018/'#200103_205606/0000',#190620_231703/0000',
        #'MuonEG/multiLep2018/210507_010355/0000',#200502_234859/0000',#200103_205715/0000',#190620_232504/0000',
        #'MuonEG/multiLep2018/210507_010819/0000',#200502_234954/0000',#200103_205816/0000',#190620_232610/0000',
        #'MuonEG/multiLep2018/210508_055558/0000',#200502_235047/0000',#200103_210318/0000',#190620_232720/0000',
        #'MuonEG/multiLep2018/210507_011016/0000',#200502_235531/0000',#200103_210424/0000',
        ###'MuonEG/multiLep2018/'#200103_210518/0000',#190620_232931/0000',
        #####deleted files####'MuonEG/multiLep2017/190620_232826/0000',
        #########'MuonEG/multiLep2017/190620_232931/0000',

## FWLJMET_wywong
	#'MuonEG/multiLep2017/190905_030235/0000',
        #'TTTo2L2Nu_TuneCP5_PSweights_13TeV-powheg-pythia8/multiLep2017/200206_213509/0000',#191021_194953/0000',
	#'TTTo2L2Nu_TuneCP5_PSweights_13TeV-powheg-pythia8/multiLep2017/200206_213509/0001',#191021_194953/0001',
        #'TTToHadronic_TuneCP5_PSweights_13TeV-powheg-pythia8/multiLep2017/190905_082355/0000',
        #'TTToHadronic_TuneCP5_PSweights_13TeV-powheg-pythia8/multiLep2017/190905_082355/0001',
        #'TTToHadronic_TuneCP5_PSweights_13TeV-powheg-pythia8/multiLep2017/190905_082355/0002',
	#'TTToSemiLeptonic_TuneCP5_PSweights_13TeV-powheg-pythia8/multiLep2017/190905_081259/0000',
        #'TTToSemiLeptonic_TuneCP5_PSweights_13TeV-powheg-pythia8/multiLep2017/190905_081259/0001',
        #'TTToSemiLeptonic_TuneCP5_PSweights_13TeV-powheg-pythia8/multiLep2017/190905_081259/0002',
	#'TT_Mtt-700to1000_TuneCP5_PSweights_13TeV-powheg-pythia8',
	#'',
    ]

EGamma_crabid = {'055555':'D', '002744' : 'A', '002949': 'B', '003043':'C'}#, '234656':'D'}
#EGamma_crabid = {'200728': 'A', '214649': 'B', '215030': 'C', '222615': 'D'}#{'175338' : 'D', '175538' : 'E', '193851' : 'F', '013654' : 'B', '160146' : 'C'}
MuonEG_crabid = {'010355': 'A', '010819': 'B', '055558':'C', '011016': 'D'}#{'205715' : 'B', '205816' : 'C', '210318' : 'D', '210424' : 'E', '210518' : 'F'}
DoubleMuon_crabid = {'055916': 'A', '004614': 'B', '005252': 'C', '010057': 'D'}#{'205606' : 'F', '205513' : 'E', '205330' : 'D', '205150' : 'C', '202128' : 'B'}
#ZZ_crabid = {'200504_160759/0000' :'_1', '200504_160922/0000':'_2', '200504_160922/0001':'_3'}

for path in dirList:
    sample=path.split('/')[0]
    subdir = EOSlistdir(inputDir+path)
    while len(subdir) == 1  and ".root" not in subdir[0]:
        print subdir
        path = path +"/"+ subdir[0]
        subdir = EOSlistdir(inputDir+path)
    if len(EOSlistSubdirs(inputDir+path))>1: #EOSlistSubdirs only list directories, unlike EOSlistdir 
        print EOSlistSubdirs(inputDir+path)
        print "Multiple sub directories found --> specify which to use in sample list"
        break
    print path

    crabid = ''
    era = '' 
    if 'EGamma' in sample:
      crabid = path.split('/')[-2]
      era = 'Run2018'+EGamma_crabid[crabid.split('_')[-1]]
    if 'MuonEG' in sample:
      crabid = path.split('/')[-2]
      era = 'Run2018'+MuonEG_crabid[crabid.split('_')[-1]]
    if 'DoubleMuon' in sample:
      crabid = path.split('/')[-2]
      era = 'Run2018'+DoubleMuon_crabid[crabid.split('_')[-1]]
#    if 'ZZTo' in sample :
#      crabid = path.split('/')[-2] + '/' +path.split('/')[-1]
#      era = ZZ_crabid[crabid]

    os.system('eos root://cmseos.fnal.gov/ mkdir -p '+outDir+sample+era)
    outPath = sample+era
    if(path.split('/')[-1]=='0000' or path.split('/')[-1]=='0001'):
        outPath=outPath+"/"+path.split('/')[-1]
    os.system('mkdir -p '+condorDir+outPath)
    relPath = path

    rootfiles = EOSlist_root_files(inputDir+path)
    for file in rootfiles:
#        print file
        if not any([("_"+str(i)+".root" in file) for i in [100,200,500,800] ]): continue
        rawfile = file[:-5]
        count+=1
        dict={'RUNDIR':runDir, 'POST':runDirPost, 'RELPATH':relPath, 'OUTPATH':outPath, 'CONDORDIR':condorDir, 'INPUTDIR':inDir, 'FILENAME':rawfile, 'PROXY':proxyPath, 'CMSSWBASE':relbase, 'OUTPUTDIR':outDir}
        jdfName=condorDir+'/%(OUTPATH)s/%(FILENAME)s.job'%dict
        print jdfName
        jdf=open(jdfName,'w')
        jdf.write(
            """x509userproxy = %(PROXY)s
universe = vanilla
Executable = %(RUNDIR)s/makeStep1.sh
Should_Transfer_Files = YES
WhenToTransferOutput = ON_EXIT
Transfer_Input_Files = %(RUNDIR)s/makeStep1.C, %(RUNDIR)s/%(POST)s/step1.cc, %(RUNDIR)s/%(POST)s/step1.h, %(RUNDIR)s/%(POST)s/step1_cc.d, %(RUNDIR)s/%(POST)s/step1_cc.so, %(RUNDIR)s/%(POST)s/fakerate.h, %(RUNDIR)s/%(POST)s/PUweights.h
Output = %(FILENAME)s.out
Error = %(FILENAME)s.err
Log = %(FILENAME)s.log
Notification = Never
Arguments = %(FILENAME)s.root %(FILENAME)s.root %(INPUTDIR)s/%(RELPATH)s %(OUTPUTDIR)s/%(OUTPATH)s

Queue 1"""%dict)
        jdf.close()
        os.chdir('%s/%s'%(condorDir,outPath))
        os.system('condor_submit %(FILENAME)s.job'%dict)
        os.system('sleep 0.5')
        os.chdir('%s'%(runDir))
        print count, "jobs submitted!!!" 
	#break
    #break
print "out "+outDir+"/"+outPath+"      from "+inDir+"/"+relPath

#, %(RUNDIR)s/csc2015_Dec01.txt, %(RUNDIR)s/ecalscn1043093_Dec01.txt

# sample = 'TT_TuneCUETP8M2T4_13TeV-powheg-pythia8'
# TTOutList = ['Mtt0to700','Mtt700to1000','Mtt1000toInf']
#
# rootfiles = EOSlist_root_files(inputDir+sample)
# relPath = sample
# for outlabel in TTOutList:
#     os.system('eos root://cmseos.fnal.gov/ mkdir -p '+outDir+sample+'_'+outlabel)
#     os.system('mkdir -p '+condorDir+sample+'_'+outlabel)
#
#     for file in rootfiles:
#         #        print file
#         rawname = file[:-5]
#         count+=1
#         dict={'RUNDIR':runDir, 'POST':runDirPost, 'RELPATH':relPath, 'LABEL':outlabel, 'CONDORDIR':condorDir, 'INPUTDIR':inDir, 'FILENAME':rawname, 'PROXY':proxyPath, 'CMSSWBASE':relbase, 'OUTPUTDIR':outDir}
#         jdfName=condorDir+'/%(RELPATH)s_%(LABEL)s/%(FILENAME)s_%(LABEL)s.job'%dict
#         print jdfName
#         jdf=open(jdfName,'w')
#         jdf.write(
#             """x509userproxy = %(PROXY)s
# universe = vanilla
# Executable = %(RUNDIR)s/makeStep1.sh
# Should_Transfer_Files = YES
# WhenToTransferOutput = ON_EXIT
# Transfer_Input_Files = %(RUNDIR)s/makeStep1.C, %(RUNDIR)s/%(POST)s/step1.cc, %(RUNDIR)s/%(POST)s/step1.h, %(RUNDIR)s/%(POST)s/step1_cc.d, %(RUNDIR)s/%(POST)s/step1_cc.so, %(RUNDIR)s/%(POST)s/fakerate.h
# Output = %(FILENAME)s_%(LABEL)s.out
# Error = %(FILENAME)s_%(LABEL)s.err
# Log = %(FILENAME)s_%(LABEL)s.log
# Notification = Never
# Arguments = %(FILENAME)s.root %(FILENAME)s_%(LABEL)s.root %(INPUTDIR)s/%(RELPATH)s %(OUTPUTDIR)s/%(RELPATH)s_%(LABEL)s
#
# Queue 1"""%dict)
#         jdf.close()
#         os.chdir('%s/%s_%s'%(condorDir,relPath,outlabel))
#         os.system('condor_submit %(FILENAME)s_%(LABEL)s.job'%dict)
#         os.system('sleep 0.5')
#         os.chdir('%s'%(runDir))
#         print count, "jobs submitted!!!"
#
# print("--- %s minutes ---" % (round(time.time() - start_time, 2)/60))
