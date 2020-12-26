#include "step1.cc"

void testStep1(){  
  TString path ="root://cmseos.fnal.gov//store/user/lpcljm/FWLJMET102X_3lep2017_062019/";
 
  //Choose one for test:
//   TString outname  = "MuonEG";
//   TString filename = outname+"/multiLep2017/190620_232931/0000/"+outname+"_1.root"; //190620_232931:rsyarif_crab_multiLep2017_MuonEGRun2017F
  
  TString outname  = "TprimeTprime_M-1400_TuneCP5_13TeV-madgraph-pythia8";
  TString filename = outname+"/multiLep2017/190620_222511/0000/"+outname+"_1.root";

  TString inputFile=path+"/"+filename;    	
  TString outputFile=outname+"_TWTW.root";//"testStep1_"+outname+".root";

  gSystem->AddIncludePath("-I$CMSSW_BASE/src/");
  
  step1 t(inputFile,outputFile);
 
  if ( inputFile.Contains("MuonEG") || inputFile.Contains("DoubleEG") || inputFile.Contains("DoubleMuon") ) { 
      t.Loop("ljmet", "ljmet");   
  }
  else {
      t.saveHistograms();
      vector<TString> shifts = { "ljmet", "ljmet_JECup", "ljmet_JECdown", "ljmet_JERup", "ljmet_JERdown" };
      for (size_t i =0; i<shifts.size(); ++i) {
          cout << endl << "Running shift " << shifts[i] << endl;
          t.Loop(shifts[i], shifts[i]);
      }
  }
  
  std::cout<< "DONE!"<< std::endl;
  gApplication->Terminate();
}


