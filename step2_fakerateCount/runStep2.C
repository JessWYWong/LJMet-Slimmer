#include "step2_fakeRateCount.C"

void runStep2(){
  
  
  std::vector<TString> inputFiles;
  std::vector<TString> outputFiles;

  TString inputFile;
  TString outputFile;
  TString eosDir;
  TString inputDir;
  TString subDir;
  TString outputDir;  
  
  //eosDir ="root://cmseos.fnal.gov//store/user/lpcljm/";
  eosDir ="root://cmseos.fnal.gov//store/user/wywong/";

  std::vector<TString> fileNames;
  
//    fileNames.push_back("TT_TuneCUETP8M2T4_13TeV-powheg-pythia8_hadd.root");
// //    fileNames.push_back("TT_TuneCUETP8M2T4_13TeV-powheg-pythia8_1_hadd.root");
// //    fileNames.push_back("TT_TuneCUETP8M2T4_13TeV-powheg-pythia8_2_hadd.root");
// // //    fileNames.push_back("TT_TuneCUETP8M2T4_13TeV-powheg-pythia8_3_hadd.root");
// // //    fileNames.push_back("TT_TuneCUETP8M2T4_13TeV-powheg-pythia8_4_hadd.root");
// // //    fileNames.push_back("TT_TuneCUETP8M2T4_13TeV-powheg-pythia8_5_hadd.root");   
// // //   inputDir="LJMet80x_1orMorelep_Moriond17_ttbarFakeRate_saveLooseMC_2017_4_17_rizki_step1hadds";
// // //   inputDir="LJMet80x_1orMorelep_Moriond17_MCFakeRate_saveLooseMC_2017_5_8_rizki_step1hadds";  
// // //   inputDir="LJMet80x_1orMorelep_Moriond17_MCFakeRate_saveLooseMC_2017_5_8_dR0p3_rizki_step1hadds";  
// // //   inputDir="LJMet80x_1orMorelep_Moriond17_MCFakeRate_saveLooseMC_2017_5_8_dR0p1_rizki_step1hadds";  
// //   inputDir="LJMet80x_1orMorelep_Moriond17_ttbarFakeRate_saveLooseMC_2017_4_17_dR0p01_elMVAaltFix_rizki_step1hadds";  
//   inputDir="LJMet80x_3lep_Moriond17_ttbarFakeRate_saveLooseMC_2017_4_17_dR0p01_PRv9_FRv48_elMVAaltFix_rizki_step1hadds";

  
//   fileNames.push_back("DYJetsToLL_M-50_TuneCUETP8M1_13TeV-madgraphMLM-pythia8_combined_hadd.root");  
//    fileNames.push_back("DYJetsToLL_M-50_TuneCUETP8M1_13TeV-madgraphMLM-pythia8_combined_1_hadd.root");  
   //fileNames.push_back("DYJetsToLL_M-50_TuneCUETP8M1_13TeV-madgraphMLM-pythia8_combined_v2_1_hadd.root");  
  fileNames.push_back("TTTo2L2Nu_TuneCP5_PSweights_13TeV-powheg-pythia8_10.root");//_hadd.root");
  //inputDir="LJMet80x_1orMorelep_Moriond17_MCFakeRate_saveLooseMC_2017_5_8_dR0p01_elMVAaltFix_rizki_step1hadds";
  //inputDir="FWLJMET102X_3lep2017_wywong_102019_saveLooseLep_ttClosureCount_step1_FRv2_hadds";
  //inputDir="FWLJMET102X_3lep2017_wywong_102019_saveLooseLep_step1_FRv1_v2_hadds";
  //inputDir="FWLJMET102X_3lep2017_wywong_012020_step1_FRv3";//_hadds";
  inputDir="FWLJMET102X_3lep2017_wywong_012020_ttClosureCount_step1_FRv3/TTTo2L2Nu_TuneCP5_PSweights_13TeV-powheg-pythia8/0000";

  //subDir="nominal";

  outputDir=inputDir+"_step2";
      
  gSystem->AddIncludePath("-I$CMSSW_BASE/src/");
  
  for(int i=0; i< fileNames.size() ; i++){
  	
  	inputFile = eosDir+"/"+inputDir+"/"+fileNames.at(i); //+subDir+"/"+fileNames.at(i);
  	system("mkdir -vp "+outputDir);

  	outputFile = outputDir+"/"+fileNames.at(i);
  	
  	std::cout << "" << std::endl;
  	
  	std::cout << "Processing file: " << inputFile << std::endl;
  	
  	step2_fakeRateCount t(inputFile,outputFile);
  	t.Loop();
  
  }
  
//   system("mv -v CheckOverlap.txt "+eosDir+"/"+outputDir);
  
  gApplication->Terminate();

}


