
using namespace std;

vector<TPad *> createPads();
void formatUpperHist(TH1D* histogram,TH1D* histogram_MC, float NormWeight, TString ylabel,TLegend * leg);
void formatUpperHist(TH1D* histogram,TH1D* histogram_MC, float NormWeight, TString ylabel,TLegend * leg, vector<TLatex*> text_v, TString text0);
void formatLowerHist(TH1D * histogram, TString xlabel); 
void createRatio(TH1D *hratio, TH1D* hdata, TH1D* hMC, TString xlabel);

vector<TPad *> pads;
TLatex *lumiTex = new TLatex(); 
TLatex *CMSTex = new TLatex(); 
TLatex *prelimTex = new TLatex(); 
vector<TLatex *> text_v;


void Closure_3leps_ppf_Draw(){

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
	//TString f_str = "root://cmseos.fnal.gov://store/user/lpcljm/LJMet80x_3lep_Moriond17_ttbarFakeRate_saveLooseMC_2017_4_17_dR0p01_PRv9_FRv48_elMVAaltFix_rizki_step1hadds/nominal/TT_TuneCUETP8M2T4_13TeV-powheg-pythia8_hadd.root"; //fakerate was measured using LJMet80x_1orMorelep_Moriond17_ttbarFakeRate_saveLooseMC_2017_4_17_dR0p01_elMVAaltFix_rizki_step1hadds/nominal/TT_....1_hadd.root
	TString f_str = "root://cmseos.fnal.gov://store/user/wywong/FWLJMET102X_3lep2017_wywong_102019_saveLooseLep_step1_FRv1_hadds/TTTo2L2Nu_TuneCP5_PSweights_13TeV-powheg-pythia8_hadd.root";	
	
	TFile *f = TFile::Open(f_str, "READ");
	
	cout << "Opening file:" << f_str << endl;

	TTree *t = (TTree*) f->Get("ljmet");
	
	TString saveDir = "Closure_3leps_ppf_Draw_Oct19-2017";
// 	TString saveDir = "Closure_3leps_ppf_Draw_Sep18-2017_minMlllBv4";

	system("mkdir -v "+saveDir);

	//STbinsv2
	TString observ = "AK4HTpMETpLepPt";
	const Int_t nbins = 16; 
	Double_t bins[nbins+1]={0,100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1600,2000};

	//minMlllBv4
// 	TString observ = "minMlllBjet";
// 	const Int_t nbins = 9; 
// 	Double_t bins[nbins+1]={100,200,300,400,500,600,700,800,1000,1500};

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


	TString trig = " && MCPastTrigger_dilep == 1";
	TString trilep = " && isPassTrilepton==1";
	TString lepPt = " && (AllLeptonPt_PtOrdered[0]>30 && AllLeptonPt_PtOrdered[1]>30 && AllLeptonPt_PtOrdered[2]>0)";
	TString exactly3Lep = " && AllLeptonCount_PtOrdered==3";

	TString njet = " && 1";
// 	TString njet = " && (NJets_MultiLepCalc ==1)";
// 	TString njet = " && (NJets_MultiLepCalc ==2)";
// 	TString njet = " && (NJets_MultiLepCalc > 2)";

// 	TString bjet = " && 1";
	TString bjet = " && (NJetsBTagwithSF_MultiLepCalc >=1)";


// 	TString basic_cut = "1 "+trig+trilep+lepPt+exactly3Lep+njet+bjet;
// 	TString basic_cut = "1 "+trig+lepPt+exactly3Lep+njet+bjet;

// 	TString basic_cut = "1 && (AllLeptonPt_PtOrdered[0] >= 30) && (AllLeptonPt_PtOrdered[1] >= 30) && (AllLeptonPt_PtOrdered[2] >= 30) && (corr_met_MultiLepCalc >= 0) && (NJets_MultiLepCalc >= 0) && (NJetsBTagwithSF_MultiLepCalc >= 0) && DataPastTrigger_dilep == 1 && (AK4HTpMETpLepPt >= 0) && AllLeptonCount_PtOrdered == 3 && ( (MllOS_allComb[0] > 0 || MllOS_allComb[0] < 0) && (MllOS_allComb[1] > 0 || MllOS_allComb[1] < 0) && (MllOS_allComb[2] > 0 || MllOS_allComb[2] < 0) )";
// 	TString basic_cut = "1 && (AllLeptonPt_PtOrdered[0] >= 30) && (AllLeptonPt_PtOrdered[1] >= 30) && (AllLeptonPt_PtOrdered[2] >= 30) && (corr_met_MultiLepCalc >= 0) && (NJets_MultiLepCalc >= 0) && (NJetsBTagwithSF_MultiLepCalc >= 0) && MCPastTrigger_dilep == 1 && (AK4HTpMETpLepPt >= 0) && AllLeptonCount_PtOrdered == 3 && ( (MllOS_allComb[0] > 0 || MllOS_allComb[0] < 0) && (MllOS_allComb[1] > 0 || MllOS_allComb[1] < 0) && (MllOS_allComb[2] > 0 || MllOS_allComb[2] < 0) )";


	//ttbar - SR cut --> CHECK!!
	TString basic_cut = "1 && (AllLeptonPt_PtOrdered[0] >= 30) && (AllLeptonPt_PtOrdered[1] >= 30) && (AllLeptonPt_PtOrdered[2] >= 30) && (corr_met_MultiLepCalc >= 20) && (NJets_MultiLepCalc >= 3) && (NJetsBTagwithSF_MultiLepCalc >= 1) && MCPastTrigger_dilep == 1 && (AK4HTpMETpLepPt >= 0) && AllLeptonCount_PtOrdered == 3 && ( (MllOS_allComb[0] > 20 || MllOS_allComb[0] < 0) && (MllOS_allComb[1] > 20 || MllOS_allComb[1] < 0) && (MllOS_allComb[2] > 20 || MllOS_allComb[2] < 0) )";


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

	//===========EEE==============
	
	std::cout<<"Processing EEE ..." << std::endl;
	
	std::cout<<"Processing EEE 1 fake t/l ..." << std::endl;

	TH1D *h_eee = new TH1D("h_eee","h_eee",nbins,bins);
	TH1D *h_eee_obs = new TH1D("h_eee_obs","h_eee",nbins,bins);
	TH1D *h_eee_pred = new TH1D("h_eee_pred","h_eee",nbins,bins);

	auto EEE_ppf_ttt = t->Draw(observ+">>h_eee_obs",basic_cut+isEEE+isPPF+isTTT_);//" && ( isPPF || isPFP || isFPP ) && isTTT " );
	auto EEE_ppf_tt  = t->Draw(observ+">>h_eee_pred",basic_cut+isEEE+isPPF+isPPF_isTT );

	std::cout<<"Processing EEE 1 fake t/l sources ..." << std::endl;

	//
	cout << " ========= EEE ========= " << endl;
	cout << "	--1 fake /2 prompts:   "<< endl;
	cout << "       IsTTT f(T) : " << EEE_ppf_ttt << endl;
	float eee_fT = EEE_ppf_ttt*1.0;
	float eee_f = (EEE_ppf_tt*1.0);//+EEE_pfp_tlt+EEE_fpp_ltt )*1.0;

	cout << "       		eee ppf ttt observed | prediction 	: " << endl;
	cout << "       			All sources : " << eee_fT << " +- "<< sqrt(eee_fT) << " | ";
	cout << eee_f * elFR << " +- "<< sqrt(eee_f) * elFR << " | " ;
	cout <<  1 - ( eee_fT / (eee_f * elFR) ) << " +- "<< ( eee_fT / (eee_f * elFR) ) * sqrt( 1./eee_fT + (1./ eee_f ) ) << endl;;
	
// 	TCanvas *c_eee = new TCanvas("c_eee","c_eee",800,600);
// 	gStyle->SetOptStat(0);
// 
// 	c_eee->cd();
// 	pads = createPads();
// 	pads.at(0)->Draw();
// 	pads.at(1)->Draw();
// 	pads.at(0)->cd();
// // 	pads.at(0)->SetLogy();
// 	TLegend * h_eee_leg = new TLegend(0.75,0.53,0.95,0.750);
// 	formatUpperHist(h_eee_obs,h_eee_pred,elFR, "events",h_eee_leg, text_v, "EEE");
// 	pads.at(1)->cd();
// 	TH1D *ratio_eee;
// 	createRatio(ratio_eee, h_eee_obs, h_eee_pred,"ST (GeV)");
// 	
// 	c_eee->SaveAs(saveDir+"/h_eee.png");



// if(PrintMixedChannels){
	//===========EEM==============
	std::cout<<"Processing EEM ..." << std::endl;

	TH1D *h_eem = new TH1D("h_eem","h_eem",nbins,bins);

	TH1D *h_eem_ppf_obs = new TH1D("h_eem_ppf_obs","h_eem",nbins,bins);
	TH1D *h_eem_pfp_obs = new TH1D("h_eem_pfp_obs","h_eem",nbins,bins);
	TH1D *h_eem_fpp_obs = new TH1D("h_eem_fpp_obs","h_eem",nbins,bins);

	TH1D *h_eme_ppf_obs = new TH1D("h_eme_ppf_obs","h_eme",nbins,bins);
	TH1D *h_eme_pfp_obs = new TH1D("h_eme_pfp_obs","h_eme",nbins,bins);
	TH1D *h_eme_fpp_obs = new TH1D("h_eme_fpp_obs","h_eme",nbins,bins);

	TH1D *h_mee_ppf_obs = new TH1D("h_mee_ppf_obs","h_mee",nbins,bins);
	TH1D *h_mee_pfp_obs = new TH1D("h_mee_pfp_obs","h_mee",nbins,bins);
	TH1D *h_mee_fpp_obs = new TH1D("h_mee_fpp_obs","h_mee",nbins,bins);

	TH1D *h_eem_pred = new TH1D("h_eem_pred","h_eem",nbins,bins);
	TH1D *h_eme_pred = new TH1D("h_eme_pred","h_eme",nbins,bins);
	TH1D *h_mee_pred = new TH1D("h_mee_pred","h_mee",nbins,bins);

	//EEM - 2prompts
	std::cout<<"Processing EEM 1 fake t/l..." << std::endl;
	auto EEM_ppf_tt = t->Draw(observ+">>h_eem_pred",basic_cut+isEEM_+isPPF+isTT);

	auto EEM_ppf_ttt = t->Draw(observ+">>h_eem_ppf_obs",basic_cut+isEEM_+isPPF+isTTT);
	auto EEM_pfp_ttt = t->Draw(observ+">>h_eem_pfp_obs",basic_cut+isEEM_+isPFP+isTTT);
	auto EEM_fpp_ttt = t->Draw(observ+">>h_eem_fpp_obs",basic_cut+isEEM_+isFPP+isTTT);

	std::cout<<"Processing EEM 1 fake t/l sources..." << std::endl;

	//EME - 2prompts
	std::cout<<"Processing EME 1 fake t/l ..." << std::endl;
	auto EME_ppf_tt = t->Draw(observ+">>h_eme_pred",basic_cut+isEME_+isPPF+isPPF_isTT);

	auto EME_ppf_ttt = t->Draw(observ+">>h_eme_ppf_obs",basic_cut+isEME_+isPPF+isTTT);
	auto EME_pfp_ttt = t->Draw(observ+">>h_eme_pfp_obs",basic_cut+isEME_+isPFP+isTTT);
	auto EME_fpp_ttt = t->Draw(observ+">>h_eme_fpp_obs",basic_cut+isEME_+isFPP+isTTT);

	std::cout<<"Processing EME 1 fake t/l sources ..." << std::endl;

	//MEE - 2prompts
	std::cout<<"Processing MEE 1 fake t/l ..." << std::endl;
	auto MEE_ppf_tt = t->Draw(observ+">>h_mee_pred",basic_cut+isMEE_+isPPF+isPPF_isTT);

	auto MEE_ppf_ttt = t->Draw(observ+">>h_mee_ppf_obs",basic_cut+isMEE_+isPPF+isTTT);
	auto MEE_pfp_ttt = t->Draw(observ+">>h_mee_pfp_obs",basic_cut+isMEE_+isPFP+isTTT);
	auto MEE_fpp_ttt = t->Draw(observ+">>h_mee_fpp_obs",basic_cut+isMEE_+isFPP+isTTT);

	std::cout<<"Processing MEE 1 fake t/l sources..." << std::endl;
	
	cout << " ========= EEM ========= " << endl;
	cout << "	--1 fake-- :  "<< endl;
	cout << "	f(T):   "<< endl;
	cout << "       EE(M) PPF TTT (fake mu) : " << EEM_ppf_ttt << endl;
	cout << "       E(E)M PFP TTT (fake el) : " << EEM_pfp_ttt << endl;
	cout << "       (E)EM FPP TTT (fake el) : " << EEM_fpp_ttt << endl;
	cout << "-" << endl;
	cout << "       EM(E) PPF TTT (fake el) : " << EME_ppf_ttt << endl;
	cout << "       E(M)E PFP TTT (fake mu) : " << EME_pfp_ttt << endl;
	cout << "       (E)ME FPP TTT (fake el) : " << EME_fpp_ttt << endl;
	cout << "-" << endl;
	cout << "       ME(E) PPF TTT (fake el) : " << MEE_ppf_ttt << endl;
	cout << "       M(E)E PFP TTT (fake el) : " << MEE_pfp_ttt << endl;
	cout << "       (M)EE FPP TTT (fake mu) : " << MEE_fpp_ttt << endl;
	cout << "" << endl;
	cout << "	f:   "<< endl;
	cout << "       EE(M) PPF TT (fake mu) : " << EEM_ppf_tt << endl;
	cout << "-" << endl;
	cout << "       EM(E) PPF TT (fake el) : " << EME_ppf_tt << endl;
	cout << "-" << endl;
	cout << "       ME(E) PPF TT (fake el) : " << MEE_ppf_tt << endl;
	cout << "       ---------------------  " << endl;
	float eem_e_fT = EEM_pfp_ttt+EEM_fpp_ttt+EME_ppf_ttt+EME_fpp_ttt+MEE_ppf_ttt+MEE_pfp_ttt;
	h_eem_pfp_obs->Add(h_eem_fpp_obs);
	h_eem_pfp_obs->Add(h_eme_ppf_obs);
	h_eem_pfp_obs->Add(h_eme_fpp_obs);
	h_eem_pfp_obs->Add(h_mee_ppf_obs);
	h_eem_pfp_obs->Add(h_mee_pfp_obs);

	float eem_e_f = EME_ppf_tt+MEE_ppf_tt;
	h_eme_pred->Add(h_mee_pred);
	h_eme_pred->Scale(elFR);

	cout << "       eem ppf(e) ttt observed | prediction          : " <<endl;
	cout << "       		All sources		: " << eem_e_fT << " +/- " << sqrt(eem_e_fT) <<" | ";
	cout << eem_e_f*elFR << " +/- " << sqrt(eem_e_f)*elFR  << endl;

	float eem_m_fT = EEM_ppf_ttt+EME_pfp_ttt+MEE_fpp_ttt;
	h_eem_ppf_obs->Add(h_eme_pfp_obs);
	h_eem_ppf_obs->Add(h_mee_fpp_obs);

	float eem_m_f = EEM_ppf_tt;//+EME_pfp_tlt+MEE_fpp_ltt;
	h_eem_pred->Scale(muFR);
	
	cout << "       eem ppf(m) ttt observed | prediction          : " <<endl;
	cout << "       		All sources		: " << eem_m_fT << " +/- " << sqrt(eem_m_fT) <<" | ";
	cout << eem_m_f*muFR << " +/- " << sqrt(eem_m_f)*muFR  << endl;

	h_eem_pred->Add(h_eme_pred);
	h_eem_ppf_obs->Add(h_eem_pfp_obs);

	cout << "       eem ppf ttt observed | prediction          : " <<endl;
	cout << "       		All sources		: " << eem_m_fT + eem_e_fT << " +/- " << sqrt(eem_m_fT+eem_e_fT) <<" | ";
	cout << eem_m_f*muFR + eem_e_f*elFR << " +/- " << sqrt(( eem_m_f*muFR*muFR )+ (eem_e_f*elFR*elFR) ) << " | ";

	cout << 1 - ( (eem_m_fT + eem_e_fT) / (eem_m_f*muFR + eem_e_f*elFR) ) << " +/- " << ( (eem_m_fT + eem_e_fT) / (eem_m_f*muFR + eem_e_f*elFR) ) * sqrt( 1./(eem_m_fT+eem_e_fT) + ( ( eem_m_f* pow(muFR,2))+ (eem_e_f*pow(elFR,2)) )/pow(( eem_m_f*muFR )+(eem_e_f*elFR),2) ) << endl;

// 	TCanvas *c_eem = new TCanvas("c_eem","c_eem",800,600);
// 	gStyle->SetOptStat(0);
// 
// 	c_eem->cd();
// 	pads = createPads();
// 	pads.at(0)->Draw();
// 	pads.at(1)->Draw();
// 	pads.at(0)->cd();
// // 	pads.at(0)->SetLogy();
// 	TLegend * h_eem_leg = new TLegend(0.75,0.53,0.95,0.750);
// 	formatUpperHist(h_eem_ppf_obs,h_eem_pred,1.0, "events",h_eem_leg, text_v, "EEM");
// 	pads.at(1)->cd();
// 	TH1D *ratio_eem;
// 	createRatio(ratio_eem, h_eem_ppf_obs, h_eem_pred,"ST (GeV)");
// 	
// 	c_eem->SaveAs(saveDir+"/h_eem.png");


	//===========EMM==============	
	std::cout<<"Processing EMM ..." << std::endl;

	TH1D *h_emm = new TH1D("h_emm","h_emm",nbins,bins);

	TH1D *h_emm_ppf_obs = new TH1D("h_emm_ppf_obs","h_emm",nbins,bins);
	TH1D *h_emm_pfp_obs = new TH1D("h_emm_pfp_obs","h_emm",nbins,bins);
	TH1D *h_emm_fpp_obs = new TH1D("h_emm_fpp_obs","h_emm",nbins,bins);

	TH1D *h_mem_ppf_obs = new TH1D("h_mem_ppf_obs","h_mem",nbins,bins);
	TH1D *h_mem_pfp_obs = new TH1D("h_mem_pfp_obs","h_mem",nbins,bins);
	TH1D *h_mem_fpp_obs = new TH1D("h_mem_fpp_obs","h_mem",nbins,bins);

	TH1D *h_mme_ppf_obs = new TH1D("h_mme_ppf_obs","h_mme",nbins,bins);
	TH1D *h_mme_pfp_obs = new TH1D("h_mme_pfp_obs","h_mme",nbins,bins);
	TH1D *h_mme_fpp_obs = new TH1D("h_mme_fpp_obs","h_mme",nbins,bins);

	TH1D *h_emm_pred = new TH1D("h_emm_pred","h_emm",nbins,bins);
	TH1D *h_mem_pred = new TH1D("h_mem_pred","h_mem",nbins,bins);
	TH1D *h_mme_pred = new TH1D("h_mme_pred","h_mme",nbins,bins);


	//1 fake / 2 prompts
	std::cout<<"Processing EMM 1 fake t/l ..." << std::endl;
	auto EMM_ppf_ttt = t->Draw(observ+">>h_emm_ppf_obs",basic_cut+isEMM_+isPPF+isTTT);
	auto EMM_pfp_ttt = t->Draw(observ+">>h_emm_pfp_obs",basic_cut+isEMM_+isPFP+isTTT);
	auto EMM_fpp_ttt = t->Draw(observ+">>h_emm_fpp_obs",basic_cut+isEMM_+isFPP+isTTT);

	auto EMM_ppf_tt = t->Draw(observ+">>h_emm_pred",basic_cut+isEMM_+isPPF+isPPF_isTT);

	std::cout<<"Processing EMM 1 fake t/l sources ..." << std::endl;

	std::cout<<"Processing MEM 1 fake t/l..." << std::endl;
	auto MEM_ppf_ttt = t->Draw(observ+">>h_mem_ppf_obs",basic_cut+isMEM_+isPPF+isTTT);
	auto MEM_pfp_ttt = t->Draw(observ+">>h_mem_pfp_obs",basic_cut+isMEM_+isPFP+isTTT);
	auto MEM_fpp_ttt = t->Draw(observ+">>h_mem_fpp_obs",basic_cut+isMEM_+isFPP+isTTT);

	auto MEM_ppf_tt = t->Draw(observ+">>h_mem_pred",basic_cut+isMEM_+isPPF+isPPF_isTT);

	std::cout<<"Processing MEM 1 fake sources..." << std::endl;

	std::cout<<"Processing MME 1 fake t/l..." << std::endl;
	auto MME_ppf_ttt = t->Draw(observ+">>h_mme_ppf_obs",basic_cut+isMME_+isPPF+isTTT);
	auto MME_pfp_ttt = t->Draw(observ+">>h_mme_pfp_obs",basic_cut+isMME_+isPFP+isTTT);
	auto MME_fpp_ttt = t->Draw(observ+">>h_mme_fpp_obs",basic_cut+isMME_+isFPP+isTTT);

	auto MME_ppf_tt = t->Draw(observ+">>h_mme_pred",basic_cut+isMME_+isPPF+isPPF_isTT);

	std::cout<<"Processing MME 1 fake t/l sources ..." << std::endl;

	cout << " ========= EMM ========= " << endl;
	cout << "	--1 fake-- :  "<< endl;
	cout << "	f(T):   "<< endl;
	cout << "       EM(M) PPF TTT (fake mu) : " << EMM_ppf_ttt << endl;
	cout << "       E(M)M PFP TTT (fake mu) : " << EMM_pfp_ttt << endl;
	cout << "       (E)MM FPP TTT (fake el) : " << EMM_fpp_ttt << endl;
	cout << "-" << endl;
	cout << "       ME(M) PPF TTT (fake mu) : " << MEM_ppf_ttt << endl;
	cout << "       M(E)M PFP TTT (fake el) : " << MEM_pfp_ttt << endl;
	cout << "       (M)EM FPP TTT (fake mu) : " << MEM_fpp_ttt << endl;
	cout << "-" << endl;
	cout << "       MM(E) PPF TTT (fake el) : " << MME_ppf_ttt << endl;
	cout << "       M(M)E PFP TTT (fake mu) : " << MME_pfp_ttt << endl;
	cout << "       (M)ME FPP TTT (fake mu) : " << MME_fpp_ttt << endl;
	cout << "" << endl;
	cout << "	f:   "<< endl;
	cout << "       EM(M) PPF TT (fake mu) : " << EMM_ppf_tt << endl;
	cout << "-" << endl;
	cout << "       ME(M) PPF TT (fake mu) : " << MEM_ppf_tt << endl;
	cout << "-" << endl;
	cout << "       MM(E) PPF TT (fake el) : " << MME_ppf_tt << endl;
	cout << "       ---------------------  " << endl;

	float emm_e_fT = EMM_fpp_ttt+MEM_pfp_ttt+MME_ppf_ttt;
	h_emm_fpp_obs->Add(h_mem_pfp_obs);
	h_emm_fpp_obs->Add(h_mme_ppf_obs);

	float emm_e_f = MME_ppf_tt;
	h_mme_pred->Scale(elFR);

	cout << "       emm ppf(e) ttt observed | prediction          : " <<endl;
	cout << "       		All sources		: " << emm_e_fT << " +/- " << sqrt(emm_e_fT) <<" | ";
	cout << emm_e_f*elFR << " +/- " << sqrt(emm_e_f)*elFR  << endl;

	float emm_m_fT = EMM_ppf_ttt+EMM_pfp_ttt+ MEM_ppf_ttt+ MEM_fpp_ttt+ MME_pfp_ttt+ MME_fpp_ttt;
	h_emm_ppf_obs->Add(h_emm_pfp_obs);
	h_emm_ppf_obs->Add(h_mem_ppf_obs);
	h_emm_ppf_obs->Add(h_mem_fpp_obs);
	h_emm_ppf_obs->Add(h_mme_pfp_obs);
	h_emm_ppf_obs->Add(h_mme_fpp_obs);

	float emm_m_f = EMM_ppf_tt+ MEM_ppf_tt;
	h_emm_pred->Add(h_mem_pred);
	h_emm_pred->Scale(muFR);

	cout << "       emm ppf(m) ttt observed | prediction          : " <<endl;
	cout << "       		All sources		: " << emm_m_fT << " +/- " << sqrt(emm_m_fT) <<" | ";
	cout << emm_m_f*muFR << " +/- " << sqrt(emm_m_f)*muFR  << endl;

	h_emm_pred->Add(h_mme_pred);
	h_emm_ppf_obs->Add(h_emm_ppf_obs);

	cout << "       emm ppf ttt observed | prediction          : " <<endl;
	cout << "       		All sources		: " << emm_m_fT + emm_e_fT << " +/- " << sqrt(emm_m_fT+emm_e_fT) <<" | ";
	cout << emm_m_f*muFR + emm_e_f*elFR << " +/- " << sqrt(( emm_m_f*muFR*muFR )+ (emm_e_f*elFR*elFR) ) << " | ";

	cout << 1 - ( (emm_m_fT + emm_e_fT) / (emm_m_f*muFR + emm_e_f*elFR) ) << " +/- " << ( (emm_m_fT + emm_e_fT) / (emm_m_f*muFR + emm_e_f*elFR) ) * sqrt( 1./(emm_m_fT+emm_e_fT) + (( emm_m_f*pow(muFR,2) )+ (emm_e_f*pow(elFR,2)))/pow( ( emm_m_f*muFR )+(emm_e_f*elFR) ,2 ) ) << endl;

	TCanvas *c_emm = new TCanvas("c_emm","c_emm",800,600);
	gStyle->SetOptStat(0);

// 	c_emm->cd();
// 	pads = createPads();
// 	pads.at(0)->Draw();
// 	pads.at(1)->Draw();
// 	pads.at(0)->cd();
// // 	pads.at(0)->SetLogy();
// 	TLegend * h_emm_leg = new TLegend(0.75,0.53,0.95,0.750);
// 	formatUpperHist(h_emm_ppf_obs,h_emm_pred,1.0, "events",h_emm_leg, text_v, "EMM");
// 	pads.at(1)->cd();
// 	TH1D *ratio_emm;
// 	createRatio(ratio_emm, h_emm_ppf_obs, h_emm_pred,"ST (GeV)");
// 	
// 	c_emm->SaveAs(saveDir+"/h_emm.png");

// }
// 	===========MMM==============
	std::cout<<"Processing MMM ..." << std::endl;

	TH1D *h_mmm = new TH1D("h_mmm","h_mmm",nbins,bins);
	TH1D *h_mmm_obs = new TH1D("h_mmm_obs","h_mmm",nbins,bins);
	TH1D *h_mmm_pred = new TH1D("h_mmm_pred","h_mmm",nbins,bins);

	std::cout<<"Processing MMM 1 fake t/l ..." << std::endl;
	auto MMM_ppf_tt = t->Draw(observ+">>h_mmm_pred",basic_cut+isMMM+isPPF+isPPF_isTT );

	auto MMM_ppf_ttt = t->Draw(observ+">>h_mmm_obs",basic_cut+isMMM+" && ( isPPF || isPFP || isFPP ) && isTTT " );

	std::cout<<"Processing MMM 1 fake t/l sources ..." << std::endl;

	cout << " ========= MMM ========= " << endl;
	cout << "	1 fake / 2 prompts:   "<< endl;
	cout << "       IsTTT f(T)  : " << MMM_ppf_ttt << endl;
	cout << "       IsTT f : " << MMM_ppf_tt<< endl;;//+MMM_pfp_tlt+MMM_fpp_ltt << endl;
	float mmm_fT = MMM_ppf_ttt*1.0;
	float mmm_f = (MMM_ppf_tt*1.0);//+MMM_pfp_tlt+MMM_fpp_ltt )*1.0;
	cout << "       		mmm ppf ttt observed | prediction 	: " << endl;
	cout << "       			All sources : " << mmm_fT << " +- "<< sqrt(mmm_fT) << " | ";
	cout << mmm_f * muFR << " +- "<< sqrt(mmm_f) * muFR << " | " ;
	cout <<  1 - ( mmm_fT / (mmm_f * muFR) ) << " +- "<< ( mmm_fT / (mmm_f * muFR) ) * sqrt( 1./mmm_fT + 1./( mmm_f  ) ) << endl;;

// 	TCanvas *c_mmm = new TCanvas("c_mmm","c_mmm",800,600);
// 	gStyle->SetOptStat(0);
// 
// 	c_mmm->cd();
// 	pads = createPads();
// 	pads.at(0)->Draw();
// 	pads.at(1)->Draw();
// 	pads.at(0)->cd();
// // 	pads.at(0)->SetLogy();
// 	TLegend * h_mmm_leg = new TLegend(0.75,0.53,0.95,0.750);
// 	formatUpperHist(h_mmm_obs,h_mmm_pred,muFR, "events",h_mmm_leg, text_v, "MMM");
// 	pads.at(1)->cd();
// 	TH1D *ratio_mmm;
// 	createRatio(ratio_mmm, h_mmm_obs, h_mmm_pred,"ST (GeV)");
// 	
// 	c_mmm->SaveAs(saveDir+"/h_mmm.png");


	// All
	
	TCanvas *c_all = new TCanvas("c_all","c_all",1600,1200);
	c_all->Divide(2,2);
	gStyle->SetOptStat(0);

	c_all->cd(1);
	pads = createPads();
	pads.at(0)->Draw();
	pads.at(1)->Draw();
	pads.at(0)->cd();
	pads.at(0)->SetLogy();
	TLegend * h_eee_leg = new TLegend(0.75,0.53,0.95,0.750);
	formatUpperHist(h_eee_obs,h_eee_pred,elFR, "events",h_eee_leg, text_v, "EEE");
	pads.at(1)->cd();
	TH1D *ratio_eee;
	if(observ=="AK4HTpMETpLepPt")createRatio(ratio_eee, h_eee_obs, h_eee_pred,"ST (GeV)");
	if(observ=="minMlllBjet")createRatio(ratio_eee, h_eee_obs, h_eee_pred,"min[M_{lllB}] (GeV)");

	c_all->cd(2);
	pads = createPads();
	pads.at(0)->Draw();
	pads.at(1)->Draw();
	pads.at(0)->cd();
	pads.at(0)->SetLogy();
	TLegend * h_eem_leg = new TLegend(0.75,0.53,0.95,0.750);
	formatUpperHist(h_eem_ppf_obs,h_eem_pred,1.0, "events",h_eem_leg, text_v, "EEM");
	pads.at(1)->cd();
	TH1D *ratio_eem;
	if(observ=="AK4HTpMETpLepPt")createRatio(ratio_eem, h_eem_ppf_obs, h_eem_pred,"ST (GeV)");
	if(observ=="minMlllBjet")createRatio(ratio_eem, h_eem_ppf_obs, h_eem_pred,"min[M_{lllB}] (GeV)");

	c_all->cd(3);
	pads = createPads();
	pads.at(0)->Draw();
	pads.at(1)->Draw();
	pads.at(0)->cd();
	pads.at(0)->SetLogy();
	TLegend * h_emm_leg = new TLegend(0.75,0.53,0.95,0.750);
	formatUpperHist(h_emm_ppf_obs,h_emm_pred,1.0, "events",h_emm_leg, text_v, "EMM");
	pads.at(1)->cd();
	TH1D *ratio_emm;
	if(observ=="AK4HTpMETpLepPt")createRatio(ratio_emm, h_emm_ppf_obs, h_emm_pred,"ST (GeV)");
	if(observ=="minMlllBjet")createRatio(ratio_emm, h_emm_ppf_obs, h_emm_pred,"min[M_{lllB}] (GeV)");

	c_all->cd(4);
	pads = createPads();
	pads.at(0)->Draw();
	pads.at(1)->Draw();
	pads.at(0)->cd();
	pads.at(0)->SetLogy();
	TLegend * h_mmm_leg = new TLegend(0.75,0.53,0.95,0.750);
	formatUpperHist(h_mmm_obs,h_mmm_pred,muFR, "events",h_mmm_leg, text_v, "MMM");
	pads.at(1)->cd();
	TH1D *ratio_mmm;
	if(observ=="AK4HTpMETpLepPt")createRatio(ratio_eee, h_eee_obs, h_eee_pred,"ST (GeV)");
	if(observ=="minMlllBjet")createRatio(ratio_eee, h_eee_obs, h_eee_pred,"min[M_{lllB}] (GeV)");

	c_all->SaveAs(saveDir+"/h_all.png");


	gApplication->Terminate();
	
}

