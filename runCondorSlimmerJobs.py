import os,shutil,datetime,time
import getpass
from ROOT import *
execfile("/uscms_data/d3/wywong/EOSSafeUtils.py")

start_time = time.time()

shift = sys.argv[1]

#IO directories must be full paths

relbase = os.environ['CMSSW_BASE']

inputDir='/eos/uscms/store/user/wywong/FWLJMET102X_3lep2018_wywong_052020/'

outputDir='/eos/uscms/store/user/wywong/FWLJMET102X_3lep2018_wywong_052020_step1_FRv6_PRv4_ANv8_uFRupdate/'#_etaFR/'#_unityElPR/'

condorDir=os.environ['CMSSW_BASE']+'/../'+outputDir.split('/')[-2]+'/'


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

    rootfiles = []
    if len(subdir) > 1:
        for sub in subdir:
            subpath = path+"/"+sub
            subsubdir = EOSlistdir(inputDir+subpath)
            while len(subsubdir) == 1 and ".root" not in subsubdir[0]:
                subpath = subpath+"/"+ subsubdir[0]
                subsubdir = EOSlistdir(inputDir+subpath)
            rootfiles += [subpath.replace(path,"")+"/"+x for x in EOSlist_root_files(inputDir+subpath)]
    else:
        rootfiles = EOSlist_root_files(inputDir+path)

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


dirList = [
## 2018 FWLJMET
        #'WZTo3LNu_TuneCP5_13TeV-powheg-pythia8',	
        ##'ZZTo4L_TuneCP5_13TeV_powheg_pythia8/multiLep2018/200504_160759/0000',
	'ZZTo4L_TuneCP5_13TeV_powheg_pythia8-ext2/multiLep2018/200504_160922/0000',
        #'ZZTo4L_TuneCP5_13TeV_powheg_pythia8-ext2/multiLep2018/200504_160922/0001',
        #'WWW_4F_TuneCP5_13TeV-amcatnlo-pythia8',
        #'WWZ_TuneCP5_13TeV-amcatnlo-pythia8',
        #'WZZ_TuneCP5_13TeV-amcatnlo-pythia8',
	#'WZZTo3L1Nu2Q_4f_TuneCP5_13TeV_amcatnlo_pythia8',
	#'WZZ_ZTo2L_WToAll_4f_TuneCP5_13TeV_amcatnlo_pythia8',
        #'ZZZ_TuneCP5_13TeV-amcatnlo-pythia8',
        #'TTWJetsToLNu_TuneCP5_13TeV-amcatnloFXFX-madspin-pythia8',
        #'TTZToLLNuNu_M-10_TuneCP5_13TeV-amcatnlo-pythia8',
	#'TTTo2L2Nu_TuneCP5_13TeV-powheg-pythia8',        

        #'EGamma/multiLep2018/210507_002744/0000',
        #'EGamma/multiLep2018/210507_002949/0000',
        #'EGamma/multiLep2018/210507_003043/0000',        
        #'EGamma/multiLep2018/210508_055555/0000',
        #'DoubleMuon/multiLep2018/210508_055916/0000',
        #'DoubleMuon/multiLep2018/210507_004614/0000',
        #'DoubleMuon/multiLep2018/210507_005252/0000',
        #'DoubleMuon/multiLep2018/210507_010057/0000',
        #'MuonEG/multiLep2018/210507_010355/0000',
        #'MuonEG/multiLep2018/210507_010819/0000',
        #'MuonEG/multiLep2018/210508_055558/0000',
        #'MuonEG/multiLep2018/210507_011016/0000',
    ]

EGamma_crabid = {'055555':'D', '002744' : 'A', '002949': 'B', '003043':'C'}
MuonEG_crabid = {'010355': 'A', '010819': 'B', '055558':'C', '011016': 'D'}
DoubleMuon_crabid = {'055916': 'A', '004614': 'B', '005252': 'C', '010057': 'D'}

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

    os.system('eos root://cmseos.fnal.gov/ mkdir -p '+outDir+sample+era)
    outPath = sample+era
    if(path.split('/')[-1]=='0000' or path.split('/')[-1]=='0001'):
        outPath=outPath+"/"+path.split('/')[-1]
    os.system('mkdir -p '+condorDir+outPath)
    relPath = path

    rootfiles = EOSlist_root_files(inputDir+path)
    for file in rootfiles:
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
print "out "+outDir+"/"+outPath+"      from "+inDir+"/"+relPath

