
using namespace std;

void Closure_3leps_ppf(){

	bool PrintMixedChannels = false;
	cout << "PrintMixedChannels = " << PrintMixedChannels << endl;	
	bool printSource = false;
	
// 	TString f_str = "root://cmseos.fnal.gov://store/user/lpcljm/LJMet80x_1orMorelep_Moriond17_ttbarFakeRate_saveLooseMC_2017_4_17_rizki_step1hadds/nominal/TT_TuneCUETP8M2T4_13TeV-powheg-pythia8_hadd.root";
// 	TString f_str = "root://cmseos.fnal.gov://store/user/lpcljm/LJMet80x_1orMorelep_Moriond17_ttbarFakeRate_saveLooseMC_2017_4_17_rizki_step1hadds/nominal/TT_TuneCUETP8M2T4_13TeV-powheg-pythia8_1_hadd.root";
// 	TString f_str = "root://cmseos.fnal.gov://store/user/lpcljm//LJMet80x_3lep_Moriond17_mcFakeRate_saveLooseMC_2017_4_20_rizki_step1hadds/nominal/TT_TuneCUETP8M2T4_13TeV-powheg-pythia8_hadd.root";
// 	TString f_str = "root://cmseos.fnal.gov://store/user/lpcljm/LJMet80x_3lep_Moriond17_mcFakeRate_saveLooseMC_2017_4_20_rizki_step1hadds/nominal/TTTo2L2Nu_TuneCUETP8M2_ttHtranche3_13TeV-powheg-pythia8_hadd.root";
// 	TString f_str = "root://cmseos.fnal.gov://store/user/lpcljm/LJMet80x_3lep_Moriond17_mcFakeRate_saveLooseMC_2017_4_20_rizki_step1hadds/nominal/TTToSemilepton_TuneCUETP8M2_ttHtranche3_13TeV-powheg-pythia8_hadd.root";
// 	TString f_str = "root://cmseos.fnal.gov://store/user/lpcljm/LJMet80x_3lep_Moriond17_mcFakeRate_saveLooseMC_2017_4_20_rizki_step1hadds/nominal/DYJetsToLL_M-50_TuneCUETP8M1_13TeV-madgraphMLM-pythia8_combined_hadd.root";

// 	TString f_str = "root://cmseos.fnal.gov://store/user/lpcljm/LJMet80x_3lep_Moriond17_ttbarFakeRate_saveLooseMC_2017_4_17_dR0p01_PRv9_FRv45_elMVAaltFix_rizki_step1hadds/nominal/TT_TuneCUETP8M2T4_13TeV-powheg-pythia8_hadd.root"; //fakerate was measured using LJMet80x_1orMorelep_Moriond17_ttbarFakeRate_saveLooseMC_2017_4_17_dR0p01_elMVAaltFix_rizki_step1hadds/nominal/TT_....1_hadd.root
//	TString f_str = "root://cmseos.fnal.gov://store/user/lpcljm/LJMet80x_3lep_Moriond17_ttbarFakeRate_saveLooseMC_2017_4_17_dR0p01_PRv9_FRv48_elMVAaltFix_rizki_step1hadds/nominal/TT_TuneCUETP8M2T4_13TeV-powheg-pythia8_hadd.root"; //fakerate was measured using LJMet80x_1orMorelep_Moriond17_ttbarFakeRate_saveLooseMC_2017_4_17_dR0p01_elMVAaltFix_rizki_step1hadds/nominal/TT_....1_hadd.root
	TString f_str = "root://cmseos.fnal.gov://store/user/wywong/FWLJMET102X_3lep2017_wywong_102019_saveLooseLep_step1_FRv1_hadds/TTTo2L2Nu_TuneCP5_PSweights_13TeV-powheg-pythia8_hadd.root";
		
	TFile *f = TFile::Open(f_str, "READ");
	
	cout << "Opening file:" << f_str << endl;

	TTree *t = (TTree*) f->Get("ljmet");
	
// 	TString saveDir = "Closure_3leps_ppf_Sep19-2017";
	TString saveDir = "Closure_3leps_ppf_Sep19-2017_minMlllBv4";

	system("mkdir -v "+saveDir);


	// FR 1 or more leptons -- ttbar
// 	float elFR = 0.35;	
// 	float elFR_isNotMatched = 0.61;	
// 	float elFR_isFromB = 0.18;	
// 	float elFR_isFromC = 0.24;	
// 	float elFR_isFromL = 0.40;	
// 	float elFR_isFromElse = 0.85;	
// 
// 	float muFR = 0.13;	
// 	float muFR_isNotMatched = 0.02;	
// 	float muFR_isFromB = 0.14;	
// 	float muFR_isFromC = 0.23;	
// 	float muFR_isFromL = 0.65;	
// 	float muFR_isFromElse = 0.79;	

	// FR 3 leptons -- ttbar
// 	float elFR = 0.24;	
// 	float elFR_isNotMatched = 0.50;	
// 	float elFR_isFromB = 0.18;	
// 	float elFR_isFromC = 0.27;	
// 	float elFR_isFromL = 0.5;	
// 	float elFR_isFromElse = 1.0;	
// 
// 	float muFR = 0.13;	
// 	float muFR_isNotMatched = 0.0;	
// 	float muFR_isFromB = 0.13;	
// 	float muFR_isFromC = 0.12;	
// 	float muFR_isFromL = 0.67;	
// 	float muFR_isFromElse = 0.81;	

	// FR 3 leptons -- DY
// 	float elFR = 0.50;	
// 	float elFR_isNotMatched = 0.51;	
// 	float elFR_isFromB = 0.24;	
// 	float elFR_isFromC = 0.30;	
// 	float elFR_isFromL = 0.85;	
// 	float elFR_isFromElse = 0.93;	
// 
// 	float muFR = 0.12;	
// 	float muFR_isNotMatched = 0.0;	
// 	float muFR_isFromB = 0.17;	
// 	float muFR_isFromC = 0.29;	
// 	float muFR_isFromL = 0.95;	
// 	float muFR_isFromElse = 0.90;	


	// FR 1 or more leptons -- ttbar -- elMVAvalueFix -- Sep18-2017
	float elFR = 0.25;	
	float elFR_isNotMatched = 0.40;	
	float elFR_isFromB = 0.15;	
	float elFR_isFromC = 0.18;	
	float elFR_isFromL = 0.27;	
	float elFR_isFromElse = 0.69;	

	float muFR = 0.13;	
	float muFR_isNotMatched = 0.02;	
	float muFR_isFromB = 0.14;	
	float muFR_isFromC = 0.20;	
	float muFR_isFromL = 0.77;	
	float muFR_isFromElse = 0.57;	


// 	TString observ = "AllLeptonPt_PtOrdered";
	TString observ = "AK4HTpMETpLepPt";
	TString trig = " && MCPastTrigger_dilep == 1";
	TString trilep = " && isPassTrilepton==1";
	TString lepPt = " && (AllLeptonPt_PtOrdered[0]>30 && AllLeptonPt_PtOrdered[1]>30 && AllLeptonPt_PtOrdered[2]>0)";
	TString exactly3Lep = " && AllLeptonCount_PtOrdered==3";

	TString njet = " && 1";
// 	TString njet = " && (NJets_singleLepCalc ==1)";
// 	TString njet = " && (NJets_singleLepCalc ==2)";
// 	TString njet = " && (NJets_singleLepCalc > 2)";

// 	TString bjet = " && 1";
	TString bjet = " && (NJetsBTagwithSF_singleLepCalc >=1)";


// 	TString basic_cut = "1 "+trig+trilep+lepPt+exactly3Lep+njet+bjet;
// 	TString basic_cut = "1 "+trig+lepPt+exactly3Lep+njet+bjet;

// 	TString basic_cut = "1 && (AllLeptonPt_PtOrdered[0] >= 30) && (AllLeptonPt_PtOrdered[1] >= 30) && (AllLeptonPt_PtOrdered[2] >= 30) && (corr_met_singleLepCalc >= 0) && (NJets_singleLepCalc >= 0) && (NJetsBTagwithSF_singleLepCalc >= 0) && DataPastTrigger_dilep == 1 && (AK4HTpMETpLepPt >= 0) && AllLeptonCount_PtOrdered == 3 && ( (MllOS_allComb[0] > 0 || MllOS_allComb[0] < 0) && (MllOS_allComb[1] > 0 || MllOS_allComb[1] < 0) && (MllOS_allComb[2] > 0 || MllOS_allComb[2] < 0) )";
// 	TString basic_cut = "1 && (AllLeptonPt_PtOrdered[0] >= 30) && (AllLeptonPt_PtOrdered[1] >= 30) && (AllLeptonPt_PtOrdered[2] >= 30) && (corr_met_singleLepCalc >= 0) && (NJets_singleLepCalc >= 0) && (NJetsBTagwithSF_singleLepCalc >= 0) && MCPastTrigger_dilep == 1 && (AK4HTpMETpLepPt >= 0) && AllLeptonCount_PtOrdered == 3 && ( (MllOS_allComb[0] > 0 || MllOS_allComb[0] < 0) && (MllOS_allComb[1] > 0 || MllOS_allComb[1] < 0) && (MllOS_allComb[2] > 0 || MllOS_allComb[2] < 0) )";


	//ttbar - SR cut --> CHECK!!
	TString basic_cut = "1 && (AllLeptonPt_PtOrdered[0] >= 30) && (AllLeptonPt_PtOrdered[1] >= 30) && (AllLeptonPt_PtOrdered[2] >= 30) && (corr_met_singleLepCalc >= 20) && (NJets_singleLepCalc >= 3) && (NJetsBTagwithSF_singleLepCalc >= 1) && MCPastTrigger_dilep == 1 && (AK4HTpMETpLepPt >= 0) && AllLeptonCount_PtOrdered == 3 && ( (MllOS_allComb[0] > 20 || MllOS_allComb[0] < 0) && (MllOS_allComb[1] > 20 || MllOS_allComb[1] < 0) && (MllOS_allComb[2] > 20 || MllOS_allComb[2] < 0) )";

	//relaxing cut for DY:
// 	TString basic_cut = "1 && (AllLeptonPt_PtOrdered[0] >= 30) && (AllLeptonPt_PtOrdered[1] >= 30) && (AllLeptonPt_PtOrdered[2] >= 30) && (corr_met_singleLepCalc >= 20) && (NJets_singleLepCalc >= 3) && MCPastTrigger_dilep == 1 && (AK4HTpMETpLepPt >= 0) && AllLeptonCount_PtOrdered == 3 && ( (MllOS_allComb[0] > 20 || MllOS_allComb[0] < 0) && (MllOS_allComb[1] > 20 || MllOS_allComb[1] < 0) && (MllOS_allComb[2] > 20 || MllOS_allComb[2] < 0) )";


	cout << "Counting with basic cuts: " << basic_cut << endl;	
	
	TString isTTT = " && isTTT"; 
	TString isTT = " && isTT"; 
	TString isTLT = " && isTLT"; 
	TString isLTT = " && isLTT"; 

	TString isTLL = " && isTLL"; 
	TString isLLL = " && isLLL"; 
	
	TString isEEE = " && isEEE";
	TString isEEM = " && isEEM";
	TString isEMM = " && isEMM";
	TString isMMM = " && isMMM"; 

	TString isEEM_ = " && isEEM_";
	TString isEME_ = " && isEME_";
	TString isMEE_ = " && isMEE_";
	TString isEMM_ = " && isEMM_";
	TString isMEM_ = " && isMEM_";
	TString isMME_ = " && isMME_";


	TString isPPP = " && ( ( AllLeptonIsPrompt_PtOrdered[0]==1 && AllLeptonIsPrompt_PtOrdered[1]==1 && AllLeptonIsPrompt_PtOrdered[2]==1 ) )";
	
	TString isPPF = " && ( AllLeptonIsPrompt_PtOrdered[0]==1 && AllLeptonIsPrompt_PtOrdered[1]==1 && AllLeptonIsPrompt_PtOrdered[2]==0 ) ";
	TString isPFP = " && ( AllLeptonIsPrompt_PtOrdered[0]==1 && AllLeptonIsPrompt_PtOrdered[1]==0 && AllLeptonIsPrompt_PtOrdered[2]==1 ) ";
	TString isFPP = " && ( AllLeptonIsPrompt_PtOrdered[0]==0 && AllLeptonIsPrompt_PtOrdered[1]==1 && AllLeptonIsPrompt_PtOrdered[2]==1 ) ";

	TString isPFF = " && ( AllLeptonIsPrompt_PtOrdered[0]==1 && AllLeptonIsPrompt_PtOrdered[1]==0 && AllLeptonIsPrompt_PtOrdered[2]==0 ) ";
	TString isFPF = " && ( AllLeptonIsPrompt_PtOrdered[0]==0 && AllLeptonIsPrompt_PtOrdered[1]==1 && AllLeptonIsPrompt_PtOrdered[2]==0 ) ";
	TString isFFP = " && ( AllLeptonIsPrompt_PtOrdered[0]==0 && AllLeptonIsPrompt_PtOrdered[1]==0 && AllLeptonIsPrompt_PtOrdered[2]==1 ) ";

	TString isFFF = " && ( AllLeptonIsPrompt_PtOrdered[0]==0 && AllLeptonIsPrompt_PtOrdered[1]==0 && AllLeptonIsPrompt_PtOrdered[2]==0 )  ";

	//
	
	TString isTTT_ = " && ( ( AllLeptonIsTight_PtOrdered[0]==1 && AllLeptonIsTight_PtOrdered[1]==1 && AllLeptonIsTight_PtOrdered[2]==1 ) )";
	
	TString isTT_ = " && ( AllLeptonIsTight_PtOrdered[0]==1 && AllLeptonIsTight_PtOrdered[1]==1 && AllLeptonIsTight_PtOrdered[2]==0 ) ";
	TString isTLT_ = " && ( AllLeptonIsTight_PtOrdered[0]==1 && AllLeptonIsTight_PtOrdered[1]==0 && AllLeptonIsTight_PtOrdered[2]==1 ) ";
	TString isLTT_ = " && ( AllLeptonIsTight_PtOrdered[0]==0 && AllLeptonIsTight_PtOrdered[1]==1 && AllLeptonIsTight_PtOrdered[2]==1 ) ";

	TString isTLL_ = " && ( AllLeptonIsTight_PtOrdered[0]==1 && AllLeptonIsTight_PtOrdered[1]==0 && AllLeptonIsTight_PtOrdered[2]==0 ) ";
	TString isLTL_ = " && ( AllLeptonIsTight_PtOrdered[0]==0 && AllLeptonIsTight_PtOrdered[1]==1 && AllLeptonIsTight_PtOrdered[2]==0 ) ";
	TString isLLT_ = " && ( AllLeptonIsTight_PtOrdered[0]==0 && AllLeptonIsTight_PtOrdered[1]==0 && AllLeptonIsTight_PtOrdered[2]==1 ) ";

	TString isLLL_ = " && ( AllLeptonIsTight_PtOrdered[0]==0 && AllLeptonIsTight_PtOrdered[1]==0 && AllLeptonIsTight_PtOrdered[2]==0 )  ";

	//
	
	TString isPPF_isTT = " && AllLeptonIsTight_PtOrdered[0]==1 && AllLeptonIsTight_PtOrdered[1]==1 ";

	//

	TString isPPF_isNotMatched = " && ( AllLeptonIsMatched_PtOrdered[2]==0 ) ";
	TString isPFP_isNotMatched = " && ( AllLeptonIsMatched_PtOrdered[1]==0 ) " ;
	TString isFPP_isNotMatched = " && ( AllLeptonIsMatched_PtOrdered[0]==0 ) ";

	TString isPPF_isFromB = " && ( AllLeptonIsMatched_PtOrdered[2]==1 && AllLeptonIsFromB_PtOrdered[2]==1 )  ";
	TString isPFP_isFromB = " && ( AllLeptonIsMatched_PtOrdered[1]==1 && AllLeptonIsFromB_PtOrdered[1]==1 )  " ;
	TString isFPP_isFromB = " && ( AllLeptonIsMatched_PtOrdered[0]==1 && AllLeptonIsFromB_PtOrdered[0]==1 ) ";

	TString isPPF_isFromC = " && ( AllLeptonIsMatched_PtOrdered[2]==1 && AllLeptonIsFromC_PtOrdered[2]==1 && AllLeptonIsFromB_PtOrdered[2]==0)  ";
	TString isPFP_isFromC = " && ( AllLeptonIsMatched_PtOrdered[1]==1 && AllLeptonIsFromC_PtOrdered[1]==1 && AllLeptonIsFromB_PtOrdered[1]==0)  " ;
	TString isFPP_isFromC = " && ( AllLeptonIsMatched_PtOrdered[0]==1 && AllLeptonIsFromC_PtOrdered[0]==1 && AllLeptonIsFromB_PtOrdered[0]==0) ";

	TString isPPF_isFromL = " && ( AllLeptonIsMatched_PtOrdered[2]==1 && AllLeptonIsFromL_PtOrdered[2]==1 && AllLeptonIsFromB_PtOrdered[2]==0 && AllLeptonIsFromC_PtOrdered[2]==0)  ";
	TString isPFP_isFromL = " && ( AllLeptonIsMatched_PtOrdered[1]==1 && AllLeptonIsFromL_PtOrdered[1]==1 && AllLeptonIsFromB_PtOrdered[1]==0 && AllLeptonIsFromC_PtOrdered[1]==0)  " ;
	TString isFPP_isFromL = " && ( AllLeptonIsMatched_PtOrdered[0]==1 && AllLeptonIsFromL_PtOrdered[0]==1 && AllLeptonIsFromB_PtOrdered[0]==0 && AllLeptonIsFromC_PtOrdered[0]==0) ";

	TString isPPF_isFromElse = " && (  AllLeptonIsMatched_PtOrdered[2]==1 && AllLeptonIsFromL_PtOrdered[2]==0 && AllLeptonIsFromB_PtOrdered[2]==0 && AllLeptonIsFromC_PtOrdered[2]==0 )  ";
	TString isPFP_isFromElse = " && (  AllLeptonIsMatched_PtOrdered[1]==1 &&  AllLeptonIsFromL_PtOrdered[1]==0 && AllLeptonIsFromB_PtOrdered[1]==0 && AllLeptonIsFromC_PtOrdered[1]==0 )  " ;
	TString isFPP_isFromElse = " && (  AllLeptonIsMatched_PtOrdered[0]==1 &&  AllLeptonIsFromL_PtOrdered[0]==0 && AllLeptonIsFromB_PtOrdered[0]==0 && AllLeptonIsFromC_PtOrdered[0]==0 ) ";

	//===========EEE==============
	
	std::cout<<"Processing EEE ..." << std::endl;
	
	std::cout<<"Processing EEE 1 fake t/l ..." << std::endl;

	EEE_ppf_ttt = t->Draw(observ,basic_cut+isEEE+" && ( isPPF || isPFP || isFPP ) && isTTT " );
	EEE_ppf_tt  = t->Draw(observ,basic_cut+isEEE+isPPF+isPPF_isTT );

	std::cout<<"Processing EEE 1 fake t/l sources ..." << std::endl;
		EEE_ppf_tt_isNotMatched = t->Draw(observ,basic_cut+isEEE+isPPF+isPPF_isTT+isPPF_isNotMatched);

		EEE_ppf_tt_isFromB = t->Draw(observ,basic_cut+isEEE+isPPF+isPPF_isTT+isPPF_isFromB);

		EEE_ppf_tt_isFromC = t->Draw(observ,basic_cut+isEEE+isPPF+isPPF_isTT+isPPF_isFromC);

		EEE_ppf_tt_isFromElse = t->Draw(observ,basic_cut+isEEE+isPPF+isPPF_isTT+isPPF_isFromElse);

		EEE_ppf_tt_isFromL = t->Draw(observ,basic_cut+isEEE+isPPF+isPPF_isTT+isPPF_isFromL);

		//

		EEE_ppf_ttt_isNotMatched = t->Draw(observ,basic_cut+isEEE+" && ( isPPF && isTTT)"+isPPF_isNotMatched);
		EEE_pfp_ttt_isNotMatched = t->Draw(observ,basic_cut+isEEE+" && ( isPFP && isTTT)"+isPFP_isNotMatched );
		EEE_fpp_ttt_isNotMatched = t->Draw(observ,basic_cut+isEEE+" && ( isFPP && isTTT)"+isFPP_isNotMatched );

		EEE_ppf_ttt_isFromB = t->Draw(observ,basic_cut+isEEE+" && ( isPPF && isTTT)"+isPPF_isFromB);
		EEE_pfp_ttt_isFromB = t->Draw(observ,basic_cut+isEEE+" && ( isPFP && isTTT)"+isPFP_isFromB );
		EEE_fpp_ttt_isFromB = t->Draw(observ,basic_cut+isEEE+" && ( isFPP && isTTT)"+isFPP_isFromB );

		EEE_ppf_ttt_isFromC = t->Draw(observ,basic_cut+isEEE+" && ( isPPF && isTTT)"+isPPF_isFromC);
		EEE_pfp_ttt_isFromC = t->Draw(observ,basic_cut+isEEE+" && ( isPFP && isTTT)"+isPFP_isFromC );
		EEE_fpp_ttt_isFromC = t->Draw(observ,basic_cut+isEEE+" && ( isFPP && isTTT)"+isFPP_isFromC );

		EEE_ppf_ttt_isFromElse = t->Draw(observ,basic_cut+isEEE+" && ( isPPF && isTTT)"+isPPF_isFromElse);
		EEE_pfp_ttt_isFromElse = t->Draw(observ,basic_cut+isEEE+" && ( isPFP && isTTT)"+isPFP_isFromElse );
		EEE_fpp_ttt_isFromElse = t->Draw(observ,basic_cut+isEEE+" && ( isFPP && isTTT)"+isFPP_isFromElse );

		EEE_ppf_ttt_isFromL = t->Draw(observ,basic_cut+isEEE+" && ( isPPF && isTTT)"+isPPF_isFromL);
		EEE_pfp_ttt_isFromL = t->Draw(observ,basic_cut+isEEE+" && ( isPFP && isTTT)"+isPFP_isFromL );
		EEE_fpp_ttt_isFromL = t->Draw(observ,basic_cut+isEEE+" && ( isFPP && isTTT)"+isFPP_isFromL );

	//
	cout << " ========= EEE ========= " << endl;
	cout << "	--1 fake /2 prompts:   "<< endl;
	cout << "       IsTTT f(T) : " << EEE_ppf_ttt << endl;
	if(printSource){
	cout << "               Is(not)Matched   : " << EEE_ppf_ttt_isNotMatched+EEE_pfp_ttt_isNotMatched+EEE_fpp_ttt_isNotMatched << endl;
	cout << "               IsFromB          : " << EEE_ppf_ttt_isFromB+EEE_pfp_ttt_isFromB+EEE_fpp_ttt_isFromB << endl;
	cout << "               IsFromC          : " << EEE_ppf_ttt_isFromC+EEE_pfp_ttt_isFromC+EEE_fpp_ttt_isFromC << endl;
	cout << "               IsFromL          : " << EEE_ppf_ttt_isFromL+EEE_pfp_ttt_isFromL+EEE_fpp_ttt_isFromL << endl;
	cout << "               IsFromElse         : " << EEE_ppf_ttt_isFromElse+EEE_pfp_ttt_isFromElse+EEE_fpp_ttt_isFromElse << endl;
	}
	cout << "       IsTT : " << EEE_ppf_tt<< endl;
	if(printSource){
	cout << "               Is(not)Matched   : " << EEE_ppf_tt_isNotMatched<< endl;;//+EEE_pfp_tlt_isNotMatched+EEE_fpp_ltt_isNotMatched << endl;
	cout << "               IsFromB          : " << EEE_ppf_tt_isFromB<< endl;;//+EEE_pfp_tlt_isFromB+EEE_fpp_ltt_isFromB << endl;
	cout << "               IsFromC          : " << EEE_ppf_tt_isFromC<< endl;;//+EEE_pfp_tlt_isFromC+EEE_fpp_ltt_isFromC << endl;
	cout << "               IsFromL          : " << EEE_ppf_tt_isFromL<< endl;;//+EEE_pfp_tlt_isFromL+EEE_fpp_ltt_isFromL << endl;
	cout << "               IsFromElse         : " << EEE_ppf_tt_isFromElse<< endl;;//+EEE_pfp_tlt_isFromElse+EEE_fpp_ltt_isFromElse << endl;
	}
	float eee_fT = EEE_ppf_ttt*1.0;
	float eee_f = (EEE_ppf_tt*1.0);//+EEE_pfp_tlt+EEE_fpp_ltt )*1.0;
	cout << "       		eee ppf ttt observed | prediction 	: " << endl;
	cout << "       			All sources : " << eee_fT << " +- "<< sqrt(eee_fT) << " | ";
	cout << eee_f * elFR << " +- "<< sqrt(eee_f) * elFR << endl;;
	float EEE_fT_isNotMatched = EEE_ppf_ttt_isNotMatched+EEE_pfp_ttt_isNotMatched+EEE_fpp_ttt_isNotMatched*1.0;
	float EEE_f_isNotMatched = (EEE_ppf_tt_isNotMatched )*1.0;
	cout << "       			_isNotMatched	: " << EEE_fT_isNotMatched << " +- "<< sqrt(EEE_fT_isNotMatched) << " | ";
	cout << EEE_f_isNotMatched * elFR_isNotMatched << " +- "<< sqrt(EEE_f_isNotMatched) * elFR_isNotMatched << endl;;
	float EEE_fT_isFromB = EEE_ppf_ttt_isFromB+EEE_pfp_ttt_isFromB+EEE_fpp_ttt_isFromB*1.0;
	float EEE_f_isFromB = (EEE_ppf_tt_isFromB )*1.0;
	cout << "       			_isFromB	: " << EEE_fT_isFromB << " +- "<< sqrt(EEE_fT_isFromB) << " | ";
	cout << EEE_f_isFromB * elFR_isFromB << " +- "<< sqrt(EEE_f_isFromB) * elFR_isFromB << endl;;
	float EEE_fT_isFromC = EEE_ppf_ttt_isFromC+EEE_pfp_ttt_isFromC+EEE_fpp_ttt_isFromC*1.0;
	float EEE_f_isFromC = (EEE_ppf_tt_isFromC )*1.0;
	cout << "       			_isFromC	: " << EEE_fT_isFromC << " +- "<< sqrt(EEE_fT_isFromC) << " | ";
	cout << EEE_f_isFromC * elFR_isFromC << " +- "<< sqrt(EEE_f_isFromC) * elFR_isFromC << endl;;
	float EEE_fT_isFromL = EEE_ppf_ttt_isFromL+EEE_pfp_ttt_isFromL+EEE_fpp_ttt_isFromL*1.0;
	float EEE_f_isFromL = (EEE_ppf_tt_isFromL )*1.0;
	cout << "       			_isFromL	: " << EEE_fT_isFromL << " +- "<< sqrt(EEE_fT_isFromL) << " | ";
	cout << EEE_f_isFromL * elFR_isFromL << " +- "<< sqrt(EEE_f_isFromL) * elFR_isFromL << endl;;
	float EEE_fT_isFromElse = EEE_ppf_ttt_isFromElse+EEE_pfp_ttt_isFromElse+EEE_fpp_ttt_isFromElse*1.0;
	float EEE_f_isFromElse = (EEE_ppf_tt_isFromElse )*1.0;
	cout << "       			_isFromElse	: " << EEE_fT_isFromElse << " +- "<< sqrt(EEE_fT_isFromElse) << " | ";
	cout << EEE_f_isFromElse * elFR_isFromElse << " +- "<< sqrt(EEE_f_isFromElse) * elFR_isFromElse << endl;;
// if(PrintMixedChannels){
	//===========EEM==============
	std::cout<<"Processing EEM ..." << std::endl;

	//EEM - 2prompts
	std::cout<<"Processing EEM 1 fake t/l..." << std::endl;
	EEM_ppf_tt = t->Draw(observ,basic_cut+isEEM_+isPPF+isTT);

	EEM_ppf_ttt = t->Draw(observ,basic_cut+isEEM_+isPPF+isTTT);
	EEM_pfp_ttt = t->Draw(observ,basic_cut+isEEM_+isPFP+isTTT);
	EEM_fpp_ttt = t->Draw(observ,basic_cut+isEEM_+isFPP+isTTT);

	std::cout<<"Processing EEM 1 fake t/l sources..." << std::endl;
		//sources - isMatched
		EEM_ppf_tt_isNotMatched = t->Draw(observ,basic_cut+isEEM_+isPPF+isPPF_isTT+isPPF_isNotMatched);

		EEM_ppf_ttt_isNotMatched = t->Draw(observ,basic_cut+isEEM_+isPPF+isTTT+isPPF_isNotMatched);
		EEM_pfp_ttt_isNotMatched = t->Draw(observ,basic_cut+isEEM_+isPFP+isTTT+isPFP_isNotMatched);
		EEM_fpp_ttt_isNotMatched = t->Draw(observ,basic_cut+isEEM_+isFPP+isTTT+isFPP_isNotMatched);

		//sources - isFromB
		EEM_ppf_tt_isFromB = t->Draw(observ,basic_cut+isEEM_+isPPF+isPPF_isTT+isPPF_isFromB);

		EEM_ppf_ttt_isFromB = t->Draw(observ,basic_cut+isEEM_+isPPF+isTTT+isPPF_isFromB);
		EEM_pfp_ttt_isFromB = t->Draw(observ,basic_cut+isEEM_+isPFP+isTTT+isPFP_isFromB);
		EEM_fpp_ttt_isFromB = t->Draw(observ,basic_cut+isEEM_+isFPP+isTTT+isFPP_isFromB);

		//sources - isFromB
		EEM_ppf_tt_isFromB = t->Draw(observ,basic_cut+isEEM_+isPPF+isPPF_isTT+isPPF_isFromB);

		EEM_ppf_ttt_isFromB = t->Draw(observ,basic_cut+isEEM_+isPPF+isTTT+isPPF_isFromB);
		EEM_pfp_ttt_isFromB = t->Draw(observ,basic_cut+isEEM_+isPFP+isTTT+isPFP_isFromB);
		EEM_fpp_ttt_isFromB = t->Draw(observ,basic_cut+isEEM_+isFPP+isTTT+isFPP_isFromB);

		//sources - isFromC
		EEM_ppf_tt_isFromC = t->Draw(observ,basic_cut+isEEM_+isPPF+isPPF_isTT+isPPF_isFromC);

		EEM_ppf_ttt_isFromC = t->Draw(observ,basic_cut+isEEM_+isPPF+isTTT+isPPF_isFromC);
		EEM_pfp_ttt_isFromC = t->Draw(observ,basic_cut+isEEM_+isPFP+isTTT+isPFP_isFromC);
		EEM_fpp_ttt_isFromC = t->Draw(observ,basic_cut+isEEM_+isFPP+isTTT+isFPP_isFromC);

		//sources - isFromElse
		EEM_ppf_tt_isFromElse = t->Draw(observ,basic_cut+isEEM_+isPPF+isPPF_isTT+isPPF_isFromElse);

		EEM_ppf_ttt_isFromElse = t->Draw(observ,basic_cut+isEEM_+isPPF+isTTT+isPPF_isFromElse);
		EEM_pfp_ttt_isFromElse = t->Draw(observ,basic_cut+isEEM_+isPFP+isTTT+isPFP_isFromElse);
		EEM_fpp_ttt_isFromElse = t->Draw(observ,basic_cut+isEEM_+isFPP+isTTT+isFPP_isFromElse);

		//sources - isFromL
		EEM_ppf_tt_isFromL = t->Draw(observ,basic_cut+isEEM_+isPPF+isPPF_isTT+isPPF_isFromL);

		EEM_ppf_ttt_isFromL = t->Draw(observ,basic_cut+isEEM_+isPPF+isTTT+isPPF_isFromL);
		EEM_pfp_ttt_isFromL = t->Draw(observ,basic_cut+isEEM_+isPFP+isTTT+isPFP_isFromL);
		EEM_fpp_ttt_isFromL = t->Draw(observ,basic_cut+isEEM_+isFPP+isTTT+isFPP_isFromL);

	//EME - 2prompts
	std::cout<<"Processing EME 1 fake t/l ..." << std::endl;
	EME_ppf_tt = t->Draw(observ,basic_cut+isEME_+isPPF+isPPF_isTT);
	EME_pfp_tlt = t->Draw(observ,basic_cut+isEME_+isPFP+isTLT);
	EME_fpp_ltt = t->Draw(observ,basic_cut+isEME_+isFPP+isLTT);

	EME_ppf_ttt = t->Draw(observ,basic_cut+isEME_+isPPF+isTTT);
	EME_pfp_ttt = t->Draw(observ,basic_cut+isEME_+isPFP+isTTT);
	EME_fpp_ttt = t->Draw(observ,basic_cut+isEME_+isFPP+isTTT);

	std::cout<<"Processing EME 1 fake t/l sources ..." << std::endl;
		//sources - isMatched
		EME_ppf_tt_isNotMatched = t->Draw(observ,basic_cut+isEME_+isPPF+isPPF_isTT+isPPF_isNotMatched);

		EME_ppf_ttt_isNotMatched = t->Draw(observ,basic_cut+isEME_+isPPF+isTTT+isPPF_isNotMatched);
		EME_pfp_ttt_isNotMatched = t->Draw(observ,basic_cut+isEME_+isPFP+isTTT+isPFP_isNotMatched);
		EME_fpp_ttt_isNotMatched = t->Draw(observ,basic_cut+isEME_+isFPP+isTTT+isFPP_isNotMatched);

		//sources - isFromB
		EME_ppf_tt_isFromB = t->Draw(observ,basic_cut+isEME_+isPPF+isPPF_isTT+isPPF_isFromB);

		EME_ppf_ttt_isFromB = t->Draw(observ,basic_cut+isEME_+isPPF+isTTT+isPPF_isFromB);
		EME_pfp_ttt_isFromB = t->Draw(observ,basic_cut+isEME_+isPFP+isTTT+isPFP_isFromB);
		EME_fpp_ttt_isFromB = t->Draw(observ,basic_cut+isEME_+isFPP+isTTT+isFPP_isFromB);

		//sources - isFromC
		EME_ppf_tt_isFromC = t->Draw(observ,basic_cut+isEME_+isPPF+isPPF_isTT+isPPF_isFromC);

		EME_ppf_ttt_isFromC = t->Draw(observ,basic_cut+isEME_+isPPF+isTTT+isPPF_isFromC);
		EME_pfp_ttt_isFromC = t->Draw(observ,basic_cut+isEME_+isPFP+isTTT+isPFP_isFromC);
		EME_fpp_ttt_isFromC = t->Draw(observ,basic_cut+isEME_+isFPP+isTTT+isFPP_isFromC);

		//sources - isFromElse
		EME_ppf_tt_isFromElse = t->Draw(observ,basic_cut+isEME_+isPPF+isPPF_isTT+isPPF_isFromElse);

		EME_ppf_ttt_isFromElse = t->Draw(observ,basic_cut+isEME_+isPPF+isTTT+isPPF_isFromElse);
		EME_pfp_ttt_isFromElse = t->Draw(observ,basic_cut+isEME_+isPFP+isTTT+isPFP_isFromElse);
		EME_fpp_ttt_isFromElse = t->Draw(observ,basic_cut+isEME_+isFPP+isTTT+isFPP_isFromElse);

		//sources - isFromL
		EME_ppf_tt_isFromL = t->Draw(observ,basic_cut+isEME_+isPPF+isPPF_isTT+isPPF_isFromL);

		EME_ppf_ttt_isFromL = t->Draw(observ,basic_cut+isEME_+isPPF+isTTT+isPPF_isFromL);
		EME_pfp_ttt_isFromL = t->Draw(observ,basic_cut+isEME_+isPFP+isTTT+isPFP_isFromL);
		EME_fpp_ttt_isFromL = t->Draw(observ,basic_cut+isEME_+isFPP+isTTT+isFPP_isFromL);


	//MEE - 2prompts
	std::cout<<"Processing MEE 1 fake t/l ..." << std::endl;
	MEE_ppf_tt = t->Draw(observ,basic_cut+isMEE_+isPPF+isPPF_isTT);

	MEE_ppf_ttt = t->Draw(observ,basic_cut+isMEE_+isPPF+isTTT);
	MEE_pfp_ttt = t->Draw(observ,basic_cut+isMEE_+isPFP+isTTT);
	MEE_fpp_ttt = t->Draw(observ,basic_cut+isMEE_+isFPP+isTTT);

	std::cout<<"Processing MEE 1 fake t/l sources..." << std::endl;
		//source isMatched		
		MEE_ppf_tt_isNotMatched = t->Draw(observ,basic_cut+isMEE_+isPPF+isPPF_isTT+isPPF_isNotMatched);

		MEE_ppf_ttt_isNotMatched = t->Draw(observ,basic_cut+isMEE_+isPPF+isTTT+isPPF_isNotMatched);
		MEE_pfp_ttt_isNotMatched = t->Draw(observ,basic_cut+isMEE_+isPFP+isTTT+isPFP_isNotMatched);
		MEE_fpp_ttt_isNotMatched = t->Draw(observ,basic_cut+isMEE_+isFPP+isTTT+isFPP_isNotMatched);

		//source isFromB		
		MEE_ppf_tt_isFromB = t->Draw(observ,basic_cut+isMEE_+isPPF+isPPF_isTT+isPPF_isFromB);

		MEE_ppf_ttt_isFromB = t->Draw(observ,basic_cut+isMEE_+isPPF+isTTT+isPPF_isFromB);
		MEE_pfp_ttt_isFromB = t->Draw(observ,basic_cut+isMEE_+isPFP+isTTT+isPFP_isFromB);
		MEE_fpp_ttt_isFromB = t->Draw(observ,basic_cut+isMEE_+isFPP+isTTT+isFPP_isFromB);

		//source isFromC		
		MEE_ppf_tt_isFromC = t->Draw(observ,basic_cut+isMEE_+isPPF+isPPF_isTT+isPPF_isFromC);

		MEE_ppf_ttt_isFromC = t->Draw(observ,basic_cut+isMEE_+isPPF+isTTT+isPPF_isFromC);
		MEE_pfp_ttt_isFromC = t->Draw(observ,basic_cut+isMEE_+isPFP+isTTT+isPFP_isFromC);
		MEE_fpp_ttt_isFromC = t->Draw(observ,basic_cut+isMEE_+isFPP+isTTT+isFPP_isFromC);

		//source isFromElse		
		MEE_ppf_tt_isFromElse = t->Draw(observ,basic_cut+isMEE_+isPPF+isPPF_isTT+isPPF_isFromElse);

		MEE_ppf_ttt_isFromElse = t->Draw(observ,basic_cut+isMEE_+isPPF+isTTT+isPPF_isFromElse);
		MEE_pfp_ttt_isFromElse = t->Draw(observ,basic_cut+isMEE_+isPFP+isTTT+isPFP_isFromElse);
		MEE_fpp_ttt_isFromElse = t->Draw(observ,basic_cut+isMEE_+isFPP+isTTT+isFPP_isFromElse);

		//source isFromL		
		MEE_ppf_tt_isFromL = t->Draw(observ,basic_cut+isMEE_+isPPF+isPPF_isTT+isPPF_isFromL);

		MEE_ppf_ttt_isFromL = t->Draw(observ,basic_cut+isMEE_+isPPF+isTTT+isPPF_isFromL);
		MEE_pfp_ttt_isFromL = t->Draw(observ,basic_cut+isMEE_+isPFP+isTTT+isPFP_isFromL);
		MEE_fpp_ttt_isFromL = t->Draw(observ,basic_cut+isMEE_+isFPP+isTTT+isFPP_isFromL);
	

	cout << " ========= EEM ========= " << endl;
	cout << "	--1 fake-- :  "<< endl;
	cout << "	f(T):   "<< endl;
	cout << "       EE(M) PPF TTT (fake mu) : " << EEM_ppf_ttt << endl;
	if(printSource){
	cout << "               Is(not)Matched   : " << EEM_ppf_ttt_isNotMatched << endl;
	cout << "               IsFromB          : " << EEM_ppf_ttt_isFromB << endl;
	cout << "               IsFromC          : " << EEM_ppf_ttt_isFromC << endl;
	cout << "               IsFromL          : " << EEM_ppf_ttt_isFromL<< endl;
	cout << "               IsFromElse         : " << EEM_ppf_ttt_isFromElse << endl;
	}
	cout << "       E(E)M PFP TTT (fake el) : " << EEM_pfp_ttt << endl;
	if(printSource){
	cout << "               Is(not)Matched   : " << EEM_pfp_ttt_isNotMatched << endl;
	cout << "               IsFromB          : " << EEM_pfp_ttt_isFromB << endl;
	cout << "               IsFromC          : " << EEM_pfp_ttt_isFromC << endl;
	cout << "               IsFromL          : " << EEM_pfp_ttt_isFromL<< endl;
	cout << "               IsFromElse         : " << EEM_pfp_ttt_isFromElse << endl;
	}
	cout << "       (E)EM FPP TTT (fake el) : " << EEM_fpp_ttt << endl;
	if(printSource){
	cout << "               Is(not)Matched   : " << EEM_fpp_ttt_isNotMatched << endl;
	cout << "               IsFromB          : " << EEM_fpp_ttt_isFromB << endl;
	cout << "               IsFromC          : " << EEM_fpp_ttt_isFromC << endl;
	cout << "               IsFromL          : " << EEM_fpp_ttt_isFromL<< endl;
	cout << "               IsFromElse         : " << EEM_fpp_ttt_isFromElse << endl;
	}
	cout << "-" << endl;
	cout << "       EM(E) PPF TTT (fake el) : " << EME_ppf_ttt << endl;
	if(printSource){
	cout << "               Is(not)Matched   : " << EME_ppf_ttt_isNotMatched << endl;
	cout << "               IsFromB          : " << EME_ppf_ttt_isFromB << endl;
	cout << "               IsFromC          : " << EME_ppf_ttt_isFromC << endl;
	cout << "               IsFromL          : " << EME_ppf_ttt_isFromL<< endl;
	cout << "               IsFromElse         : " << EME_ppf_ttt_isFromElse << endl;
	}
	cout << "       E(M)E PFP TTT (fake mu) : " << EME_pfp_ttt << endl;
	if(printSource){
	cout << "               Is(not)Matched   : " << EME_pfp_ttt_isNotMatched << endl;
	cout << "               IsFromB          : " << EME_pfp_ttt_isFromB << endl;
	cout << "               IsFromC          : " << EME_pfp_ttt_isFromC << endl;
	cout << "               IsFromL          : " << EME_pfp_ttt_isFromL<< endl;
	cout << "               IsFromElse         : " << EME_pfp_ttt_isFromElse << endl;
	}
	cout << "       (E)ME FPP TTT (fake el) : " << EME_fpp_ttt << endl;
	if(printSource){
	cout << "               Is(not)Matched   : " << EME_fpp_ttt_isNotMatched << endl;
	cout << "               IsFromB          : " << EME_fpp_ttt_isFromB << endl;
	cout << "               IsFromC          : " << EME_fpp_ttt_isFromC << endl;
	cout << "               IsFromL          : " << EME_fpp_ttt_isFromL<< endl;
	cout << "               IsFromElse         : " << EME_fpp_ttt_isFromElse << endl;
	}
	cout << "-" << endl;
	cout << "       ME(E) PPF TTT (fake el) : " << MEE_ppf_ttt << endl;
	if(printSource){
	cout << "               Is(not)Matched   : " << MEE_ppf_ttt_isNotMatched << endl;
	cout << "               IsFromB          : " << MEE_ppf_ttt_isFromB << endl;
	cout << "               IsFromC          : " << MEE_ppf_ttt_isFromC << endl;
	cout << "               IsFromL          : " << MEE_ppf_ttt_isFromL<< endl;
	cout << "               IsFromElse         : " << MEE_ppf_ttt_isFromElse << endl;
	}
	cout << "       M(E)E PFP TTT (fake el) : " << MEE_pfp_ttt << endl;
	if(printSource){
	cout << "               Is(not)Matched   : " << MEE_pfp_ttt_isNotMatched << endl;
	cout << "               IsFromB          : " << MEE_pfp_ttt_isFromB << endl;
	cout << "               IsFromC          : " << MEE_pfp_ttt_isFromC << endl;
	cout << "               IsFromL          : " << MEE_pfp_ttt_isFromL<< endl;
	cout << "               IsFromElse         : " << MEE_pfp_ttt_isFromElse << endl;
	}
	cout << "       (M)EE FPP TTT (fake mu) : " << MEE_fpp_ttt << endl;
	if(printSource){
	cout << "               Is(not)Matched   : " << MEE_fpp_ttt_isNotMatched << endl;
	cout << "               IsFromB          : " << MEE_fpp_ttt_isFromB << endl;
	cout << "               IsFromC          : " << MEE_fpp_ttt_isFromC << endl;
	cout << "               IsFromL          : " << MEE_fpp_ttt_isFromL<< endl;
	cout << "               IsFromElse         : " << MEE_fpp_ttt_isFromElse << endl;
	}
	cout << "" << endl;
	cout << "	f:   "<< endl;
	cout << "       EE(M) PPF TT (fake mu) : " << EEM_ppf_tt << endl;
	if(printSource){
	cout << "               Is(not)Matched   : " << EEM_ppf_tt_isNotMatched << endl;
	cout << "               IsFromB          : " << EEM_ppf_tt_isFromB << endl;
	cout << "               IsFromC          : " << EEM_ppf_tt_isFromC << endl;
	cout << "               IsFromL          : " << EEM_ppf_tt_isFromL<< endl;
	cout << "               IsFromElse         : " << EEM_ppf_tt_isFromElse << endl;
	}
	cout << "-" << endl;
	cout << "       EM(E) PPF TT (fake el) : " << EME_ppf_tt << endl;
	if(printSource){
	cout << "               Is(not)Matched   : " << EME_ppf_tt_isNotMatched << endl;
	cout << "               IsFromB          : " << EME_ppf_tt_isFromB << endl;
	cout << "               IsFromC          : " << EME_ppf_tt_isFromC << endl;
	cout << "               IsFromL          : " << EME_ppf_tt_isFromL<< endl;
	cout << "               IsFromElse         : " << EME_ppf_tt_isFromElse << endl;
	}
	cout << "-" << endl;
	cout << "       ME(E) PPF TT (fake el) : " << MEE_ppf_tt << endl;
	if(printSource){
	cout << "               Is(not)Matched   : " << MEE_ppf_tt_isNotMatched << endl;
	cout << "               IsFromB          : " << MEE_ppf_tt_isFromB << endl;
	cout << "               IsFromC          : " << MEE_ppf_tt_isFromC << endl;
	cout << "               IsFromL          : " << MEE_ppf_tt_isFromL<< endl;
	cout << "               IsFromElse         : " << MEE_ppf_tt_isFromElse << endl;
	}
	cout << "       ---------------------  " << endl;
	float eem_e_fT = EEM_pfp_ttt+EEM_fpp_ttt+EME_ppf_ttt+EME_fpp_ttt+MEE_ppf_ttt+MEE_pfp_ttt;

		float eem_e_fT_isNotMatched = EEM_pfp_ttt_isNotMatched+EEM_fpp_ttt_isNotMatched+EME_ppf_ttt_isNotMatched+EME_fpp_ttt_isNotMatched+MEE_ppf_ttt_isNotMatched+MEE_pfp_ttt_isNotMatched;
		float eem_e_fT_isFromB = EEM_pfp_ttt_isFromB+EEM_fpp_ttt_isFromB+EME_ppf_ttt_isFromB+EME_fpp_ttt_isFromB+MEE_ppf_ttt_isFromB+MEE_pfp_ttt_isFromB;
		float eem_e_fT_isFromC = EEM_pfp_ttt_isFromC+EEM_fpp_ttt_isFromC+EME_ppf_ttt_isFromC+EME_fpp_ttt_isFromC+MEE_ppf_ttt_isFromC+MEE_pfp_ttt_isFromC;
		float eem_e_fT_isFromElse = EEM_pfp_ttt_isFromElse+EEM_fpp_ttt_isFromElse+EME_ppf_ttt_isFromElse+EME_fpp_ttt_isFromElse+MEE_ppf_ttt_isFromElse+MEE_pfp_ttt_isFromElse;
		float eem_e_fT_isFromL = EEM_pfp_ttt_isFromL+EEM_fpp_ttt_isFromL+EME_ppf_ttt_isFromL+EME_fpp_ttt_isFromL+MEE_ppf_ttt_isFromL+MEE_pfp_ttt_isFromL;

	float eem_e_f = EME_ppf_tt+MEE_ppf_tt;

		float eem_e_f_isNotMatched = EME_ppf_tt_isNotMatched+MEE_ppf_tt_isNotMatched;
		float eem_e_f_isFromB = EME_ppf_tt_isFromB+MEE_ppf_tt_isFromB;
		float eem_e_f_isFromC = EME_ppf_tt_isFromC+MEE_ppf_tt_isFromC;
		float eem_e_f_isFromElse =EME_ppf_tt_isFromElse+MEE_ppf_tt_isFromElse;
		float eem_e_f_isFromL = EME_ppf_tt_isFromL+MEE_ppf_tt_isFromL;

// 	cout << "       el observed          : " << eem_e_fT << " +/- " << sqrt(eem_e_fT) <<endl;
// 	if(printSource){
// 	cout << "               Is(not)Matched   : " << eem_e_fT_isNotMatched << " +/- " << sqrt(eem_e_fT_isNotMatched) << endl;
// 	cout << "               IsFromB          : " << eem_e_fT_isFromB << " +/- " << sqrt(eem_e_fT_isFromB) << endl;
// 	cout << "               IsFromC          : " << eem_e_fT_isFromC << " +/- " << sqrt(eem_e_fT_isFromC) << endl;
// 	cout << "               IsFromL          : " << eem_e_fT_isFromL << " +/- " << sqrt(eem_e_fT_isFromL) << endl;
// 	cout << "               IsFromElse         : " << eem_e_fT_isFromElse << " +/- " << sqrt(eem_e_fT_isFromElse) << endl;
// 	}
// 	cout << "       el prediction          : " << eem_e_f*elFR << " +/- " << sqrt(eem_e_f)*elFR  << endl;
// 	if(printSource){
// 	cout << "               Is(not)Matched   : " << eem_e_f_isNotMatched*elFR  << " +/- " << sqrt(eem_e_f_isNotMatched)*elFR  << endl;
// 	cout << "               IsFromB          : " << eem_e_f_isFromB*elFR  << " +/- " << sqrt(eem_e_f_isFromB)*elFR  << endl;
// 	cout << "               IsFromC          : " << eem_e_f_isFromC*elFR  << " +/- " << sqrt(eem_e_f_isFromC)*elFR  << endl;
// 	cout << "               IsFromL          : " << eem_e_f_isFromL*elFR  << " +/- " << sqrt(eem_e_f_isFromL)*elFR  << endl;
// 	cout << "               IsFromElse         : " << eem_e_f_isFromElse*elFR  << " +/- " << sqrt(eem_e_f_isFromElse)*elFR  << endl;
// 	}

	cout << "       eem ppf(e) ttt observed | prediction          : " <<endl;
	cout << "       		All sources		: " << eem_e_fT << " +/- " << sqrt(eem_e_fT) <<" | ";
	cout << eem_e_f*elFR << " +/- " << sqrt(eem_e_f)*elFR  << endl;

	cout << "               Is(not)Matched	: " << eem_e_fT_isNotMatched << " +/- " << sqrt(eem_e_fT_isNotMatched) <<" | ";
	cout << eem_e_f_isNotMatched*elFR  << " +/- " << sqrt(eem_e_f_isNotMatched)*elFR  << endl;

	cout << "               IsFromB			: " << eem_e_fT_isFromB << " +/- " << sqrt(eem_e_fT_isFromB) <<" | ";
	cout << eem_e_f_isFromB*elFR  << " +/- " << sqrt(eem_e_f_isFromB)*elFR  << endl;

	cout << "               IsFromC			: " << eem_e_fT_isFromC << " +/- " << sqrt(eem_e_fT_isFromC) <<" | ";
	cout << eem_e_f_isFromC*elFR  << " +/- " << sqrt(eem_e_f_isFromC)*elFR  << endl;

	cout << "               IsFromL			: " << eem_e_fT_isFromL << " +/- " << sqrt(eem_e_fT_isFromL) <<" | ";
	cout << eem_e_f_isFromL*elFR  << " +/- " << sqrt(eem_e_f_isFromL)*elFR  << endl;

	cout << "               IsFromElse		: " << eem_e_fT_isFromElse << " +/- " << sqrt(eem_e_fT_isFromElse) <<" | ";
	cout << eem_e_f_isFromElse*elFR  << " +/- " << sqrt(eem_e_f_isFromElse)*elFR  << endl;


	float eem_m_fT = EEM_ppf_ttt+EME_pfp_ttt+MEE_fpp_ttt;

		float eem_m_fT_isNotMatched = EEM_ppf_ttt_isNotMatched+EME_pfp_ttt_isNotMatched+MEE_fpp_ttt_isNotMatched;
		float eem_m_fT_isFromB = EEM_ppf_ttt_isFromB+EME_pfp_ttt_isFromB+MEE_fpp_ttt_isFromB;
		float eem_m_fT_isFromC = EEM_ppf_ttt_isFromC+EME_pfp_ttt_isFromC+MEE_fpp_ttt_isFromC;
		float eem_m_fT_isFromElse = EEM_ppf_ttt_isFromElse+EME_pfp_ttt_isFromElse+MEE_fpp_ttt_isFromElse;
		float eem_m_fT_isFromL = EEM_ppf_ttt_isFromL+EME_pfp_ttt_isFromL+MEE_fpp_ttt_isFromL;

	float eem_m_f = EEM_ppf_tt;//+EME_pfp_tlt+MEE_fpp_ltt;

		float eem_m_f_isNotMatched = EEM_ppf_tt_isNotMatched;//+EME_pfp_tlt_isNotMatched+MEE_fpp_ltt_isNotMatched;
		float eem_m_f_isFromB = EEM_ppf_tt_isFromB;//+EME_pfp_tlt_isFromB+MEE_fpp_ltt_isFromB;
		float eem_m_f_isFromC = EEM_ppf_tt_isFromC;//+EME_pfp_tlt_isFromC+MEE_fpp_ltt_isFromC;
		float eem_m_f_isFromElse = EEM_ppf_tt_isFromElse;//+EME_pfp_tlt_isFromElse+MEE_fpp_ltt_isFromElse;
		float eem_m_f_isFromL = EEM_ppf_tt_isFromL;//+EME_pfp_tlt_isFromL+MEE_fpp_ltt_isFromL;

	cout << "       eem ppf(m) ttt observed | prediction          : " <<endl;
	cout << "       		All sources		: " << eem_m_fT << " +/- " << sqrt(eem_m_fT) <<" | ";
	cout << eem_m_f*muFR << " +/- " << sqrt(eem_m_f)*muFR  << endl;

	cout << "               Is(not)Matched	: " << eem_m_fT_isNotMatched << " +/- " << sqrt(eem_m_fT_isNotMatched) <<" | ";
	cout << eem_m_f_isNotMatched*muFR  << " +/- " << sqrt(eem_m_f_isNotMatched)*muFR  << endl;

	cout << "               IsFromB			: " << eem_m_fT_isFromB << " +/- " << sqrt(eem_m_fT_isFromB) <<" | ";
	cout << eem_m_f_isFromB*muFR  << " +/- " << sqrt(eem_m_f_isFromB)*muFR  << endl;

	cout << "               IsFromC			: " << eem_m_fT_isFromC << " +/- " << sqrt(eem_m_fT_isFromC) <<" | ";
	cout << eem_m_f_isFromC*muFR  << " +/- " << sqrt(eem_m_f_isFromC)*muFR  << endl;

	cout << "               IsFromL			: " << eem_m_fT_isFromL << " +/- " << sqrt(eem_m_fT_isFromL) <<" | ";
	cout << eem_m_f_isFromL*muFR  << " +/- " << sqrt(eem_m_f_isFromL)*muFR  << endl;

	cout << "               IsFromElse		: " << eem_m_fT_isFromElse << " +/- " << sqrt(eem_m_fT_isFromElse) <<" | ";
	cout << eem_m_f_isFromElse*muFR  << " +/- " << sqrt(eem_m_f_isFromElse)*muFR  << endl;
	//===========EMM==============	
	std::cout<<"Processing EMM ..." << std::endl;

	//1 fake / 2 prompts
	std::cout<<"Processing EMM 1 fake t/l ..." << std::endl;
	EMM_ppf_ttt = t->Draw(observ,basic_cut+isEMM_+isPPF+isTTT);
	EMM_pfp_ttt = t->Draw(observ,basic_cut+isEMM_+isPFP+isTTT);
	EMM_fpp_ttt = t->Draw(observ,basic_cut+isEMM_+isFPP+isTTT);

	EMM_ppf_tt = t->Draw(observ,basic_cut+isEMM_+isPPF+isPPF_isTT);

	std::cout<<"Processing EMM 1 fake t/l sources ..." << std::endl;
		//sources - isMatched
		EMM_ppf_ttt_isNotMatched = t->Draw(observ,basic_cut+isEMM_+isPPF+isTTT+isPPF_isNotMatched);
		EMM_pfp_ttt_isNotMatched = t->Draw(observ,basic_cut+isEMM_+isPFP+isTTT+isPFP_isNotMatched);
		EMM_fpp_ttt_isNotMatched = t->Draw(observ,basic_cut+isEMM_+isFPP+isTTT+isFPP_isNotMatched);

		EMM_ppf_tt_isNotMatched = t->Draw(observ,basic_cut+isEMM_+isPPF+isPPF_isTT+isPPF_isNotMatched);

		//sources - isFromB
		EMM_ppf_ttt_isFromB = t->Draw(observ,basic_cut+isEMM_+isPPF+isTTT+isPPF_isFromB);
		EMM_pfp_ttt_isFromB = t->Draw(observ,basic_cut+isEMM_+isPFP+isTTT+isPFP_isFromB);
		EMM_fpp_ttt_isFromB = t->Draw(observ,basic_cut+isEMM_+isFPP+isTTT+isFPP_isFromB);

		EMM_ppf_tt_isFromB = t->Draw(observ,basic_cut+isEMM_+isPPF+isPPF_isTT+isPPF_isFromB);

		//sources - isFromC
		EMM_ppf_ttt_isFromC = t->Draw(observ,basic_cut+isEMM_+isPPF+isTTT+isPPF_isFromC);
		EMM_pfp_ttt_isFromC = t->Draw(observ,basic_cut+isEMM_+isPFP+isTTT+isPFP_isFromC);
		EMM_fpp_ttt_isFromC = t->Draw(observ,basic_cut+isEMM_+isFPP+isTTT+isFPP_isFromC);

		EMM_ppf_tt_isFromC = t->Draw(observ,basic_cut+isEMM_+isPPF+isPPF_isTT+isPPF_isFromC);

		//sources - isFromElse
		EMM_ppf_ttt_isFromElse = t->Draw(observ,basic_cut+isEMM_+isPPF+isTTT+isPPF_isFromElse);
		EMM_pfp_ttt_isFromElse = t->Draw(observ,basic_cut+isEMM_+isPFP+isTTT+isPFP_isFromElse);
		EMM_fpp_ttt_isFromElse = t->Draw(observ,basic_cut+isEMM_+isFPP+isTTT+isFPP_isFromElse);

		EMM_ppf_tt_isFromElse = t->Draw(observ,basic_cut+isEMM_+isPPF+isPPF_isTT+isPPF_isFromElse);

		//sources - isFromL
		EMM_ppf_ttt_isFromL = t->Draw(observ,basic_cut+isEMM_+isPPF+isTTT+isPPF_isFromL);
		EMM_pfp_ttt_isFromL = t->Draw(observ,basic_cut+isEMM_+isPFP+isTTT+isPFP_isFromL);
		EMM_fpp_ttt_isFromL = t->Draw(observ,basic_cut+isEMM_+isFPP+isTTT+isFPP_isFromL);

		EMM_ppf_tt_isFromL = t->Draw(observ,basic_cut+isEMM_+isPPF+isPPF_isTT+isPPF_isFromL);

	std::cout<<"Processing MEM 1 fake t/l..." << std::endl;
	MEM_ppf_ttt = t->Draw(observ,basic_cut+isMEM_+isPPF+isTTT);
	MEM_pfp_ttt = t->Draw(observ,basic_cut+isMEM_+isPFP+isTTT);
	MEM_fpp_ttt = t->Draw(observ,basic_cut+isMEM_+isFPP+isTTT);

	MEM_ppf_tt = t->Draw(observ,basic_cut+isMEM_+isPPF+isPPF_isTT);

	std::cout<<"Processing MEM 1 fake sources..." << std::endl;
		//source - isMatched
		MEM_ppf_ttt_isNotMatched = t->Draw(observ,basic_cut+isMEM_+isPPF+isTTT+isPPF_isNotMatched);
		MEM_pfp_ttt_isNotMatched = t->Draw(observ,basic_cut+isMEM_+isPFP+isTTT+isPFP_isNotMatched);
		MEM_fpp_ttt_isNotMatched = t->Draw(observ,basic_cut+isMEM_+isFPP+isTTT+isFPP_isNotMatched);

		MEM_ppf_tt_isNotMatched = t->Draw(observ,basic_cut+isMEM_+isPPF+isPPF_isTT+isPPF_isNotMatched);

		//source - isFromB
		MEM_ppf_ttt_isFromB = t->Draw(observ,basic_cut+isMEM_+isPPF+isTTT+isPPF_isFromB);
		MEM_pfp_ttt_isFromB = t->Draw(observ,basic_cut+isMEM_+isPFP+isTTT+isPFP_isFromB);
		MEM_fpp_ttt_isFromB = t->Draw(observ,basic_cut+isMEM_+isFPP+isTTT+isFPP_isFromB);

		MEM_ppf_tt_isFromB = t->Draw(observ,basic_cut+isMEM_+isPPF+isPPF_isTT+isPPF_isFromB);

		//source - isFromC
		MEM_ppf_ttt_isFromC = t->Draw(observ,basic_cut+isMEM_+isPPF+isTTT+isPPF_isFromC);
		MEM_pfp_ttt_isFromC = t->Draw(observ,basic_cut+isMEM_+isPFP+isTTT+isPFP_isFromC);
		MEM_fpp_ttt_isFromC = t->Draw(observ,basic_cut+isMEM_+isFPP+isTTT+isFPP_isFromC);

		MEM_ppf_tt_isFromC = t->Draw(observ,basic_cut+isMEM_+isPPF+isPPF_isTT+isPPF_isFromC);

		//source - isFromElse
		MEM_ppf_ttt_isFromElse = t->Draw(observ,basic_cut+isMEM_+isPPF+isTTT+isPPF_isFromElse);
		MEM_pfp_ttt_isFromElse = t->Draw(observ,basic_cut+isMEM_+isPFP+isTTT+isPFP_isFromElse);
		MEM_fpp_ttt_isFromElse = t->Draw(observ,basic_cut+isMEM_+isFPP+isTTT+isFPP_isFromElse);

		MEM_ppf_tt_isFromElse = t->Draw(observ,basic_cut+isMEM_+isPPF+isPPF_isTT+isPPF_isFromElse);

		//source - isFromL
		MEM_ppf_ttt_isFromL = t->Draw(observ,basic_cut+isMEM_+isPPF+isTTT+isPPF_isFromL);
		MEM_pfp_ttt_isFromL = t->Draw(observ,basic_cut+isMEM_+isPFP+isTTT+isPFP_isFromL);
		MEM_fpp_ttt_isFromL = t->Draw(observ,basic_cut+isMEM_+isFPP+isTTT+isFPP_isFromL);

		MEM_ppf_tt_isFromL = t->Draw(observ,basic_cut+isMEM_+isPPF+isPPF_isTT+isPPF_isFromL);

	std::cout<<"Processing MME 1 fake t/l..." << std::endl;
	MME_ppf_ttt = t->Draw(observ,basic_cut+isMME_+isPPF+isTTT);
	MME_pfp_ttt = t->Draw(observ,basic_cut+isMME_+isPFP+isTTT);
	MME_fpp_ttt = t->Draw(observ,basic_cut+isMME_+isFPP+isTTT);

	MME_ppf_tt = t->Draw(observ,basic_cut+isMME_+isPPF+isPPF_isTT);

	std::cout<<"Processing MME 1 fake t/l sources ..." << std::endl;
		//sources - isMatched
		MME_ppf_ttt_isNotMatched = t->Draw(observ,basic_cut+isMME_+isPPF+isTTT+isPPF_isNotMatched);
		MME_pfp_ttt_isNotMatched = t->Draw(observ,basic_cut+isMME_+isPFP+isTTT+isPFP_isNotMatched);
		MME_fpp_ttt_isNotMatched = t->Draw(observ,basic_cut+isMME_+isFPP+isTTT+isFPP_isNotMatched);

		MME_ppf_tt_isNotMatched = t->Draw(observ,basic_cut+isMME_+isPPF+isPPF_isTT+isPPF_isNotMatched);

		//sources - isFromB
		MME_ppf_ttt_isFromB = t->Draw(observ,basic_cut+isMME_+isPPF+isTTT+isPPF_isFromB);
		MME_pfp_ttt_isFromB = t->Draw(observ,basic_cut+isMME_+isPFP+isTTT+isPFP_isFromB);
		MME_fpp_ttt_isFromB = t->Draw(observ,basic_cut+isMME_+isFPP+isTTT+isFPP_isFromB);

		MME_ppf_tt_isFromB = t->Draw(observ,basic_cut+isMME_+isPPF+isPPF_isTT+isPPF_isFromB);

		//sources - isFromC
		MME_ppf_ttt_isFromC = t->Draw(observ,basic_cut+isMME_+isPPF+isTTT+isPPF_isFromC);
		MME_pfp_ttt_isFromC = t->Draw(observ,basic_cut+isMME_+isPFP+isTTT+isPFP_isFromC);
		MME_fpp_ttt_isFromC = t->Draw(observ,basic_cut+isMME_+isFPP+isTTT+isFPP_isFromC);

		MME_ppf_tt_isFromC = t->Draw(observ,basic_cut+isMME_+isPPF+isPPF_isTT+isPPF_isFromC);

		//sources - isFromElse
		MME_ppf_ttt_isFromElse = t->Draw(observ,basic_cut+isMME_+isPPF+isTTT+isPPF_isFromElse);
		MME_pfp_ttt_isFromElse = t->Draw(observ,basic_cut+isMME_+isPFP+isTTT+isPFP_isFromElse);
		MME_fpp_ttt_isFromElse = t->Draw(observ,basic_cut+isMME_+isFPP+isTTT+isFPP_isFromElse);

		MME_ppf_tt_isFromElse = t->Draw(observ,basic_cut+isMME_+isPPF+isPPF_isTT+isPPF_isFromElse);

		//sources - isFromL
		MME_ppf_ttt_isFromL = t->Draw(observ,basic_cut+isMME_+isPPF+isTTT+isPPF_isFromL);
		MME_pfp_ttt_isFromL = t->Draw(observ,basic_cut+isMME_+isPFP+isTTT+isPFP_isFromL);
		MME_fpp_ttt_isFromL = t->Draw(observ,basic_cut+isMME_+isFPP+isTTT+isFPP_isFromL);

		MME_ppf_tt_isFromL = t->Draw(observ,basic_cut+isMME_+isPPF+isPPF_isTT+isPPF_isFromL);


	cout << " ========= EMM ========= " << endl;
	cout << "	--1 fake-- :  "<< endl;
	cout << "	f(T):   "<< endl;
	cout << "       EM(M) PPF TTT (fake mu) : " << EMM_ppf_ttt << endl;
	if(printSource){
	cout << "               Is(not)Matched   : " << EMM_ppf_ttt_isNotMatched << endl;
	cout << "               IsFromB          : " << EMM_ppf_ttt_isFromB << endl;
	cout << "               IsFromC          : " << EMM_ppf_ttt_isFromC << endl;
	cout << "               IsFromL          : " << EMM_ppf_ttt_isFromL<< endl;
	cout << "               IsFromElse         : " << EMM_ppf_ttt_isFromElse << endl;
	}
	cout << "       E(M)M PFP TTT (fake mu) : " << EMM_pfp_ttt << endl;
	if(printSource){
	cout << "               Is(not)Matched   : " << EMM_pfp_ttt_isNotMatched << endl;
	cout << "               IsFromB          : " << EMM_pfp_ttt_isFromB << endl;
	cout << "               IsFromC          : " << EMM_pfp_ttt_isFromC << endl;
	cout << "               IsFromL          : " << EMM_pfp_ttt_isFromL<< endl;
	cout << "               IsFromElse         : " << EMM_pfp_ttt_isFromElse << endl;
	}
	cout << "       (E)MM FPP TTT (fake el) : " << EMM_fpp_ttt << endl;
	if(printSource){
	cout << "               Is(not)Matched   : " << EMM_fpp_ttt_isNotMatched << endl;
	cout << "               IsFromB          : " << EMM_fpp_ttt_isFromB << endl;
	cout << "               IsFromC          : " << EMM_fpp_ttt_isFromC << endl;
	cout << "               IsFromL          : " << EMM_fpp_ttt_isFromL<< endl;
	cout << "               IsFromElse         : " << EMM_fpp_ttt_isFromElse << endl;
	}
	cout << "-" << endl;
	cout << "       ME(M) PPF TTT (fake mu) : " << MEM_ppf_ttt << endl;
	if(printSource){
	cout << "               Is(not)Matched   : " << MEM_ppf_ttt_isNotMatched << endl;
	cout << "               IsFromB          : " << MEM_ppf_ttt_isFromB << endl;
	cout << "               IsFromC          : " << MEM_ppf_ttt_isFromC << endl;
	cout << "               IsFromL          : " << MEM_ppf_ttt_isFromL<< endl;
	cout << "               IsFromElse         : " << MEM_ppf_ttt_isFromElse << endl;
	}
	cout << "       M(E)M PFP TTT (fake el) : " << MEM_pfp_ttt << endl;
	if(printSource){
	cout << "               Is(not)Matched   : " << MEM_pfp_ttt_isNotMatched << endl;
	cout << "               IsFromB          : " << MEM_pfp_ttt_isFromB << endl;
	cout << "               IsFromC          : " << MEM_pfp_ttt_isFromC << endl;
	cout << "               IsFromL          : " << MEM_pfp_ttt_isFromL<< endl;
	cout << "               IsFromElse         : " << MEM_pfp_ttt_isFromElse << endl;
	}
	cout << "       (M)EM FPP TTT (fake mu) : " << MEM_fpp_ttt << endl;
	if(printSource){
	cout << "               Is(not)Matched   : " << MEM_fpp_ttt_isNotMatched << endl;
	cout << "               IsFromB          : " << MEM_fpp_ttt_isFromB << endl;
	cout << "               IsFromC          : " << MEM_fpp_ttt_isFromC << endl;
	cout << "               IsFromL          : " << MEM_fpp_ttt_isFromL<< endl;
	cout << "               IsFromElse         : " << MEM_fpp_ttt_isFromElse << endl;
	}
	cout << "-" << endl;
	cout << "       MM(E) PPF TTT (fake el) : " << MME_ppf_ttt << endl;
	if(printSource){
	cout << "               Is(not)Matched   : " << MME_ppf_ttt_isNotMatched << endl;
	cout << "               IsFromB          : " << MME_ppf_ttt_isFromB << endl;
	cout << "               IsFromC          : " << MME_ppf_ttt_isFromC << endl;
	cout << "               IsFromL          : " << MME_ppf_ttt_isFromL<< endl;
	cout << "               IsFromElse         : " << MME_ppf_ttt_isFromElse << endl;
	}
	cout << "       M(M)E PFP TTT (fake mu) : " << MME_pfp_ttt << endl;
	if(printSource){
	cout << "               Is(not)Matched   : " << MME_pfp_ttt_isNotMatched << endl;
	cout << "               IsFromB          : " << MME_pfp_ttt_isFromB << endl;
	cout << "               IsFromC          : " << MME_pfp_ttt_isFromC << endl;
	cout << "               IsFromL          : " << MME_pfp_ttt_isFromL<< endl;
	cout << "               IsFromElse         : " << MME_pfp_ttt_isFromElse << endl;
	}
	cout << "       (M)ME FPP TTT (fake mu) : " << MME_fpp_ttt << endl;
	if(printSource){
	cout << "               Is(not)Matched   : " << MME_fpp_ttt_isNotMatched << endl;
	cout << "               IsFromB          : " << MME_fpp_ttt_isFromB << endl;
	cout << "               IsFromC          : " << MME_fpp_ttt_isFromC << endl;
	cout << "               IsFromL          : " << MME_fpp_ttt_isFromL<< endl;
	cout << "               IsFromElse         : " << MME_fpp_ttt_isFromElse << endl;
	}
	cout << "" << endl;
	cout << "	f:   "<< endl;
	cout << "       EM(M) PPF TT (fake mu) : " << EMM_ppf_tt << endl;
	if(printSource){
	cout << "               Is(not)Matched   : " << EMM_ppf_tt_isNotMatched << endl;
	cout << "               IsFromB          : " << EMM_ppf_tt_isFromB << endl;
	cout << "               IsFromC          : " << EMM_ppf_tt_isFromC << endl;
	cout << "               IsFromL          : " << EMM_ppf_tt_isFromL<< endl;
	cout << "               IsFromElse         : " << EMM_ppf_tt_isFromElse << endl;
	}
	cout << "-" << endl;
	cout << "       ME(M) PPF TT (fake mu) : " << MEM_ppf_tt << endl;
	if(printSource){
	cout << "               Is(not)Matched   : " << MEM_ppf_tt_isNotMatched << endl;
	cout << "               IsFromB          : " << MEM_ppf_tt_isFromB << endl;
	cout << "               IsFromC          : " << MEM_ppf_tt_isFromC << endl;
	cout << "               IsFromL          : " << MEM_ppf_tt_isFromL<< endl;
	cout << "               IsFromElse         : " << MEM_ppf_tt_isFromElse << endl;
	}
	cout << "-" << endl;
	cout << "       MM(E) PPF TT (fake el) : " << MME_ppf_tt << endl;
	if(printSource){
	cout << "               Is(not)Matched   : " << MME_ppf_tt_isNotMatched << endl;
	cout << "               IsFromB          : " << MME_ppf_tt_isFromB << endl;
	cout << "               IsFromC          : " << MME_ppf_tt_isFromC << endl;
	cout << "               IsFromL          : " << MME_ppf_tt_isFromL<< endl;
	cout << "               IsFromElse         : " << MME_ppf_tt_isFromElse << endl;
	}
	cout << "       ---------------------  " << endl;

	float emm_e_fT = EMM_fpp_ttt+MEM_pfp_ttt+MME_ppf_ttt;

		float emm_e_fT_isNotMatched = EMM_fpp_ttt_isNotMatched+MEM_pfp_ttt_isNotMatched+MME_ppf_ttt_isNotMatched;
		float emm_e_fT_isFromB = EMM_fpp_ttt_isFromB+MEM_pfp_ttt_isFromB+MME_ppf_ttt_isFromB;
		float emm_e_fT_isFromC = EMM_fpp_ttt_isFromC+MEM_pfp_ttt_isFromC+MME_ppf_ttt_isFromC;
		float emm_e_fT_isFromElse = EMM_fpp_ttt_isFromElse+MEM_pfp_ttt_isFromElse+MME_ppf_ttt_isFromElse;
		float emm_e_fT_isFromL = EMM_fpp_ttt_isFromL+MEM_pfp_ttt_isFromL+MME_ppf_ttt_isFromL;

	float emm_e_f = MME_ppf_tt;

		float emm_e_f_isNotMatched = MME_ppf_tt_isNotMatched;
		float emm_e_f_isFromB = MME_ppf_tt_isFromB;
		float emm_e_f_isFromC = MME_ppf_tt_isFromC;
		float emm_e_f_isFromElse =MME_ppf_tt_isFromElse;
		float emm_e_f_isFromL = MME_ppf_tt_isFromL;

	cout << "       emm ppf(e) ttt observed | prediction          : " <<endl;
	cout << "       		All sources		: " << emm_e_fT << " +/- " << sqrt(emm_e_fT) <<" | ";
	cout << emm_e_f*elFR << " +/- " << sqrt(emm_e_f)*elFR  << endl;

	cout << "               Is(not)Matched	: " << emm_e_fT_isNotMatched << " +/- " << sqrt(emm_e_fT_isNotMatched) <<" | ";
	cout << emm_e_f_isNotMatched*elFR  << " +/- " << sqrt(emm_e_f_isNotMatched)*elFR  << endl;

	cout << "               IsFromB			: " << emm_e_fT_isFromB << " +/- " << sqrt(emm_e_fT_isFromB) <<" | ";
	cout << emm_e_f_isFromB*elFR  << " +/- " << sqrt(emm_e_f_isFromB)*elFR  << endl;

	cout << "               IsFromC			: " << emm_e_fT_isFromC << " +/- " << sqrt(emm_e_fT_isFromC) <<" | ";
	cout << emm_e_f_isFromC*elFR  << " +/- " << sqrt(emm_e_f_isFromC)*elFR  << endl;

	cout << "               IsFromL			: " << emm_e_fT_isFromL << " +/- " << sqrt(emm_e_fT_isFromL) <<" | ";
	cout << emm_e_f_isFromL*elFR  << " +/- " << sqrt(emm_e_f_isFromL)*elFR  << endl;

	cout << "               IsFromElse		: " << emm_e_fT_isFromElse << " +/- " << sqrt(emm_e_fT_isFromElse) <<" | ";
	cout << emm_e_f_isFromElse*elFR  << " +/- " << sqrt(emm_e_f_isFromElse)*elFR  << endl;

	float emm_m_fT = EMM_ppf_ttt+EMM_pfp_ttt+ MEM_ppf_ttt+ MEM_fpp_ttt+ MME_pfp_ttt+ MME_fpp_ttt;

		float emm_m_fT_isNotMatched = EMM_ppf_ttt_isNotMatched+EMM_pfp_ttt_isNotMatched+ MEM_ppf_ttt_isNotMatched+ MEM_fpp_ttt_isNotMatched+ MME_pfp_ttt_isNotMatched+ MME_fpp_ttt_isNotMatched;
		float emm_m_fT_isFromB = EMM_ppf_ttt_isFromB+EMM_pfp_ttt_isFromB+ MEM_ppf_ttt_isFromB+ MEM_fpp_ttt_isFromB+ MME_pfp_ttt_isFromB+ MME_fpp_ttt_isFromB;
		float emm_m_fT_isFromC = EMM_ppf_ttt_isFromC+EMM_pfp_ttt_isFromC+ MEM_ppf_ttt_isFromC+ MEM_fpp_ttt_isFromC+ MME_pfp_ttt_isFromC+ MME_fpp_ttt_isFromC;
		float emm_m_fT_isFromElse = EMM_ppf_ttt_isFromElse+EMM_pfp_ttt_isFromElse+ MEM_ppf_ttt_isFromElse+ MEM_fpp_ttt_isFromElse+ MME_pfp_ttt_isFromElse+ MME_fpp_ttt_isFromElse;
		float emm_m_fT_isFromL = EMM_ppf_ttt_isFromL+EMM_pfp_ttt_isFromL+ MEM_ppf_ttt_isFromL+ MEM_fpp_ttt_isFromL+ MME_pfp_ttt_isFromL+ MME_fpp_ttt_isFromL;

	float emm_m_f = EMM_ppf_tt+ MEM_ppf_tt;

		float emm_m_f_isNotMatched = EMM_ppf_tt_isNotMatched+ MEM_ppf_tt_isNotMatched;
		float emm_m_f_isFromB = EMM_ppf_tt_isFromB+ MEM_ppf_tt_isFromB;
		float emm_m_f_isFromC = EMM_ppf_tt_isFromC+ MEM_ppf_tt_isFromC;
		float emm_m_f_isFromElse = EMM_ppf_tt_isFromElse+ MEM_ppf_tt_isFromElse;
		float emm_m_f_isFromL = EMM_ppf_tt_isFromL+ MEM_ppf_tt_isFromL;

	cout << "       emm ppf(m) ttt observed | prediction          : " <<endl;
	cout << "       		All sources		: " << emm_m_fT << " +/- " << sqrt(emm_m_fT) <<" | ";
	cout << emm_m_f*muFR << " +/- " << sqrt(emm_m_f)*muFR  << endl;

	cout << "               Is(not)Matched	: " << emm_m_fT_isNotMatched << " +/- " << sqrt(emm_m_fT_isNotMatched) <<" | ";
	cout << emm_m_f_isNotMatched*muFR  << " +/- " << sqrt(emm_m_f_isNotMatched)*muFR  << endl;

	cout << "               IsFromB			: " << emm_m_fT_isFromB << " +/- " << sqrt(emm_m_fT_isFromB) <<" | ";
	cout << emm_m_f_isFromB*muFR  << " +/- " << sqrt(emm_m_f_isFromB)*muFR  << endl;

	cout << "               IsFromC			: " << emm_m_fT_isFromC << " +/- " << sqrt(emm_m_fT_isFromC) <<" | ";
	cout << emm_m_f_isFromC*muFR  << " +/- " << sqrt(emm_m_f_isFromC)*muFR  << endl;

	cout << "               IsFromL			: " << emm_m_fT_isFromL << " +/- " << sqrt(emm_m_fT_isFromL) <<" | ";
	cout << emm_m_f_isFromL*muFR  << " +/- " << sqrt(emm_m_f_isFromL)*muFR  << endl;

	cout << "               IsFromElse		: " << emm_m_fT_isFromElse << " +/- " << sqrt(emm_m_fT_isFromElse) <<" | ";
	cout << emm_m_f_isFromElse*muFR  << " +/- " << sqrt(emm_m_f_isFromElse)*muFR  << endl;


// }
// 	===========MMM==============
	std::cout<<"Processing MMM ..." << std::endl;

	std::cout<<"Processing MMM 1 fake t/l ..." << std::endl;
	MMM_ppf_tt = t->Draw(observ,basic_cut+isMMM+isPPF+isPPF_isTT );

	MMM_ppf_ttt = t->Draw(observ,basic_cut+isMMM+" && ( isPPF || isPFP || isFPP ) && isTTT " );

	std::cout<<"Processing MMM 1 fake t/l sources ..." << std::endl;
		MMM_ppf_tt_isNotMatched = t->Draw(observ,basic_cut+isMMM+isPPF+isPPF_isTT+isPPF_isNotMatched);

		MMM_ppf_tt_isFromB = t->Draw(observ,basic_cut+isMMM+isPPF+isPPF_isTT+isPPF_isFromB);

		MMM_ppf_tt_isFromC = t->Draw(observ,basic_cut+isMMM+isPPF+isPPF_isTT+isPPF_isFromC);

		MMM_ppf_tt_isFromElse = t->Draw(observ,basic_cut+isMMM+isPPF+isPPF_isTT+isPPF_isFromElse);

		MMM_ppf_tt_isFromL = t->Draw(observ,basic_cut+isMMM+isPPF+isPPF_isTT+isPPF_isFromL);

		//

		MMM_ppf_ttt_isNotMatched = t->Draw(observ,basic_cut+isMMM+" && ( isPPF && isTTT)"+isPPF_isNotMatched);
		MMM_pfp_ttt_isNotMatched = t->Draw(observ,basic_cut+isMMM+" && ( isPFP && isTTT)"+isPFP_isNotMatched );
		MMM_fpp_ttt_isNotMatched = t->Draw(observ,basic_cut+isMMM+" && ( isFPP && isTTT)"+isFPP_isNotMatched );

		MMM_ppf_ttt_isFromB = t->Draw(observ,basic_cut+isMMM+" && ( isPPF && isTTT)"+isPPF_isFromB);
		MMM_pfp_ttt_isFromB = t->Draw(observ,basic_cut+isMMM+" && ( isPFP && isTTT)"+isPFP_isFromB );
		MMM_fpp_ttt_isFromB = t->Draw(observ,basic_cut+isMMM+" && ( isFPP && isTTT)"+isFPP_isFromB );

		MMM_ppf_ttt_isFromC = t->Draw(observ,basic_cut+isMMM+" && ( isPPF && isTTT)"+isPPF_isFromC);
		MMM_pfp_ttt_isFromC = t->Draw(observ,basic_cut+isMMM+" && ( isPFP && isTTT)"+isPFP_isFromC );
		MMM_fpp_ttt_isFromC = t->Draw(observ,basic_cut+isMMM+" && ( isFPP && isTTT)"+isFPP_isFromC );

		MMM_ppf_ttt_isFromElse = t->Draw(observ,basic_cut+isMMM+" && ( isPPF && isTTT)"+isPPF_isFromElse);
		MMM_pfp_ttt_isFromElse = t->Draw(observ,basic_cut+isMMM+" && ( isPFP && isTTT)"+isPFP_isFromElse );
		MMM_fpp_ttt_isFromElse = t->Draw(observ,basic_cut+isMMM+" && ( isFPP && isTTT)"+isFPP_isFromElse );

		MMM_ppf_ttt_isFromL = t->Draw(observ,basic_cut+isMMM+" && ( isPPF && isTTT)"+isPPF_isFromL);
		MMM_pfp_ttt_isFromL = t->Draw(observ,basic_cut+isMMM+" && ( isPFP && isTTT)"+isPFP_isFromL );
		MMM_fpp_ttt_isFromL = t->Draw(observ,basic_cut+isMMM+" && ( isFPP && isTTT)"+isFPP_isFromL );


	//


	cout << " ========= MMM ========= " << endl;
	cout << "	1 fake / 2 prompts:   "<< endl;
	cout << "       IsTTT f(T)  : " << MMM_ppf_ttt << endl;
	if(printSource){
	cout << "               Is(not)Matched   : " << MMM_ppf_ttt_isNotMatched+MMM_pfp_ttt_isNotMatched+MMM_fpp_ttt_isNotMatched << endl;
	cout << "               IsFromB          : " << MMM_ppf_ttt_isFromB+MMM_pfp_ttt_isFromB+MMM_fpp_ttt_isFromB << endl;
	cout << "               IsFromC          : " << MMM_ppf_ttt_isFromC+MMM_pfp_ttt_isFromC+MMM_fpp_ttt_isFromC << endl;
	cout << "               IsFromL          : " << MMM_ppf_ttt_isFromL+MMM_pfp_ttt_isFromL+MMM_fpp_ttt_isFromL << endl;
	cout << "               IsFromElse         : " << MMM_ppf_ttt_isFromElse+MMM_pfp_ttt_isFromElse+MMM_fpp_ttt_isFromElse << endl;
	}
	cout << "       IsTT f : " << MMM_ppf_tt<< endl;;//+MMM_pfp_tlt+MMM_fpp_ltt << endl;
	if(printSource){
	cout << "               Is(not)Matched   : " << MMM_ppf_tt_isNotMatched<< endl;;//+MMM_pfp_tlt_isNotMatched+MMM_fpp_ltt_isNotMatched << endl;
	cout << "               IsFromB          : " << MMM_ppf_tt_isFromB<< endl;;//+MMM_pfp_tlt_isFromB+MMM_fpp_ltt_isFromB << endl;
	cout << "               IsFromC          : " << MMM_ppf_tt_isFromC<< endl;;//+MMM_pfp_tlt_isFromC+MMM_fpp_ltt_isFromC << endl;
	cout << "               IsFromL          : " << MMM_ppf_tt_isFromL<< endl;;//+MMM_pfp_tlt_isFromL+MMM_fpp_ltt_isFromL << endl;
	cout << "               IsFromElse         : " << MMM_ppf_tt_isFromElse<< endl;;//+MMM_pfp_tlt_isFromElse+MMM_fpp_ltt_isFromElse << endl;
	}
	float mmm_fT = MMM_ppf_ttt*1.0;
	float mmm_f = (MMM_ppf_tt*1.0);//+MMM_pfp_tlt+MMM_fpp_ltt )*1.0;
	cout << "       		mmm ppf ttt observed | prediction 	: " << endl;
	cout << "       			All sources : " << mmm_fT << " +- "<< sqrt(mmm_fT) << " | ";
	cout << mmm_f * muFR << " +- "<< sqrt(mmm_f) * muFR << endl;;
	float MMM_fT_isNotMatched = MMM_ppf_ttt_isNotMatched+MMM_pfp_ttt_isNotMatched+MMM_fpp_ttt_isNotMatched*1.0;
	float MMM_f_isNotMatched = (MMM_ppf_tt_isNotMatched )*1.0;
	cout << "       			_isNotMatched	: " << MMM_fT_isNotMatched << " +- "<< sqrt(MMM_fT_isNotMatched) << " | ";
	cout << MMM_f_isNotMatched * muFR_isNotMatched << " +- "<< sqrt(MMM_f_isNotMatched) * muFR_isNotMatched << endl;;
	float MMM_fT_isFromB = MMM_ppf_ttt_isFromB+MMM_pfp_ttt_isFromB+MMM_fpp_ttt_isFromB*1.0;
	float MMM_f_isFromB = (MMM_ppf_tt_isFromB )*1.0;
	cout << "       			_isFromB	: " << MMM_fT_isFromB << " +- "<< sqrt(MMM_fT_isFromB) << " | ";
	cout << MMM_f_isFromB * muFR_isFromB << " +- "<< sqrt(MMM_f_isFromB) * muFR_isFromB << endl;;
	float MMM_fT_isFromC = MMM_ppf_ttt_isFromC+MMM_pfp_ttt_isFromC+MMM_fpp_ttt_isFromC*1.0;
	float MMM_f_isFromC = (MMM_ppf_tt_isFromC )*1.0;
	cout << "       			_isFromC	: " << MMM_fT_isFromC << " +- "<< sqrt(MMM_fT_isFromC) << " | ";
	cout << MMM_f_isFromC * muFR_isFromC << " +- "<< sqrt(MMM_f_isFromC) * muFR_isFromC << endl;;
	float MMM_fT_isFromL = MMM_ppf_ttt_isFromL+MMM_pfp_ttt_isFromL+MMM_fpp_ttt_isFromL*1.0;
	float MMM_f_isFromL = (MMM_ppf_tt_isFromL )*1.0;
	cout << "       			_isFromL	: " << MMM_fT_isFromL << " +- "<< sqrt(MMM_fT_isFromL) << " | ";
	cout << MMM_f_isFromL * muFR_isFromL << " +- "<< sqrt(MMM_f_isFromL) * muFR_isFromL << endl;;
	float MMM_fT_isFromElse = MMM_ppf_ttt_isFromElse+MMM_pfp_ttt_isFromElse+MMM_fpp_ttt_isFromElse*1.0;
	float MMM_f_isFromElse = (MMM_ppf_tt_isFromElse )*1.0;
	cout << "       			_isFromElse	: " << MMM_fT_isFromElse << " +- "<< sqrt(MMM_fT_isFromElse) << " | ";
	cout << MMM_f_isFromElse * muFR_isFromElse << " +- "<< sqrt(MMM_f_isFromElse) * muFR_isFromElse << endl;;
	

// 	cout<< ""<< endl;
// 	cout<< "Systematic uncertainty due to PPP count: "<< 1.0*ALL_ppp/ALL *100. << "%" <<endl; 	
// 	cout<< ""<< endl;			

	gApplication->Terminate();
	
}