vector<TPad *> createPads(){
		vector<TPad *> pads;
		gStyle->SetErrorX(0.5);
		float yDiv=0.35;
		float uMargin = 0;
		float rMargin=.04;
		TPad *uPad= new TPad("uPad","",0,yDiv,1,1); //for actual plots
		uPad->SetTopMargin(0.10);
		uPad->SetBottomMargin(uMargin);
		uPad->SetRightMargin(rMargin);
		uPad->SetLeftMargin(.12);

		pads.push_back(uPad);
		TPad *lPad= new TPad("lPad","",0,0,1,yDiv); //for sigma runner
		lPad->SetTopMargin(0);
		lPad->SetBottomMargin(.4);
		lPad->SetRightMargin(rMargin);
		lPad->SetLeftMargin(.12);
		lPad->SetGridy();
		pads.push_back(lPad);
		
		return pads;
}

void formatUpperHist(TH1D* histogram, TH1D* histogram_MC, float NormWeight, TString ylabel, TLegend *leg){
  	histogram->SetMarkerStyle(kFullCircle);
	histogram->GetXaxis()->SetLabelSize(0);
	histogram->GetYaxis()->SetLabelSize(0.07);
	histogram->GetYaxis()->SetTitleSize(0.08);
	histogram->GetYaxis()->SetTitleOffset(.71);

	histogram->GetYaxis()->SetTitle(ylabel);
	histogram->GetYaxis()->CenterTitle();
// 	histogram->SetMinimum(0.0001);
// # 	histogram.SetMinimum(0.001);
	histogram->SetMinimum(0.25);
	histogram->SetTitle("");
//   	histogram->Draw("PE");

	histogram_MC->GetXaxis()->SetLabelSize(0);
	histogram_MC->GetYaxis()->SetLabelSize(0.07);
	histogram_MC->GetYaxis()->SetTitleSize(0.08);
	histogram_MC->GetYaxis()->SetTitleOffset(.71);

	histogram_MC->GetYaxis()->SetTitle(ylabel);
	histogram_MC->GetYaxis()->CenterTitle();
// 	histogram_MC->SetMinimum(0.0001);
// # 	histogram.SetMinimum(0.001);
	histogram_MC->SetMinimum(0.25);
	histogram_MC->SetTitle("");
  	histogram_MC->Scale(NormWeight);
  	histogram_MC->SetLineColor(kRed);
//   	histogram_MC->Draw("SAMES HIST E");

  	histogram_MC->Draw("HIST E");
  	histogram->Draw("SAMES PE");
  	
	leg->SetShadowColor(0);
	leg->SetFillColor(0);
	leg->SetFillStyle(0);
	leg->SetLineColor(0);
	leg->SetLineStyle(0);
	leg->SetBorderSize(0); 
	leg->SetTextFont(42);
	leg->AddEntry(histogram,"t#bar{t} observed");
	leg->AddEntry(histogram_MC,"t#bar{t} predicted");	
	leg->Draw();

}

