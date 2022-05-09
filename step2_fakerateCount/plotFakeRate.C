
using namespace std;

void plotFakeRate(){

	bool DEBUG = true;	

	bool doSinglelep = true;
	bool doDilep = false;
// 
// // 	TString Dir = "LJMet80x_1orMorelep_Moriond17_ttbarFakeRate_saveLooseMC_2017_4_17_rizki_step1hadds_step2/";
// 	TString Dir = "LJMet80x_1orMorelep_Moriond17_ttbarFakeRate_saveLooseMC_2017_4_17_dR0p01_elMVAaltFix_rizki_step1hadds_step2/";
// 	TString f_str = Dir+"/TT_TuneCUETP8M2T4_13TeV-powheg-pythia8_1_hadd";
// // 	TString f_str = Dir+"/TT_TuneCUETP8M2T4_13TeV-powheg-pythia8_2_hadd";
// // 	TString SaveDir = "alternateBinning/";
// 	TString SaveDir = "";


// 	TString Dir = "LJMet80x_3lep_Moriond17_ttbarFakeRate_saveLooseMC_2017_4_17_dR0p01_PRv9_FRv48_elMVAaltFix_rizki_step1hadds_step2/";
// 	TString f_str = Dir+"/TT_TuneCUETP8M2T4_13TeV-powheg-pythia8_hadd";
// 	TString SaveDir = "";


// 	TString Dir = "LJMet80x_1orMorelep_Moriond17_MCFakeRate_saveLooseMC_2017_5_8_rizki_step1hadds_step2/";
// 	TString Dir = "LJMet80x_1orMorelep_Moriond17_MCFakeRate_saveLooseMC_2017_5_8_dR0p3_rizki_step1hadds_step2/";
// 	TString Dir = "LJMet80x_1orMorelep_Moriond17_MCFakeRate_saveLooseMC_2017_5_8_dR0p1_rizki_step1hadds_step2/";
	//TString Dir = "LJMet80x_1orMorelep_Moriond17_MCFakeRate_saveLooseMC_2017_5_8_dR0p01_elMVAaltFix_rizki_step1hadds_step2/";
	//TString Dir = "FWLJMET102X_3lep2017_wywong_102019_saveLooseLep_step1_FRv1_v2_hadds_step2/";
	//TString Dir = "FWLJMET102X_3lep2017_wywong_102019_saveLooseLep_ttClosureCount_step1_FRv2_hadds_step2/";
	TString Dir = "FWLJMET102X_3lep2017_wywong_012020_ttClosureCount_step1_FRv3/TTTo2L2Nu_TuneCP5_PSweights_13TeV-powheg-pythia8/0000_step2/";
	//TString Dir = "FWLJMET102X_3lep2017_wywong_012020_step1_FRv3_hadds_step2/";
// 	TString f_str = Dir+"/DYJetsToLL_M-50_TuneCUETP8M1_13TeV-madgraphMLM-pythia8_combined_1_hadd";
	//TString f_str = Dir+"/DYJetsToLL_M-50_TuneCUETP8M1_13TeV-madgraphMLM-pythia8_combined_v2_1_hadd";
// 	TString f_str = Dir+"/DYJetsToLL_M-50_TuneCUETP8M1_13TeV-madgraphMLM-pythia8_combined_hadd";
	TString f_str = Dir+"TTTo2L2Nu_TuneCP5_PSweights_13TeV-powheg-pythia8_10"; //_hadd";
	TString SaveDir = "";
	
	TFile *f = TFile::Open(f_str+".root","READ");
// 	TFile *f_out = TFile::Open(f_str+"_step2_histo.root","RECREATE");

	cout << "" << endl;
	cout << "===================================================================" << endl;
	cout << "Opening file:" << f_str << endl;
	cout << "===================================================================" << endl;
	cout << "" << endl;

	TTree *t = (TTree*) f->Get("ljmet");

	//define binnings
// 	const Int_t nbins = 20; 
// 	Double_t bins[nbins+1]={0,10,30,40,60,80,100,120,140,160,180,200,220,240,260,280,300,350,400,450,500};
	const Int_t nbins = 5; 
	Double_t bins[nbins+1]={30,50,100,150,200,500};


	//define cuts
// 	TString basicAnalysisCut = "1 && (AllLeptonPt_PtOrdered[0] >= 30) && (AllLeptonPt_PtOrdered[1] >= 30) && (AllLeptonPt_PtOrdered[2] >= 30) && (corr_met_singleLepCalc >= 20) && (NJets_singleLepCalc >= 3) && (NJetsBTagwithSF_singleLepCalc >= 1) && MCPastTrigger_dilep == 1 && (AK4HTpMETpLepPt >= 0) && AllLeptonCount_PtOrdered == 3 && ( (MllOS_allComb[0] > 20 || MllOS_allComb[0] < 0) && (MllOS_allComb[1] > 20 || MllOS_allComb[1] < 0) && (MllOS_allComb[2] > 20 || MllOS_allComb[2] < 0) )";
// 	TString SRCut = "1 && (AllLeptonPt_PtOrdered[0] >= 30) && (AllLeptonPt_PtOrdered[1] >= 30) && (AllLeptonPt_PtOrdered[2] >= 30) && (corr_met_singleLepCalc >= 20) && (NJets_singleLepCalc >= 3) && (NJetsBTagwithSF_singleLepCalc >= 1) && MCPastTrigger_dilep == 1 && (AK4HTpMETpLepPt >= 0) && AllLeptonCount_PtOrdered == 3 && ( (MllOS_allComb[0] > 20 || MllOS_allComb[0] < 0) && (MllOS_allComb[1] > 20 || MllOS_allComb[1] < 0) && (MllOS_allComb[2] > 20 || MllOS_allComb[2] < 0) )";
// 	TString CR2Cut = "1 && (AllLeptonPt_PtOrdered[0] >= 30) && (AllLeptonPt_PtOrdered[1] >= 30) && (AllLeptonPt_PtOrdered[2] >= 30) && (corr_met_singleLepCalc >= 20) && (NJets_singleLepCalc >= 3) && (NJetsBTagwithSF_singleLepCalc >= 1) && MCPastTrigger_dilep == 1 && (AK4HTpMETpLepPt >= 0) && AllLeptonCount_PtOrdered == 3 && ( (MllOS_allComb[0] > 20 || MllOS_allComb[0] < 0) && (MllOS_allComb[1] > 20 || MllOS_allComb[1] < 0) && (MllOS_allComb[2] > 20 || MllOS_allComb[2] < 0) )";
	
	TString ALLlepCut= " && LeptonCount!=0";
	TString singlelepCut= " && LeptonCount==1";
	TString dilepCut= " && LeptonCount==2";
	TString trilepCut= " && LeptonCount==3";

	TString isNonPrompt = " && LeptonIsPrompt==0";	
	TString isNotMatched = " && LeptonIsMatched==0";
	TString isFromB = " && LeptonIsMatched==1 && LeptonIsFromB==1";
	TString isFromC = " && LeptonIsMatched==1 && LeptonIsFromB==0 && LeptonIsFromC==1";
	TString isFromL = " && LeptonIsMatched==1 && LeptonIsFromB==0 && LeptonIsFromC==0 && LeptonIsFromL==1";
	TString isFromElse = " && LeptonIsMatched==1 && LeptonIsFromB==0 && LeptonIsFromC==0 && LeptonIsFromL== 0";

	TString isTight = " && LeptonIsTight ==1";


	// ALLlep
	cout << "" << endl;
	cout << "===================================================================" << endl;
	cout << "Processing all lepton events ..." << endl;
	cout << "===================================================================" << endl;
	cout << "" << endl;

	TH1D *h_e_ALLlep_denom = new TH1D("h_e_ALLlep_denom","h_e_ALLlep_denom",nbins,bins);
	TH1D *h_e_ALLlep_isNotMatched_denom = new TH1D("h_e_ALLlep_isNotMatched_denom","h_e_ALLlep_isNotMatched_denom",nbins,bins);
	TH1D *h_e_ALLlep_isFromB_denom = new TH1D("h_e_ALLlep_isFromB_denom","h_e_ALLlep_isFromB_denom",nbins,bins);
	TH1D *h_e_ALLlep_isFromC_denom = new TH1D("h_e_ALLlep_isFromC_denom","h_e_ALLlep_isFromC_denom",nbins,bins);
	TH1D *h_e_ALLlep_isFromL_denom = new TH1D("h_e_ALLlep_isFromL_denom","h_e_ALLlep_isFromL_denom",nbins,bins);
	TH1D *h_e_ALLlep_isFromElse_denom = new TH1D("h_e_ALLlep_isFromElse_denom","h_e_ALLlep_isFromElse_denom",nbins,bins);

	TH1D *h_e_ALLlep_num = new TH1D("h_e_ALLlep_num","h_e_ALLlep_num",nbins,bins);
	TH1D *h_e_ALLlep_isNotMatched_num = new TH1D("h_e_ALLlep_isNotMatched_num","h_e_ALLlep_isNotMatched_num",nbins,bins);
	TH1D *h_e_ALLlep_isFromB_num = new TH1D("h_e_ALLlep_isFromB_num","h_e_ALLlep_isFromB_num",nbins,bins);
	TH1D *h_e_ALLlep_isFromC_num = new TH1D("h_e_ALLlep_isFromC_num","h_e_ALLlep_isFromC_num",nbins,bins);
	TH1D *h_e_ALLlep_isFromL_num = new TH1D("h_e_ALLlep_isFromL_num","h_e_ALLlep_isFromL_num",nbins,bins);
	TH1D *h_e_ALLlep_isFromElse_num = new TH1D("h_e_ALLlep_isFromElse_num","h_e_ALLlep_isFromElse_num",nbins,bins);

	TH1D *h_m_ALLlep_denom = new TH1D("h_m_ALLlep_denom","h_m_ALLlep_denom",nbins,bins);
	TH1D *h_m_ALLlep_isNotMatched_denom = new TH1D("h_m_ALLlep_isNotMatched_denom","h_m_ALLlep_isNotMatched_denom",nbins,bins);
	TH1D *h_m_ALLlep_isFromB_denom = new TH1D("h_m_ALLlep_isFromB_denom","h_m_ALLlep_isFromB_denom",nbins,bins);
	TH1D *h_m_ALLlep_isFromC_denom = new TH1D("h_m_ALLlep_isFromC_denom","h_m_ALLlep_isFromC_denom",nbins,bins);
	TH1D *h_m_ALLlep_isFromL_denom = new TH1D("h_m_ALLlep_isFromL_denom","h_m_ALLlep_isFromL_denom",nbins,bins);
	TH1D *h_m_ALLlep_isFromElse_denom = new TH1D("h_m_ALLlep_isFromElse_denom","h_m_ALLlep_isFromElse_denom",nbins,bins);

	TH1D *h_m_ALLlep_num = new TH1D("h_m_ALLlep_num","h_m_ALLlep_num",nbins,bins);
	TH1D *h_m_ALLlep_isNotMatched_num = new TH1D("h_m_ALLlep_isNotMatched_num","h_m_ALLlep_isNotMatched_num",nbins,bins);
	TH1D *h_m_ALLlep_isFromB_num = new TH1D("h_m_ALLlep_isFromB_num","h_m_ALLlep_isFromB_num",nbins,bins);
	TH1D *h_m_ALLlep_isFromC_num = new TH1D("h_m_ALLlep_isFromC_num","h_m_ALLlep_isFromC_num",nbins,bins);
	TH1D *h_m_ALLlep_isFromL_num = new TH1D("h_m_ALLlep_isFromL_num","h_m_ALLlep_isFromL_num",nbins,bins);
	TH1D *h_m_ALLlep_isFromElse_num = new TH1D("h_m_ALLlep_isFromElse_num","h_m_ALLlep_isFromElse_num",nbins,bins);

	if(DEBUG) cout << "Created new hist." << endl;		

	t->Draw("LeptonPt>>h_e_ALLlep_denom","LeptonFlavor==0"+ALLlepCut+isNonPrompt);
	t->Draw("LeptonPt>>h_e_ALLlep_isNotMatched_denom","LeptonFlavor==0"+ALLlepCut+isNonPrompt+isNotMatched);
	t->Draw("LeptonPt>>h_e_ALLlep_isFromB_denom","LeptonFlavor==0"+ALLlepCut+isNonPrompt+isFromB);
	t->Draw("LeptonPt>>h_e_ALLlep_isFromC_denom","LeptonFlavor==0"+ALLlepCut+isNonPrompt+isFromC);
	t->Draw("LeptonPt>>h_e_ALLlep_isFromL_denom","LeptonFlavor==0"+ALLlepCut+isNonPrompt+isFromL);
	t->Draw("LeptonPt>>h_e_ALLlep_isFromElse_denom","LeptonFlavor==0"+ALLlepCut+isNonPrompt+isFromElse);

	if(DEBUG) cout << "Drew el all non-prompt (den)." << endl;

	t->Draw("LeptonPt>>h_e_ALLlep_num","LeptonFlavor==0"+ALLlepCut+isNonPrompt+isTight);
	t->Draw("LeptonPt>>h_e_ALLlep_isNotMatched_num","LeptonFlavor==0"+ALLlepCut+isNonPrompt+isNotMatched+isTight);
	t->Draw("LeptonPt>>h_e_ALLlep_isFromB_num","LeptonFlavor==0"+ALLlepCut+isNonPrompt+isFromB+isTight);
	t->Draw("LeptonPt>>h_e_ALLlep_isFromC_num","LeptonFlavor==0"+ALLlepCut+isNonPrompt+isFromC+isTight);
	t->Draw("LeptonPt>>h_e_ALLlep_isFromL_num","LeptonFlavor==0"+ALLlepCut+isNonPrompt+isFromL+isTight);
	t->Draw("LeptonPt>>h_e_ALLlep_isFromElse_num","LeptonFlavor==0"+ALLlepCut+isNonPrompt+isFromElse+isTight);

	if(DEBUG) cout << "Drew el isTight non-prompt (num)." << endl;

	t->Draw("LeptonPt>>h_m_ALLlep_denom","LeptonFlavor==1"+ALLlepCut+isNonPrompt);
	t->Draw("LeptonPt>>h_m_ALLlep_isNotMatched_denom","LeptonFlavor==1"+ALLlepCut+isNonPrompt+isNotMatched);
	t->Draw("LeptonPt>>h_m_ALLlep_isFromB_denom","LeptonFlavor==1"+ALLlepCut+isNonPrompt+isFromB);
	t->Draw("LeptonPt>>h_m_ALLlep_isFromC_denom","LeptonFlavor==1"+ALLlepCut+isNonPrompt+isFromC);
	t->Draw("LeptonPt>>h_m_ALLlep_isFromL_denom","LeptonFlavor==1"+ALLlepCut+isNonPrompt+isFromL);
	t->Draw("LeptonPt>>h_m_ALLlep_isFromElse_denom","LeptonFlavor==1"+ALLlepCut+isNonPrompt+isFromElse);

        if(DEBUG) cout << "Drew mu all non-prompt (den)." << endl;

	t->Draw("LeptonPt>>h_m_ALLlep_num","LeptonFlavor==1"+ALLlepCut+isNonPrompt+isTight);
	t->Draw("LeptonPt>>h_m_ALLlep_isNotMatched_num","LeptonFlavor==1"+ALLlepCut+isNonPrompt+isNotMatched+isTight);
	t->Draw("LeptonPt>>h_m_ALLlep_isFromB_num","LeptonFlavor==1"+ALLlepCut+isNonPrompt+isFromB+isTight);
	t->Draw("LeptonPt>>h_m_ALLlep_isFromC_num","LeptonFlavor==1"+ALLlepCut+isNonPrompt+isFromC+isTight);
	t->Draw("LeptonPt>>h_m_ALLlep_isFromL_num","LeptonFlavor==1"+ALLlepCut+isNonPrompt+isFromL+isTight);
	t->Draw("LeptonPt>>h_m_ALLlep_isFromElse_num","LeptonFlavor==1"+ALLlepCut+isNonPrompt+isFromElse+isTight);
	
        if(DEBUG) cout << "Drew mu isTight non-prompt (num)." << endl;

	TGraphAsymmErrors *g_e_ALLlep = new TGraphAsymmErrors( h_e_ALLlep_num, h_e_ALLlep_denom,"cl=0.683 b(1,1) mode");
	TGraphAsymmErrors *g_e_ALLlep_isNotMatched = new TGraphAsymmErrors( h_e_ALLlep_isNotMatched_num, h_e_ALLlep_isNotMatched_denom,"cl=0.683 b(1,1) mode");
	TGraphAsymmErrors *g_e_ALLlep_isFromB = new TGraphAsymmErrors( h_e_ALLlep_isFromB_num, h_e_ALLlep_isFromB_denom,"cl=0.683 b(1,1) mode");
	TGraphAsymmErrors *g_e_ALLlep_isFromC = new TGraphAsymmErrors( h_e_ALLlep_isFromC_num, h_e_ALLlep_isFromC_denom,"cl=0.683 b(1,1) mode");
	TGraphAsymmErrors *g_e_ALLlep_isFromL = new TGraphAsymmErrors( h_e_ALLlep_isFromL_num, h_e_ALLlep_isFromL_denom,"cl=0.683 b(1,1) mode");
	TGraphAsymmErrors *g_e_ALLlep_isFromElse = new TGraphAsymmErrors( h_e_ALLlep_isFromElse_num, h_e_ALLlep_isFromElse_denom,"cl=0.683 b(1,1) mode");

	TGraphAsymmErrors *g_m_ALLlep = new TGraphAsymmErrors( h_m_ALLlep_num, h_m_ALLlep_denom,"cl=0.683 b(1,1) mode");
	TGraphAsymmErrors *g_m_ALLlep_isNotMatched = new TGraphAsymmErrors( h_m_ALLlep_isNotMatched_num, h_m_ALLlep_isNotMatched_denom,"cl=0.683 b(1,1) mode");
	TGraphAsymmErrors *g_m_ALLlep_isFromB = new TGraphAsymmErrors( h_m_ALLlep_isFromB_num, h_m_ALLlep_isFromB_denom,"cl=0.683 b(1,1) mode");
	TGraphAsymmErrors *g_m_ALLlep_isFromC = new TGraphAsymmErrors( h_m_ALLlep_isFromC_num, h_m_ALLlep_isFromC_denom,"cl=0.683 b(1,1) mode");
	TGraphAsymmErrors *g_m_ALLlep_isFromL = new TGraphAsymmErrors( h_m_ALLlep_isFromL_num, h_m_ALLlep_isFromL_denom,"cl=0.683 b(1,1) mode");
	TGraphAsymmErrors *g_m_ALLlep_isFromElse = new TGraphAsymmErrors( h_m_ALLlep_isFromElse_num, h_m_ALLlep_isFromElse_denom,"cl=0.683 b(1,1) mode");

	TCanvas *c_e_ALLlep = new TCanvas("c_e_ALLlep","c_e_ALLlep",900,600);
	c_e_ALLlep->Divide(3,2);
	c_e_ALLlep->cd(1);
	g_e_ALLlep->Draw("ALP");
	c_e_ALLlep->cd(2);
	g_e_ALLlep_isFromL->Draw("ALP");
	c_e_ALLlep->cd(3);
	g_e_ALLlep_isFromC->Draw("ALP");
	c_e_ALLlep->cd(4);
	g_e_ALLlep_isFromB->Draw("ALP");
	c_e_ALLlep->cd(5);
	g_e_ALLlep_isFromElse->Draw("ALP");
	c_e_ALLlep->cd(6);
	g_e_ALLlep_isNotMatched->Draw("ALP");

	c_e_ALLlep->SaveAs(Dir+SaveDir+"lep_fakerate_e_ALLlep.png");

	TCanvas *c_m_ALLlep = new TCanvas("c_m_ALLlep","c_m_ALLlep",900,600);
	c_m_ALLlep->Divide(3,2);
	c_m_ALLlep->cd(1);
	g_m_ALLlep->Draw("ALP");
	c_m_ALLlep->cd(2);
	g_m_ALLlep_isFromL->Draw("ALP");
	c_m_ALLlep->cd(3);
	g_m_ALLlep_isFromC->Draw("ALP");
	c_m_ALLlep->cd(4);
	g_m_ALLlep_isFromB->Draw("ALP");
	c_m_ALLlep->cd(5);
	g_m_ALLlep_isFromElse->Draw("ALP");
	c_m_ALLlep->cd(6);
	g_m_ALLlep_isNotMatched->Draw("ALP");

	c_m_ALLlep->SaveAs(Dir+SaveDir+"lep_fakerate_m_ALLlep.png");

	cout << "" << endl;

	cout << "electron fake rate _ALLlep 			: " << 1.0*h_e_ALLlep_num->Integral() / h_e_ALLlep_denom->Integral() <<  " +/- " <<1.0*h_e_ALLlep_num->Integral() / h_e_ALLlep_denom->Integral() * sqrt(1./h_e_ALLlep_num->Integral() + 1./h_e_ALLlep_denom->Integral()) << " | "<< h_e_ALLlep_denom->Integral() << " ( "<< h_e_ALLlep_denom->Integral() / h_e_ALLlep_denom->Integral() * 100. << " % )"<<endl;
	cout << "electron fake rate _ALLlep_isFromL 			: " << 1.0*h_e_ALLlep_isFromL_num->Integral() / h_e_ALLlep_isFromL_denom->Integral() <<  " +/- " <<1.0*h_e_ALLlep_isFromL_num->Integral() / h_e_ALLlep_isFromL_denom->Integral() * sqrt(1./h_e_ALLlep_isFromL_num->Integral() + 1./h_e_ALLlep_isFromL_denom->Integral()) << " | "<< h_e_ALLlep_isFromL_denom->Integral() << " ( "<< h_e_ALLlep_isFromL_denom->Integral() / h_e_ALLlep_denom->Integral() * 100. << " % )"<<endl;
	cout << "electron fake rate _ALLlep_isFromC 			: " << 1.0*h_e_ALLlep_isFromC_num->Integral() / h_e_ALLlep_isFromC_denom->Integral() <<  " +/- " <<1.0*h_e_ALLlep_isFromC_num->Integral() / h_e_ALLlep_isFromC_denom->Integral() * sqrt(1./h_e_ALLlep_isFromC_num->Integral() + 1./h_e_ALLlep_isFromC_denom->Integral()) << " | "<< h_e_ALLlep_isFromC_denom->Integral() << " ( "<< h_e_ALLlep_isFromC_denom->Integral() / h_e_ALLlep_denom->Integral() * 100. << " % )"<<endl;
	cout << "electron fake rate _ALLlep_isFromB 			: " << 1.0*h_e_ALLlep_isFromB_num->Integral() / h_e_ALLlep_isFromB_denom->Integral() <<  " +/- " <<1.0*h_e_ALLlep_isFromB_num->Integral() / h_e_ALLlep_isFromB_denom->Integral() * sqrt(1./h_e_ALLlep_isFromB_num->Integral() + 1./h_e_ALLlep_isFromB_denom->Integral()) << " | "<< h_e_ALLlep_isFromB_denom->Integral() << " ( "<< h_e_ALLlep_isFromB_denom->Integral() / h_e_ALLlep_denom->Integral() * 100. << " % )"<<endl;
	cout << "electron fake rate _ALLlep_isFromElse 			: " << 1.0*h_e_ALLlep_isFromElse_num->Integral() / h_e_ALLlep_isFromElse_denom->Integral() <<  " +/- " <<1.0*h_e_ALLlep_isFromElse_num->Integral() / h_e_ALLlep_isFromElse_denom->Integral() * sqrt(1./h_e_ALLlep_isFromElse_num->Integral() + 1./h_e_ALLlep_isFromElse_denom->Integral()) << " | "<< h_e_ALLlep_isFromElse_denom->Integral() << " ( "<< h_e_ALLlep_isFromElse_denom->Integral() / h_e_ALLlep_denom->Integral() * 100. << " % )"<<endl;
	cout << "electron fake rate _ALLlep_isNotMatched 			: " << 1.0*h_e_ALLlep_isNotMatched_num->Integral() / h_e_ALLlep_isNotMatched_denom->Integral() <<  " +/- " <<1.0*h_e_ALLlep_isNotMatched_num->Integral() / h_e_ALLlep_isNotMatched_denom->Integral() * sqrt(1./h_e_ALLlep_isNotMatched_num->Integral() + 1./h_e_ALLlep_isNotMatched_denom->Integral()) << " | "<< h_e_ALLlep_isNotMatched_denom->Integral() << " ( "<< h_e_ALLlep_isNotMatched_denom->Integral() / h_e_ALLlep_denom->Integral() * 100. << " % )"<<endl;

	cout << "muon fake rate _ALLlep 			: " << 1.0*h_m_ALLlep_num->Integral() / h_m_ALLlep_denom->Integral() <<  " +/- " <<1.0*h_m_ALLlep_num->Integral() / h_m_ALLlep_denom->Integral() * sqrt(1./h_m_ALLlep_num->Integral() + 1./h_m_ALLlep_denom->Integral()) << " | "<< h_m_ALLlep_denom->Integral() << " ( "<< h_m_ALLlep_denom->Integral() / h_m_ALLlep_denom->Integral() * 100. << " % )"<<endl;
	cout << "muon fake rate _ALLlep_isFromL 			: " << 1.0*h_m_ALLlep_isFromL_num->Integral() / h_m_ALLlep_isFromL_denom->Integral() <<  " +/- " <<1.0*h_m_ALLlep_isFromL_num->Integral() / h_m_ALLlep_isFromL_denom->Integral() * sqrt(1./h_m_ALLlep_isFromL_num->Integral() + 1./h_m_ALLlep_isFromL_denom->Integral()) << " | "<< h_m_ALLlep_isFromL_denom->Integral() << " ( "<< h_m_ALLlep_isFromL_denom->Integral() / h_m_ALLlep_denom->Integral() * 100. << " % )"<<endl;
	cout << "muon fake rate _ALLlep_isFromC 			: " << 1.0*h_m_ALLlep_isFromC_num->Integral() / h_m_ALLlep_isFromC_denom->Integral() <<  " +/- " <<1.0*h_m_ALLlep_isFromC_num->Integral() / h_m_ALLlep_isFromC_denom->Integral() * sqrt(1./h_m_ALLlep_isFromC_num->Integral() + 1./h_m_ALLlep_isFromC_denom->Integral()) << " | "<< h_m_ALLlep_isFromC_denom->Integral() << " ( "<< h_m_ALLlep_isFromC_denom->Integral() / h_m_ALLlep_denom->Integral() * 100. << " % )"<<endl;
	cout << "muon fake rate _ALLlep_isFromB 			: " << 1.0*h_m_ALLlep_isFromB_num->Integral() / h_m_ALLlep_isFromB_denom->Integral() <<  " +/- " <<1.0*h_m_ALLlep_isFromB_num->Integral() / h_m_ALLlep_isFromB_denom->Integral() * sqrt(1./h_m_ALLlep_isFromB_num->Integral() + 1./h_m_ALLlep_isFromB_denom->Integral()) << " | "<< h_m_ALLlep_isFromB_denom->Integral() << " ( "<< h_m_ALLlep_isFromB_denom->Integral() / h_m_ALLlep_denom->Integral() * 100. << " % )"<<endl;
	cout << "muon fake rate _ALLlep_isFromElse 			: " << 1.0*h_m_ALLlep_isFromElse_num->Integral() / h_m_ALLlep_isFromElse_denom->Integral() <<  " +/- " <<1.0*h_m_ALLlep_isFromElse_num->Integral() / h_m_ALLlep_isFromElse_denom->Integral() * sqrt(1./h_m_ALLlep_isFromElse_num->Integral() + 1./h_m_ALLlep_isFromElse_denom->Integral()) << " | "<< h_m_ALLlep_isFromElse_denom->Integral() << " ( "<< h_m_ALLlep_isFromElse_denom->Integral() / h_m_ALLlep_denom->Integral() * 100. << " % )"<<endl;
	cout << "muon fake rate _ALLlep_isNotMatched 			: " << 1.0*h_m_ALLlep_isNotMatched_num->Integral() / h_m_ALLlep_isNotMatched_denom->Integral() <<  " +/- " <<1.0*h_m_ALLlep_isNotMatched_num->Integral() / h_m_ALLlep_isNotMatched_denom->Integral() * sqrt(1./h_m_ALLlep_isNotMatched_num->Integral() + 1./h_m_ALLlep_isNotMatched_denom->Integral()) << " | "<< h_m_ALLlep_isNotMatched_denom->Integral() << " ( "<< h_m_ALLlep_isNotMatched_denom->Integral() / h_m_ALLlep_denom->Integral() * 100. << " % )"<<endl;

	cout << ""<< endl;
	cout << "electron fake rate _ALLlep in pT bins:" << endl;
	cout << "	30-50 ("<< g_e_ALLlep->GetX()[0] <<"):	"<< g_e_ALLlep->GetY()[0] << " + " <<g_e_ALLlep->GetEYhigh()[0] << " - "<<g_e_ALLlep->GetEYlow()[0] << endl;
	cout << "	50-100 ("<< g_e_ALLlep->GetX()[1] <<"):	"<< g_e_ALLlep->GetY()[1] << " + " <<g_e_ALLlep->GetEYhigh()[1] << " - "<<g_e_ALLlep->GetEYlow()[1]  <<endl;
	cout << "	100-150 ("<< g_e_ALLlep->GetX()[2] <<"):	"<< g_e_ALLlep->GetY()[2] << " + " <<g_e_ALLlep->GetEYhigh()[2] << " - "<< g_e_ALLlep->GetEYlow()[2] <<endl;
	cout << "	150-200 ("<< g_e_ALLlep->GetX()[3] <<"):	"<< g_e_ALLlep->GetY()[3] << " + " <<g_e_ALLlep->GetEYhigh()[3] << " - "<<g_e_ALLlep->GetEYlow()[3] <<endl;
	cout << "	200-500 ("<< g_e_ALLlep->GetX()[4] <<"):	"<< g_e_ALLlep->GetY()[4] << " + " <<g_e_ALLlep->GetEYhigh()[4] << " - "<< g_e_ALLlep->GetEYlow()[4] <<endl;

	cout << ""<< endl;
	cout << "muon fake rate _ALLlep in pT bins:" << endl;
	cout << "	30-50:	"<< g_m_ALLlep->GetY()[0] << " + " <<g_m_ALLlep->GetEYhigh()[0] << " - "<<g_m_ALLlep->GetEYlow()[0] <<endl;
	cout << "	50-100:	"<< g_m_ALLlep->GetY()[1] << " + " <<g_m_ALLlep->GetEYhigh()[1] << " - "<<g_m_ALLlep->GetEYlow()[1] <<endl;
	cout << "	100-150:	"<< g_m_ALLlep->GetY()[2] << " + " <<g_m_ALLlep->GetEYhigh()[2] << " - "<<g_m_ALLlep->GetEYlow()[2] <<endl;
	cout << "	150-200:	"<< g_m_ALLlep->GetY()[3] << " + " <<g_m_ALLlep->GetEYhigh()[3] << " - "<<g_m_ALLlep->GetEYlow()[3] <<endl;
	cout << "	200-500:	"<< g_m_ALLlep->GetY()[4] << " + " <<g_m_ALLlep->GetEYhigh()[4] << " - "<<g_m_ALLlep->GetEYlow()[4] <<endl;

	// singlelep
if(doSinglelep){
	cout << "" << endl;
	cout << "===================================================================" << endl;
	cout << "Processing 1 lepton events ..." << endl;
	cout << "===================================================================" << endl;
	cout << "" << endl;

	TH1D *h_e_singlelep_denom = new TH1D("h_e_singlelep_denom","h_e_singlelep_denom",nbins,bins);
	TH1D *h_e_singlelep_isNotMatched_denom = new TH1D("h_e_singlelep_isNotMatched_denom","h_e_singlelep_isNotMatched_denom",nbins,bins);
	TH1D *h_e_singlelep_isFromB_denom = new TH1D("h_e_singlelep_isFromB_denom","h_e_singlelep_isFromB_denom",nbins,bins);
	TH1D *h_e_singlelep_isFromC_denom = new TH1D("h_e_singlelep_isFromC_denom","h_e_singlelep_isFromC_denom",nbins,bins);
	TH1D *h_e_singlelep_isFromL_denom = new TH1D("h_e_singlelep_isFromL_denom","h_e_singlelep_isFromL_denom",nbins,bins);
	TH1D *h_e_singlelep_isFromElse_denom = new TH1D("h_e_singlelep_isFromElse_denom","h_e_singlelep_isFromElse_denom",nbins,bins);

	TH1D *h_e_singlelep_num = new TH1D("h_e_singlelep_num","h_e_singlelep_num",nbins,bins);
	TH1D *h_e_singlelep_isNotMatched_num = new TH1D("h_e_singlelep_isNotMatched_num","h_e_singlelep_isNotMatched_num",nbins,bins);
	TH1D *h_e_singlelep_isFromB_num = new TH1D("h_e_singlelep_isFromB_num","h_e_singlelep_isFromB_num",nbins,bins);
	TH1D *h_e_singlelep_isFromC_num = new TH1D("h_e_singlelep_isFromC_num","h_e_singlelep_isFromC_num",nbins,bins);
	TH1D *h_e_singlelep_isFromL_num = new TH1D("h_e_singlelep_isFromL_num","h_e_singlelep_isFromL_num",nbins,bins);
	TH1D *h_e_singlelep_isFromElse_num = new TH1D("h_e_singlelep_isFromElse_num","h_e_singlelep_isFromElse_num",nbins,bins);

	TH1D *h_m_singlelep_denom = new TH1D("h_m_singlelep_denom","h_m_singlelep_denom",nbins,bins);
	TH1D *h_m_singlelep_isNotMatched_denom = new TH1D("h_m_singlelep_isNotMatched_denom","h_m_singlelep_isNotMatched_denom",nbins,bins);
	TH1D *h_m_singlelep_isFromB_denom = new TH1D("h_m_singlelep_isFromB_denom","h_m_singlelep_isFromB_denom",nbins,bins);
	TH1D *h_m_singlelep_isFromC_denom = new TH1D("h_m_singlelep_isFromC_denom","h_m_singlelep_isFromC_denom",nbins,bins);
	TH1D *h_m_singlelep_isFromL_denom = new TH1D("h_m_singlelep_isFromL_denom","h_m_singlelep_isFromL_denom",nbins,bins);
	TH1D *h_m_singlelep_isFromElse_denom = new TH1D("h_m_singlelep_isFromElse_denom","h_m_singlelep_isFromElse_denom",nbins,bins);

	TH1D *h_m_singlelep_num = new TH1D("h_m_singlelep_num","h_m_singlelep_num",nbins,bins);
	TH1D *h_m_singlelep_isNotMatched_num = new TH1D("h_m_singlelep_isNotMatched_num","h_m_singlelep_isNotMatched_num",nbins,bins);
	TH1D *h_m_singlelep_isFromB_num = new TH1D("h_m_singlelep_isFromB_num","h_m_singlelep_isFromB_num",nbins,bins);
	TH1D *h_m_singlelep_isFromC_num = new TH1D("h_m_singlelep_isFromC_num","h_m_singlelep_isFromC_num",nbins,bins);
	TH1D *h_m_singlelep_isFromL_num = new TH1D("h_m_singlelep_isFromL_num","h_m_singlelep_isFromL_num",nbins,bins);
	TH1D *h_m_singlelep_isFromElse_num = new TH1D("h_m_singlelep_isFromElse_num","h_m_singlelep_isFromElse_num",nbins,bins);
		
	t->Draw("LeptonPt>>h_e_singlelep_denom","LeptonFlavor==0"+singlelepCut+isNonPrompt);
	t->Draw("LeptonPt>>h_e_singlelep_isNotMatched_denom","LeptonFlavor==0"+singlelepCut+isNonPrompt+isNotMatched);
	t->Draw("LeptonPt>>h_e_singlelep_isFromB_denom","LeptonFlavor==0"+singlelepCut+isNonPrompt+isFromB);
	t->Draw("LeptonPt>>h_e_singlelep_isFromC_denom","LeptonFlavor==0"+singlelepCut+isNonPrompt+isFromC);
	t->Draw("LeptonPt>>h_e_singlelep_isFromL_denom","LeptonFlavor==0"+singlelepCut+isNonPrompt+isFromL);
	t->Draw("LeptonPt>>h_e_singlelep_isFromElse_denom","LeptonFlavor==0"+singlelepCut+isNonPrompt+isFromElse);

	t->Draw("LeptonPt>>h_e_singlelep_num","LeptonFlavor==0"+singlelepCut+isNonPrompt+isTight);
	t->Draw("LeptonPt>>h_e_singlelep_isNotMatched_num","LeptonFlavor==0"+singlelepCut+isNonPrompt+isNotMatched+isTight);
	t->Draw("LeptonPt>>h_e_singlelep_isFromB_num","LeptonFlavor==0"+singlelepCut+isNonPrompt+isFromB+isTight);
	t->Draw("LeptonPt>>h_e_singlelep_isFromC_num","LeptonFlavor==0"+singlelepCut+isNonPrompt+isFromC+isTight);
	t->Draw("LeptonPt>>h_e_singlelep_isFromL_num","LeptonFlavor==0"+singlelepCut+isNonPrompt+isFromL+isTight);
	t->Draw("LeptonPt>>h_e_singlelep_isFromElse_num","LeptonFlavor==0"+singlelepCut+isNonPrompt+isFromElse+isTight);

	t->Draw("LeptonPt>>h_m_singlelep_denom","LeptonFlavor==1"+singlelepCut+isNonPrompt);
	t->Draw("LeptonPt>>h_m_singlelep_isNotMatched_denom","LeptonFlavor==1"+singlelepCut+isNonPrompt+isNotMatched);
	t->Draw("LeptonPt>>h_m_singlelep_isFromB_denom","LeptonFlavor==1"+singlelepCut+isNonPrompt+isFromB);
	t->Draw("LeptonPt>>h_m_singlelep_isFromC_denom","LeptonFlavor==1"+singlelepCut+isNonPrompt+isFromC);
	t->Draw("LeptonPt>>h_m_singlelep_isFromL_denom","LeptonFlavor==1"+singlelepCut+isNonPrompt+isFromL);
	t->Draw("LeptonPt>>h_m_singlelep_isFromElse_denom","LeptonFlavor==1"+singlelepCut+isNonPrompt+isFromElse);

	t->Draw("LeptonPt>>h_m_singlelep_num","LeptonFlavor==1"+singlelepCut+isNonPrompt+isTight);
	t->Draw("LeptonPt>>h_m_singlelep_isNotMatched_num","LeptonFlavor==1"+singlelepCut+isNonPrompt+isNotMatched+isTight);
	t->Draw("LeptonPt>>h_m_singlelep_isFromB_num","LeptonFlavor==1"+singlelepCut+isNonPrompt+isFromB+isTight);
	t->Draw("LeptonPt>>h_m_singlelep_isFromC_num","LeptonFlavor==1"+singlelepCut+isNonPrompt+isFromC+isTight);
	t->Draw("LeptonPt>>h_m_singlelep_isFromL_num","LeptonFlavor==1"+singlelepCut+isNonPrompt+isFromL+isTight);
	t->Draw("LeptonPt>>h_m_singlelep_isFromElse_num","LeptonFlavor==1"+singlelepCut+isNonPrompt+isFromElse+isTight);
	
	TGraphAsymmErrors *g_e_singlelep = new TGraphAsymmErrors( h_e_singlelep_num, h_e_singlelep_denom,"cl=0.683 b(1,1) mode");
	TGraphAsymmErrors *g_e_singlelep_isNotMatched = new TGraphAsymmErrors( h_e_singlelep_isNotMatched_num, h_e_singlelep_isNotMatched_denom,"cl=0.683 b(1,1) mode");
	TGraphAsymmErrors *g_e_singlelep_isFromB = new TGraphAsymmErrors( h_e_singlelep_isFromB_num, h_e_singlelep_isFromB_denom,"cl=0.683 b(1,1) mode");
	TGraphAsymmErrors *g_e_singlelep_isFromC = new TGraphAsymmErrors( h_e_singlelep_isFromC_num, h_e_singlelep_isFromC_denom,"cl=0.683 b(1,1) mode");
	TGraphAsymmErrors *g_e_singlelep_isFromL = new TGraphAsymmErrors( h_e_singlelep_isFromL_num, h_e_singlelep_isFromL_denom,"cl=0.683 b(1,1) mode");
	TGraphAsymmErrors *g_e_singlelep_isFromElse = new TGraphAsymmErrors( h_e_singlelep_isFromElse_num, h_e_singlelep_isFromElse_denom,"cl=0.683 b(1,1) mode");

	TGraphAsymmErrors *g_m_singlelep = new TGraphAsymmErrors( h_m_singlelep_num, h_m_singlelep_denom,"cl=0.683 b(1,1) mode");
	TGraphAsymmErrors *g_m_singlelep_isNotMatched = new TGraphAsymmErrors( h_m_singlelep_isNotMatched_num, h_m_singlelep_isNotMatched_denom,"cl=0.683 b(1,1) mode");
	TGraphAsymmErrors *g_m_singlelep_isFromB = new TGraphAsymmErrors( h_m_singlelep_isFromB_num, h_m_singlelep_isFromB_denom,"cl=0.683 b(1,1) mode");
	TGraphAsymmErrors *g_m_singlelep_isFromC = new TGraphAsymmErrors( h_m_singlelep_isFromC_num, h_m_singlelep_isFromC_denom,"cl=0.683 b(1,1) mode");
	TGraphAsymmErrors *g_m_singlelep_isFromL = new TGraphAsymmErrors( h_m_singlelep_isFromL_num, h_m_singlelep_isFromL_denom,"cl=0.683 b(1,1) mode");
	TGraphAsymmErrors *g_m_singlelep_isFromElse = new TGraphAsymmErrors( h_m_singlelep_isFromElse_num, h_m_singlelep_isFromElse_denom,"cl=0.683 b(1,1) mode");

	TCanvas *c_e_singlelep = new TCanvas("c_e_singlelep","c_e_singlelep",900,600);
	c_e_singlelep->Divide(3,2);
	c_e_singlelep->cd(1);
	g_e_singlelep->Draw("ALP");
	c_e_singlelep->cd(2);
	g_e_singlelep_isFromL->Draw("ALP");
	c_e_singlelep->cd(3);
	g_e_singlelep_isFromC->Draw("ALP");
	c_e_singlelep->cd(4);
	g_e_singlelep_isFromB->Draw("ALP");
	c_e_singlelep->cd(5);
	g_e_singlelep_isFromElse->Draw("ALP");
	c_e_singlelep->cd(6);
	g_e_singlelep_isNotMatched->Draw("ALP");

	c_e_singlelep->SaveAs(Dir+SaveDir+"lep_fakerate_e_singlelep.png");

	TCanvas *c_m_singlelep = new TCanvas("c_m_singlelep","c_m_singlelep",900,600);
	c_m_singlelep->Divide(3,2);
	c_m_singlelep->cd(1);
	g_m_singlelep->Draw("ALP");
	c_m_singlelep->cd(2);
	g_m_singlelep_isFromL->Draw("ALP");
	c_m_singlelep->cd(3);
	g_m_singlelep_isFromC->Draw("ALP");
	c_m_singlelep->cd(4);
	g_m_singlelep_isFromB->Draw("ALP");
	c_m_singlelep->cd(5);
	g_m_singlelep_isFromElse->Draw("ALP");
	c_m_singlelep->cd(6);
	g_m_singlelep_isNotMatched->Draw("ALP");

	c_m_singlelep->SaveAs(Dir+SaveDir+"lep_fakerate_m_singlelep.png");

	cout << "" << endl;

	cout << "electron fake rate _singlelep 			: " << 1.0*h_e_singlelep_num->Integral() / h_e_singlelep_denom->Integral() <<  " +/- " <<1.0*h_e_singlelep_num->Integral() / h_e_singlelep_denom->Integral() * sqrt(1./h_e_singlelep_num->Integral() + 1./h_e_singlelep_denom->Integral()) << " | "<< h_e_singlelep_denom->Integral() << " ( "<< h_e_singlelep_denom->Integral() / h_e_singlelep_denom->Integral() * 100. << " % )"<<endl;
	cout << "electron fake rate _singlelep_isFromL 			: " << 1.0*h_e_singlelep_isFromL_num->Integral() / h_e_singlelep_isFromL_denom->Integral() <<  " +/- " <<1.0*h_e_singlelep_isFromL_num->Integral() / h_e_singlelep_isFromL_denom->Integral() * sqrt(1./h_e_singlelep_isFromL_num->Integral() + 1./h_e_singlelep_isFromL_denom->Integral()) << " | "<< h_e_singlelep_isFromL_denom->Integral() << " ( "<< h_e_singlelep_isFromL_denom->Integral() / h_e_singlelep_denom->Integral() * 100. << " % )"<<endl;
	cout << "electron fake rate _singlelep_isFromC 			: " << 1.0*h_e_singlelep_isFromC_num->Integral() / h_e_singlelep_isFromC_denom->Integral() <<  " +/- " <<1.0*h_e_singlelep_isFromC_num->Integral() / h_e_singlelep_isFromC_denom->Integral() * sqrt(1./h_e_singlelep_isFromC_num->Integral() + 1./h_e_singlelep_isFromC_denom->Integral()) << " | "<< h_e_singlelep_isFromC_denom->Integral() << " ( "<< h_e_singlelep_isFromC_denom->Integral() / h_e_singlelep_denom->Integral() * 100. << " % )"<<endl;
	cout << "electron fake rate _singlelep_isFromB 			: " << 1.0*h_e_singlelep_isFromB_num->Integral() / h_e_singlelep_isFromB_denom->Integral() <<  " +/- " <<1.0*h_e_singlelep_isFromB_num->Integral() / h_e_singlelep_isFromB_denom->Integral() * sqrt(1./h_e_singlelep_isFromB_num->Integral() + 1./h_e_singlelep_isFromB_denom->Integral()) << " | "<< h_e_singlelep_isFromB_denom->Integral() << " ( "<< h_e_singlelep_isFromB_denom->Integral() / h_e_singlelep_denom->Integral() * 100. << " % )"<<endl;
	cout << "electron fake rate _singlelep_isFromElse 			: " << 1.0*h_e_singlelep_isFromElse_num->Integral() / h_e_singlelep_isFromElse_denom->Integral() <<  " +/- " <<1.0*h_e_singlelep_isFromElse_num->Integral() / h_e_singlelep_isFromElse_denom->Integral() * sqrt(1./h_e_singlelep_isFromElse_num->Integral() + 1./h_e_singlelep_isFromElse_denom->Integral()) << " | "<< h_e_singlelep_isFromElse_denom->Integral() << " ( "<< h_e_singlelep_isFromElse_denom->Integral() / h_e_singlelep_denom->Integral() * 100. << " % )"<<endl;
	cout << "electron fake rate _singlelep_isNotMatched 			: " << 1.0*h_e_singlelep_isNotMatched_num->Integral() / h_e_singlelep_isNotMatched_denom->Integral() <<  " +/- " <<1.0*h_e_singlelep_isNotMatched_num->Integral() / h_e_singlelep_isNotMatched_denom->Integral() * sqrt(1./h_e_singlelep_isNotMatched_num->Integral() + 1./h_e_singlelep_isNotMatched_denom->Integral()) << " | "<< h_e_singlelep_isNotMatched_denom->Integral() << " ( "<< h_e_singlelep_isNotMatched_denom->Integral() / h_e_singlelep_denom->Integral() * 100. << " % )"<<endl;

	cout << "muon fake rate _singlelep 			: " << 1.0*h_m_singlelep_num->Integral() / h_m_singlelep_denom->Integral() <<  " +/- " <<1.0*h_m_singlelep_num->Integral() / h_m_singlelep_denom->Integral() * sqrt(1./h_m_singlelep_num->Integral() + 1./h_m_singlelep_denom->Integral()) << " | "<< h_m_singlelep_denom->Integral() << " ( "<< h_m_singlelep_denom->Integral() / h_m_singlelep_denom->Integral() * 100. << " % )"<<endl;
	cout << "muon fake rate _singlelep_isFromL 			: " << 1.0*h_m_singlelep_isFromL_num->Integral() / h_m_singlelep_isFromL_denom->Integral() <<  " +/- " <<1.0*h_m_singlelep_isFromL_num->Integral() / h_m_singlelep_isFromL_denom->Integral() * sqrt(1./h_m_singlelep_isFromL_num->Integral() + 1./h_m_singlelep_isFromL_denom->Integral()) << " | "<< h_m_singlelep_isFromL_denom->Integral() << " ( "<< h_m_singlelep_isFromL_denom->Integral() / h_m_singlelep_denom->Integral() * 100. << " % )"<<endl;
	cout << "muon fake rate _singlelep_isFromC 			: " << 1.0*h_m_singlelep_isFromC_num->Integral() / h_m_singlelep_isFromC_denom->Integral() <<  " +/- " <<1.0*h_m_singlelep_isFromC_num->Integral() / h_m_singlelep_isFromC_denom->Integral() * sqrt(1./h_m_singlelep_isFromC_num->Integral() + 1./h_m_singlelep_isFromC_denom->Integral()) << " | "<< h_m_singlelep_isFromC_denom->Integral() << " ( "<< h_m_singlelep_isFromC_denom->Integral() / h_m_singlelep_denom->Integral() * 100. << " % )"<<endl;
	cout << "muon fake rate _singlelep_isFromB 			: " << 1.0*h_m_singlelep_isFromB_num->Integral() / h_m_singlelep_isFromB_denom->Integral() <<  " +/- " <<1.0*h_m_singlelep_isFromB_num->Integral() / h_m_singlelep_isFromB_denom->Integral() * sqrt(1./h_m_singlelep_isFromB_num->Integral() + 1./h_m_singlelep_isFromB_denom->Integral()) << " | "<< h_m_singlelep_isFromB_denom->Integral() << " ( "<< h_m_singlelep_isFromB_denom->Integral() / h_m_singlelep_denom->Integral() * 100. << " % )"<<endl;
	cout << "muon fake rate _singlelep_isFromElse 			: " << 1.0*h_m_singlelep_isFromElse_num->Integral() / h_m_singlelep_isFromElse_denom->Integral() <<  " +/- " <<1.0*h_m_singlelep_isFromElse_num->Integral() / h_m_singlelep_isFromElse_denom->Integral() * sqrt(1./h_m_singlelep_isFromElse_num->Integral() + 1./h_m_singlelep_isFromElse_denom->Integral()) << " | "<< h_m_singlelep_isFromElse_denom->Integral() << " ( "<< h_m_singlelep_isFromElse_denom->Integral() / h_m_singlelep_denom->Integral() * 100. << " % )"<<endl;
	cout << "muon fake rate _singlelep_isNotMatched 			: " << 1.0*h_m_singlelep_isNotMatched_num->Integral() / h_m_singlelep_isNotMatched_denom->Integral() <<  " +/- " <<1.0*h_m_singlelep_isNotMatched_num->Integral() / h_m_singlelep_isNotMatched_denom->Integral() * sqrt(1./h_m_singlelep_isNotMatched_num->Integral() + 1./h_m_singlelep_isNotMatched_denom->Integral()) << " | "<< h_m_singlelep_isNotMatched_denom->Integral() << " ( "<< h_m_singlelep_isNotMatched_denom->Integral() / h_m_singlelep_denom->Integral() * 100. << " % )"<<endl;

	cout << ""<< endl;
	cout << "electron fake rate _singlelep in pT bins:" << endl;
	cout << "	30-50:	"<< g_e_singlelep->GetY()[0] << " + " <<g_e_singlelep->GetEYhigh()[0] << " - "<<g_e_singlelep->GetEYlow()[0]  <<endl;
	cout << "	50-100:	"<< g_e_singlelep->GetY()[1] << " + " <<g_e_singlelep->GetEYhigh()[1] << " - "<<g_e_singlelep->GetEYlow()[1] <<endl;
	cout << "	100-150:	"<< g_e_singlelep->GetY()[2] << " + " <<g_e_singlelep->GetEYhigh()[2] << " - "<<g_e_singlelep->GetEYlow()[2] <<endl;
	cout << "	150-200:	"<< g_e_singlelep->GetY()[3] << " + " <<g_e_singlelep->GetEYhigh()[3] << " - "<< g_e_singlelep->GetEYlow()[3]<<endl;
	cout << "	200-500:	"<< g_e_singlelep->GetY()[4] << " + " <<g_e_singlelep->GetEYhigh()[4] << " - "<<g_e_singlelep->GetEYlow()[4] <<endl;

	cout << ""<< endl;
	cout << "muon fake rate _singlelep in pT bins:" << endl;
	cout << "	30-50:	"<< g_m_singlelep->GetY()[0] << " + " <<g_m_singlelep->GetEYhigh()[0] << " - "<<g_m_singlelep->GetEYlow()[0]  <<endl;
	cout << "	50-100:	"<< g_m_singlelep->GetY()[1] << " + " <<g_m_singlelep->GetEYhigh()[1] << " - "<<g_m_singlelep->GetEYlow()[1] <<endl;
	cout << "	100-150:	"<< g_m_singlelep->GetY()[2] << " + " <<g_m_singlelep->GetEYhigh()[2] << " - "<<g_m_singlelep->GetEYlow()[2] <<endl;
	cout << "	150-200:	"<< g_m_singlelep->GetY()[3] << " + " <<g_m_singlelep->GetEYhigh()[3] << " - "<<g_m_singlelep->GetEYlow()[3] <<endl;
	cout << "	200-500:	"<< g_m_singlelep->GetY()[4] << " + " <<g_m_singlelep->GetEYhigh()[4] << " - "<<g_m_singlelep->GetEYlow()[4] <<endl;
}
	// dilep
if(doDilep){
	cout << "" << endl;
	cout << "===================================================================" << endl;
	cout << "Processing 2 leptons events ..." << endl;
	cout << "===================================================================" << endl;
	cout << "" << endl;

	TH1D *h_e_dilep_denom = new TH1D("h_e_dilep_denom","h_e_dilep_denom",nbins,bins);
	TH1D *h_e_dilep_isNotMatched_denom = new TH1D("h_e_dilep_isNotMatched_denom","h_e_dilep_isNotMatched_denom",nbins,bins);
	TH1D *h_e_dilep_isFromB_denom = new TH1D("h_e_dilep_isFromB_denom","h_e_dilep_isFromB_denom",nbins,bins);
	TH1D *h_e_dilep_isFromC_denom = new TH1D("h_e_dilep_isFromC_denom","h_e_dilep_isFromC_denom",nbins,bins);
	TH1D *h_e_dilep_isFromL_denom = new TH1D("h_e_dilep_isFromL_denom","h_e_dilep_isFromL_denom",nbins,bins);
	TH1D *h_e_dilep_isFromElse_denom = new TH1D("h_e_dilep_isFromElse_denom","h_e_dilep_isFromElse_denom",nbins,bins);

	TH1D *h_e_dilep_num = new TH1D("h_e_dilep_num","h_e_dilep_num",nbins,bins);
	TH1D *h_e_dilep_isNotMatched_num = new TH1D("h_e_dilep_isNotMatched_num","h_e_dilep_isNotMatched_num",nbins,bins);
	TH1D *h_e_dilep_isFromB_num = new TH1D("h_e_dilep_isFromB_num","h_e_dilep_isFromB_num",nbins,bins);
	TH1D *h_e_dilep_isFromC_num = new TH1D("h_e_dilep_isFromC_num","h_e_dilep_isFromC_num",nbins,bins);
	TH1D *h_e_dilep_isFromL_num = new TH1D("h_e_dilep_isFromL_num","h_e_dilep_isFromL_num",nbins,bins);
	TH1D *h_e_dilep_isFromElse_num = new TH1D("h_e_dilep_isFromElse_num","h_e_dilep_isFromElse_num",nbins,bins);

	TH1D *h_m_dilep_denom = new TH1D("h_m_dilep_denom","h_m_dilep_denom",nbins,bins);
	TH1D *h_m_dilep_isNotMatched_denom = new TH1D("h_m_dilep_isNotMatched_denom","h_m_dilep_isNotMatched_denom",nbins,bins);
	TH1D *h_m_dilep_isFromB_denom = new TH1D("h_m_dilep_isFromB_denom","h_m_dilep_isFromB_denom",nbins,bins);
	TH1D *h_m_dilep_isFromC_denom = new TH1D("h_m_dilep_isFromC_denom","h_m_dilep_isFromC_denom",nbins,bins);
	TH1D *h_m_dilep_isFromL_denom = new TH1D("h_m_dilep_isFromL_denom","h_m_dilep_isFromL_denom",nbins,bins);
	TH1D *h_m_dilep_isFromElse_denom = new TH1D("h_m_dilep_isFromElse_denom","h_m_dilep_isFromElse_denom",nbins,bins);

	TH1D *h_m_dilep_num = new TH1D("h_m_dilep_num","h_m_dilep_num",nbins,bins);
	TH1D *h_m_dilep_isNotMatched_num = new TH1D("h_m_dilep_isNotMatched_num","h_m_dilep_isNotMatched_num",nbins,bins);
	TH1D *h_m_dilep_isFromB_num = new TH1D("h_m_dilep_isFromB_num","h_m_dilep_isFromB_num",nbins,bins);
	TH1D *h_m_dilep_isFromC_num = new TH1D("h_m_dilep_isFromC_num","h_m_dilep_isFromC_num",nbins,bins);
	TH1D *h_m_dilep_isFromL_num = new TH1D("h_m_dilep_isFromL_num","h_m_dilep_isFromL_num",nbins,bins);
	TH1D *h_m_dilep_isFromElse_num = new TH1D("h_m_dilep_isFromElse_num","h_m_dilep_isFromElse_num",nbins,bins);
		
	t->Draw("LeptonPt>>h_e_dilep_denom","LeptonFlavor==0"+dilepCut+isNonPrompt);
	t->Draw("LeptonPt>>h_e_dilep_isNotMatched_denom","LeptonFlavor==0"+dilepCut+isNonPrompt+isNotMatched);
	t->Draw("LeptonPt>>h_e_dilep_isFromB_denom","LeptonFlavor==0"+dilepCut+isNonPrompt+isFromB);
	t->Draw("LeptonPt>>h_e_dilep_isFromC_denom","LeptonFlavor==0"+dilepCut+isNonPrompt+isFromC);
	t->Draw("LeptonPt>>h_e_dilep_isFromL_denom","LeptonFlavor==0"+dilepCut+isNonPrompt+isFromL);
	t->Draw("LeptonPt>>h_e_dilep_isFromElse_denom","LeptonFlavor==0"+dilepCut+isNonPrompt+isFromElse);

	t->Draw("LeptonPt>>h_e_dilep_num","LeptonFlavor==0"+dilepCut+isNonPrompt+isTight);
	t->Draw("LeptonPt>>h_e_dilep_isNotMatched_num","LeptonFlavor==0"+dilepCut+isNonPrompt+isNotMatched+isTight);
	t->Draw("LeptonPt>>h_e_dilep_isFromB_num","LeptonFlavor==0"+dilepCut+isNonPrompt+isFromB+isTight);
	t->Draw("LeptonPt>>h_e_dilep_isFromC_num","LeptonFlavor==0"+dilepCut+isNonPrompt+isFromC+isTight);
	t->Draw("LeptonPt>>h_e_dilep_isFromL_num","LeptonFlavor==0"+dilepCut+isNonPrompt+isFromL+isTight);
	t->Draw("LeptonPt>>h_e_dilep_isFromElse_num","LeptonFlavor==0"+dilepCut+isNonPrompt+isFromElse+isTight);

	t->Draw("LeptonPt>>h_m_dilep_denom","LeptonFlavor==1"+dilepCut+isNonPrompt);
	t->Draw("LeptonPt>>h_m_dilep_isNotMatched_denom","LeptonFlavor==1"+dilepCut+isNonPrompt+isNotMatched);
	t->Draw("LeptonPt>>h_m_dilep_isFromB_denom","LeptonFlavor==1"+dilepCut+isNonPrompt+isFromB);
	t->Draw("LeptonPt>>h_m_dilep_isFromC_denom","LeptonFlavor==1"+dilepCut+isNonPrompt+isFromC);
	t->Draw("LeptonPt>>h_m_dilep_isFromL_denom","LeptonFlavor==1"+dilepCut+isNonPrompt+isFromL);
	t->Draw("LeptonPt>>h_m_dilep_isFromElse_denom","LeptonFlavor==1"+dilepCut+isNonPrompt+isFromElse);

	t->Draw("LeptonPt>>h_m_dilep_num","LeptonFlavor==1"+dilepCut+isNonPrompt+isTight);
	t->Draw("LeptonPt>>h_m_dilep_isNotMatched_num","LeptonFlavor==1"+dilepCut+isNonPrompt+isNotMatched+isTight);
	t->Draw("LeptonPt>>h_m_dilep_isFromB_num","LeptonFlavor==1"+dilepCut+isNonPrompt+isFromB+isTight);
	t->Draw("LeptonPt>>h_m_dilep_isFromC_num","LeptonFlavor==1"+dilepCut+isNonPrompt+isFromC+isTight);
	t->Draw("LeptonPt>>h_m_dilep_isFromL_num","LeptonFlavor==1"+dilepCut+isNonPrompt+isFromL+isTight);
	t->Draw("LeptonPt>>h_m_dilep_isFromElse_num","LeptonFlavor==1"+dilepCut+isNonPrompt+isFromElse+isTight);
	
	TGraphAsymmErrors *g_e_dilep = new TGraphAsymmErrors( h_e_dilep_num, h_e_dilep_denom,"cl=0.683 b(1,1) mode");
	TGraphAsymmErrors *g_e_dilep_isNotMatched = new TGraphAsymmErrors( h_e_dilep_isNotMatched_num, h_e_dilep_isNotMatched_denom,"cl=0.683 b(1,1) mode");
	TGraphAsymmErrors *g_e_dilep_isFromB = new TGraphAsymmErrors( h_e_dilep_isFromB_num, h_e_dilep_isFromB_denom,"cl=0.683 b(1,1) mode");
	TGraphAsymmErrors *g_e_dilep_isFromC = new TGraphAsymmErrors( h_e_dilep_isFromC_num, h_e_dilep_isFromC_denom,"cl=0.683 b(1,1) mode");
	TGraphAsymmErrors *g_e_dilep_isFromL = new TGraphAsymmErrors( h_e_dilep_isFromL_num, h_e_dilep_isFromL_denom,"cl=0.683 b(1,1) mode");
	TGraphAsymmErrors *g_e_dilep_isFromElse = new TGraphAsymmErrors( h_e_dilep_isFromElse_num, h_e_dilep_isFromElse_denom,"cl=0.683 b(1,1) mode");

	TGraphAsymmErrors *g_m_dilep = new TGraphAsymmErrors( h_m_dilep_num, h_m_dilep_denom,"cl=0.683 b(1,1) mode");
	TGraphAsymmErrors *g_m_dilep_isNotMatched = new TGraphAsymmErrors( h_m_dilep_isNotMatched_num, h_m_dilep_isNotMatched_denom,"cl=0.683 b(1,1) mode");
	TGraphAsymmErrors *g_m_dilep_isFromB = new TGraphAsymmErrors( h_m_dilep_isFromB_num, h_m_dilep_isFromB_denom,"cl=0.683 b(1,1) mode");
	TGraphAsymmErrors *g_m_dilep_isFromC = new TGraphAsymmErrors( h_m_dilep_isFromC_num, h_m_dilep_isFromC_denom,"cl=0.683 b(1,1) mode");
	TGraphAsymmErrors *g_m_dilep_isFromL = new TGraphAsymmErrors( h_m_dilep_isFromL_num, h_m_dilep_isFromL_denom,"cl=0.683 b(1,1) mode");
	TGraphAsymmErrors *g_m_dilep_isFromElse = new TGraphAsymmErrors( h_m_dilep_isFromElse_num, h_m_dilep_isFromElse_denom,"cl=0.683 b(1,1) mode");

	TCanvas *c_e_dilep = new TCanvas("c_e_dilep","c_e_dilep",900,600);
	c_e_dilep->Divide(3,2);
	c_e_dilep->cd(1);
	g_e_dilep->Draw("ALP");
	c_e_dilep->cd(2);
	g_e_dilep_isFromL->Draw("ALP");
	c_e_dilep->cd(3);
	g_e_dilep_isFromC->Draw("ALP");
	c_e_dilep->cd(4);
	g_e_dilep_isFromB->Draw("ALP");
	c_e_dilep->cd(5);
	g_e_dilep_isFromElse->Draw("ALP");
	c_e_dilep->cd(6);
	g_e_dilep_isNotMatched->Draw("ALP");

	c_e_dilep->SaveAs(Dir+SaveDir+"lep_fakerate_e_dilep.png");

	TCanvas *c_m_dilep = new TCanvas("c_m_dilep","c_m_dilep",900,600);
	c_m_dilep->Divide(3,2);
	c_m_dilep->cd(1);
	g_m_dilep->Draw("ALP");
	c_m_dilep->cd(2);
	g_m_dilep_isFromL->Draw("ALP");
	c_m_dilep->cd(3);
	g_m_dilep_isFromC->Draw("ALP");
	c_m_dilep->cd(4);
	g_m_dilep_isFromB->Draw("ALP");
	c_m_dilep->cd(5);
	g_m_dilep_isFromElse->Draw("ALP");
	c_m_dilep->cd(6);
	g_m_dilep_isNotMatched->Draw("ALP");

	c_m_dilep->SaveAs(Dir+SaveDir+"lep_fakerate_m_dilep.png");

	cout << "" << endl;

	cout << "electron fake rate _dilep 			: " << 1.0*h_e_dilep_num->Integral() / h_e_dilep_denom->Integral() <<  " +/- " <<1.0*h_e_dilep_num->Integral() / h_e_dilep_denom->Integral() * sqrt(1./h_e_dilep_num->Integral() + 1./h_e_dilep_denom->Integral()) << " | "<< h_e_dilep_denom->Integral() << " ( "<< h_e_dilep_denom->Integral() / h_e_dilep_denom->Integral() * 100. << " % )"<<endl;
	cout << "electron fake rate _dilep_isFromL 			: " << 1.0*h_e_dilep_isFromL_num->Integral() / h_e_dilep_isFromL_denom->Integral() <<  " +/- " <<1.0*h_e_dilep_isFromL_num->Integral() / h_e_dilep_isFromL_denom->Integral() * sqrt(1./h_e_dilep_isFromL_num->Integral() + 1./h_e_dilep_isFromL_denom->Integral()) << " | "<< h_e_dilep_isFromL_denom->Integral() << " ( "<< h_e_dilep_isFromL_denom->Integral() / h_e_dilep_denom->Integral() * 100. << " % )"<<endl;
	cout << "electron fake rate _dilep_isFromC 			: " << 1.0*h_e_dilep_isFromC_num->Integral() / h_e_dilep_isFromC_denom->Integral() <<  " +/- " <<1.0*h_e_dilep_isFromC_num->Integral() / h_e_dilep_isFromC_denom->Integral() * sqrt(1./h_e_dilep_isFromC_num->Integral() + 1./h_e_dilep_isFromC_denom->Integral()) << " | "<< h_e_dilep_isFromC_denom->Integral() << " ( "<< h_e_dilep_isFromC_denom->Integral() / h_e_dilep_denom->Integral() * 100. << " % )"<<endl;
	cout << "electron fake rate _dilep_isFromB 			: " << 1.0*h_e_dilep_isFromB_num->Integral() / h_e_dilep_isFromB_denom->Integral() <<  " +/- " <<1.0*h_e_dilep_isFromB_num->Integral() / h_e_dilep_isFromB_denom->Integral() * sqrt(1./h_e_dilep_isFromB_num->Integral() + 1./h_e_dilep_isFromB_denom->Integral()) << " | "<< h_e_dilep_isFromB_denom->Integral() << " ( "<< h_e_dilep_isFromB_denom->Integral() / h_e_dilep_denom->Integral() * 100. << " % )"<<endl;
	cout << "electron fake rate _dilep_isFromElse 			: " << 1.0*h_e_dilep_isFromElse_num->Integral() / h_e_dilep_isFromElse_denom->Integral() <<  " +/- " <<1.0*h_e_dilep_isFromElse_num->Integral() / h_e_dilep_isFromElse_denom->Integral() * sqrt(1./h_e_dilep_isFromElse_num->Integral() + 1./h_e_dilep_isFromElse_denom->Integral()) << " | "<< h_e_dilep_isFromElse_denom->Integral() << " ( "<< h_e_dilep_isFromElse_denom->Integral() / h_e_dilep_denom->Integral() * 100. << " % )"<<endl;
	cout << "electron fake rate _dilep_isNotMatched 			: " << 1.0*h_e_dilep_isNotMatched_num->Integral() / h_e_dilep_isNotMatched_denom->Integral() <<  " +/- " <<1.0*h_e_dilep_isNotMatched_num->Integral() / h_e_dilep_isNotMatched_denom->Integral() * sqrt(1./h_e_dilep_isNotMatched_num->Integral() + 1./h_e_dilep_isNotMatched_denom->Integral()) << " | "<< h_e_dilep_isNotMatched_denom->Integral() << " ( "<< h_e_dilep_isNotMatched_denom->Integral() / h_e_dilep_denom->Integral() * 100. << " % )"<<endl;

	cout << "muon fake rate _dilep 			: " << 1.0*h_m_dilep_num->Integral() / h_m_dilep_denom->Integral() <<  " +/- " <<1.0*h_m_dilep_num->Integral() / h_m_dilep_denom->Integral() * sqrt(1./h_m_dilep_num->Integral() + 1./h_m_dilep_denom->Integral()) << " | "<< h_m_dilep_denom->Integral() << " ( "<< h_m_dilep_denom->Integral() / h_m_dilep_denom->Integral() * 100. << " % )"<<endl;
	cout << "muon fake rate _dilep_isFromL 			: " << 1.0*h_m_dilep_isFromL_num->Integral() / h_m_dilep_isFromL_denom->Integral() <<  " +/- " <<1.0*h_m_dilep_isFromL_num->Integral() / h_m_dilep_isFromL_denom->Integral() * sqrt(1./h_m_dilep_isFromL_num->Integral() + 1./h_m_dilep_isFromL_denom->Integral()) << " | "<< h_m_dilep_isFromL_denom->Integral() << " ( "<< h_m_dilep_isFromL_denom->Integral() / h_m_dilep_denom->Integral() * 100. << " % )"<<endl;
	cout << "muon fake rate _dilep_isFromC 			: " << 1.0*h_m_dilep_isFromC_num->Integral() / h_m_dilep_isFromC_denom->Integral() <<  " +/- " <<1.0*h_m_dilep_isFromC_num->Integral() / h_m_dilep_isFromC_denom->Integral() * sqrt(1./h_m_dilep_isFromC_num->Integral() + 1./h_m_dilep_isFromC_denom->Integral()) << " | "<< h_m_dilep_isFromC_denom->Integral() << " ( "<< h_m_dilep_isFromC_denom->Integral() / h_m_dilep_denom->Integral() * 100. << " % )"<<endl;
	cout << "muon fake rate _dilep_isFromB 			: " << 1.0*h_m_dilep_isFromB_num->Integral() / h_m_dilep_isFromB_denom->Integral() <<  " +/- " <<1.0*h_m_dilep_isFromB_num->Integral() / h_m_dilep_isFromB_denom->Integral() * sqrt(1./h_m_dilep_isFromB_num->Integral() + 1./h_m_dilep_isFromB_denom->Integral()) << " | "<< h_m_dilep_isFromB_denom->Integral() << " ( "<< h_m_dilep_isFromB_denom->Integral() / h_m_dilep_denom->Integral() * 100. << " % )"<<endl;
	cout << "muon fake rate _dilep_isFromElse 			: " << 1.0*h_m_dilep_isFromElse_num->Integral() / h_m_dilep_isFromElse_denom->Integral() <<  " +/- " <<1.0*h_m_dilep_isFromElse_num->Integral() / h_m_dilep_isFromElse_denom->Integral() * sqrt(1./h_m_dilep_isFromElse_num->Integral() + 1./h_m_dilep_isFromElse_denom->Integral()) << " | "<< h_m_dilep_isFromElse_denom->Integral() << " ( "<< h_m_dilep_isFromElse_denom->Integral() / h_m_dilep_denom->Integral() * 100. << " % )"<<endl;
	cout << "muon fake rate _dilep_isNotMatched 			: " << 1.0*h_m_dilep_isNotMatched_num->Integral() / h_m_dilep_isNotMatched_denom->Integral() <<  " +/- " <<1.0*h_m_dilep_isNotMatched_num->Integral() / h_m_dilep_isNotMatched_denom->Integral() * sqrt(1./h_m_dilep_isNotMatched_num->Integral() + 1./h_m_dilep_isNotMatched_denom->Integral()) << " | "<< h_m_dilep_isNotMatched_denom->Integral() << " ( "<< h_m_dilep_isNotMatched_denom->Integral() / h_m_dilep_denom->Integral() * 100. << " % )"<<endl;

	cout << ""<< endl;
	cout << "electron fake rate _dilep in pT bins:" << endl;
	cout << "	30-50:	"<< g_e_dilep->GetY()[0] << " + " <<g_e_dilep->GetEYhigh()[4] << " - "<<g_e_dilep->GetEYlow()[4]  <<endl;
	cout << "	50-100:	"<< g_e_dilep->GetY()[1] << " + " <<g_e_dilep->GetEYhigh()[4] << " - "<<g_e_dilep->GetEYlow()[4] <<endl;
	cout << "	100-100:	"<< g_e_dilep->GetY()[2] << " + " << g_e_dilep->GetEYhigh()[4]<< " - "<<g_e_dilep->GetEYlow()[4] <<endl;
	cout << "	150-200:	"<< g_e_dilep->GetY()[3] << " + " <<g_e_dilep->GetEYhigh()[4] << " - "<< g_e_dilep->GetEYlow()[4]<<endl;
	cout << "	200-500:	"<< g_e_dilep->GetY()[4] << " + " <<g_e_dilep->GetEYhigh()[4] << " - "<<g_e_dilep->GetEYlow()[4] <<endl;

	cout << ""<< endl;
	cout << "muon fake rate _dilep in pT bins:" << endl;
	cout << "	30-50:	"<< g_m_dilep->GetY()[0] << " + " <<g_m_dilep->GetEYhigh()[0] << " - "<<g_m_dilep->GetEYlow()[0]  <<endl;
	cout << "	50-100:	"<< g_m_dilep->GetY()[1] << " + " <<g_m_dilep->GetEYhigh()[0] << " - "<<g_m_dilep->GetEYlow()[0] <<endl;
	cout << "	100-150:	"<< g_m_dilep->GetY()[2] << " + " <<g_m_dilep->GetEYhigh()[0] << " - "<<g_m_dilep->GetEYlow()[0] <<endl;
	cout << "	150-200:	"<< g_m_dilep->GetY()[3] << " + " <<g_m_dilep->GetEYhigh()[0] << " - "<<g_m_dilep->GetEYlow()[0] <<endl;
	cout << "	200-500:	"<< g_m_dilep->GetY()[4] << " + " <<g_m_dilep->GetEYhigh()[0] << " - "<<g_m_dilep->GetEYlow()[0] <<endl;
}

	// trilep
	cout << "" << endl;
	cout << "===================================================================" << endl;
	cout << "Processing 3 leptons events ..." << endl;
	cout << "===================================================================" << endl;
	cout << "" << endl;

	TH1D *h_e_trilep_denom = new TH1D("h_e_trilep_denom","h_e_trilep_denom",nbins,bins);
	TH1D *h_e_trilep_isNotMatched_denom = new TH1D("h_e_trilep_isNotMatched_denom","h_e_trilep_isNotMatched_denom",nbins,bins);
	TH1D *h_e_trilep_isFromB_denom = new TH1D("h_e_trilep_isFromB_denom","h_e_trilep_isFromB_denom",nbins,bins);
	TH1D *h_e_trilep_isFromC_denom = new TH1D("h_e_trilep_isFromC_denom","h_e_trilep_isFromC_denom",nbins,bins);
	TH1D *h_e_trilep_isFromL_denom = new TH1D("h_e_trilep_isFromL_denom","h_e_trilep_isFromL_denom",nbins,bins);
	TH1D *h_e_trilep_isFromElse_denom = new TH1D("h_e_trilep_isFromElse_denom","h_e_trilep_isFromElse_denom",nbins,bins);

	TH1D *h_e_trilep_num = new TH1D("h_e_trilep_num","h_e_trilep_num",nbins,bins);
	TH1D *h_e_trilep_isNotMatched_num = new TH1D("h_e_trilep_isNotMatched_num","h_e_trilep_isNotMatched_num",nbins,bins);
	TH1D *h_e_trilep_isFromB_num = new TH1D("h_e_trilep_isFromB_num","h_e_trilep_isFromB_num",nbins,bins);
	TH1D *h_e_trilep_isFromC_num = new TH1D("h_e_trilep_isFromC_num","h_e_trilep_isFromC_num",nbins,bins);
	TH1D *h_e_trilep_isFromL_num = new TH1D("h_e_trilep_isFromL_num","h_e_trilep_isFromL_num",nbins,bins);
	TH1D *h_e_trilep_isFromElse_num = new TH1D("h_e_trilep_isFromElse_num","h_e_trilep_isFromElse_num",nbins,bins);

	TH1D *h_m_trilep_denom = new TH1D("h_m_trilep_denom","h_m_trilep_denom",nbins,bins);
	TH1D *h_m_trilep_isNotMatched_denom = new TH1D("h_m_trilep_isNotMatched_denom","h_m_trilep_isNotMatched_denom",nbins,bins);
	TH1D *h_m_trilep_isFromB_denom = new TH1D("h_m_trilep_isFromB_denom","h_m_trilep_isFromB_denom",nbins,bins);
	TH1D *h_m_trilep_isFromC_denom = new TH1D("h_m_trilep_isFromC_denom","h_m_trilep_isFromC_denom",nbins,bins);
	TH1D *h_m_trilep_isFromL_denom = new TH1D("h_m_trilep_isFromL_denom","h_m_trilep_isFromL_denom",nbins,bins);
	TH1D *h_m_trilep_isFromElse_denom = new TH1D("h_m_trilep_isFromElse_denom","h_m_trilep_isFromElse_denom",nbins,bins);

	TH1D *h_m_trilep_num = new TH1D("h_m_trilep_num","h_m_trilep_num",nbins,bins);
	TH1D *h_m_trilep_isNotMatched_num = new TH1D("h_m_trilep_isNotMatched_num","h_m_trilep_isNotMatched_num",nbins,bins);
	TH1D *h_m_trilep_isFromB_num = new TH1D("h_m_trilep_isFromB_num","h_m_trilep_isFromB_num",nbins,bins);
	TH1D *h_m_trilep_isFromC_num = new TH1D("h_m_trilep_isFromC_num","h_m_trilep_isFromC_num",nbins,bins);
	TH1D *h_m_trilep_isFromL_num = new TH1D("h_m_trilep_isFromL_num","h_m_trilep_isFromL_num",nbins,bins);
	TH1D *h_m_trilep_isFromElse_num = new TH1D("h_m_trilep_isFromElse_num","h_m_trilep_isFromElse_num",nbins,bins);
		
	t->Draw("LeptonPt>>h_e_trilep_denom","LeptonFlavor==0"+trilepCut+isNonPrompt);
	t->Draw("LeptonPt>>h_e_trilep_isNotMatched_denom","LeptonFlavor==0"+trilepCut+isNonPrompt+isNotMatched);
	t->Draw("LeptonPt>>h_e_trilep_isFromB_denom","LeptonFlavor==0"+trilepCut+isNonPrompt+isFromB);
	t->Draw("LeptonPt>>h_e_trilep_isFromC_denom","LeptonFlavor==0"+trilepCut+isNonPrompt+isFromC);
	t->Draw("LeptonPt>>h_e_trilep_isFromL_denom","LeptonFlavor==0"+trilepCut+isNonPrompt+isFromL);
	t->Draw("LeptonPt>>h_e_trilep_isFromElse_denom","LeptonFlavor==0"+trilepCut+isNonPrompt+isFromElse);

	t->Draw("LeptonPt>>h_e_trilep_num","LeptonFlavor==0"+trilepCut+isNonPrompt+isTight);
	t->Draw("LeptonPt>>h_e_trilep_isNotMatched_num","LeptonFlavor==0"+trilepCut+isNonPrompt+isNotMatched+isTight);
	t->Draw("LeptonPt>>h_e_trilep_isFromB_num","LeptonFlavor==0"+trilepCut+isNonPrompt+isFromB+isTight);
	t->Draw("LeptonPt>>h_e_trilep_isFromC_num","LeptonFlavor==0"+trilepCut+isNonPrompt+isFromC+isTight);
	t->Draw("LeptonPt>>h_e_trilep_isFromL_num","LeptonFlavor==0"+trilepCut+isNonPrompt+isFromL+isTight);
	t->Draw("LeptonPt>>h_e_trilep_isFromElse_num","LeptonFlavor==0"+trilepCut+isNonPrompt+isFromElse+isTight);

	t->Draw("LeptonPt>>h_m_trilep_denom","LeptonFlavor==1"+trilepCut+isNonPrompt);
	t->Draw("LeptonPt>>h_m_trilep_isNotMatched_denom","LeptonFlavor==1"+trilepCut+isNonPrompt+isNotMatched);
	t->Draw("LeptonPt>>h_m_trilep_isFromB_denom","LeptonFlavor==1"+trilepCut+isNonPrompt+isFromB);
	t->Draw("LeptonPt>>h_m_trilep_isFromC_denom","LeptonFlavor==1"+trilepCut+isNonPrompt+isFromC);
	t->Draw("LeptonPt>>h_m_trilep_isFromL_denom","LeptonFlavor==1"+trilepCut+isNonPrompt+isFromL);
	t->Draw("LeptonPt>>h_m_trilep_isFromElse_denom","LeptonFlavor==1"+trilepCut+isNonPrompt+isFromElse);

	t->Draw("LeptonPt>>h_m_trilep_num","LeptonFlavor==1"+trilepCut+isNonPrompt+isTight);
	t->Draw("LeptonPt>>h_m_trilep_isNotMatched_num","LeptonFlavor==1"+trilepCut+isNonPrompt+isNotMatched+isTight);
	t->Draw("LeptonPt>>h_m_trilep_isFromB_num","LeptonFlavor==1"+trilepCut+isNonPrompt+isFromB+isTight);
	t->Draw("LeptonPt>>h_m_trilep_isFromC_num","LeptonFlavor==1"+trilepCut+isNonPrompt+isFromC+isTight);
	t->Draw("LeptonPt>>h_m_trilep_isFromL_num","LeptonFlavor==1"+trilepCut+isNonPrompt+isFromL+isTight);
	t->Draw("LeptonPt>>h_m_trilep_isFromElse_num","LeptonFlavor==1"+trilepCut+isNonPrompt+isFromElse+isTight);
	
	TGraphAsymmErrors *g_e_trilep = new TGraphAsymmErrors( h_e_trilep_num, h_e_trilep_denom,"cl=0.683 b(1,1) mode");
	TGraphAsymmErrors *g_e_trilep_isNotMatched = new TGraphAsymmErrors( h_e_trilep_isNotMatched_num, h_e_trilep_isNotMatched_denom,"cl=0.683 b(1,1) mode");
	TGraphAsymmErrors *g_e_trilep_isFromB = new TGraphAsymmErrors( h_e_trilep_isFromB_num, h_e_trilep_isFromB_denom,"cl=0.683 b(1,1) mode");
	TGraphAsymmErrors *g_e_trilep_isFromC = new TGraphAsymmErrors( h_e_trilep_isFromC_num, h_e_trilep_isFromC_denom,"cl=0.683 b(1,1) mode");
	TGraphAsymmErrors *g_e_trilep_isFromL = new TGraphAsymmErrors( h_e_trilep_isFromL_num, h_e_trilep_isFromL_denom,"cl=0.683 b(1,1) mode");
	TGraphAsymmErrors *g_e_trilep_isFromElse = new TGraphAsymmErrors( h_e_trilep_isFromElse_num, h_e_trilep_isFromElse_denom,"cl=0.683 b(1,1) mode");

	TGraphAsymmErrors *g_m_trilep = new TGraphAsymmErrors( h_m_trilep_num, h_m_trilep_denom,"cl=0.683 b(1,1) mode");
	TGraphAsymmErrors *g_m_trilep_isNotMatched = new TGraphAsymmErrors( h_m_trilep_isNotMatched_num, h_m_trilep_isNotMatched_denom,"cl=0.683 b(1,1) mode");
	TGraphAsymmErrors *g_m_trilep_isFromB = new TGraphAsymmErrors( h_m_trilep_isFromB_num, h_m_trilep_isFromB_denom,"cl=0.683 b(1,1) mode");
	TGraphAsymmErrors *g_m_trilep_isFromC = new TGraphAsymmErrors( h_m_trilep_isFromC_num, h_m_trilep_isFromC_denom,"cl=0.683 b(1,1) mode");
	TGraphAsymmErrors *g_m_trilep_isFromL = new TGraphAsymmErrors( h_m_trilep_isFromL_num, h_m_trilep_isFromL_denom,"cl=0.683 b(1,1) mode");
	TGraphAsymmErrors *g_m_trilep_isFromElse = new TGraphAsymmErrors( h_m_trilep_isFromElse_num, h_m_trilep_isFromElse_denom,"cl=0.683 b(1,1) mode");

	TCanvas *c_e_trilep = new TCanvas("c_e_trilep","c_e_trilep",900,600);
	c_e_trilep->Divide(3,2);
	c_e_trilep->cd(1);
	g_e_trilep->Draw("ALP");
	c_e_trilep->cd(2);
	g_e_trilep_isFromL->Draw("ALP");
	c_e_trilep->cd(3);
	g_e_trilep_isFromC->Draw("ALP");
	c_e_trilep->cd(4);
	g_e_trilep_isFromB->Draw("ALP");
	c_e_trilep->cd(5);
	g_e_trilep_isFromElse->Draw("ALP");
	c_e_trilep->cd(6);
	g_e_trilep_isNotMatched->Draw("ALP");

	c_e_trilep->SaveAs(Dir+SaveDir+"lep_fakerate_e_trilep.png");

	TCanvas *c_m_trilep = new TCanvas("c_m_trilep","c_m_trilep",900,600);
	c_m_trilep->Divide(3,2);
	c_m_trilep->cd(1);
	g_m_trilep->Draw("ALP");
	c_m_trilep->cd(2);
	g_m_trilep_isFromL->Draw("ALP");
	c_m_trilep->cd(3);
	g_m_trilep_isFromC->Draw("ALP");
	c_m_trilep->cd(4);
	g_m_trilep_isFromB->Draw("ALP");
	c_m_trilep->cd(5);
	g_m_trilep_isFromElse->Draw("ALP");
	c_m_trilep->cd(6);
	g_m_trilep_isNotMatched->Draw("ALP");

	c_m_trilep->SaveAs(Dir+SaveDir+"lep_fakerate_m_trilep.png");

	cout << "" << endl;

	cout << "electron fake rate _trilep 			: " << 1.0*h_e_trilep_num->Integral() / h_e_trilep_denom->Integral() <<  " +/- " <<1.0*h_e_trilep_num->Integral() / h_e_trilep_denom->Integral() * sqrt(1./h_e_trilep_num->Integral() + 1./h_e_trilep_denom->Integral()) << " | "<< h_e_trilep_denom->Integral() << " ( "<< h_e_trilep_denom->Integral() / h_e_trilep_denom->Integral() * 100. << " % )"<<endl;
	cout << "electron fake rate _trilep_isFromL 			: " << 1.0*h_e_trilep_isFromL_num->Integral() / h_e_trilep_isFromL_denom->Integral() <<  " +/- " <<1.0*h_e_trilep_isFromL_num->Integral() / h_e_trilep_isFromL_denom->Integral() * sqrt(1./h_e_trilep_isFromL_num->Integral() + 1./h_e_trilep_isFromL_denom->Integral()) << " | "<< h_e_trilep_isFromL_denom->Integral() << " ( "<< h_e_trilep_isFromL_denom->Integral() / h_e_trilep_denom->Integral() * 100. << " % )"<<endl;
	cout << "electron fake rate _trilep_isFromC 			: " << 1.0*h_e_trilep_isFromC_num->Integral() / h_e_trilep_isFromC_denom->Integral() <<  " +/- " <<1.0*h_e_trilep_isFromC_num->Integral() / h_e_trilep_isFromC_denom->Integral() * sqrt(1./h_e_trilep_isFromC_num->Integral() + 1./h_e_trilep_isFromC_denom->Integral()) << " | "<< h_e_trilep_isFromC_denom->Integral() << " ( "<< h_e_trilep_isFromC_denom->Integral() / h_e_trilep_denom->Integral() * 100. << " % )"<<endl;
	cout << "electron fake rate _trilep_isFromB 			: " << 1.0*h_e_trilep_isFromB_num->Integral() / h_e_trilep_isFromB_denom->Integral() <<  " +/- " <<1.0*h_e_trilep_isFromB_num->Integral() / h_e_trilep_isFromB_denom->Integral() * sqrt(1./h_e_trilep_isFromB_num->Integral() + 1./h_e_trilep_isFromB_denom->Integral()) << " | "<< h_e_trilep_isFromB_denom->Integral() << " ( "<< h_e_trilep_isFromB_denom->Integral() / h_e_trilep_denom->Integral() * 100. << " % )"<<endl;
	cout << "electron fake rate _trilep_isFromElse 			: " << 1.0*h_e_trilep_isFromElse_num->Integral() / h_e_trilep_isFromElse_denom->Integral() <<  " +/- " <<1.0*h_e_trilep_isFromElse_num->Integral() / h_e_trilep_isFromElse_denom->Integral() * sqrt(1./h_e_trilep_isFromElse_num->Integral() + 1./h_e_trilep_isFromElse_denom->Integral()) << " | "<< h_e_trilep_isFromElse_denom->Integral() << " ( "<< h_e_trilep_isFromElse_denom->Integral() / h_e_trilep_denom->Integral() * 100. << " % )"<<endl;
	cout << "electron fake rate _trilep_isNotMatched 		: " << 1.0*h_e_trilep_isNotMatched_num->Integral() / h_e_trilep_isNotMatched_denom->Integral() <<  " +/- " <<1.0*h_e_trilep_isNotMatched_num->Integral() / h_e_trilep_isNotMatched_denom->Integral() * sqrt(1./h_e_trilep_isNotMatched_num->Integral() + 1./h_e_trilep_isNotMatched_denom->Integral()) << " | "<< h_e_trilep_isNotMatched_denom->Integral() << " ( "<< h_e_trilep_isNotMatched_denom->Integral() / h_e_trilep_denom->Integral() * 100. << " % )"<<endl;

	cout << "muon fake rate _trilep 			: " << 1.0*h_m_trilep_num->Integral() / h_m_trilep_denom->Integral() <<  " +/- " <<1.0*h_m_trilep_num->Integral() / h_m_trilep_denom->Integral() * sqrt(1./h_m_trilep_num->Integral() + 1./h_m_trilep_denom->Integral()) << " | "<< h_m_trilep_denom->Integral() << " ( "<< h_m_trilep_denom->Integral() / h_m_trilep_denom->Integral() * 100. << " % )"<<endl;
	cout << "muon fake rate _trilep_isFromL 			: " << 1.0*h_m_trilep_isFromL_num->Integral() / h_m_trilep_isFromL_denom->Integral() <<  " +/- " <<1.0*h_m_trilep_isFromL_num->Integral() / h_m_trilep_isFromL_denom->Integral() * sqrt(1./h_m_trilep_isFromL_num->Integral() + 1./h_m_trilep_isFromL_denom->Integral()) << " | "<< h_m_trilep_isFromL_denom->Integral() << " ( "<< h_m_trilep_isFromL_denom->Integral() / h_m_trilep_denom->Integral() * 100. << " % )"<<endl;
	cout << "muon fake rate _trilep_isFromC 			: " << 1.0*h_m_trilep_isFromC_num->Integral() / h_m_trilep_isFromC_denom->Integral() <<  " +/- " <<1.0*h_m_trilep_isFromC_num->Integral() / h_m_trilep_isFromC_denom->Integral() * sqrt(1./h_m_trilep_isFromC_num->Integral() + 1./h_m_trilep_isFromC_denom->Integral()) << " | "<< h_m_trilep_isFromC_denom->Integral() << " ( "<< h_m_trilep_isFromC_denom->Integral() / h_m_trilep_denom->Integral() * 100. << " % )"<<endl;
	cout << "muon fake rate _trilep_isFromB 			: " << 1.0*h_m_trilep_isFromB_num->Integral() / h_m_trilep_isFromB_denom->Integral() <<  " +/- " <<1.0*h_m_trilep_isFromB_num->Integral() / h_m_trilep_isFromB_denom->Integral() * sqrt(1./h_m_trilep_isFromB_num->Integral() + 1./h_m_trilep_isFromB_denom->Integral()) << " | "<< h_m_trilep_isFromB_denom->Integral() << " ( "<< h_m_trilep_isFromB_denom->Integral() / h_m_trilep_denom->Integral() * 100. << " % )"<<endl;
	cout << "muon fake rate _trilep_isFromElse 			: " << 1.0*h_m_trilep_isFromElse_num->Integral() / h_m_trilep_isFromElse_denom->Integral() <<  " +/- " <<1.0*h_m_trilep_isFromElse_num->Integral() / h_m_trilep_isFromElse_denom->Integral() * sqrt(1./h_m_trilep_isFromElse_num->Integral() + 1./h_m_trilep_isFromElse_denom->Integral()) << " | "<< h_m_trilep_isFromElse_denom->Integral() << " ( "<< h_m_trilep_isFromElse_denom->Integral() / h_m_trilep_denom->Integral() * 100. << " % )"<<endl;
	cout << "muon fake rate _trilep_isNotMatched 		: " << 1.0*h_m_trilep_isNotMatched_num->Integral() / h_m_trilep_isNotMatched_denom->Integral() <<  " +/- " <<1.0*h_m_trilep_isNotMatched_num->Integral() / h_m_trilep_isNotMatched_denom->Integral() * sqrt(1./h_m_trilep_isNotMatched_num->Integral() + 1./h_m_trilep_isNotMatched_denom->Integral()) << " | "<< h_m_trilep_isNotMatched_denom->Integral() << " ( "<< h_m_trilep_isNotMatched_denom->Integral() / h_m_trilep_denom->Integral() * 100. << " % )"<<endl;

	cout << ""<< endl;
	cout << "electron fake rate _trilep in pT bins:" << endl;
	cout << "	30-50:	"<< g_e_trilep->GetY()[0] << " + " << g_e_trilep->GetEYhigh()[0] << " - "<<g_e_trilep->GetEYlow()[0]  <<endl;
	cout << "	50-100:	"<< g_e_trilep->GetY()[1] << " + " << g_e_trilep->GetEYhigh()[1]<< " - "<<g_e_trilep->GetEYlow()[1]<<endl;
	cout << "	100-150:	"<< g_e_trilep->GetY()[2] << " + " << g_e_trilep->GetEYhigh()[2]<< " - "<<g_e_trilep->GetEYlow()[2] <<endl;
	cout << "	150-200:	"<< g_e_trilep->GetY()[3] << " + " << g_e_trilep->GetEYhigh()[3]<< " - "<<g_e_trilep->GetEYlow()[3]<<endl;
	cout << "	200-500:	"<< g_e_trilep->GetY()[4] << " + " <<g_e_trilep->GetEYhigh()[4] << " - "<< g_e_trilep->GetEYlow()[4]<<endl;

	cout << ""<< endl;
	cout << "muon fake rate _trilep in pT bins:" << endl;
	cout << "	30-50:	"<< g_m_trilep->GetY()[0] << " + " <<g_m_trilep->GetEYhigh()[0] << " - "<<g_m_trilep->GetEYlow()[0]  <<endl;
	cout << "	50-100:	"<< g_m_trilep->GetY()[1] << " + " <<g_m_trilep->GetEYhigh()[1] << " - "<<g_m_trilep->GetEYlow()[1] <<endl;
	cout << "	100-150:	"<< g_m_trilep->GetY()[2] << " + " <<g_m_trilep->GetEYhigh()[2] << " - "<<g_m_trilep->GetEYlow()[2] <<endl;
	cout << "	150-200:	"<< g_m_trilep->GetY()[3] << " + " <<g_m_trilep->GetEYhigh()[3] << " - "<<g_m_trilep->GetEYlow()[3] <<endl;
	cout << "	200-500:	"<< g_m_trilep->GetY()[4] << " + " <<g_m_trilep->GetEYhigh()[4] << " - "<<g_m_trilep->GetEYlow()[4] <<endl;

	// use available histo
	cout << "" << endl;
	cout << "===================================================================" << endl;
	cout << "Processing all leptons events using histo (cross check) ..." << endl;
	cout << "===================================================================" << endl;

	TH1D *h_e_denom;
	TH1D *h_e_denom_isNotMatched;
	TH1D *h_e_denom_isFromB;
	TH1D *h_e_denom_isFromC;
	TH1D *h_e_denom_isFromL;
	TH1D *h_e_denom_isFromElse;

	TH1D *h_e_num;
	TH1D *h_e_num_isNotMatched;
	TH1D *h_e_num_isFromB;
	TH1D *h_e_num_isFromC;
	TH1D *h_e_num_isFromL;
	TH1D *h_e_num_isFromElse;

	TH1D *h_m_denom;
	TH1D *h_m_denom_isNotMatched;
	TH1D *h_m_denom_isFromB;
	TH1D *h_m_denom_isFromC;
	TH1D *h_m_denom_isFromL;
	TH1D *h_m_denom_isFromElse;

	TH1D *h_m_num;
	TH1D *h_m_num_isNotMatched;
	TH1D *h_m_num_isFromB;
	TH1D *h_m_num_isFromC;
	TH1D *h_m_num_isFromL;
	TH1D *h_m_num_isFromElse;

	h_e_denom = (TH1D*) f->Get("h_el_f_pt");
	h_e_denom_isNotMatched = (TH1D*) f->Get("h_el_f_pt_isNotMatched");
	h_e_denom_isFromB = (TH1D*) f->Get("h_el_f_pt_isFromB");
	h_e_denom_isFromC = (TH1D*) f->Get("h_el_f_pt_isFromC");
	h_e_denom_isFromL = (TH1D*) f->Get("h_el_f_pt_isFromL");
	h_e_denom_isFromElse = (TH1D*) f->Get("h_el_f_pt_isFromElse");

	h_e_num = (TH1D*) f->Get("h_el_f_t_pt");
	h_e_num_isNotMatched = (TH1D*) f->Get("h_el_f_t_pt_isNotMatched");
	h_e_num_isFromB = (TH1D*) f->Get("h_el_f_t_pt_isFromB");
	h_e_num_isFromC = (TH1D*) f->Get("h_el_f_t_pt_isFromC");
	h_e_num_isFromL = (TH1D*) f->Get("h_el_f_t_pt_isFromL");
	h_e_num_isFromElse = (TH1D*) f->Get("h_el_f_t_pt_isFromElse");

	h_m_denom = (TH1D*) f->Get("h_mu_f_pt");
	h_m_denom_isNotMatched = (TH1D*) f->Get("h_mu_f_pt_isNotMatched");
	h_m_denom_isFromB = (TH1D*) f->Get("h_mu_f_pt_isFromB");
	h_m_denom_isFromC = (TH1D*) f->Get("h_mu_f_pt_isFromC");
	h_m_denom_isFromL = (TH1D*) f->Get("h_mu_f_pt_isFromL");
	h_m_denom_isFromElse = (TH1D*) f->Get("h_mu_f_pt_isFromElse");

	h_m_num = (TH1D*) f->Get("h_mu_f_t_pt");
	h_m_num_isNotMatched = (TH1D*) f->Get("h_mu_f_t_pt_isNotMatched");
	h_m_num_isFromB = (TH1D*) f->Get("h_mu_f_t_pt_isFromB");
	h_m_num_isFromC = (TH1D*) f->Get("h_mu_f_t_pt_isFromC");
	h_m_num_isFromL = (TH1D*) f->Get("h_mu_f_t_pt_isFromL");
	h_m_num_isFromElse = (TH1D*) f->Get("h_mu_f_t_pt_isFromElse");

	TGraphAsymmErrors *g_e = new TGraphAsymmErrors( h_e_num, h_e_denom,"cl=0.683 b(1,1) mode");
	TGraphAsymmErrors *g_e_isNotMatched = new TGraphAsymmErrors( h_e_num_isNotMatched, h_e_denom_isNotMatched,"cl=0.683 b(1,1) mode");
	TGraphAsymmErrors *g_e_isFromL = new TGraphAsymmErrors( h_e_num_isFromL, h_e_denom_isFromL,"cl=0.683 b(1,1) mode");
	TGraphAsymmErrors *g_e_isFromC = new TGraphAsymmErrors( h_e_num_isFromC, h_e_denom_isFromC,"cl=0.683 b(1,1) mode");
	TGraphAsymmErrors *g_e_isFromB = new TGraphAsymmErrors( h_e_num_isFromB, h_e_denom_isFromB,"cl=0.683 b(1,1) mode");
	TGraphAsymmErrors *g_e_isFromElse = new TGraphAsymmErrors( h_e_num_isFromElse, h_e_denom_isFromElse,"cl=0.683 b(1,1) mode");

	TGraphAsymmErrors *g_m = new TGraphAsymmErrors( h_m_num, h_m_denom,"cl=0.683 b(1,1) mode");
	TGraphAsymmErrors *g_m_isNotMatched = new TGraphAsymmErrors( h_m_num_isNotMatched, h_m_denom_isNotMatched,"cl=0.683 b(1,1) mode");
	TGraphAsymmErrors *g_m_isFromL = new TGraphAsymmErrors( h_m_num_isFromL, h_m_denom_isFromL,"cl=0.683 b(1,1) mode");
	TGraphAsymmErrors *g_m_isFromC = new TGraphAsymmErrors( h_m_num_isFromC, h_m_denom_isFromC,"cl=0.683 b(1,1) mode");
	TGraphAsymmErrors *g_m_isFromB = new TGraphAsymmErrors( h_m_num_isFromB, h_m_denom_isFromB,"cl=0.683 b(1,1) mode");
	TGraphAsymmErrors *g_m_isFromElse = new TGraphAsymmErrors( h_m_num_isFromElse, h_m_denom_isFromElse,"cl=0.683 b(1,1) mode");

	TCanvas *c_e = new TCanvas("c_e","c_e",900,600);
	c_e->Divide(3,2);
	c_e->cd(1);
	g_e->Draw("ALP");
	c_e->cd(2);
	g_e_isFromL->Draw("ALP");
	c_e->cd(3);
	g_e_isFromC->Draw("ALP");
	c_e->cd(4);
	g_e_isFromB->Draw("ALP");
	c_e->cd(5);
	g_e_isFromElse->Draw("ALP");
	c_e->cd(6);
	g_e_isNotMatched->Draw("ALP");

	c_e->SaveAs(Dir+SaveDir+"lep_fakerate_e.png");

	TCanvas *c_m = new TCanvas("c_m","c_m",900,600);
	c_m->Divide(3,2);
	c_m->cd(1);
	g_m->Draw("ALP");
	c_m->cd(2);
	g_m_isFromL->Draw("ALP");
	c_m->cd(3);
	g_m_isFromC->Draw("ALP");
	c_m->cd(4);
	g_m_isFromB->Draw("ALP");
	c_m->cd(5);
	g_m_isFromElse->Draw("ALP");
	c_m->cd(6);
	g_m_isNotMatched->Draw("ALP");

	c_m->SaveAs(Dir+SaveDir+"lep_fakerate_m.png");

	cout << "" << endl;

	cout << "electron fake rate 			: " << 1.0*h_e_num->Integral() / h_e_denom->Integral() <<  " +/- " <<1.0*h_e_num->Integral() / h_e_denom->Integral() * sqrt(1./h_e_num->Integral() + 1./h_e_denom->Integral()) << " | "<< h_e_denom->Integral() << endl;
	cout << "electron fake rate isFromL 		: " << 1.0*h_e_num_isFromL->Integral() / h_e_denom_isFromL->Integral() <<  " +/- " <<1.0*h_e_num_isFromL->Integral() / h_e_denom_isFromL->Integral() * sqrt(1./h_e_num_isFromL->Integral() + 1./h_e_denom_isFromL->Integral()) << " | "<< h_e_denom_isFromL->Integral() <<endl;
	cout << "electron fake rate isFromC 		: " << 1.0*h_e_num_isFromC->Integral() / h_e_denom_isFromC->Integral() <<  " +/- " <<1.0*h_e_num_isFromC->Integral() / h_e_denom_isFromC->Integral() * sqrt(1./h_e_num_isFromC->Integral() + 1./h_e_denom_isFromC->Integral()) << " | "<< h_e_denom_isFromC->Integral() <<endl;
	cout << "electron fake rate isFromB 		: " << 1.0*h_e_num_isFromB->Integral() / h_e_denom_isFromB->Integral() <<  " +/- " <<1.0*h_e_num_isFromB->Integral() / h_e_denom_isFromB->Integral() * sqrt(1./h_e_num_isFromB->Integral() + 1./h_e_denom_isFromB->Integral()) << " | "<< h_e_denom_isFromB->Integral()<<endl;
	cout << "electron fake rate isNotMatched 	: " << 1.0*h_e_num_isNotMatched->Integral() / h_e_denom_isNotMatched->Integral() <<  " +/- " <<1.0*h_e_num_isNotMatched->Integral() / h_e_denom_isNotMatched->Integral() * sqrt(1./h_e_num_isNotMatched->Integral() + 1./h_e_denom_isNotMatched->Integral()) << " | "<<h_e_denom_isNotMatched->Integral() <<endl;
	cout << "electron fake rate else 		: " << 1.0*h_e_num_isFromElse->Integral() / h_e_denom_isFromElse->Integral() <<  " +/- " <<1.0*h_e_num_isFromElse->Integral() / h_e_denom_isFromElse->Integral() * sqrt(1./h_e_num_isFromElse->Integral() + 1./h_e_denom_isFromElse->Integral()) << " | "<< h_e_denom_isFromElse->Integral()<<endl;

	cout << "" << endl;

	cout << "muon fake rate 			: " << 1.0*h_m_num->Integral() / h_m_denom->Integral() <<  " +/- " <<1.0*h_m_num->Integral() / h_m_denom->Integral() * sqrt(1./h_m_num->Integral() + 1./h_m_denom->Integral()) << " | "<< h_m_denom->Integral()<<endl;
	cout << "muon fake rate isFromL 		: " << 1.0*h_m_num_isFromL->Integral() / h_m_denom_isFromL->Integral() <<  " +/- " <<1.0*h_m_num_isFromL->Integral() / h_m_denom_isFromL->Integral() * sqrt(1./h_m_num_isFromL->Integral() + 1./h_m_denom_isFromL->Integral()) << " | "<< h_m_denom_isFromL->Integral()<<endl;
	cout << "muon fake rate isFromC 		: " << 1.0*h_m_num_isFromC->Integral() / h_m_denom_isFromC->Integral() <<  " +/- " <<1.0*h_m_num_isFromC->Integral() / h_m_denom_isFromC->Integral() * sqrt(1./h_m_num_isFromC->Integral() + 1./h_m_denom_isFromC->Integral()) << " | "<< h_m_denom_isFromC->Integral()<<endl;
	cout << "muon fake rate isFromB 		: " << 1.0*h_m_num_isFromB->Integral() / h_m_denom_isFromB->Integral() <<  " +/- " <<1.0*h_m_num_isFromB->Integral() / h_m_denom_isFromB->Integral() * sqrt(1./h_m_num_isFromB->Integral() + 1./h_m_denom_isFromB->Integral()) << " | "<< h_m_denom_isFromB->Integral()<<endl;
	cout << "muon fake rate isNotMatched 	: " << 1.0*h_m_num_isNotMatched->Integral() / h_m_denom_isNotMatched->Integral() <<  " +/- " <<1.0*h_m_num_isNotMatched->Integral() / h_m_denom_isNotMatched->Integral() * sqrt(1./h_m_num_isNotMatched->Integral() + 1./h_m_denom_isNotMatched->Integral()) << " | "<< h_m_denom_isNotMatched->Integral()<<endl;
	cout << "muon fake rate else 		: " << 1.0*h_m_num_isFromElse->Integral() / h_m_denom_isFromElse->Integral() <<  " +/- " <<1.0*h_m_num_isFromElse->Integral() / h_m_denom_isFromElse->Integral() * sqrt(1./h_m_num_isFromElse->Integral() + 1./h_m_denom_isFromElse->Integral()) << " | "<< h_m_denom_isFromElse->Integral()<<endl;

	cout << "" << endl;

	gApplication->Terminate();
}
