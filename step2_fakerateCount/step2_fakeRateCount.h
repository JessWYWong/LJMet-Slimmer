//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Mon May  1 21:04:36 2017 by ROOT version 6.06/01
// from TTree ljmet/ljmet
// found on file: root://cmseos.fnal.gov//store/user/lpcljm/LJMet80x_1orMorelep_Moriond17_ttbarFakeRate_saveLooseMC_2017_4_17_rizki_step1hadds/nominal/TTTo2L2Nu_TuneCUETP8M2_ttHtranche3_13TeV-powheg-pythia8_1_hadd.root
//////////////////////////////////////////////////////////

#ifndef step2_fakeRateCount_h
#define step2_fakeRateCount_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
#include "vector"
#include "vector"
#include "vector"

class step2_fakeRateCount {
public :
   TTree          *inputTree;   //!pointer to the analyzed TTree or TChain
   TFile          *inputFile, *outputFile;
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.
   const Int_t kMaxisE = 1;
   const Int_t kMaxisM = 1;
   const Int_t kMaxisEE = 1;
   const Int_t kMaxisEM = 1;
   const Int_t kMaxisME = 1;
   const Int_t kMaxisMM = 1;
   const Int_t kMaxisEEE = 1;
   const Int_t kMaxisEEM = 1;
   const Int_t kMaxisEME = 1;
   const Int_t kMaxisMEE = 1;
   const Int_t kMaxisEMM = 1;
   const Int_t kMaxisMEM = 1;
   const Int_t kMaxisMME = 1;
   const Int_t kMaxisMMM = 1;

   // Declaration of leaf types
   Int_t           event_CommonCalc;
   Int_t           run_CommonCalc;
   Int_t           lumi_CommonCalc;
   Int_t           nPV_MultiLepCalc;
   Int_t           nTrueInteractions_MultiLepCalc;
   Int_t           isElectron;
   Int_t           isMuon;
//    Int_t           MCPastTrigger;
//    Int_t           MCPastTriggerAlt;
//    Int_t           DataPastTrigger;
//    Int_t           DataPastTriggerAlt;
   Bool_t          isTHBW_TpTpCalc;
   Bool_t          isTHTH_TpTpCalc;
   Bool_t          isBWBW_TpTpCalc;
   Bool_t          isTZBW_TpTpCalc;
   Bool_t          isTZTH_TpTpCalc;
   Bool_t          isTZTZ_TpTpCalc;
   Bool_t          isBHTW_TpTpCalc;
   Bool_t          isBHBH_TpTpCalc;
   Bool_t          isTWTW_TpTpCalc;
   Bool_t          isBZTW_TpTpCalc;
   Bool_t          isBZBH_TpTpCalc;
   Bool_t          isBZBZ_TpTpCalc;
   Int_t           NLeptonDecays_TpTpCalc;
   Double_t        MCWeight_MultiLepCalc;
   vector<double>  *renormWeights;
   vector<float>   *pdfWeights;
   Float_t         JetSF_pTNbwflat;
   Float_t         JetSFup_pTNbwflat;
   Float_t         JetSFdn_pTNbwflat;
   Float_t         JetSFupwide_pTNbwflat;
   Float_t         JetSFdnwide_pTNbwflat;
   Float_t         pileupWeight;
   Float_t         pileupWeightUp;
   Float_t         pileupWeightDown;
   Float_t         TrigEffAltWeight;
   Float_t         TrigEffWeight;
   Float_t         TrigEffWeightUncert;
   Float_t         isoSF;
   Float_t         lepIdSF;
   Float_t         EGammaGsfSF;
   Float_t         MuTrkSF;
   Bool_t          isPassSinglelepton;
   Bool_t          isPassDilepton;
   Bool_t          isPassTrilepton;
   Bool_t          isPassSingleLooselepton;
   Bool_t          isPassDiLooselepton;
   Bool_t          isPassTriLooselepton;
   Int_t           isE;
   Int_t           isM;
   Int_t           isE_;
   Int_t           isM_;
   Int_t           isT;
   Int_t           isL;
   Int_t           isP;
   Int_t           isF;
   Int_t           isEE;
   Int_t           isEM;
   Int_t           isMM;
   Int_t           isEE_;
   Int_t           isEM_;
   Int_t           isME_;
   Int_t           isMM_;
   Int_t           isTT;
   Int_t           isTL;
   Int_t           isLT;
   Int_t           isLL;
   Int_t           isPP;
   Int_t           isPF;
   Int_t           isFP;
   Int_t           isFF;
   Int_t           isEEE;
   Int_t           isEEM;
   Int_t           isEMM;
   Int_t           isMMM;
   Int_t           isEEE_;
   Int_t           isEEM_;
   Int_t           isEME_;
   Int_t           isMEE_;
   Int_t           isEMM_;
   Int_t           isMEM_;
   Int_t           isMME_;
   Int_t           isMMM_;
   Int_t           isTTT;
   Int_t           isTTL;
   Int_t           isTLT;
   Int_t           isLTT;
   Int_t           isTLL;
   Int_t           isLTL;
   Int_t           isLLT;
   Int_t           isLLL;
   Int_t           isPPP;
   Int_t           isPPF;
   Int_t           isPFP;
   Int_t           isFPP;
   Int_t           isPFF;
   Int_t           isFPF;
   Int_t           isFFP;
   Int_t           isFFF;
   Int_t           MCPastTrigger;
   Int_t           MCPastTriggerAlt;
   Int_t           DataPastTrigger;
   Int_t           DataPastTriggerAlt;
   Int_t           MCPastTrigger_dilep;
   Int_t           DataPastTrigger_dilep;
   Int_t           MCPastTrigger_dilepDZ4runH;
   Int_t           DataPastTrigger_dilepDZ4runH;
   Int_t           MCPastTrigger_dilepHT;
   Int_t           DataPastTrigger_dilepHT;
   Int_t           MCPastTrigger_trilep;
   Int_t           DataPastTrigger_trilep;
   Int_t           MCPastTrigger_singlelep;
   Int_t           DataPastTrigger_singlelep;
   Double_t        ttbarMass_TTbarMassCalc;
   Double_t        corr_met_MultiLepCalc;
   Double_t        corr_met_phi_MultiLepCalc;
   Float_t         leptonPt_MultiLepCalc;
   Float_t         leptonEta_MultiLepCalc;
   Float_t         leptonPhi_MultiLepCalc;
   Float_t         leptonEnergy_MultiLepCalc;
   Float_t         leptonMiniIso_MultiLepCalc;
   Float_t         leptonRelIso_MultiLepCalc;
   Float_t         leptonDxy_MultiLepCalc;
   Float_t         leptonDz_MultiLepCalc;
   Int_t           leptonCharge_MultiLepCalc;
   Int_t           elTrigPresel_MultiLepCalc;
   vector<float>   *AllLeptonElPt_PtOrdered;
   vector<float>   *AllLeptonElEta_PtOrdered;
   vector<float>   *AllLeptonElPhi_PtOrdered;
   vector<float>   *AllLeptonElEnergy_PtOrdered;
   vector<float>   *AllLeptonElMiniIso_PtOrdered;
   vector<int>     *AllLeptonElFlavor_PtOrdered;
   vector<int>     *AllLeptonElIsTight_PtOrdered;
   Int_t           AllLeptonElCount_PtOrdered;
   vector<int>     *AllLeptonElIsPrompt_PtOrdered;
   vector<int>     *AllLeptonElIsMatched_PtOrdered;
   vector<int>     *AllLeptonElIsFromB_PtOrdered;
   vector<int>     *AllLeptonElIsFromC_PtOrdered;
   vector<int>     *AllLeptonElIsFromHL_PtOrdered;
   vector<int>     *AllLeptonElIsFromPh_PtOrdered;
   vector<int>     *AllLeptonElIsFromL_PtOrdered;
   vector<float>   *AllLeptonElPt_PtOrderedOnly;
   vector<float>   *AllLeptonElEta_PtOrderedOnly;
   vector<float>   *AllLeptonElPhi_PtOrderedOnly;
   vector<float>   *AllLeptonElEnergy_PtOrderedOnly;
   vector<float>   *AllLeptonElMiniIso_PtOrderedOnly;
   vector<int>     *AllLeptonElFlavor_PtOrderedOnly;
   vector<int>     *AllLeptonElIsTight_PtOrderedOnly;
   vector<float>   *AllLeptonElPt_PtOrderedOnly_top3;
   vector<float>   *AllLeptonElEta_PtOrderedOnly_top3;
   vector<float>   *AllLeptonElPhi_PtOrderedOnly_top3;
   vector<float>   *AllLeptonElEnergy_PtOrderedOnly_top3;
   vector<float>   *AllLeptonElMiniIso_PtOrderedOnly_top3;
   vector<int>     *AllLeptonElFlavor_PtOrderedOnly_top3;
   vector<int>     *AllLeptonElIsTight_PtOrderedOnly_top3;
   vector<float>   *AllLeptonMuPt_PtOrdered;
   vector<float>   *AllLeptonMuEta_PtOrdered;
   vector<float>   *AllLeptonMuPhi_PtOrdered;
   vector<float>   *AllLeptonMuEnergy_PtOrdered;
   vector<float>   *AllLeptonMuMiniIso_PtOrdered;
   vector<int>     *AllLeptonMuFlavor_PtOrdered;
   vector<int>     *AllLeptonMuIsTight_PtOrdered;
   Int_t           AllLeptonMuCount_PtOrdered;
   vector<int>     *AllLeptonMuIsPrompt_PtOrdered;
   vector<int>     *AllLeptonMuIsMatched_PtOrdered;
   vector<int>     *AllLeptonMuIsFromB_PtOrdered;
   vector<int>     *AllLeptonMuIsFromC_PtOrdered;
   vector<int>     *AllLeptonMuIsFromHL_PtOrdered;
   vector<int>     *AllLeptonMuIsFromPh_PtOrdered;
   vector<int>     *AllLeptonMuIsFromL_PtOrdered;
   vector<float>   *AllLeptonMuPt_PtOrderedOnly;
   vector<float>   *AllLeptonMuEta_PtOrderedOnly;
   vector<float>   *AllLeptonMuPhi_PtOrderedOnly;
   vector<float>   *AllLeptonMuEnergy_PtOrderedOnly;
   vector<float>   *AllLeptonMuMiniIso_PtOrderedOnly;
   vector<int>     *AllLeptonMuFlavor_PtOrderedOnly;
   vector<int>     *AllLeptonMuIsTight_PtOrderedOnly;
   vector<float>   *AllLeptonMuPt_PtOrderedOnly_top3;
   vector<float>   *AllLeptonMuEta_PtOrderedOnly_top3;
   vector<float>   *AllLeptonMuPhi_PtOrderedOnly_top3;
   vector<float>   *AllLeptonMuEnergy_PtOrderedOnly_top3;
   vector<float>   *AllLeptonMuMiniIso_PtOrderedOnly_top3;
   vector<int>     *AllLeptonMuFlavor_PtOrderedOnly_top3;
   vector<int>     *AllLeptonMuIsTight_PtOrderedOnly_top3;
   vector<float>   *AllLeptonPt_PtOrdered;
   vector<float>   *AllLeptonEta_PtOrdered;
   vector<float>   *AllLeptonPhi_PtOrdered;
   vector<float>   *AllLeptonEnergy_PtOrdered;
   vector<float>   *AllLeptonMiniIso_PtOrdered;
   vector<int>     *AllLeptonFlavor_PtOrdered;
   vector<int>     *AllLeptonIsTight_PtOrdered;
   vector<int>     *AllLeptonCharge_PtOrdered;
   Int_t           AllLeptonCount_PtOrdered;
   vector<int>     *AllLeptonIsPrompt_PtOrdered;
   vector<int>     *AllLeptonIsMatched_PtOrdered;
   vector<int>     *AllLeptonIsFromB_PtOrdered;
   vector<int>     *AllLeptonIsFromC_PtOrdered;
   vector<int>     *AllLeptonIsFromHL_PtOrdered;
   vector<int>     *AllLeptonIsFromPh_PtOrdered;
   vector<int>     *AllLeptonIsFromL_PtOrdered;
   vector<float>   *AllLeptonPt_PtOrderedOnly;
   vector<float>   *AllLeptonEta_PtOrderedOnly;
   vector<float>   *AllLeptonPhi_PtOrderedOnly;
   vector<float>   *AllLeptonEnergy_PtOrderedOnly;
   vector<float>   *AllLeptonMiniIso_PtOrderedOnly;
   vector<int>     *AllLeptonFlavor_PtOrderedOnly;
   vector<int>     *AllLeptonIsTight_PtOrderedOnly;
   vector<int>     *AllLeptonCharge_PtOrderedOnly;
   vector<float>   *AllLeptonPt_PtOrderedOnly_top3;
   vector<float>   *AllLeptonEta_PtOrderedOnly_top3;
   vector<float>   *AllLeptonPhi_PtOrderedOnly_top3;
   vector<float>   *AllLeptonEnergy_PtOrderedOnly_top3;
   vector<float>   *AllLeptonMiniIso_PtOrderedOnly_top3;
   vector<int>     *AllLeptonFlavor_PtOrderedOnly_top3;
   vector<int>     *AllLeptonIsTight_PtOrderedOnly_top3;
   vector<int>     *AllLeptonCharge_PtOrderedOnly_top3;
   vector<float>   *TightLeptonPt_PtOrdered;
   vector<float>   *TightLeptonEta_PtOrdered;
   vector<float>   *TightLeptonPhi_PtOrdered;
   vector<float>   *TightLeptonEnergy_PtOrdered;
   vector<float>   *TightLeptonMiniIso_PtOrdered;
   vector<int>     *TightLeptonFlavor_PtOrdered;
   vector<int>     *TightLeptonCharge_PtOrdered;
   vector<double>  *AK4JetPt_MultiLepCalc_PtOrdered;
   vector<double>  *AK4JetEta_MultiLepCalc_PtOrdered;
   vector<double>  *AK4JetPhi_MultiLepCalc_PtOrdered;
   vector<double>  *AK4JetEnergy_MultiLepCalc_PtOrdered;
   vector<int>     *AK4JetBTag_MultiLepCalc_PtOrdered;
   vector<int>     *AK4JetBTag_bSFup_MultiLepCalc_PtOrdered;
   vector<int>     *AK4JetBTag_bSFdn_MultiLepCalc_PtOrdered;
   vector<int>     *AK4JetBTag_lSFup_MultiLepCalc_PtOrdered;
   vector<int>     *AK4JetBTag_lSFdn_MultiLepCalc_PtOrdered;
   vector<int>     *HadronicVHtID_JetSubCalc;
   vector<double>  *HadronicVHtPt_JetSubCalc;
   vector<double>  *HadronicVHtEta_JetSubCalc;
   vector<double>  *HadronicVHtPhi_JetSubCalc;
   vector<double>  *HadronicVHtEnergy_JetSubCalc;
   vector<double>  *theJetAK8Pt_JetSubCalc_PtOrdered;
   vector<double>  *theJetAK8Eta_JetSubCalc_PtOrdered;
   vector<double>  *theJetAK8Phi_JetSubCalc_PtOrdered;
   vector<double>  *theJetAK8Energy_JetSubCalc_PtOrdered;
   vector<double>  *theJetAK8PrunedMass_JetSubCalc_PtOrdered;
   vector<double>  *theJetAK8PrunedMassWtagUncerts_JetSubCalc_PtOrdered;
   vector<float>   *theJetAK8SoftDropMass_JetSubCalc_PtOrdered;
   vector<float>   *theJetAK8MaxSubCSV_JetSubCalc_PtOrdered;
   vector<double>  *theJetAK8NjettinessTau1_JetSubCalc_PtOrdered;
   vector<double>  *theJetAK8NjettinessTau2_JetSubCalc_PtOrdered;
   vector<float>   *theJetAK8NjettinessTau3_JetSubCalc_PtOrdered;
   vector<int>     *theJetAK8Wmatch_JetSubCalc_PtOrdered;
   vector<int>     *theJetAK8Tmatch_JetSubCalc_PtOrdered;
   vector<int>     *theJetAK8Zmatch_JetSubCalc_PtOrdered;
   vector<int>     *theJetAK8Hmatch_JetSubCalc_PtOrdered;
   vector<double>  *theJetAK8MatchedPt_JetSubCalc_PtOrdered;
   vector<double>  *genJetPt_MultiLepCalc;
   vector<double>  *genJetEta_MultiLepCalc;
   vector<double>  *genJetPhi_MultiLepCalc;
   vector<double>  *genJetEnergy_MultiLepCalc;
   Float_t         BJetLeadPt;
   vector<double>  *BJetLeadPt_shifts;
   Float_t         WJetLeadPt;
   vector<double>  *WJetLeadPt_shifts;
   Float_t         TJetLeadPt;
   vector<double>  *TJetLeadPt_shifts;
   Float_t         AK4HTpMETpLepPt;
   Float_t         AK4HT;
   vector<float>   *ddBkgWeights;
   vector<float>   *ddBkgWeights_scan;
   vector<float>   *ddBkgWeights_scan_muFR;
   vector<float>   *ddBkgWeights_scan_elFR;
   Int_t           NJets_MultiLepCalc;
   Int_t           NJetsAK8_JetSubCalc;
   Int_t           NJetsBTagwithSF_MultiLepCalc;
   Int_t           NJetsBTagwithSF_MultiLepCalc_noLepCorr;
   vector<int>     *NJetsBTagwithSF_MultiLepCalc_shifts;
   vector<int>     *NJetsBTagwithSF_MultiLepCalc_noLepCorr_shifts;
   Int_t           NJetsHtagged;
   vector<int>     *NJetsHtagged_shifts;
   Float_t         topPt;
   Float_t         topPtGen;
   Float_t         topMass;
   Float_t         minMleppBjet;
   vector<double>  *minMleppBjet_shifts;
   Float_t         minMleppJet;
   Float_t         genTopPt;
   Float_t         genAntiTopPt;
   Float_t         topPtWeight;
   Float_t         topPtWeightPast400;
   Float_t         topPtWeightHighPt;
   Float_t         deltaRlepJetInMinMljet;
   Float_t         deltaRlepbJetInMinMlb;
   vector<double>  *deltaRlepbJetInMinMlb_shifts;
   Float_t         deltaPhilepJetInMinMljet;
   Float_t         deltaPhilepbJetInMinMlb;
   vector<double>  *deltaPhilepbJetInMinMlb_shifts;
   Float_t         deltaRtopWjet;
   Float_t         deltaRlepWjet;
   Float_t         deltaRlepTjet;
   Float_t         deltaPhitopWjet;
   Float_t         deltaPhilepWjet;
   Float_t         deltaPhilepTjet;
   vector<double>  *deltaRtopWjet_shifts;
   vector<double>  *deltaRlepWjet_shifts;
   vector<double>  *deltaRlepTjet_shifts;
   vector<double>  *deltaPhitopWjet_shifts;
   vector<double>  *deltaPhilepWjet_shifts;
   vector<double>  *deltaPhilepTjet_shifts;
   Int_t           NJetsWtagged_0p6;
   vector<int>     *NJetsWtagged_0p6_shifts;
   Int_t           NJetsTtagged_0p81;
   vector<int>     *NJetsTtagged_0p81_shifts;
   Float_t         minDR_leadAK8otherAK8;
   Float_t         minDR_lepAK8;
   Float_t         minDR_lepJet;
   Float_t         minDR_lep1Jet;
   Float_t         minDR_lep2Jet;
   Float_t         minDR_lep3Jet;
   Float_t         minDR_lepMET;
   Float_t         minDR_METJet;
   Float_t         ptRel_lepJet;
   Float_t         MT_lepMet;
   vector<double>  *deltaR_lepJets;
   vector<double>  *deltaR_lep1Jets;
   vector<double>  *deltaR_lep2Jets;
   vector<double>  *deltaR_lep3Jets;
   vector<double>  *deltaR_lepMETs;
   vector<double>  *deltaR_METJets;
   vector<float>   *deltaR_lepBJets;
   vector<double>  *deltaR_lepBJets_bSFup;
   vector<double>  *deltaR_lepBJets_bSFdn;
   vector<double>  *deltaR_lepBJets_lSFup;
   vector<double>  *deltaR_lepBJets_lSFdn;
   vector<double>  *deltaR_lepAK8s;
   vector<double>  *deltaPhi_lepJets;
   vector<double>  *deltaPhi_lepBJets;
   vector<double>  *deltaPhi_lepBJets_bSFup;
   vector<double>  *deltaPhi_lepBJets_bSFdn;
   vector<double>  *deltaPhi_lepBJets_lSFup;
   vector<double>  *deltaPhi_lepBJets_lSFdn;
   vector<double>  *deltaPhi_lepAK8s;
   vector<double>  *mass_lepJets;
   vector<double>  *mass_lepBJets;
   vector<double>  *mass_lepBJets_bSFup;
   vector<double>  *mass_lepBJets_bSFdn;
   vector<double>  *mass_lepBJets_lSFup;
   vector<double>  *mass_lepBJets_lSFdn;
   vector<double>  *mass_lepAK8s;
   vector<float>   *minDR_lepJets;
   vector<float>   *minDR_lepBJets;
   vector<float>   *deltaR_lepClosestJet;
   vector<float>   *PtRelLepClosestJet;
   Float_t         Mll_sameFlavorOS;
   vector<float>   *MllOS_allComb;
   Float_t         MllOS_allComb_min;
   Float_t         MllOS_allComb_max;
   Float_t         Mlll;