void formatUpperHist(TH1D* histogram, TH1D* histogram_MC, float NormWeight, TString ylabel, TLegend *leg, vector<TLatex *> text_v, TString text0){

	formatUpperHist(histogram,histogram_MC, NormWeight, ylabel, leg);

	text_v.push_back(lumiTex);
	text_v.push_back(CMSTex);
	text_v.push_back(prelimTex);

	text_v.at(0)->SetNDC();
	text_v.at(0)->SetTextAlign(31); // align right
	text_v.at(0)->SetTextFont(42);
	text_v.at(0)->SetTextSize(0.07);
	text_v.at(0)->SetLineWidth(2);
// 	text_v.at(0)->DrawLatex(0.95,0.92,"35.9 fb^{-1} (13 TeV)");
	text_v.at(0)->DrawLatex(0.95,0.92,text0);

	text_v.at(1)->SetNDC();
	text_v.at(1)->SetTextFont(61);
	text_v.at(1)->SetLineWidth(2);
	text_v.at(1)->SetTextSize(0.10);
	text_v.at(1)->DrawLatex(0.12,0.92,"CMS");

	text_v.at(2)->SetNDC();
	text_v.at(2)->SetTextAlign(13);
	text_v.at(2)->SetTextFont(52);
	text_v.at(2)->SetTextSize(0.075);
	text_v.at(2)->SetLineWidth(2);
	text_v.at(2)->DrawLatex(0.24,0.975,"Preliminary");

	
}
		