   // List of branches
   TBranch        *b_event_CommonCalc;   //!
   TBranch        *b_run_CommonCalc;   //!
   TBranch        *b_lumi_CommonCalc;   //!
   TBranch        *b_nPV_MultiLepCalc;   //!
   TBranch        *b_nTrueInteractions_MultiLepCalc;   //!
   TBranch        *b_isElectron;   //!
   TBranch        *b_isMuon;   //!
//    TBranch        *b_MCPastTrigger;   //!
//    TBranch        *b_MCPastTriggerAlt;   //!
//    TBranch        *b_DataPastTrigger;   //!
//    TBranch        *b_DataPastTriggerAlt;   //!
   TBranch        *b_isTHBW_TpTpCalc;   //!
   TBranch        *b_isTHTH_TpTpCalc;   //!
   TBranch        *b_isBWBW_TpTpCalc;   //!
   TBranch        *b_isTZBW_TpTpCalc;   //!
   TBranch        *b_isTZTH_TpTpCalc;   //!
   TBranch        *b_isTZTZ_TpTpCalc;   //!
   TBranch        *b_isBHTW_TpTpCalc;   //!
   TBranch        *b_isBHBH_TpTpCalc;   //!
   TBranch        *b_isTWTW_TpTpCalc;   //!
   TBranch        *b_isBZTW_TpTpCalc;   //!
   TBranch        *b_isBZBH_TpTpCalc;   //!
   TBranch        *b_isBZBZ_TpTpCalc;   //!
   TBranch        *b_NLeptonDecays_TpTpCalc;   //!
   TBranch        *b_MCWeight_MultiLepCalc;   //!
   TBranch        *b_renormWeights;   //!
   TBranch        *b_pdfWeights;   //!
   TBranch        *b_JetSF_pTNbwflat;   //!
   TBranch        *b_JetSFup_pTNbwflat;   //!
   TBranch        *b_JetSFdn_pTNbwflat;   //!
   TBranch        *b_JetSFupwide_pTNbwflat;   //!
   TBranch        *b_JetSFdnwide_pTNbwflat;   //!
   TBranch        *b_pileupWeight;   //!
   TBranch        *b_pileupWeightUp;   //!
   TBranch        *b_pileupWeightDown;   //!
   TBranch        *b_TrigEffAltWeight;   //!
   TBranch        *b_TrigEffWeight;   //!
   TBranch        *b_TrigEffWeightUncert;   //!
   TBranch        *b_isoSF;   //!
   TBranch        *b_lepIdSF;   //!
   TBranch        *b_EGammaGsfSF;   //!
   TBranch        *b_MuTrkSF;   //!
   TBranch        *b_isPassSinglelepton;   //!
   TBranch        *b_isPassDilepton;   //!
   TBranch        *b_isPassTrilepton;   //!
   TBranch        *b_isPassSingleLooselepton;   //!
   TBranch        *b_isPassDiLooselepton;   //!
   TBranch        *b_isPassTriLooselepton;   //!
   TBranch        *b_isE;   //!
   TBranch        *b_isM;   //!
   TBranch        *b_isE_;   //!
   TBranch        *b_isM_;   //!
   TBranch        *b_isT;   //!
   TBranch        *b_isL;   //!
   TBranch        *b_isP;   //!
   TBranch        *b_isF;   //!
   TBranch        *b_isEE;   //!
   TBranch        *b_isEM;   //!
   TBranch        *b_isMM;   //!
   TBranch        *b_isEE_;   //!
   TBranch        *b_isEM_;   //!
   TBranch        *b_isME_;   //!
   TBranch        *b_isMM_;   //!
   TBranch        *b_isTT;   //!
   TBranch        *b_isTL;   //!
   TBranch        *b_isLT;   //!
   TBranch        *b_isLL;   //!
   TBranch        *b_isPP;   //!
   TBranch        *b_isPF;   //!
   TBranch        *b_isFP;   //!
   TBranch        *b_isFF;   //!
   TBranch        *b_isEEE;   //!
   TBranch        *b_isEEM;   //!
   TBranch        *b_isEMM;   //!
   TBranch        *b_isMMM;   //!
   TBranch        *b_isEEE_;   //!
   TBranch        *b_isEEM_;   //!
   TBranch        *b_isEME_;   //!
   TBranch        *b_isMEE_;   //!
   TBranch        *b_isEMM_;   //!
   TBranch        *b_isMEM_;   //!
   TBranch        *b_isMME_;   //!
   TBranch        *b_isMMM_;   //!
   TBranch        *b_isTTT;   //!
   TBranch        *b_isTTL;   //!
   TBranch        *b_isTLT;   //!
   TBranch        *b_isLTT;   //!
   TBranch        *b_isTLL;   //!
   TBranch        *b_isLTL;   //!
   TBranch        *b_isLLT;   //!
   TBranch        *b_isLLL;   //!
   TBranch        *b_isPPP;   //!
   TBranch        *b_isPPF;   //!
   TBranch        *b_isPFP;   //!
   TBranch        *b_isFPP;   //!
   TBranch        *b_isPFF;   //!
   TBranch        *b_isFPF;   //!
   TBranch        *b_isFFP;   //!
   TBranch        *b_isFFF;   //!
   TBranch        *b_MCPastTrigger;   //!
   TBranch        *b_MCPastTriggerAlt;   //!
   TBranch        *b_DataPastTrigger;   //!
   TBranch        *b_DataPastTriggerAlt;   //!
   TBranch        *b_MCPastTrigger_dilep;   //!
   TBranch        *b_DataPastTrigger_dilep;   //!
   TBranch        *b_MCPastTrigger_dilepDZ4runH;   //!
   TBranch        *b_DataPastTrigger_dilepDZ4runH;   //!
   TBranch        *b_MCPastTrigger_dilepHT;   //!
   TBranch        *b_DataPastTrigger_dilepHT;   //!
   TBranch        *b_MCPastTrigger_trilep;   //!
   TBranch        *b_DataPastTrigger_trilep;   //!
   TBranch        *b_MCPastTrigger_singlelep;   //!
   TBranch        *b_DataPastTrigger_singlelep;   //!
   TBranch        *b_ttbarMass_TTbarMassCalc;   //!
   TBranch        *b_corr_met_MultiLepCalc;   //!
   TBranch        *b_corr_met_phi_MultiLepCalc;   //!
   TBranch        *b_leptonPt_MultiLepCalc;   //!
   TBranch        *b_leptonEta_MultiLepCalc;   //!
   TBranch        *b_leptonPhi_MultiLepCalc;   //!
   TBranch        *b_leptonEnergy_MultiLepCalc;   //!
   TBranch        *b_leptonMiniIso_MultiLepCalc;   //!
   TBranch        *b_leptonRelIso_MultiLepCalc;   //!
   TBranch        *b_leptonDxy_MultiLepCalc;   //!
   TBranch        *b_leptonDz_MultiLepCalc;   //!
   TBranch        *b_leptonCharge_MultiLepCalc;   //!
   TBranch        *b_elTrigPresel_MultiLepCalc;   //!
   TBranch        *b_AllLeptonElPt_PtOrdered;   //!
   TBranch        *b_AllLeptonElEta_PtOrdered;   //!
   TBranch        *b_AllLeptonElPhi_PtOrdered;   //!
   TBranch        *b_AllLeptonElEnergy_PtOrdered;   //!
   TBranch        *b_AllLeptonElMiniIso_PtOrdered;   //!
   TBranch        *b_AllLeptonElFlavor_PtOrdered;   //!
   TBranch        *b_AllLeptonElIsTight_PtOrdered;   //!
   TBranch        *b_AllLeptonElCount_PtOrdered;   //!
   TBranch        *b_AllLeptonElIsPrompt_PtOrdered;   //!
   TBranch        *b_AllLeptonElIsMatched_PtOrdered;   //!
   TBranch        *b_AllLeptonElIsFromB_PtOrdered;   //!
   TBranch        *b_AllLeptonElIsFromC_PtOrdered;   //!
   TBranch        *b_AllLeptonElIsFromHL_PtOrdered;   //!
   TBranch        *b_AllLeptonElIsFromPh_PtOrdered;   //!
   TBranch        *b_AllLeptonElIsFromL_PtOrdered;   //!
   TBranch        *b_AllLeptonElPt_PtOrderedOnly;   //!
   TBranch        *b_AllLeptonElEta_PtOrderedOnly;   //!
   TBranch        *b_AllLeptonElPhi_PtOrderedOnly;   //!
   TBranch        *b_AllLeptonElEnergy_PtOrderedOnly;   //!
   TBranch        *b_AllLeptonElMiniIso_PtOrderedOnly;   //!
   TBranch        *b_AllLeptonElFlavor_PtOrderedOnly;   //!
   TBranch        *b_AllLeptonElIsTight_PtOrderedOnly;   //!
   TBranch        *b_AllLeptonElPt_PtOrderedOnly_top3;   //!
   TBranch        *b_AllLeptonElEta_PtOrderedOnly_top3;   //!
   TBranch        *b_AllLeptonElPhi_PtOrderedOnly_top3;   //!
   TBranch        *b_AllLeptonElEnergy_PtOrderedOnly_top3;   //!
   TBranch        *b_AllLeptonElMiniIso_PtOrderedOnly_top3;   //!
   TBranch        *b_AllLeptonElFlavor_PtOrderedOnly_top3;   //!
   TBranch        *b_AllLeptonElIsTight_PtOrderedOnly_top3;   //!
   TBranch        *b_AllLeptonMuPt_PtOrdered;   //!
   TBranch        *b_AllLeptonMuEta_PtOrdered;   //!
   TBranch        *b_AllLeptonMuPhi_PtOrdered;   //!
   TBranch        *b_AllLeptonMuEnergy_PtOrdered;   //!
   TBranch        *b_AllLeptonMuMiniIso_PtOrdered;   //!
   TBranch        *b_AllLeptonMuFlavor_PtOrdered;   //!
   TBranch        *b_AllLeptonMuIsTight_PtOrdered;   //!
   TBranch        *b_AllLeptonMuCount_PtOrdered;   //!
   TBranch        *b_AllLeptonMuIsPrompt_PtOrdered;   //!
   TBranch        *b_AllLeptonMuIsMatched_PtOrdered;   //!
   TBranch        *b_AllLeptonMuIsFromB_PtOrdered;   //!
   TBranch        *b_AllLeptonMuIsFromC_PtOrdered;   //!
   TBranch        *b_AllLeptonMuIsFromHL_PtOrdered;   //!
   TBranch        *b_AllLeptonMuIsFromPh_PtOrdered;   //!
   TBranch        *b_AllLeptonMuIsFromL_PtOrdered;   //!
   TBranch        *b_AllLeptonMuPt_PtOrderedOnly;   //!
   TBranch        *b_AllLeptonMuEta_PtOrderedOnly;   //!
   TBranch        *b_AllLeptonMuPhi_PtOrderedOnly;   //!
   TBranch        *b_AllLeptonMuEnergy_PtOrderedOnly;   //!
   TBranch        *b_AllLeptonMuMiniIso_PtOrderedOnly;   //!
   TBranch        *b_AllLeptonMuFlavor_PtOrderedOnly;   //!
   TBranch        *b_AllLeptonMuIsTight_PtOrderedOnly;   //!
   TBranch        *b_AllLeptonMuPt_PtOrderedOnly_top3;   //!
   TBranch        *b_AllLeptonMuEta_PtOrderedOnly_top3;   //!
   TBranch        *b_AllLeptonMuPhi_PtOrderedOnly_top3;   //!
   TBranch        *b_AllLeptonMuEnergy_PtOrderedOnly_top3;   //!
   TBranch        *b_AllLeptonMuMiniIso_PtOrderedOnly_top3;   //!
   TBranch        *b_AllLeptonMuFlavor_PtOrderedOnly_top3;   //!
   TBranch        *b_AllLeptonMuIsTight_PtOrderedOnly_top3;   //!
   TBranch        *b_AllLeptonPt_PtOrdered;   //!
   TBranch        *b_AllLeptonEta_PtOrdered;   //!
   TBranch        *b_AllLeptonPhi_PtOrdered;   //!
   TBranch        *b_AllLeptonEnergy_PtOrdered;   //!
   TBranch        *b_AllLeptonMiniIso_PtOrdered;   //!
   TBranch        *b_AllLeptonFlavor_PtOrdered;   //!
   TBranch        *b_AllLeptonIsTight_PtOrdered;   //!
   TBranch        *b_AllLeptonCharge_PtOrdered;   //!
   TBranch        *b_AllLeptonCount_PtOrdered;   //!
   TBranch        *b_AllLeptonIsPrompt_PtOrdered;   //!
   TBranch        *b_AllLeptonIsMatched_PtOrdered;   //!
   TBranch        *b_AllLeptonIsFromB_PtOrdered;   //!
   TBranch        *b_AllLeptonIsFromC_PtOrdered;   //!
   TBranch        *b_AllLeptonIsFromHL_PtOrdered;   //!
   TBranch        *b_AllLeptonIsFromPh_PtOrdered;   //!
   TBranch        *b_AllLeptonIsFromL_PtOrdered;   //!
   TBranch        *b_AllLeptonPt_PtOrderedOnly;   //!
   TBranch        *b_AllLeptonEta_PtOrderedOnly;   //!
   TBranch        *b_AllLeptonPhi_PtOrderedOnly;   //!
   TBranch        *b_AllLeptonEnergy_PtOrderedOnly;   //!
   TBranch        *b_AllLeptonMiniIso_PtOrderedOnly;   //!
   TBranch        *b_AllLeptonFlavor_PtOrderedOnly;   //!
   TBranch        *b_AllLeptonIsTight_PtOrderedOnly;   //!
   TBranch        *b_AllLeptonCharge_PtOrderedOnly;   //!
   TBranch        *b_AllLeptonPt_PtOrderedOnly_top3;   //!
   TBranch        *b_AllLeptonEta_PtOrderedOnly_top3;   //!
   TBranch        *b_AllLeptonPhi_PtOrderedOnly_top3;   //!
   TBranch        *b_AllLeptonEnergy_PtOrderedOnly_top3;   //!
   TBranch        *b_AllLeptonMiniIso_PtOrderedOnly_top3;   //!
   TBranch        *b_AllLeptonFlavor_PtOrderedOnly_top3;   //!
   TBranch        *b_AllLeptonIsTight_PtOrderedOnly_top3;   //!
   TBranch        *b_AllLeptonCharge_PtOrderedOnly_top3;   //!
   TBranch        *b_TightLeptonPt_PtOrdered;   //!
   TBranch        *b_TightLeptonEta_PtOrdered;   //!
   TBranch        *b_TightLeptonPhi_PtOrdered;   //!
   TBranch        *b_TightLeptonEnergy_PtOrdered;   //!
   TBranch        *b_TightLeptonMiniIso_PtOrdered;   //!
   TBranch        *b_TightLeptonFlavor_PtOrdered;   //!
   TBranch        *b_TightLeptonCharge_PtOrdered;   //!
   TBranch        *b_AK4JetPt_MultiLepCalc_PtOrdered;   //!
   TBranch        *b_AK4JetEta_MultiLepCalc_PtOrdered;   //!
   TBranch        *b_AK4JetPhi_MultiLepCalc_PtOrdered;   //!
   TBranch        *b_AK4JetEnergy_MultiLepCalc_PtOrdered;   //!
   TBranch        *b_AK4JetBTag_MultiLepCalc_PtOrdered;   //!
   TBranch        *b_AK4JetBTag_bSFup_MultiLepCalc_PtOrdered;   //!
   TBranch        *b_AK4JetBTag_bSFdn_MultiLepCalc_PtOrdered;   //!
   TBranch        *b_AK4JetBTag_lSFup_MultiLepCalc_PtOrdered;   //!
   TBranch        *b_AK4JetBTag_lSFdn_MultiLepCalc_PtOrdered;   //!
   TBranch        *b_HadronicVHtID_JetSubCalc;   //!
   TBranch        *b_HadronicVHtPt_JetSubCalc;   //!
   TBranch        *b_HadronicVHtEta_JetSubCalc;   //!
   TBranch        *b_HadronicVHtPhi_JetSubCalc;   //!
   TBranch        *b_HadronicVHtEnergy_JetSubCalc;   //!
   TBranch        *b_theJetAK8Pt_JetSubCalc_PtOrdered;   //!
   TBranch        *b_theJetAK8Eta_JetSubCalc_PtOrdered;   //!
   TBranch        *b_theJetAK8Phi_JetSubCalc_PtOrdered;   //!
   TBranch        *b_theJetAK8Energy_JetSubCalc_PtOrdered;   //!
   TBranch        *b_theJetAK8PrunedMass_JetSubCalc_PtOrdered;   //!
   TBranch        *b_theJetAK8PrunedMassWtagUncerts_JetSubCalc_PtOrdered;   //!
   TBranch        *b_theJetAK8SoftDropMass_JetSubCalc_PtOrdered;   //!
   TBranch        *b_theJetAK8MaxSubCSV_JetSubCalc_PtOrdered;   //!
   TBranch        *b_theJetAK8NjettinessTau1_JetSubCalc_PtOrdered;   //!
   TBranch        *b_theJetAK8NjettinessTau2_JetSubCalc_PtOrdered;   //!
   TBranch        *b_theJetAK8NjettinessTau3_JetSubCalc_PtOrdered;   //!
   TBranch        *b_theJetAK8Wmatch_JetSubCalc_PtOrdered;   //!
   TBranch        *b_theJetAK8Tmatch_JetSubCalc_PtOrdered;   //!
   TBranch        *b_theJetAK8Zmatch_JetSubCalc_PtOrdered;   //!
   TBranch        *b_theJetAK8Hmatch_JetSubCalc_PtOrdered;   //!
   TBranch        *b_theJetAK8MatchedPt_JetSubCalc_PtOrdered;   //!
   TBranch        *b_genJetPt_MultiLepCalc;   //!
   TBranch        *b_genJetEta_MultiLepCalc;   //!
   TBranch        *b_genJetPhi_MultiLepCalc;   //!
   TBranch        *b_genJetEnergy_MultiLepCalc;   //!
   TBranch        *b_BJetLeadPt;   //!
   TBranch        *b_BJetLeadPt_shifts;   //!
   TBranch        *b_WJetLeadPt;   //!
   TBranch        *b_WJetLeadPt_shifts;   //!
   TBranch        *b_TJetLeadPt;   //!
   TBranch        *b_TJetLeadPt_shifts;   //!
   TBranch        *b_AK4HTpMETpLepPt;   //!
   TBranch        *b_AK4HT;   //!
   TBranch        *b_ddBkgWeights;   //!
   TBranch        *b_ddBkgWeights_scan;   //!
   TBranch        *b_ddBkgWeights_scan_muFR;   //!
   TBranch        *b_ddBkgWeights_scan_elFR;   //!
   TBranch        *b_NJets_MultiLepCalc;   //!
   TBranch        *b_NJetsAK8_JetSubCalc;   //!
   TBranch        *b_NJetsBTagwithSF_MultiLepCalc;   //!
   TBranch        *b_NJetsBTagwithSF_MultiLepCalc_noLepCorr;   //!
   TBranch        *b_NJetsBTagwithSF_MultiLepCalc_shifts;   //!
   TBranch        *b_NJetsBTagwithSF_MultiLepCalc_noLepCorr_shifts;   //!
   TBranch        *b_NJetsHtagged;   //!
   TBranch        *b_NJetsHtagged_shifts;   //!
   TBranch        *b_topPt;   //!
   TBranch        *b_topPtGen;   //!
   TBranch        *b_topMass;   //!
   TBranch        *b_minMleppBjet;   //!
   TBranch        *b_minMleppBjet_shifts;   //!
   TBranch        *b_mixnMleppJet;   //!
   TBranch        *b_genTopPt;   //!
   TBranch        *b_genAntiTopPt;   //!
   TBranch        *b_topPtWeight;   //!
   TBranch        *b_topPtWeightPast400;   //!
   TBranch        *b_topPtWeightHighPt;   //!
   TBranch        *b_deltaRlepJetInMinMljet;   //!
   TBranch        *b_deltaRlepbJetInMinMlb;   //!
   TBranch        *b_deltaRlepbJetInMinMlb_shifts;   //!
   TBranch        *b_deltaPhilepJetInMinMljet;   //!
   TBranch        *b_deltaPhilepbJetInMinMlb;   //!
   TBranch        *b_deltaPhilepbJetInMinMlb_shifts;   //!
   TBranch        *b_deltaRtopWjet;   //!
   TBranch        *b_deltaRlepWjet;   //!
   TBranch        *b_deltaRlepTjet;   //!
   TBranch        *b_deltaPhitopWjet;   //!
   TBranch        *b_deltaPhilepWjet;   //!
   TBranch        *b_deltaPhilepTjet;   //!
   TBranch        *b_deltaRtopWjet_shifts;   //!
   TBranch        *b_deltaRlepWjet_shifts;   //!
   TBranch        *b_deltaRlepTjet_shifts;   //!
   TBranch        *b_deltaPhitopWjet_shifts;   //!
   TBranch        *b_deltaPhilepWjet_shifts;   //!
   TBranch        *b_deltaPhilepTjet_shifts;   //!
   TBranch        *b_NJetsWtagged_0p6;   //!
   TBranch        *b_NJetsWtagged_0p6_shifts;   //!
   TBranch        *b_NJetsTtagged_0p81;   //!
   TBranch        *b_NJetsTtagged_0p81_shifts;   //!
   TBranch        *b_minDR_leadAK8otherAK8;   //!
   TBranch        *b_minDR_lepAK8;   //!
   TBranch        *b_minDR_lepJet;   //!
   TBranch        *b_minDR_lep1Jet;   //!
   TBranch        *b_minDR_lep2Jet;   //!
   TBranch        *b_minDR_lep3Jet;   //!
   TBranch        *b_minDR_lepMET;   //!
   TBranch        *b_minDR_METJet;   //!
   TBranch        *b_ptRel_lepJet;   //!
   TBranch        *b_MT_lepMet;   //!
   TBranch        *b_deltaR_lepJets;   //!
   TBranch        *b_deltaR_lep1Jets;   //!
   TBranch        *b_deltaR_lep2Jets;   //!
   TBranch        *b_deltaR_lep3Jets;   //!
   TBranch        *b_deltaR_lepMETs;   //!
   TBranch        *b_deltaR_METJets;   //!
   TBranch        *b_deltaR_lepBJets;   //!
   TBranch        *b_deltaR_lepBJets_bSFup;   //!
   TBranch        *b_deltaR_lepBJets_bSFdn;   //!
   TBranch        *b_deltaR_lepBJets_lSFup;   //!
   TBranch        *b_deltaR_lepBJets_lSFdn;   //!
   TBranch        *b_deltaR_lepAK8s;   //!
   TBranch        *b_deltaPhi_lepJets;   //!
   TBranch        *b_deltaPhi_lepBJets;   //!
   TBranch        *b_deltaPhi_lepBJets_bSFup;   //!
   TBranch        *b_deltaPhi_lepBJets_bSFdn;   //!
   TBranch        *b_deltaPhi_lepBJets_lSFup;   //!
   TBranch        *b_deltaPhi_lepBJets_lSFdn;   //!
   TBranch        *b_deltaPhi_lepAK8s;   //!
   TBranch        *b_mass_lepJets;   //!
   TBranch        *b_mass_lepBJets;   //!
   TBranch        *b_mass_lepBJets_bSFup;   //!
   TBranch        *b_mass_lepBJets_bSFdn;   //!
   TBranch        *b_mass_lepBJets_lSFup;   //!
   TBranch        *b_mass_lepBJets_lSFdn;   //!
   TBranch        *b_mass_lepAK8s;   //!
   TBranch        *b_minDR_lepJets;   //!
   TBranch        *b_minDR_lepBJets;   //!
   TBranch        *b_deltaR_lepClosestJet;   //!
   TBranch        *b_PtRelLepClosestJet;   //!
   TBranch        *b_Mll_sameFlavorOS;   //!
   TBranch        *b_MllOS_allComb;   //!
   TBranch        *b_MllOS_allComb_min;   //!
   TBranch        *b_MllOS_allComb_max;   //!
   TBranch        *b_Mlll;   //!