void formatLowerHist(TH1D * histogram, TString xlabel){
	histogram->GetXaxis()->SetLabelSize(.12);
	histogram->GetXaxis()->SetTitleSize(0.15);
	histogram->GetXaxis()->SetTitleOffset(0.95);
	histogram->GetXaxis()->SetNdivisions(506);
	histogram->GetXaxis()->SetTitle(xlabel);

	histogram->GetYaxis()->SetLabelSize(0.12);
	histogram->GetYaxis()->SetTitleSize(0.14);
	histogram->GetYaxis()->SetTitleOffset(.37);
	histogram->GetYaxis()->SetTitle("Obs/Pred");
	histogram->GetYaxis()->SetNdivisions(5);
	histogram->GetYaxis()->SetRangeUser(0,2.1);
	histogram->GetYaxis()->CenterTitle();
	histogram->SetStats(0);
	histogram->SetTitle("");
}	

void createRatio(TH1D *hratio, TH1D* hdata, TH1D* hMC, TString xlabel){
  hratio= (TH1D*)hdata->Clone("ratio");
  hratio->Divide(hMC);
  formatLowerHist(hratio, xlabel);
  
  //set error
  TH1D *hMC_err = (TH1D*) hMC->Clone("hMC_err");
  hMC_err->Divide(hMC);
  for(int ibin=1; ibin<hratio->GetSize()-1;ibin++){
  	double dataErr = hdata->GetBinError(ibin) / hMC->GetBinContent(ibin);
  	std::cout << "	data error bin " << ibin << " = "<< hdata->GetBinError(ibin) << " / "<<hMC->GetBinContent(ibin) << " = " << dataErr <<std::endl;
  	hratio->SetBinError(ibin, dataErr);	
  	if (hdata->GetBinError(ibin)==0 )hratio->SetBinError(ibin, 0);	
  	double MCerr = hMC->GetBinError(ibin) / hMC->GetBinContent(ibin);
  	hMC_err->SetBinError(ibin, MCerr);	
  	std::cout << "	MC error bin " << ibin << " = " << hMC->GetBinError(ibin) << " / "<<hMC->GetBinContent(ibin) << " = " << MCerr <<std::endl;
  }

  hratio->SetFillColor(0);
  hratio->SetLineColor(1);
  hratio->SetMarkerStyle(kFullCircle);
  hratio->Draw("SAMES E0");	

  hMC_err->Draw("SAMES E0 P");

  hratio->Draw("SAMES E0");	
  
}