   step2_fakeRateCount(TString inputFileName, TString outputFileName);
   virtual ~step2_fakeRateCount();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef step2_fakeRateCount_cxx
step2_fakeRateCount::step2_fakeRateCount(TString inputFileName, TString outputFileName) : inputTree(0), inputFile(0), outputFile(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
  std::cout<<"Opening file: "<<inputFileName<<std::endl;
  inputFile=TFile::Open(inputFileName);
  inputTree=(TTree*)inputFile->Get("ljmet");
  if(inputTree->GetEntries()==0) std::cout<<"WARNING! Found 0 events in the tree!!!!"<<std::endl;;
  
  outputFile=new TFile(outputFileName,"RECREATE");   
  Init(inputTree);
}

step2_fakeRateCount::~step2_fakeRateCount()
{
   if (!inputTree) return;
   delete inputTree->GetCurrentFile();
}

Int_t step2_fakeRateCount::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!inputTree) return 0;
   return inputTree->GetEntry(entry);
}
Long64_t step2_fakeRateCount::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!inputTree) return -5;
   Long64_t centry = inputTree->LoadTree(entry);
   if (centry < 0) return centry;
   if (inputTree->GetTreeNumber() != fCurrent) {
      fCurrent = inputTree->GetTreeNumber();
      Notify();
   }
   return centry;
}

void step2_fakeRateCount::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   renormWeights = 0;
   pdfWeights = 0;
   AllLeptonElPt_PtOrdered = 0;
   AllLeptonElEta_PtOrdered = 0;
   AllLeptonElPhi_PtOrdered = 0;
   AllLeptonElEnergy_PtOrdered = 0;
   AllLeptonElMiniIso_PtOrdered = 0;
   AllLeptonElFlavor_PtOrdered = 0;
   AllLeptonElIsTight_PtOrdered = 0;
   AllLeptonElIsPrompt_PtOrdered = 0;
   AllLeptonElIsMatched_PtOrdered = 0;
   AllLeptonElIsFromB_PtOrdered = 0;
   AllLeptonElIsFromC_PtOrdered = 0;
   AllLeptonElIsFromHL_PtOrdered = 0;
   AllLeptonElIsFromPh_PtOrdered = 0;
   AllLeptonElIsFromL_PtOrdered = 0;
   AllLeptonElPt_PtOrderedOnly = 0;
   AllLeptonElEta_PtOrderedOnly = 0;
   AllLeptonElPhi_PtOrderedOnly = 0;
   AllLeptonElEnergy_PtOrderedOnly = 0;
   AllLeptonElMiniIso_PtOrderedOnly = 0;
   AllLeptonElFlavor_PtOrderedOnly = 0;
   AllLeptonElIsTight_PtOrderedOnly = 0;
   AllLeptonElPt_PtOrderedOnly_top3 = 0;
   AllLeptonElEta_PtOrderedOnly_top3 = 0;
   AllLeptonElPhi_PtOrderedOnly_top3 = 0;
   AllLeptonElEnergy_PtOrderedOnly_top3 = 0;
   AllLeptonElMiniIso_PtOrderedOnly_top3 = 0;
   AllLeptonElFlavor_PtOrderedOnly_top3 = 0;
   AllLeptonElIsTight_PtOrderedOnly_top3 = 0;
   AllLeptonMuPt_PtOrdered = 0;
   AllLeptonMuEta_PtOrdered = 0;
   AllLeptonMuPhi_PtOrdered = 0;
   AllLeptonMuEnergy_PtOrdered = 0;
   AllLeptonMuMiniIso_PtOrdered = 0;
   AllLeptonMuFlavor_PtOrdered = 0;
   AllLeptonMuIsTight_PtOrdered = 0;
   AllLeptonMuIsPrompt_PtOrdered = 0;
   AllLeptonMuIsMatched_PtOrdered = 0;
   AllLeptonMuIsFromB_PtOrdered = 0;
   AllLeptonMuIsFromC_PtOrdered = 0;
   AllLeptonMuIsFromHL_PtOrdered = 0;
   AllLeptonMuIsFromPh_PtOrdered = 0;
   AllLeptonMuIsFromL_PtOrdered = 0;
   AllLeptonMuPt_PtOrderedOnly = 0;
   AllLeptonMuEta_PtOrderedOnly = 0;
   AllLeptonMuPhi_PtOrderedOnly = 0;
   AllLeptonMuEnergy_PtOrderedOnly = 0;
   AllLeptonMuMiniIso_PtOrderedOnly = 0;
   AllLeptonMuFlavor_PtOrderedOnly = 0;
   AllLeptonMuIsTight_PtOrderedOnly = 0;
   AllLeptonMuPt_PtOrderedOnly_top3 = 0;
   AllLeptonMuEta_PtOrderedOnly_top3 = 0;
   AllLeptonMuPhi_PtOrderedOnly_top3 = 0;
   AllLeptonMuEnergy_PtOrderedOnly_top3 = 0;
   AllLeptonMuMiniIso_PtOrderedOnly_top3 = 0;
   AllLeptonMuFlavor_PtOrderedOnly_top3 = 0;
   AllLeptonMuIsTight_PtOrderedOnly_top3 = 0;
   AllLeptonPt_PtOrdered = 0;
   AllLeptonEta_PtOrdered = 0;
   AllLeptonPhi_PtOrdered = 0;
   AllLeptonEnergy_PtOrdered = 0;
   AllLeptonMiniIso_PtOrdered = 0;
   AllLeptonFlavor_PtOrdered = 0;
   AllLeptonIsTight_PtOrdered = 0;
   AllLeptonCharge_PtOrdered = 0;
   AllLeptonIsPrompt_PtOrdered = 0;
   AllLeptonIsMatched_PtOrdered = 0;
   AllLeptonIsFromB_PtOrdered = 0;
   AllLeptonIsFromC_PtOrdered = 0;
   AllLeptonIsFromHL_PtOrdered = 0;
   AllLeptonIsFromPh_PtOrdered = 0;
   AllLeptonIsFromL_PtOrdered = 0;
   AllLeptonPt_PtOrderedOnly = 0;
   AllLeptonEta_PtOrderedOnly = 0;
   AllLeptonPhi_PtOrderedOnly = 0;
   AllLeptonEnergy_PtOrderedOnly = 0;
   AllLeptonMiniIso_PtOrderedOnly = 0;
   AllLeptonFlavor_PtOrderedOnly = 0;
   AllLeptonIsTight_PtOrderedOnly = 0;
   AllLeptonCharge_PtOrderedOnly = 0;
   AllLeptonPt_PtOrderedOnly_top3 = 0;
   AllLeptonEta_PtOrderedOnly_top3 = 0;
   AllLeptonPhi_PtOrderedOnly_top3 = 0;
   AllLeptonEnergy_PtOrderedOnly_top3 = 0;
   AllLeptonMiniIso_PtOrderedOnly_top3 = 0;
   AllLeptonFlavor_PtOrderedOnly_top3 = 0;
   AllLeptonIsTight_PtOrderedOnly_top3 = 0;
   AllLeptonCharge_PtOrderedOnly_top3 = 0;
   TightLeptonPt_PtOrdered = 0;
   TightLeptonEta_PtOrdered = 0;
   TightLeptonPhi_PtOrdered = 0;
   TightLeptonEnergy_PtOrdered = 0;
   TightLeptonMiniIso_PtOrdered = 0;
   TightLeptonFlavor_PtOrdered = 0;
   TightLeptonCharge_PtOrdered = 0;
   AK4JetPt_MultiLepCalc_PtOrdered = 0;
   AK4JetEta_MultiLepCalc_PtOrdered = 0;
   AK4JetPhi_MultiLepCalc_PtOrdered = 0;
   AK4JetEnergy_MultiLepCalc_PtOrdered = 0;
   AK4JetBTag_MultiLepCalc_PtOrdered = 0;
   AK4JetBTag_bSFup_MultiLepCalc_PtOrdered = 0;
   AK4JetBTag_bSFdn_MultiLepCalc_PtOrdered = 0;
   AK4JetBTag_lSFup_MultiLepCalc_PtOrdered = 0;
   AK4JetBTag_lSFdn_MultiLepCalc_PtOrdered = 0;
   HadronicVHtID_JetSubCalc = 0;
   HadronicVHtPt_JetSubCalc = 0;
   HadronicVHtEta_JetSubCalc = 0;
   HadronicVHtPhi_JetSubCalc = 0;
   HadronicVHtEnergy_JetSubCalc = 0;
   theJetAK8Pt_JetSubCalc_PtOrdered = 0;
   theJetAK8Eta_JetSubCalc_PtOrdered = 0;
   theJetAK8Phi_JetSubCalc_PtOrdered = 0;
   theJetAK8Energy_JetSubCalc_PtOrdered = 0;
   theJetAK8PrunedMass_JetSubCalc_PtOrdered = 0;
   theJetAK8PrunedMassWtagUncerts_JetSubCalc_PtOrdered = 0;
   theJetAK8SoftDropMass_JetSubCalc_PtOrdered = 0;
   theJetAK8MaxSubCSV_JetSubCalc_PtOrdered = 0;
   theJetAK8NjettinessTau1_JetSubCalc_PtOrdered = 0;
   theJetAK8NjettinessTau2_JetSubCalc_PtOrdered = 0;
   theJetAK8NjettinessTau3_JetSubCalc_PtOrdered = 0;
   theJetAK8Wmatch_JetSubCalc_PtOrdered = 0;
   theJetAK8Tmatch_JetSubCalc_PtOrdered = 0;
   theJetAK8Zmatch_JetSubCalc_PtOrdered = 0;
   theJetAK8Hmatch_JetSubCalc_PtOrdered = 0;
   theJetAK8MatchedPt_JetSubCalc_PtOrdered = 0;
   genJetPt_MultiLepCalc = 0;
   genJetEta_MultiLepCalc = 0;
   genJetPhi_MultiLepCalc = 0;
   genJetEnergy_MultiLepCalc = 0;
   BJetLeadPt_shifts = 0;
   WJetLeadPt_shifts = 0;
   TJetLeadPt_shifts = 0;
   ddBkgWeights = 0;
   ddBkgWeights_scan = 0;
   ddBkgWeights_scan_muFR = 0;
   ddBkgWeights_scan_elFR = 0;
   NJetsBTagwithSF_MultiLepCalc_shifts = 0;
   NJetsBTagwithSF_MultiLepCalc_noLepCorr_shifts = 0;
   NJetsHtagged_shifts = 0;
   minMleppBjet_shifts = 0;
   deltaRlepbJetInMinMlb_shifts = 0;
   deltaPhilepbJetInMinMlb_shifts = 0;
   deltaRtopWjet_shifts = 0;
   deltaRlepWjet_shifts = 0;
   deltaRlepTjet_shifts = 0;
   deltaPhitopWjet_shifts = 0;
   deltaPhilepWjet_shifts = 0;
   deltaPhilepTjet_shifts = 0;
   NJetsWtagged_0p6_shifts = 0;
   NJetsTtagged_0p81_shifts = 0;
   deltaR_lepJets = 0;
   deltaR_lep1Jets = 0;
   deltaR_lep2Jets = 0;
   deltaR_lep3Jets = 0;
   deltaR_lepMETs = 0;
   deltaR_METJets = 0;
   deltaR_lepBJets = 0;
   deltaR_lepBJets_bSFup = 0;
   deltaR_lepBJets_bSFdn = 0;
   deltaR_lepBJets_lSFup = 0;
   deltaR_lepBJets_lSFdn = 0;
   deltaR_lepAK8s = 0;
   deltaPhi_lepJets = 0;
   deltaPhi_lepBJets = 0;
   deltaPhi_lepBJets_bSFup = 0;
   deltaPhi_lepBJets_bSFdn = 0;
   deltaPhi_lepBJets_lSFup = 0;
   deltaPhi_lepBJets_lSFdn = 0;
   deltaPhi_lepAK8s = 0;
   mass_lepJets = 0;
   mass_lepBJets = 0;
   mass_lepBJets_bSFup = 0;
   mass_lepBJets_bSFdn = 0;
   mass_lepBJets_lSFup = 0;
   mass_lepBJets_lSFdn = 0;
   mass_lepAK8s = 0;
   minDR_lepJets = 0;
   minDR_lepBJets = 0;
   deltaR_lepClosestJet = 0;
   PtRelLepClosestJet = 0;
   MllOS_allComb = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   inputTree = tree;
   fCurrent = -1;
   inputTree->SetMakeClass(1);

   inputTree->SetBranchAddress("event_CommonCalc", &event_CommonCalc, &b_event_CommonCalc);
   inputTree->SetBranchAddress("run_CommonCalc", &run_CommonCalc, &b_run_CommonCalc);
   inputTree->SetBranchAddress("lumi_CommonCalc", &lumi_CommonCalc, &b_lumi_CommonCalc);
   inputTree->SetBranchAddress("nPV_MultiLepCalc", &nPV_MultiLepCalc, &b_nPV_MultiLepCalc);
   inputTree->SetBranchAddress("nTrueInteractions_MultiLepCalc", &nTrueInteractions_MultiLepCalc, &b_nTrueInteractions_MultiLepCalc);
   inputTree->SetBranchAddress("isElectron", &isElectron, &b_isElectron);
   inputTree->SetBranchAddress("isMuon", &isMuon, &b_isMuon);
   inputTree->SetBranchAddress("MCPastTrigger", &MCPastTrigger, &b_MCPastTrigger);
   inputTree->SetBranchAddress("MCPastTriggerAlt", &MCPastTriggerAlt, &b_MCPastTriggerAlt);
   inputTree->SetBranchAddress("DataPastTrigger", &DataPastTrigger, &b_DataPastTrigger);
   inputTree->SetBranchAddress("DataPastTriggerAlt", &DataPastTriggerAlt, &b_DataPastTriggerAlt);
   inputTree->SetBranchAddress("isTHBW_TpTpCalc", &isTHBW_TpTpCalc, &b_isTHBW_TpTpCalc);
   inputTree->SetBranchAddress("isTHTH_TpTpCalc", &isTHTH_TpTpCalc, &b_isTHTH_TpTpCalc);
   inputTree->SetBranchAddress("isBWBW_TpTpCalc", &isBWBW_TpTpCalc, &b_isBWBW_TpTpCalc);
   inputTree->SetBranchAddress("isTZBW_TpTpCalc", &isTZBW_TpTpCalc, &b_isTZBW_TpTpCalc);
   inputTree->SetBranchAddress("isTZTH_TpTpCalc", &isTZTH_TpTpCalc, &b_isTZTH_TpTpCalc);
   inputTree->SetBranchAddress("isTZTZ_TpTpCalc", &isTZTZ_TpTpCalc, &b_isTZTZ_TpTpCalc);
   inputTree->SetBranchAddress("isBHTW_TpTpCalc", &isBHTW_TpTpCalc, &b_isBHTW_TpTpCalc);
   inputTree->SetBranchAddress("isBHBH_TpTpCalc", &isBHBH_TpTpCalc, &b_isBHBH_TpTpCalc);
   inputTree->SetBranchAddress("isTWTW_TpTpCalc", &isTWTW_TpTpCalc, &b_isTWTW_TpTpCalc);
   inputTree->SetBranchAddress("isBZTW_TpTpCalc", &isBZTW_TpTpCalc, &b_isBZTW_TpTpCalc);
   inputTree->SetBranchAddress("isBZBH_TpTpCalc", &isBZBH_TpTpCalc, &b_isBZBH_TpTpCalc);
   inputTree->SetBranchAddress("isBZBZ_TpTpCalc", &isBZBZ_TpTpCalc, &b_isBZBZ_TpTpCalc);
   inputTree->SetBranchAddress("NLeptonDecays_TpTpCalc", &NLeptonDecays_TpTpCalc, &b_NLeptonDecays_TpTpCalc);
   inputTree->SetBranchAddress("MCWeight_MultiLepCalc", &MCWeight_MultiLepCalc, &b_MCWeight_MultiLepCalc);
   inputTree->SetBranchAddress("renormWeights", &renormWeights, &b_renormWeights);
   inputTree->SetBranchAddress("pdfWeights", &pdfWeights, &b_pdfWeights);
   inputTree->SetBranchAddress("JetSF_pTNbwflat", &JetSF_pTNbwflat, &b_JetSF_pTNbwflat);
   inputTree->SetBranchAddress("JetSFup_pTNbwflat", &JetSFup_pTNbwflat, &b_JetSFup_pTNbwflat);
   inputTree->SetBranchAddress("JetSFdn_pTNbwflat", &JetSFdn_pTNbwflat, &b_JetSFdn_pTNbwflat);
   inputTree->SetBranchAddress("JetSFupwide_pTNbwflat", &JetSFupwide_pTNbwflat, &b_JetSFupwide_pTNbwflat);
   inputTree->SetBranchAddress("JetSFdnwide_pTNbwflat", &JetSFdnwide_pTNbwflat, &b_JetSFdnwide_pTNbwflat);
   inputTree->SetBranchAddress("pileupWeight", &pileupWeight, &b_pileupWeight);
   inputTree->SetBranchAddress("pileupWeightUp", &pileupWeightUp, &b_pileupWeightUp);
   inputTree->SetBranchAddress("pileupWeightDown", &pileupWeightDown, &b_pileupWeightDown);
   inputTree->SetBranchAddress("TrigEffAltWeight", &TrigEffAltWeight, &b_TrigEffAltWeight);
   inputTree->SetBranchAddress("TrigEffWeight", &TrigEffWeight, &b_TrigEffWeight);
   inputTree->SetBranchAddress("TrigEffWeightUncert", &TrigEffWeightUncert, &b_TrigEffWeightUncert);
   inputTree->SetBranchAddress("isoSF", &isoSF, &b_isoSF);
   inputTree->SetBranchAddress("lepIdSF", &lepIdSF, &b_lepIdSF);
   inputTree->SetBranchAddress("EGammaGsfSF", &EGammaGsfSF, &b_EGammaGsfSF);
   inputTree->SetBranchAddress("MuTrkSF", &MuTrkSF, &b_MuTrkSF);
   inputTree->SetBranchAddress("isPassSinglelepton", &isPassSinglelepton, &b_isPassSinglelepton);
   inputTree->SetBranchAddress("isPassDilepton", &isPassDilepton, &b_isPassDilepton);
   inputTree->SetBranchAddress("isPassTrilepton", &isPassTrilepton, &b_isPassTrilepton);
   inputTree->SetBranchAddress("isPassSingleLooselepton", &isPassSingleLooselepton, &b_isPassSingleLooselepton);
   inputTree->SetBranchAddress("isPassDiLooselepton", &isPassDiLooselepton, &b_isPassDiLooselepton);
   inputTree->SetBranchAddress("isPassTriLooselepton", &isPassTriLooselepton, &b_isPassTriLooselepton);
   inputTree->SetBranchAddress("isE", &isE, &b_isE);
   inputTree->SetBranchAddress("isM", &isM, &b_isM);
   inputTree->SetBranchAddress("isE_", &isE_, &b_isE_);
   inputTree->SetBranchAddress("isM_", &isM_, &b_isM_);
   inputTree->SetBranchAddress("isT", &isT, &b_isT);
   inputTree->SetBranchAddress("isL", &isL, &b_isL);
   inputTree->SetBranchAddress("isP", &isP, &b_isP);
   inputTree->SetBranchAddress("isF", &isF, &b_isF);
   inputTree->SetBranchAddress("isEE", &isEE, &b_isEE);
   inputTree->SetBranchAddress("isEM", &isEM, &b_isEM);
   inputTree->SetBranchAddress("isMM", &isMM, &b_isMM);
   inputTree->SetBranchAddress("isEE_", &isEE_, &b_isEE_);
   inputTree->SetBranchAddress("isEM_", &isEM_, &b_isEM_);
   inputTree->SetBranchAddress("isME_", &isME_, &b_isME_);
   inputTree->SetBranchAddress("isMM_", &isMM_, &b_isMM_);
   inputTree->SetBranchAddress("isTT", &isTT, &b_isTT);
   inputTree->SetBranchAddress("isTL", &isTL, &b_isTL);
   inputTree->SetBranchAddress("isLT", &isLT, &b_isLT);
   inputTree->SetBranchAddress("isLL", &isLL, &b_isLL);
   inputTree->SetBranchAddress("isPP", &isPP, &b_isPP);
   inputTree->SetBranchAddress("isPF", &isPF, &b_isPF);
   inputTree->SetBranchAddress("isFP", &isFP, &b_isFP);
   inputTree->SetBranchAddress("isFF", &isFF, &b_isFF);
   inputTree->SetBranchAddress("isEEE", &isEEE, &b_isEEE);
   inputTree->SetBranchAddress("isEEM", &isEEM, &b_isEEM);
   inputTree->SetBranchAddress("isEMM", &isEMM, &b_isEMM);
   inputTree->SetBranchAddress("isMMM", &isMMM, &b_isMMM);
   inputTree->SetBranchAddress("isEEE_", &isEEE_, &b_isEEE_);
   inputTree->SetBranchAddress("isEEM_", &isEEM_, &b_isEEM_);
   inputTree->SetBranchAddress("isEME_", &isEME_, &b_isEME_);
   inputTree->SetBranchAddress("isMEE_", &isMEE_, &b_isMEE_);
   inputTree->SetBranchAddress("isEMM_", &isEMM_, &b_isEMM_);
   inputTree->SetBranchAddress("isMEM_", &isMEM_, &b_isMEM_);
   inputTree->SetBranchAddress("isMME_", &isMME_, &b_isMME_);
   inputTree->SetBranchAddress("isMMM_", &isMMM_, &b_isMMM_);
   inputTree->SetBranchAddress("isTTT", &isTTT, &b_isTTT);
   inputTree->SetBranchAddress("isTTL", &isTTL, &b_isTTL);
   inputTree->SetBranchAddress("isTLT", &isTLT, &b_isTLT);
   inputTree->SetBranchAddress("isLTT", &isLTT, &b_isLTT);
   inputTree->SetBranchAddress("isTLL", &isTLL, &b_isTLL);
   inputTree->SetBranchAddress("isLTL", &isLTL, &b_isLTL);
   inputTree->SetBranchAddress("isLLT", &isLLT, &b_isLLT);
   inputTree->SetBranchAddress("isLLL", &isLLL, &b_isLLL);
   inputTree->SetBranchAddress("isPPP", &isPPP, &b_isPPP);
   inputTree->SetBranchAddress("isPPF", &isPPF, &b_isPPF);
   inputTree->SetBranchAddress("isPFP", &isPFP, &b_isPFP);
   inputTree->SetBranchAddress("isFPP", &isFPP, &b_isFPP);
   inputTree->SetBranchAddress("isPFF", &isPFF, &b_isPFF);
   inputTree->SetBranchAddress("isFPF", &isFPF, &b_isFPF);
   inputTree->SetBranchAddress("isFFP", &isFFP, &b_isFFP);
   inputTree->SetBranchAddress("isFFF", &isFFF, &b_isFFF);
//    inputTree->SetBranchAddress("MCPastTrigger", &MCPastTrigger, &b_MCPastTrigger);
//    inputTree->SetBranchAddress("MCPastTriggerAlt", &MCPastTriggerAlt, &b_MCPastTriggerAlt);
//    inputTree->SetBranchAddress("DataPastTrigger", &DataPastTrigger, &b_DataPastTrigger);
//    inputTree->SetBranchAddress("DataPastTriggerAlt", &DataPastTriggerAlt, &b_DataPastTriggerAlt);
   inputTree->SetBranchAddress("MCPastTrigger_dilep", &MCPastTrigger_dilep, &b_MCPastTrigger_dilep);
   inputTree->SetBranchAddress("DataPastTrigger_dilep", &DataPastTrigger_dilep, &b_DataPastTrigger_dilep);
   inputTree->SetBranchAddress("MCPastTrigger_dilepDZ4runH", &MCPastTrigger_dilepDZ4runH, &b_MCPastTrigger_dilepDZ4runH);
   inputTree->SetBranchAddress("DataPastTrigger_dilepDZ4runH", &DataPastTrigger_dilepDZ4runH, &b_DataPastTrigger_dilepDZ4runH);
   inputTree->SetBranchAddress("MCPastTrigger_dilepHT", &MCPastTrigger_dilepHT, &b_MCPastTrigger_dilepHT);
   inputTree->SetBranchAddress("DataPastTrigger_dilepHT", &DataPastTrigger_dilepHT, &b_DataPastTrigger_dilepHT);
   inputTree->SetBranchAddress("MCPastTrigger_trilep", &MCPastTrigger_trilep, &b_MCPastTrigger_trilep);
   inputTree->SetBranchAddress("DataPastTrigger_trilep", &DataPastTrigger_trilep, &b_DataPastTrigger_trilep);
   inputTree->SetBranchAddress("MCPastTrigger_singlelep", &MCPastTrigger_singlelep, &b_MCPastTrigger_singlelep);
   inputTree->SetBranchAddress("DataPastTrigger_singlelep", &DataPastTrigger_singlelep, &b_DataPastTrigger_singlelep);
   inputTree->SetBranchAddress("ttbarMass_TTbarMassCalc", &ttbarMass_TTbarMassCalc, &b_ttbarMass_TTbarMassCalc);
   inputTree->SetBranchAddress("corr_met_MultiLepCalc", &corr_met_MultiLepCalc, &b_corr_met_MultiLepCalc);
   inputTree->SetBranchAddress("corr_met_phi_MultiLepCalc", &corr_met_phi_MultiLepCalc, &b_corr_met_phi_MultiLepCalc);
   inputTree->SetBranchAddress("leptonPt_MultiLepCalc", &leptonPt_MultiLepCalc, &b_leptonPt_MultiLepCalc);
   inputTree->SetBranchAddress("leptonEta_MultiLepCalc", &leptonEta_MultiLepCalc, &b_leptonEta_MultiLepCalc);
   inputTree->SetBranchAddress("leptonPhi_MultiLepCalc", &leptonPhi_MultiLepCalc, &b_leptonPhi_MultiLepCalc);
   inputTree->SetBranchAddress("leptonEnergy_MultiLepCalc", &leptonEnergy_MultiLepCalc, &b_leptonEnergy_MultiLepCalc);
   inputTree->SetBranchAddress("leptonMiniIso_MultiLepCalc", &leptonMiniIso_MultiLepCalc, &b_leptonMiniIso_MultiLepCalc);
   inputTree->SetBranchAddress("leptonRelIso_MultiLepCalc", &leptonRelIso_MultiLepCalc, &b_leptonRelIso_MultiLepCalc);
   inputTree->SetBranchAddress("leptonDxy_MultiLepCalc", &leptonDxy_MultiLepCalc, &b_leptonDxy_MultiLepCalc);
   inputTree->SetBranchAddress("leptonDz_MultiLepCalc", &leptonDz_MultiLepCalc, &b_leptonDz_MultiLepCalc);
   inputTree->SetBranchAddress("leptonCharge_MultiLepCalc", &leptonCharge_MultiLepCalc, &b_leptonCharge_MultiLepCalc);
   inputTree->SetBranchAddress("elTrigPresel_MultiLepCalc", &elTrigPresel_MultiLepCalc, &b_elTrigPresel_MultiLepCalc);
   inputTree->SetBranchAddress("AllLeptonElPt_PtOrdered", &AllLeptonElPt_PtOrdered, &b_AllLeptonElPt_PtOrdered);
   inputTree->SetBranchAddress("AllLeptonElEta_PtOrdered", &AllLeptonElEta_PtOrdered, &b_AllLeptonElEta_PtOrdered);
   inputTree->SetBranchAddress("AllLeptonElPhi_PtOrdered", &AllLeptonElPhi_PtOrdered, &b_AllLeptonElPhi_PtOrdered);
   inputTree->SetBranchAddress("AllLeptonElEnergy_PtOrdered", &AllLeptonElEnergy_PtOrdered, &b_AllLeptonElEnergy_PtOrdered);
   inputTree->SetBranchAddress("AllLeptonElMiniIso_PtOrdered", &AllLeptonElMiniIso_PtOrdered, &b_AllLeptonElMiniIso_PtOrdered);
   inputTree->SetBranchAddress("AllLeptonElFlavor_PtOrdered", &AllLeptonElFlavor_PtOrdered, &b_AllLeptonElFlavor_PtOrdered);
   inputTree->SetBranchAddress("AllLeptonElIsTight_PtOrdered", &AllLeptonElIsTight_PtOrdered, &b_AllLeptonElIsTight_PtOrdered);
   inputTree->SetBranchAddress("AllLeptonElCount_PtOrdered", &AllLeptonElCount_PtOrdered, &b_AllLeptonElCount_PtOrdered);
   inputTree->SetBranchAddress("AllLeptonElIsPrompt_PtOrdered", &AllLeptonElIsPrompt_PtOrdered, &b_AllLeptonElIsPrompt_PtOrdered);
   inputTree->SetBranchAddress("AllLeptonElIsMatched_PtOrdered", &AllLeptonElIsMatched_PtOrdered, &b_AllLeptonElIsMatched_PtOrdered);
   inputTree->SetBranchAddress("AllLeptonElIsFromB_PtOrdered", &AllLeptonElIsFromB_PtOrdered, &b_AllLeptonElIsFromB_PtOrdered);
   inputTree->SetBranchAddress("AllLeptonElIsFromC_PtOrdered", &AllLeptonElIsFromC_PtOrdered, &b_AllLeptonElIsFromC_PtOrdered);
   inputTree->SetBranchAddress("AllLeptonElIsFromHL_PtOrdered", &AllLeptonElIsFromHL_PtOrdered, &b_AllLeptonElIsFromHL_PtOrdered);
   inputTree->SetBranchAddress("AllLeptonElIsFromPh_PtOrdered", &AllLeptonElIsFromPh_PtOrdered, &b_AllLeptonElIsFromPh_PtOrdered);
   inputTree->SetBranchAddress("AllLeptonElIsFromL_PtOrdered", &AllLeptonElIsFromL_PtOrdered, &b_AllLeptonElIsFromL_PtOrdered);
   inputTree->SetBranchAddress("AllLeptonElPt_PtOrderedOnly", &AllLeptonElPt_PtOrderedOnly, &b_AllLeptonElPt_PtOrderedOnly);
   inputTree->SetBranchAddress("AllLeptonElEta_PtOrderedOnly", &AllLeptonElEta_PtOrderedOnly, &b_AllLeptonElEta_PtOrderedOnly);
   inputTree->SetBranchAddress("AllLeptonElPhi_PtOrderedOnly", &AllLeptonElPhi_PtOrderedOnly, &b_AllLeptonElPhi_PtOrderedOnly);
   inputTree->SetBranchAddress("AllLeptonElEnergy_PtOrderedOnly", &AllLeptonElEnergy_PtOrderedOnly, &b_AllLeptonElEnergy_PtOrderedOnly);
   inputTree->SetBranchAddress("AllLeptonElMiniIso_PtOrderedOnly", &AllLeptonElMiniIso_PtOrderedOnly, &b_AllLeptonElMiniIso_PtOrderedOnly);
   inputTree->SetBranchAddress("AllLeptonElFlavor_PtOrderedOnly", &AllLeptonElFlavor_PtOrderedOnly, &b_AllLeptonElFlavor_PtOrderedOnly);
   inputTree->SetBranchAddress("AllLeptonElIsTight_PtOrderedOnly", &AllLeptonElIsTight_PtOrderedOnly, &b_AllLeptonElIsTight_PtOrderedOnly);
   inputTree->SetBranchAddress("AllLeptonElPt_PtOrderedOnly_top3", &AllLeptonElPt_PtOrderedOnly_top3, &b_AllLeptonElPt_PtOrderedOnly_top3);
   inputTree->SetBranchAddress("AllLeptonElEta_PtOrderedOnly_top3", &AllLeptonElEta_PtOrderedOnly_top3, &b_AllLeptonElEta_PtOrderedOnly_top3);
   inputTree->SetBranchAddress("AllLeptonElPhi_PtOrderedOnly_top3", &AllLeptonElPhi_PtOrderedOnly_top3, &b_AllLeptonElPhi_PtOrderedOnly_top3);
   inputTree->SetBranchAddress("AllLeptonElEnergy_PtOrderedOnly_top3", &AllLeptonElEnergy_PtOrderedOnly_top3, &b_AllLeptonElEnergy_PtOrderedOnly_top3);
   inputTree->SetBranchAddress("AllLeptonElMiniIso_PtOrderedOnly_top3", &AllLeptonElMiniIso_PtOrderedOnly_top3, &b_AllLeptonElMiniIso_PtOrderedOnly_top3);
   inputTree->SetBranchAddress("AllLeptonElFlavor_PtOrderedOnly_top3", &AllLeptonElFlavor_PtOrderedOnly_top3, &b_AllLeptonElFlavor_PtOrderedOnly_top3);
   inputTree->SetBranchAddress("AllLeptonElIsTight_PtOrderedOnly_top3", &AllLeptonElIsTight_PtOrderedOnly_top3, &b_AllLeptonElIsTight_PtOrderedOnly_top3);
   inputTree->SetBranchAddress("AllLeptonMuPt_PtOrdered", &AllLeptonMuPt_PtOrdered, &b_AllLeptonMuPt_PtOrdered);
   inputTree->SetBranchAddress("AllLeptonMuEta_PtOrdered", &AllLeptonMuEta_PtOrdered, &b_AllLeptonMuEta_PtOrdered);
   inputTree->SetBranchAddress("AllLeptonMuPhi_PtOrdered", &AllLeptonMuPhi_PtOrdered, &b_AllLeptonMuPhi_PtOrdered);
   inputTree->SetBranchAddress("AllLeptonMuEnergy_PtOrdered", &AllLeptonMuEnergy_PtOrdered, &b_AllLeptonMuEnergy_PtOrdered);
   inputTree->SetBranchAddress("AllLeptonMuMiniIso_PtOrdered", &AllLeptonMuMiniIso_PtOrdered, &b_AllLeptonMuMiniIso_PtOrdered);
   inputTree->SetBranchAddress("AllLeptonMuFlavor_PtOrdered", &AllLeptonMuFlavor_PtOrdered, &b_AllLeptonMuFlavor_PtOrdered);
   inputTree->SetBranchAddress("AllLeptonMuIsTight_PtOrdered", &AllLeptonMuIsTight_PtOrdered, &b_AllLeptonMuIsTight_PtOrdered);
   inputTree->SetBranchAddress("AllLeptonMuCount_PtOrdered", &AllLeptonMuCount_PtOrdered, &b_AllLeptonMuCount_PtOrdered);
   inputTree->SetBranchAddress("AllLeptonMuIsPrompt_PtOrdered", &AllLeptonMuIsPrompt_PtOrdered, &b_AllLeptonMuIsPrompt_PtOrdered);
   inputTree->SetBranchAddress("AllLeptonMuIsMatched_PtOrdered", &AllLeptonMuIsMatched_PtOrdered, &b_AllLeptonMuIsMatched_PtOrdered);
   inputTree->SetBranchAddress("AllLeptonMuIsFromB_PtOrdered", &AllLeptonMuIsFromB_PtOrdered, &b_AllLeptonMuIsFromB_PtOrdered);
   inputTree->SetBranchAddress("AllLeptonMuIsFromC_PtOrdered", &AllLeptonMuIsFromC_PtOrdered, &b_AllLeptonMuIsFromC_PtOrdered);
   inputTree->SetBranchAddress("AllLeptonMuIsFromHL_PtOrdered", &AllLeptonMuIsFromHL_PtOrdered, &b_AllLeptonMuIsFromHL_PtOrdered);
   inputTree->SetBranchAddress("AllLeptonMuIsFromPh_PtOrdered", &AllLeptonMuIsFromPh_PtOrdered, &b_AllLeptonMuIsFromPh_PtOrdered);
   inputTree->SetBranchAddress("AllLeptonMuIsFromL_PtOrdered", &AllLeptonMuIsFromL_PtOrdered, &b_AllLeptonMuIsFromL_PtOrdered);
   inputTree->SetBranchAddress("AllLeptonMuPt_PtOrderedOnly", &AllLeptonMuPt_PtOrderedOnly, &b_AllLeptonMuPt_PtOrderedOnly);
   inputTree->SetBranchAddress("AllLeptonMuEta_PtOrderedOnly", &AllLeptonMuEta_PtOrderedOnly, &b_AllLeptonMuEta_PtOrderedOnly);
   inputTree->SetBranchAddress("AllLeptonMuPhi_PtOrderedOnly", &AllLeptonMuPhi_PtOrderedOnly, &b_AllLeptonMuPhi_PtOrderedOnly);
   inputTree->SetBranchAddress("AllLeptonMuEnergy_PtOrderedOnly", &AllLeptonMuEnergy_PtOrderedOnly, &b_AllLeptonMuEnergy_PtOrderedOnly);
   inputTree->SetBranchAddress("AllLeptonMuMiniIso_PtOrderedOnly", &AllLeptonMuMiniIso_PtOrderedOnly, &b_AllLeptonMuMiniIso_PtOrderedOnly);
   inputTree->SetBranchAddress("AllLeptonMuFlavor_PtOrderedOnly", &AllLeptonMuFlavor_PtOrderedOnly, &b_AllLeptonMuFlavor_PtOrderedOnly);
   inputTree->SetBranchAddress("AllLeptonMuIsTight_PtOrderedOnly", &AllLeptonMuIsTight_PtOrderedOnly, &b_AllLeptonMuIsTight_PtOrderedOnly);
   inputTree->SetBranchAddress("AllLeptonMuPt_PtOrderedOnly_top3", &AllLeptonMuPt_PtOrderedOnly_top3, &b_AllLeptonMuPt_PtOrderedOnly_top3);
   inputTree->SetBranchAddress("AllLeptonMuEta_PtOrderedOnly_top3", &AllLeptonMuEta_PtOrderedOnly_top3, &b_AllLeptonMuEta_PtOrderedOnly_top3);
   inputTree->SetBranchAddress("AllLeptonMuPhi_PtOrderedOnly_top3", &AllLeptonMuPhi_PtOrderedOnly_top3, &b_AllLeptonMuPhi_PtOrderedOnly_top3);
   inputTree->SetBranchAddress("AllLeptonMuEnergy_PtOrderedOnly_top3", &AllLeptonMuEnergy_PtOrderedOnly_top3, &b_AllLeptonMuEnergy_PtOrderedOnly_top3);
   inputTree->SetBranchAddress("AllLeptonMuMiniIso_PtOrderedOnly_top3", &AllLeptonMuMiniIso_PtOrderedOnly_top3, &b_AllLeptonMuMiniIso_PtOrderedOnly_top3);
   inputTree->SetBranchAddress("AllLeptonMuFlavor_PtOrderedOnly_top3", &AllLeptonMuFlavor_PtOrderedOnly_top3, &b_AllLeptonMuFlavor_PtOrderedOnly_top3);
   inputTree->SetBranchAddress("AllLeptonMuIsTight_PtOrderedOnly_top3", &AllLeptonMuIsTight_PtOrderedOnly_top3, &b_AllLeptonMuIsTight_PtOrderedOnly_top3);
   inputTree->SetBranchAddress("AllLeptonPt_PtOrdered", &AllLeptonPt_PtOrdered, &b_AllLeptonPt_PtOrdered);
   inputTree->SetBranchAddress("AllLeptonEta_PtOrdered", &AllLeptonEta_PtOrdered, &b_AllLeptonEta_PtOrdered);
   inputTree->SetBranchAddress("AllLeptonPhi_PtOrdered", &AllLeptonPhi_PtOrdered, &b_AllLeptonPhi_PtOrdered);
   inputTree->SetBranchAddress("AllLeptonEnergy_PtOrdered", &AllLeptonEnergy_PtOrdered, &b_AllLeptonEnergy_PtOrdered);
   inputTree->SetBranchAddress("AllLeptonMiniIso_PtOrdered", &AllLeptonMiniIso_PtOrdered, &b_AllLeptonMiniIso_PtOrdered);
   inputTree->SetBranchAddress("AllLeptonFlavor_PtOrdered", &AllLeptonFlavor_PtOrdered, &b_AllLeptonFlavor_PtOrdered);
   inputTree->SetBranchAddress("AllLeptonIsTight_PtOrdered", &AllLeptonIsTight_PtOrdered, &b_AllLeptonIsTight_PtOrdered);
   inputTree->SetBranchAddress("AllLeptonCharge_PtOrdered", &AllLeptonCharge_PtOrdered, &b_AllLeptonCharge_PtOrdered);
   inputTree->SetBranchAddress("AllLeptonCount_PtOrdered", &AllLeptonCount_PtOrdered, &b_AllLeptonCount_PtOrdered);
   inputTree->SetBranchAddress("AllLeptonIsPrompt_PtOrdered", &AllLeptonIsPrompt_PtOrdered, &b_AllLeptonIsPrompt_PtOrdered);
   inputTree->SetBranchAddress("AllLeptonIsMatched_PtOrdered", &AllLeptonIsMatched_PtOrdered, &b_AllLeptonIsMatched_PtOrdered);
   inputTree->SetBranchAddress("AllLeptonIsFromB_PtOrdered", &AllLeptonIsFromB_PtOrdered, &b_AllLeptonIsFromB_PtOrdered);
   inputTree->SetBranchAddress("AllLeptonIsFromC_PtOrdered", &AllLeptonIsFromC_PtOrdered, &b_AllLeptonIsFromC_PtOrdered);
   inputTree->SetBranchAddress("AllLeptonIsFromHL_PtOrdered", &AllLeptonIsFromHL_PtOrdered, &b_AllLeptonIsFromHL_PtOrdered);
   inputTree->SetBranchAddress("AllLeptonIsFromPh_PtOrdered", &AllLeptonIsFromPh_PtOrdered, &b_AllLeptonIsFromPh_PtOrdered);
   inputTree->SetBranchAddress("AllLeptonIsFromL_PtOrdered", &AllLeptonIsFromL_PtOrdered, &b_AllLeptonIsFromL_PtOrdered);
   inputTree->SetBranchAddress("AllLeptonPt_PtOrderedOnly", &AllLeptonPt_PtOrderedOnly, &b_AllLeptonPt_PtOrderedOnly);
   inputTree->SetBranchAddress("AllLeptonEta_PtOrderedOnly", &AllLeptonEta_PtOrderedOnly, &b_AllLeptonEta_PtOrderedOnly);
   inputTree->SetBranchAddress("AllLeptonPhi_PtOrderedOnly", &AllLeptonPhi_PtOrderedOnly, &b_AllLeptonPhi_PtOrderedOnly);
   inputTree->SetBranchAddress("AllLeptonEnergy_PtOrderedOnly", &AllLeptonEnergy_PtOrderedOnly, &b_AllLeptonEnergy_PtOrderedOnly);
   inputTree->SetBranchAddress("AllLeptonMiniIso_PtOrderedOnly", &AllLeptonMiniIso_PtOrderedOnly, &b_AllLeptonMiniIso_PtOrderedOnly);
   inputTree->SetBranchAddress("AllLeptonFlavor_PtOrderedOnly", &AllLeptonFlavor_PtOrderedOnly, &b_AllLeptonFlavor_PtOrderedOnly);
   inputTree->SetBranchAddress("AllLeptonIsTight_PtOrderedOnly", &AllLeptonIsTight_PtOrderedOnly, &b_AllLeptonIsTight_PtOrderedOnly);
   inputTree->SetBranchAddress("AllLeptonCharge_PtOrderedOnly", &AllLeptonCharge_PtOrderedOnly, &b_AllLeptonCharge_PtOrderedOnly);
   inputTree->SetBranchAddress("AllLeptonPt_PtOrderedOnly_top3", &AllLeptonPt_PtOrderedOnly_top3, &b_AllLeptonPt_PtOrderedOnly_top3);
   inputTree->SetBranchAddress("AllLeptonEta_PtOrderedOnly_top3", &AllLeptonEta_PtOrderedOnly_top3, &b_AllLeptonEta_PtOrderedOnly_top3);
   inputTree->SetBranchAddress("AllLeptonPhi_PtOrderedOnly_top3", &AllLeptonPhi_PtOrderedOnly_top3, &b_AllLeptonPhi_PtOrderedOnly_top3);
   inputTree->SetBranchAddress("AllLeptonEnergy_PtOrderedOnly_top3", &AllLeptonEnergy_PtOrderedOnly_top3, &b_AllLeptonEnergy_PtOrderedOnly_top3);
   inputTree->SetBranchAddress("AllLeptonMiniIso_PtOrderedOnly_top3", &AllLeptonMiniIso_PtOrderedOnly_top3, &b_AllLeptonMiniIso_PtOrderedOnly_top3);
   inputTree->SetBranchAddress("AllLeptonFlavor_PtOrderedOnly_top3", &AllLeptonFlavor_PtOrderedOnly_top3, &b_AllLeptonFlavor_PtOrderedOnly_top3);
   inputTree->SetBranchAddress("AllLeptonIsTight_PtOrderedOnly_top3", &AllLeptonIsTight_PtOrderedOnly_top3, &b_AllLeptonIsTight_PtOrderedOnly_top3);
   inputTree->SetBranchAddress("AllLeptonCharge_PtOrderedOnly_top3", &AllLeptonCharge_PtOrderedOnly_top3, &b_AllLeptonCharge_PtOrderedOnly_top3);
   inputTree->SetBranchAddress("TightLeptonPt_PtOrdered", &TightLeptonPt_PtOrdered, &b_TightLeptonPt_PtOrdered);
   inputTree->SetBranchAddress("TightLeptonEta_PtOrdered", &TightLeptonEta_PtOrdered, &b_TightLeptonEta_PtOrdered);
   inputTree->SetBranchAddress("TightLeptonPhi_PtOrdered", &TightLeptonPhi_PtOrdered, &b_TightLeptonPhi_PtOrdered);
   inputTree->SetBranchAddress("TightLeptonEnergy_PtOrdered", &TightLeptonEnergy_PtOrdered, &b_TightLeptonEnergy_PtOrdered);
   inputTree->SetBranchAddress("TightLeptonMiniIso_PtOrdered", &TightLeptonMiniIso_PtOrdered, &b_TightLeptonMiniIso_PtOrdered);
   inputTree->SetBranchAddress("TightLeptonFlavor_PtOrdered", &TightLeptonFlavor_PtOrdered, &b_TightLeptonFlavor_PtOrdered);
   inputTree->SetBranchAddress("TightLeptonCharge_PtOrdered", &TightLeptonCharge_PtOrdered, &b_TightLeptonCharge_PtOrdered);
   inputTree->SetBranchAddress("AK4JetPt_MultiLepCalc_PtOrdered", &AK4JetPt_MultiLepCalc_PtOrdered, &b_AK4JetPt_MultiLepCalc_PtOrdered);
   inputTree->SetBranchAddress("AK4JetEta_MultiLepCalc_PtOrdered", &AK4JetEta_MultiLepCalc_PtOrdered, &b_AK4JetEta_MultiLepCalc_PtOrdered);
   inputTree->SetBranchAddress("AK4JetPhi_MultiLepCalc_PtOrdered", &AK4JetPhi_MultiLepCalc_PtOrdered, &b_AK4JetPhi_MultiLepCalc_PtOrdered);
   inputTree->SetBranchAddress("AK4JetEnergy_MultiLepCalc_PtOrdered", &AK4JetEnergy_MultiLepCalc_PtOrdered, &b_AK4JetEnergy_MultiLepCalc_PtOrdered);
   inputTree->SetBranchAddress("AK4JetBTag_MultiLepCalc_PtOrdered", &AK4JetBTag_MultiLepCalc_PtOrdered, &b_AK4JetBTag_MultiLepCalc_PtOrdered);
   inputTree->SetBranchAddress("AK4JetBTag_bSFup_MultiLepCalc_PtOrdered", &AK4JetBTag_bSFup_MultiLepCalc_PtOrdered, &b_AK4JetBTag_bSFup_MultiLepCalc_PtOrdered);
   inputTree->SetBranchAddress("AK4JetBTag_bSFdn_MultiLepCalc_PtOrdered", &AK4JetBTag_bSFdn_MultiLepCalc_PtOrdered, &b_AK4JetBTag_bSFdn_MultiLepCalc_PtOrdered);
   inputTree->SetBranchAddress("AK4JetBTag_lSFup_MultiLepCalc_PtOrdered", &AK4JetBTag_lSFup_MultiLepCalc_PtOrdered, &b_AK4JetBTag_lSFup_MultiLepCalc_PtOrdered);
   inputTree->SetBranchAddress("AK4JetBTag_lSFdn_MultiLepCalc_PtOrdered", &AK4JetBTag_lSFdn_MultiLepCalc_PtOrdered, &b_AK4JetBTag_lSFdn_MultiLepCalc_PtOrdered);
   inputTree->SetBranchAddress("HadronicVHtID_JetSubCalc", &HadronicVHtID_JetSubCalc, &b_HadronicVHtID_JetSubCalc);
   inputTree->SetBranchAddress("HadronicVHtPt_JetSubCalc", &HadronicVHtPt_JetSubCalc, &b_HadronicVHtPt_JetSubCalc);
   inputTree->SetBranchAddress("HadronicVHtEta_JetSubCalc", &HadronicVHtEta_JetSubCalc, &b_HadronicVHtEta_JetSubCalc);
   inputTree->SetBranchAddress("HadronicVHtPhi_JetSubCalc", &HadronicVHtPhi_JetSubCalc, &b_HadronicVHtPhi_JetSubCalc);
   inputTree->SetBranchAddress("HadronicVHtEnergy_JetSubCalc", &HadronicVHtEnergy_JetSubCalc, &b_HadronicVHtEnergy_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8Pt_JetSubCalc_PtOrdered", &theJetAK8Pt_JetSubCalc_PtOrdered, &b_theJetAK8Pt_JetSubCalc_PtOrdered);
   inputTree->SetBranchAddress("theJetAK8Eta_JetSubCalc_PtOrdered", &theJetAK8Eta_JetSubCalc_PtOrdered, &b_theJetAK8Eta_JetSubCalc_PtOrdered);
   inputTree->SetBranchAddress("theJetAK8Phi_JetSubCalc_PtOrdered", &theJetAK8Phi_JetSubCalc_PtOrdered, &b_theJetAK8Phi_JetSubCalc_PtOrdered);
   inputTree->SetBranchAddress("theJetAK8Energy_JetSubCalc_PtOrdered", &theJetAK8Energy_JetSubCalc_PtOrdered, &b_theJetAK8Energy_JetSubCalc_PtOrdered);
   inputTree->SetBranchAddress("theJetAK8PrunedMass_JetSubCalc_PtOrdered", &theJetAK8PrunedMass_JetSubCalc_PtOrdered, &b_theJetAK8PrunedMass_JetSubCalc_PtOrdered);
   inputTree->SetBranchAddress("theJetAK8PrunedMassWtagUncerts_JetSubCalc_PtOrdered", &theJetAK8PrunedMassWtagUncerts_JetSubCalc_PtOrdered, &b_theJetAK8PrunedMassWtagUncerts_JetSubCalc_PtOrdered);
   inputTree->SetBranchAddress("theJetAK8SoftDropMass_JetSubCalc_PtOrdered", &theJetAK8SoftDropMass_JetSubCalc_PtOrdered, &b_theJetAK8SoftDropMass_JetSubCalc_PtOrdered);
   inputTree->SetBranchAddress("theJetAK8MaxSubCSV_JetSubCalc_PtOrdered", &theJetAK8MaxSubCSV_JetSubCalc_PtOrdered, &b_theJetAK8MaxSubCSV_JetSubCalc_PtOrdered);
   inputTree->SetBranchAddress("theJetAK8NjettinessTau1_JetSubCalc_PtOrdered", &theJetAK8NjettinessTau1_JetSubCalc_PtOrdered, &b_theJetAK8NjettinessTau1_JetSubCalc_PtOrdered);
   inputTree->SetBranchAddress("theJetAK8NjettinessTau2_JetSubCalc_PtOrdered", &theJetAK8NjettinessTau2_JetSubCalc_PtOrdered, &b_theJetAK8NjettinessTau2_JetSubCalc_PtOrdered);
   inputTree->SetBranchAddress("theJetAK8NjettinessTau3_JetSubCalc_PtOrdered", &theJetAK8NjettinessTau3_JetSubCalc_PtOrdered, &b_theJetAK8NjettinessTau3_JetSubCalc_PtOrdered);
   inputTree->SetBranchAddress("theJetAK8Wmatch_JetSubCalc_PtOrdered", &theJetAK8Wmatch_JetSubCalc_PtOrdered, &b_theJetAK8Wmatch_JetSubCalc_PtOrdered);
   inputTree->SetBranchAddress("theJetAK8Tmatch_JetSubCalc_PtOrdered", &theJetAK8Tmatch_JetSubCalc_PtOrdered, &b_theJetAK8Tmatch_JetSubCalc_PtOrdered);
   inputTree->SetBranchAddress("theJetAK8Zmatch_JetSubCalc_PtOrdered", &theJetAK8Zmatch_JetSubCalc_PtOrdered, &b_theJetAK8Zmatch_JetSubCalc_PtOrdered);
   inputTree->SetBranchAddress("theJetAK8Hmatch_JetSubCalc_PtOrdered", &theJetAK8Hmatch_JetSubCalc_PtOrdered, &b_theJetAK8Hmatch_JetSubCalc_PtOrdered);
   inputTree->SetBranchAddress("theJetAK8MatchedPt_JetSubCalc_PtOrdered", &theJetAK8MatchedPt_JetSubCalc_PtOrdered, &b_theJetAK8MatchedPt_JetSubCalc_PtOrdered);
   inputTree->SetBranchAddress("genJetPt_MultiLepCalc", &genJetPt_MultiLepCalc, &b_genJetPt_MultiLepCalc);
   inputTree->SetBranchAddress("genJetEta_MultiLepCalc", &genJetEta_MultiLepCalc, &b_genJetEta_MultiLepCalc);
   inputTree->SetBranchAddress("genJetPhi_MultiLepCalc", &genJetPhi_MultiLepCalc, &b_genJetPhi_MultiLepCalc);
   inputTree->SetBranchAddress("genJetEnergy_MultiLepCalc", &genJetEnergy_MultiLepCalc, &b_genJetEnergy_MultiLepCalc);
   inputTree->SetBranchAddress("BJetLeadPt", &BJetLeadPt, &b_BJetLeadPt);
   inputTree->SetBranchAddress("BJetLeadPt_shifts", &BJetLeadPt_shifts, &b_BJetLeadPt_shifts);
   inputTree->SetBranchAddress("WJetLeadPt", &WJetLeadPt, &b_WJetLeadPt);
   inputTree->SetBranchAddress("WJetLeadPt_shifts", &WJetLeadPt_shifts, &b_WJetLeadPt_shifts);
   inputTree->SetBranchAddress("TJetLeadPt", &TJetLeadPt, &b_TJetLeadPt);
   inputTree->SetBranchAddress("TJetLeadPt_shifts", &TJetLeadPt_shifts, &b_TJetLeadPt_shifts);
   inputTree->SetBranchAddress("AK4HTpMETpLepPt", &AK4HTpMETpLepPt, &b_AK4HTpMETpLepPt);
   inputTree->SetBranchAddress("AK4HT", &AK4HT, &b_AK4HT);
   inputTree->SetBranchAddress("ddBkgWeights", &ddBkgWeights, &b_ddBkgWeights);
   inputTree->SetBranchAddress("ddBkgWeights_scan", &ddBkgWeights_scan, &b_ddBkgWeights_scan);
   inputTree->SetBranchAddress("ddBkgWeights_scan_muFR", &ddBkgWeights_scan_muFR, &b_ddBkgWeights_scan_muFR);
   inputTree->SetBranchAddress("ddBkgWeights_scan_elFR", &ddBkgWeights_scan_elFR, &b_ddBkgWeights_scan_elFR);
   inputTree->SetBranchAddress("NJets_MultiLepCalc", &NJets_MultiLepCalc, &b_NJets_MultiLepCalc);
   inputTree->SetBranchAddress("NJetsAK8_JetSubCalc", &NJetsAK8_JetSubCalc, &b_NJetsAK8_JetSubCalc);
   inputTree->SetBranchAddress("NJetsBTagwithSF_MultiLepCalc", &NJetsBTagwithSF_MultiLepCalc, &b_NJetsBTagwithSF_MultiLepCalc);
   inputTree->SetBranchAddress("NJetsBTagwithSF_MultiLepCalc_noLepCorr", &NJetsBTagwithSF_MultiLepCalc_noLepCorr, &b_NJetsBTagwithSF_MultiLepCalc_noLepCorr);
   inputTree->SetBranchAddress("NJetsBTagwithSF_MultiLepCalc_shifts", &NJetsBTagwithSF_MultiLepCalc_shifts, &b_NJetsBTagwithSF_MultiLepCalc_shifts);
   inputTree->SetBranchAddress("NJetsBTagwithSF_MultiLepCalc_noLepCorr_shifts", &NJetsBTagwithSF_MultiLepCalc_noLepCorr_shifts, &b_NJetsBTagwithSF_MultiLepCalc_noLepCorr_shifts);
   inputTree->SetBranchAddress("NJetsHtagged", &NJetsHtagged, &b_NJetsHtagged);
   inputTree->SetBranchAddress("NJetsHtagged_shifts", &NJetsHtagged_shifts, &b_NJetsHtagged_shifts);
   inputTree->SetBranchAddress("topPt", &topPt, &b_topPt);
   inputTree->SetBranchAddress("topPtGen", &topPtGen, &b_topPtGen);
   inputTree->SetBranchAddress("topMass", &topMass, &b_topMass);
   inputTree->SetBranchAddress("minMleppBjet", &minMleppBjet, &b_minMleppBjet);
   inputTree->SetBranchAddress("minMleppBjet_shifts", &minMleppBjet_shifts, &b_minMleppBjet_shifts);
   inputTree->SetBranchAddress("minMleppJet", &minMleppJet, &b_mixnMleppJet);
   inputTree->SetBranchAddress("genTopPt", &genTopPt, &b_genTopPt);
   inputTree->SetBranchAddress("genAntiTopPt", &genAntiTopPt, &b_genAntiTopPt);
   inputTree->SetBranchAddress("topPtWeight", &topPtWeight, &b_topPtWeight);
   inputTree->SetBranchAddress("topPtWeightPast400", &topPtWeightPast400, &b_topPtWeightPast400);
   inputTree->SetBranchAddress("topPtWeightHighPt", &topPtWeightHighPt, &b_topPtWeightHighPt);
   inputTree->SetBranchAddress("deltaRlepJetInMinMljet", &deltaRlepJetInMinMljet, &b_deltaRlepJetInMinMljet);
   inputTree->SetBranchAddress("deltaRlepbJetInMinMlb", &deltaRlepbJetInMinMlb, &b_deltaRlepbJetInMinMlb);
   inputTree->SetBranchAddress("deltaRlepbJetInMinMlb_shifts", &deltaRlepbJetInMinMlb_shifts, &b_deltaRlepbJetInMinMlb_shifts);
   inputTree->SetBranchAddress("deltaPhilepJetInMinMljet", &deltaPhilepJetInMinMljet, &b_deltaPhilepJetInMinMljet);
   inputTree->SetBranchAddress("deltaPhilepbJetInMinMlb", &deltaPhilepbJetInMinMlb, &b_deltaPhilepbJetInMinMlb);
   inputTree->SetBranchAddress("deltaPhilepbJetInMinMlb_shifts", &deltaPhilepbJetInMinMlb_shifts, &b_deltaPhilepbJetInMinMlb_shifts);
   inputTree->SetBranchAddress("deltaRtopWjet", &deltaRtopWjet, &b_deltaRtopWjet);
   inputTree->SetBranchAddress("deltaRlepWjet", &deltaRlepWjet, &b_deltaRlepWjet);
   inputTree->SetBranchAddress("deltaRlepTjet", &deltaRlepTjet, &b_deltaRlepTjet);
   inputTree->SetBranchAddress("deltaPhitopWjet", &deltaPhitopWjet, &b_deltaPhitopWjet);
   inputTree->SetBranchAddress("deltaPhilepWjet", &deltaPhilepWjet, &b_deltaPhilepWjet);
   inputTree->SetBranchAddress("deltaPhilepTjet", &deltaPhilepTjet, &b_deltaPhilepTjet);
   inputTree->SetBranchAddress("deltaRtopWjet_shifts", &deltaRtopWjet_shifts, &b_deltaRtopWjet_shifts);
   inputTree->SetBranchAddress("deltaRlepWjet_shifts", &deltaRlepWjet_shifts, &b_deltaRlepWjet_shifts);
   inputTree->SetBranchAddress("deltaRlepTjet_shifts", &deltaRlepTjet_shifts, &b_deltaRlepTjet_shifts);
   inputTree->SetBranchAddress("deltaPhitopWjet_shifts", &deltaPhitopWjet_shifts, &b_deltaPhitopWjet_shifts);
   inputTree->SetBranchAddress("deltaPhilepWjet_shifts", &deltaPhilepWjet_shifts, &b_deltaPhilepWjet_shifts);
   inputTree->SetBranchAddress("deltaPhilepTjet_shifts", &deltaPhilepTjet_shifts, &b_deltaPhilepTjet_shifts);
   inputTree->SetBranchAddress("NJetsWtagged_0p6", &NJetsWtagged_0p6, &b_NJetsWtagged_0p6);
   inputTree->SetBranchAddress("NJetsWtagged_0p6_shifts", &NJetsWtagged_0p6_shifts, &b_NJetsWtagged_0p6_shifts);
   inputTree->SetBranchAddress("NJetsTtagged_0p81", &NJetsTtagged_0p81, &b_NJetsTtagged_0p81);
   inputTree->SetBranchAddress("NJetsTtagged_0p81_shifts", &NJetsTtagged_0p81_shifts, &b_NJetsTtagged_0p81_shifts);
   inputTree->SetBranchAddress("minDR_leadAK8otherAK8", &minDR_leadAK8otherAK8, &b_minDR_leadAK8otherAK8);
   inputTree->SetBranchAddress("minDR_lepAK8", &minDR_lepAK8, &b_minDR_lepAK8);
   inputTree->SetBranchAddress("minDR_lepJet", &minDR_lepJet, &b_minDR_lepJet);
   inputTree->SetBranchAddress("minDR_lep1Jet", &minDR_lep1Jet, &b_minDR_lep1Jet);
   inputTree->SetBranchAddress("minDR_lep2Jet", &minDR_lep2Jet, &b_minDR_lep2Jet);
   inputTree->SetBranchAddress("minDR_lep3Jet", &minDR_lep3Jet, &b_minDR_lep3Jet);
   inputTree->SetBranchAddress("minDR_lepMET", &minDR_lepMET, &b_minDR_lepMET);
   inputTree->SetBranchAddress("minDR_METJet", &minDR_METJet, &b_minDR_METJet);
   inputTree->SetBranchAddress("ptRel_lepJet", &ptRel_lepJet, &b_ptRel_lepJet);
   inputTree->SetBranchAddress("MT_lepMet", &MT_lepMet, &b_MT_lepMet);
   inputTree->SetBranchAddress("deltaR_lepJets", &deltaR_lepJets, &b_deltaR_lepJets);
   inputTree->SetBranchAddress("deltaR_lep1Jets", &deltaR_lep1Jets, &b_deltaR_lep1Jets);
   inputTree->SetBranchAddress("deltaR_lep2Jets", &deltaR_lep2Jets, &b_deltaR_lep2Jets);
   inputTree->SetBranchAddress("deltaR_lep3Jets", &deltaR_lep3Jets, &b_deltaR_lep3Jets);
   inputTree->SetBranchAddress("deltaR_lepMETs", &deltaR_lepMETs, &b_deltaR_lepMETs);
   inputTree->SetBranchAddress("deltaR_METJets", &deltaR_METJets, &b_deltaR_METJets);
   inputTree->SetBranchAddress("deltaR_lepBJets", &deltaR_lepBJets, &b_deltaR_lepBJets);
   inputTree->SetBranchAddress("deltaR_lepBJets_bSFup", &deltaR_lepBJets_bSFup, &b_deltaR_lepBJets_bSFup);
   inputTree->SetBranchAddress("deltaR_lepBJets_bSFdn", &deltaR_lepBJets_bSFdn, &b_deltaR_lepBJets_bSFdn);
   inputTree->SetBranchAddress("deltaR_lepBJets_lSFup", &deltaR_lepBJets_lSFup, &b_deltaR_lepBJets_lSFup);
   inputTree->SetBranchAddress("deltaR_lepBJets_lSFdn", &deltaR_lepBJets_lSFdn, &b_deltaR_lepBJets_lSFdn);
   inputTree->SetBranchAddress("deltaR_lepAK8s", &deltaR_lepAK8s, &b_deltaR_lepAK8s);
   inputTree->SetBranchAddress("deltaPhi_lepJets", &deltaPhi_lepJets, &b_deltaPhi_lepJets);
   inputTree->SetBranchAddress("deltaPhi_lepBJets", &deltaPhi_lepBJets, &b_deltaPhi_lepBJets);
   inputTree->SetBranchAddress("deltaPhi_lepBJets_bSFup", &deltaPhi_lepBJets_bSFup, &b_deltaPhi_lepBJets_bSFup);
   inputTree->SetBranchAddress("deltaPhi_lepBJets_bSFdn", &deltaPhi_lepBJets_bSFdn, &b_deltaPhi_lepBJets_bSFdn);
   inputTree->SetBranchAddress("deltaPhi_lepBJets_lSFup", &deltaPhi_lepBJets_lSFup, &b_deltaPhi_lepBJets_lSFup);
   inputTree->SetBranchAddress("deltaPhi_lepBJets_lSFdn", &deltaPhi_lepBJets_lSFdn, &b_deltaPhi_lepBJets_lSFdn);
   inputTree->SetBranchAddress("deltaPhi_lepAK8s", &deltaPhi_lepAK8s, &b_deltaPhi_lepAK8s);
   inputTree->SetBranchAddress("mass_lepJets", &mass_lepJets, &b_mass_lepJets);
   inputTree->SetBranchAddress("mass_lepBJets", &mass_lepBJets, &b_mass_lepBJets);
   inputTree->SetBranchAddress("mass_lepBJets_bSFup", &mass_lepBJets_bSFup, &b_mass_lepBJets_bSFup);
   inputTree->SetBranchAddress("mass_lepBJets_bSFdn", &mass_lepBJets_bSFdn, &b_mass_lepBJets_bSFdn);
   inputTree->SetBranchAddress("mass_lepBJets_lSFup", &mass_lepBJets_lSFup, &b_mass_lepBJets_lSFup);
   inputTree->SetBranchAddress("mass_lepBJets_lSFdn", &mass_lepBJets_lSFdn, &b_mass_lepBJets_lSFdn);
   inputTree->SetBranchAddress("mass_lepAK8s", &mass_lepAK8s, &b_mass_lepAK8s);
   inputTree->SetBranchAddress("minDR_lepJets", &minDR_lepJets, &b_minDR_lepJets);
   inputTree->SetBranchAddress("minDR_lepBJets", &minDR_lepBJets, &b_minDR_lepBJets);
   inputTree->SetBranchAddress("deltaR_lepClosestJet", &deltaR_lepClosestJet, &b_deltaR_lepClosestJet);
   inputTree->SetBranchAddress("PtRelLepClosestJet", &PtRelLepClosestJet, &b_PtRelLepClosestJet);
   inputTree->SetBranchAddress("Mll_sameFlavorOS", &Mll_sameFlavorOS, &b_Mll_sameFlavorOS);
   inputTree->SetBranchAddress("MllOS_allComb", &MllOS_allComb, &b_MllOS_allComb);
   inputTree->SetBranchAddress("MllOS_allComb_min", &MllOS_allComb_min, &b_MllOS_allComb_min);
   inputTree->SetBranchAddress("MllOS_allComb_max", &MllOS_allComb_max, &b_MllOS_allComb_max);
   inputTree->SetBranchAddress("Mlll", &Mlll, &b_Mlll);
   Notify();
}

Bool_t step2_fakeRateCount::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void step2_fakeRateCount::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!inputTree) return;
   inputTree->Show(entry);
}
Int_t step2_fakeRateCount::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef step2_fakeRateCount_cxx
