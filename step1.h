//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Mon Nov 16 20:39:17 2015 by ROOT version 6.02/05
// from TTree ljmet/ljmet
// found on file: /eos/uscms/store/user/lpcljm/LJMet_1lep_110915/X53X53_M-800_RH_TuneCUETP8M1_13TeV-madgraph-pythia8_25ns/X53X53_M-800_RH_TuneCUETP8M1_13TeV-madgraph-pythia8_25ns_1.root
//////////////////////////////////////////////////////////

#ifndef step1_h
#define step1_h

#include <iostream>
#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include "TH1.h"

// Header file for the classes stored in the TTree if any.
#include "vector"
#include "TLorentzVector.h"

using namespace std;

class step1 {
public :
   TTree          *inputTree;   //!pointer to the analyzed TTree or TChain
   TFile          *inputFile, *outputFile;
   string         SampleName;
   Int_t           fCurrent; //!current Tree number in a TChain

   Bool_t          isSig;
   Bool_t          isTOP;
   Bool_t          isMadgraphBkg;
   Bool_t          isPowhegBkg;
   Bool_t          isMadgraphAmc,isMadgraphWZZ;
   Bool_t          isMC;
   Bool_t          isTT;
   Bool_t          isTTV;
   Bool_t          isST;
   Bool_t          isTTincMtt0to700;
   Bool_t          isTTincMtt0to1000;
   Bool_t          isTTincMtt700to1000;
   Bool_t          isTTincMtt1000toInf;
   Bool_t          outBWBW;
   Bool_t          outTZBW;
   Bool_t          outTHBW;
   Bool_t          outTZTH;
   Bool_t          outTZTZ;
   Bool_t          outTHTH;
   Bool_t          outTWTW;
   Bool_t          outBZTW;
   Bool_t          outBHTW;
   Bool_t          outBZBH;
   Bool_t          outBZBZ;
   Bool_t          outBHBH;
   Int_t           SigMass;
   
   // Fixed size dimensions of array or collections stored in the TTree if any.

   // NEW BRANCHES

   Int_t           isElectron;
   Int_t           isMuon;
   Int_t           MCPastTrigger;
   Int_t           MCPastTriggerAlt;
   Int_t           DataPastTrigger;
   Int_t           DataPastTriggerAlt;
   Float_t         pileupWeight;
   Float_t         pileupWeightUp;
   Float_t         pileupWeightDown;
   Float_t         TrigEffAltWeight;
   Float_t         TrigEffWeight;
   Float_t         TrigEffWeightUncert;
   Float_t         TrigEffWeightUp;
   Float_t         TrigEffWeightDn;
   Float_t         isoSF;
   Float_t         lepIdSF;
   Float_t         elIdSys;
   Float_t         MuTrkSF;
   Float_t         EGammaGsfSF;
   Float_t         JetSF_80X;
   Float_t         JetSFup_80X;
   Float_t         JetSFdn_80X;
   Float_t         JetSF_pTNbwflat;
   Float_t         JetSFup_pTNbwflat;
   Float_t         JetSFdn_pTNbwflat;
   Float_t         JetSFupwide_pTNbwflat;
   Float_t         JetSFdnwide_pTNbwflat;
   vector<double>  renormWeights;
   vector<double>  alphaSWeights;
   vector<double>  pdfWeights;
   vector<double>  pdfNewWeights;
   Float_t         pdfNewNominalWeight;
   vector<double>  pdfWeights4LHC;
   vector<double>  pdfWeightsMSTW;

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

   Int_t           NJets_MultiLepCalc;
   Int_t           NJetsBTag_MultiLepCalc;
   Int_t           NJetsBTagwithSF_MultiLepCalc;
   vector<int>     NJetsBTagwithSF_MultiLepCalc_shifts;
   Int_t           NJetsBTagwithSF_MultiLepCalc_noLepCorr;
   vector<int>     NJetsBTagwithSF_MultiLepCalc_noLepCorr_shifts;
   vector<double>  AK4JetPt_MultiLepCalc_PtOrdered;
   vector<double>  AK4JetEta_MultiLepCalc_PtOrdered;
   vector<double>  AK4JetPhi_MultiLepCalc_PtOrdered;
   vector<double>  AK4JetEnergy_MultiLepCalc_PtOrdered;
   vector<int>     AK4JetFlav_MultiLepCalc_PtOrdered;
   vector<double>  AK4JetCSV_MultiLepCalc_PtOrdered;
   vector<double>  AK4JetDeepCSVb_MultiLepCalc_PtOrdered;
   vector<double>  AK4JetDeepCSVbb_MultiLepCalc_PtOrdered;
   vector<int>     AK4JetBTag_MultiLepCalc_PtOrdered;
   vector<int>     AK4JetBTag_bSFup_MultiLepCalc_PtOrdered;
   vector<int>     AK4JetBTag_bSFdn_MultiLepCalc_PtOrdered;
   vector<int>     AK4JetBTag_lSFup_MultiLepCalc_PtOrdered;
   vector<int>     AK4JetBTag_lSFdn_MultiLepCalc_PtOrdered;


   Float_t         AK4HTpMETpLepPt;
   Float_t         AK4HT;

   Float_t         minMleppJet;
   Float_t         deltaRlepJetInMinMljet;
   Float_t         deltaPhilepJetInMinMljet;
   Float_t         minDR_lepJet;
   Float_t         minDR_lep1Jet;
   Float_t         minDR_lep2Jet;
   Float_t         minDR_lep3Jet;
   Float_t         minDR_lepMET;
   Float_t         minDR_METJet;
   Float_t         minDPhi_METJet;
   Float_t         ptRel_minDRlepJet;
   Float_t         ptRel_minDRlep1Jet;
   Float_t         ptRel_minDRlep2Jet;
   Float_t         ptRel_minDRlep3Jet;
   Float_t         MT_lepMet;
   vector<double>  deltaR_lepJets;
   vector<double>  deltaR_lep1Jets;
   vector<double>  deltaR_lep2Jets;
   vector<double>  deltaR_lep3Jets;
   vector<double>  ptRel_lepJets;
   vector<double>  ptRel_lep1Jets;
   vector<double>  ptRel_lep2Jets;
   vector<double>  ptRel_lep3Jets;
   vector<double>  deltaR_lepMETs;
   vector<double>  deltaR_METJets;
   vector<double>  deltaPhi_lepJets;
   vector<double>  mass_lepJets;

   Float_t         BJetLeadPt;
   Float_t         minMleppBjetPt;
   Float_t         minMleppBjet;
   Float_t         minMlllBjet;
   Float_t         deltaRlepbJetInMinMlb;
   Float_t         deltaPhilepbJetInMinMlb;
   vector<double>  BJetLeadPt_shifts;
   vector<double>  minMleppBjetPt_shifts;
   vector<double>  minMleppBjet_shifts;
   vector<double>  minMlllBjet_shifts;
   vector<double>  deltaRlepbJetInMinMlb_shifts;
   vector<double>  deltaPhilepbJetInMinMlb_shifts;
   vector<double>  deltaR_lepBJets;
   vector<double>  deltaR_lepBJets_bSFup;
   vector<double>  deltaR_lepBJets_bSFdn;
   vector<double>  deltaR_lepBJets_lSFup;
   vector<double>  deltaR_lepBJets_lSFdn;
   vector<double>  deltaPhi_lepBJets;
   vector<double>  deltaPhi_lepBJets_bSFup;
   vector<double>  deltaPhi_lepBJets_bSFdn;
   vector<double>  deltaPhi_lepBJets_lSFup;
   vector<double>  deltaPhi_lepBJets_lSFdn;
   vector<double>  mass_lepBJets;
   vector<double>  mass_lepBJets_bSFup;
   vector<double>  mass_lepBJets_bSFdn;
   vector<double>  mass_lepBJets_lSFup;
   vector<double>  mass_lepBJets_lSFdn;

   Int_t           NJetsAK8_JetSubCalc;
   Float_t         minDR_leadAK8otherAK8;
   Float_t         minDR_lepAK8;
   vector<double>  deltaR_lepAK8s;
   vector<double>  deltaPhi_lepAK8s;
   vector<double>  mass_lepAK8s;
   vector<double>  theJetAK8PrunedMass_JetSubCalc_PtOrdered;
   vector<double>  theJetAK8PrunedMassWtagUncerts_JetSubCalc_PtOrdered;
   vector<double>  theJetAK8NjettinessTau1_JetSubCalc_PtOrdered;
   vector<double>  theJetAK8NjettinessTau2_JetSubCalc_PtOrdered;
   vector<double>  theJetAK8Pt_JetSubCalc_PtOrdered;
   vector<double>  theJetAK8Eta_JetSubCalc_PtOrdered;
   vector<double>  theJetAK8Phi_JetSubCalc_PtOrdered;
   vector<double>  theJetAK8Mass_JetSubCalc_PtOrdered;
   vector<double>  theJetAK8Energy_JetSubCalc_PtOrdered;
   vector<double>  theJetAK8SoftDropMass_JetSubCalc_PtOrdered;
   vector<double>  theJetAK8NjettinessTau3_JetSubCalc_PtOrdered;
   vector<double>  theJetAK8MaxSubCSV_JetSubCalc_PtOrdered;
   vector<int>     theJetAK8Wmatch_JetSubCalc_PtOrdered;
   vector<int>     theJetAK8Tmatch_JetSubCalc_PtOrdered;
   vector<int>     theJetAK8Zmatch_JetSubCalc_PtOrdered;
   vector<int>     theJetAK8Hmatch_JetSubCalc_PtOrdered;
   vector<double>  theJetAK8MatchedPt_JetSubCalc_PtOrdered;

   Int_t           NJetsWtagged_0p6;
   Float_t         WJetLeadPt;
   Float_t         deltaRtopWjet;
   Float_t         deltaPhitopWjet;
   Float_t         deltaRlepWjet;
   Float_t         deltaPhilepWjet;
   vector<int>     NJetsWtagged_0p6_shifts;
   vector<double>  WJetLeadPt_shifts;
   vector<double>  deltaRtopWjet_shifts;  
   vector<double>  deltaPhitopWjet_shifts; 
   vector<double>  deltaRlepWjet_shifts;  
   vector<double>  deltaPhilepWjet_shifts; 

   Int_t           NJetsTtagged_0p81;
   Float_t         TJetLeadPt;
   Float_t         deltaRlepTjet;
   Float_t         deltaPhilepTjet;
   vector<int>     NJetsTtagged_0p81_shifts;
   vector<double>  TJetLeadPt_shifts;
   vector<double>  deltaRlepTjet_shifts;  
   vector<double>  deltaPhilepTjet_shifts; 

   Int_t           NJetsHtagged;
   vector<int>     NJetsHtagged_shifts;

   Float_t         topPt;
   Float_t         topPtGen;
   Float_t         topMass;
   Float_t         genTopPt;
   Float_t         genAntiTopPt;
   Float_t         topPtWeight;
   Float_t         topPtWeightPast400;
   Float_t         topPtWeightHighPt;

   // Declaration of leaf types
   Bool_t          flagBadMu_MultiLepCalc;
   Bool_t          flagDupMu_MultiLepCalc;
   Bool_t          isBHBH_TpTpCalc;
   Bool_t          isBHTW_TpTpCalc;
   Bool_t          isBWBW_TpTpCalc;
   Bool_t          isBZBH_TpTpCalc;
   Bool_t          isBZBZ_TpTpCalc;
   Bool_t          isBZTW_TpTpCalc;
   Bool_t          isTHBW_TpTpCalc;
   Bool_t          isTHTH_TpTpCalc;
   Bool_t          isTWTW_TpTpCalc;
   Bool_t          isTZBW_TpTpCalc;
   Bool_t          isTZTH_TpTpCalc;
   Bool_t          isTZTZ_TpTpCalc;
   Bool_t          isTau_MultiLepCalc;
   Int_t           NBsFromTTbar_TTbarMassCalc;
   Int_t           NCharm_TTbarMassCalc;
   Int_t           NExtraBs_TTbarMassCalc;
   Int_t           NExtraCs_TTbarMassCalc;
   Int_t           NExtraLs_TTbarMassCalc;
   Int_t           NLeptonDecays_TpTpCalc;
   Int_t           NLight_TTbarMassCalc;
   Int_t           NPartonsfromHEPUEP_MultiLepCalc;
   Int_t           NTotalBs_TTbarMassCalc;
   Int_t           NWdecaysFromTTbar_TTbarMassCalc;
   Int_t           dataE_MultiLepCalc;
   Int_t           dataM_MultiLepCalc;
   Int_t           genTDLID_MultiLepCalc;
   Int_t           isTT_TTbarMassCalc;
   Int_t           isTTbb_TTbarMassCalc;
   Int_t           isTTbj_TTbarMassCalc;
   Int_t           isTTcc_TTbarMassCalc;
   Int_t           isTTcj_TTbarMassCalc;
   Int_t           isTTlf_TTbarMassCalc;
   Int_t           isTTll_TTbarMassCalc;
   Int_t           lumi_CommonCalc;
   Int_t           nAllJets_CommonCalc;
   Int_t           nLooseMuons_CommonCalc;
   Int_t           nPV_MultiLepCalc;
   Int_t           nPileupInteractions_MultiLepCalc;
   Int_t           nSelBtagJets_CommonCalc;
   Int_t           nSelElectrons_CommonCalc;
   Int_t           nSelJets_CommonCalc;
   Int_t           nTightMuons_CommonCalc;
   Int_t           nTrueInteractions_MultiLepCalc;
   Int_t           run_CommonCalc;
   Long64_t        event_CommonCalc;
   Double_t        L1NonPrefiringProb_CommonCalc;
   Double_t        L1NonPrefiringProbUp_CommonCalc;
   Double_t        L1NonPrefiringProbDown_CommonCalc;
   Double_t        AK4HT_jerdn_MultiLepCalc;
   Double_t        AK4HT_jerup_MultiLepCalc;
   Double_t        AK4HT_jesdn_MultiLepCalc;
   Double_t        AK4HT_jesup_MultiLepCalc;
   Double_t        AK4HT_MultiLepCalc;
   Double_t        HTfromHEPUEP_MultiLepCalc;
   Double_t        MCWeight_MultiLepCalc;
   Double_t        corr_met_jerdn_phi_MultiLepCalc;
   Double_t        corr_met_jerdn_MultiLepCalc;
   Double_t        corr_met_jerup_phi_MultiLepCalc;
   Double_t        corr_met_jerup_MultiLepCalc;
   Double_t        corr_met_jesdn_phi_MultiLepCalc;
   Double_t        corr_met_jesdn_MultiLepCalc;
   Double_t        corr_met_jesup_phi_MultiLepCalc;
   Double_t        corr_met_jesup_MultiLepCalc;
   Double_t        corr_met_phi_MultiLepCalc;
   Double_t        corr_met_MultiLepCalc;
   Double_t        corr_metnohf_phi_MultiLepCalc;
   Double_t        corr_metnohf_MultiLepCalc;
   Double_t        genTDLEnergy_MultiLepCalc;
   Double_t        genTDLEta_MultiLepCalc;
   Double_t        genTDLPhi_MultiLepCalc;
   Double_t        genTDLPt_MultiLepCalc;
   Double_t        met_phi_MultiLepCalc;
   Double_t        met_MultiLepCalc;
   Double_t        metnohf_phi_MultiLepCalc;
   Double_t        metnohf_MultiLepCalc;
   Double_t        theJetHT_JetSubCalc;
   Double_t        theJetLeadPt_JetSubCalc;
   Double_t        theJetSubLeadPt_JetSubCalc;
   Double_t        ttbarMass_TTbarMassCalc;
   vector<int>     *AK4JetBTag_bSFdn_MultiLepCalc;
   vector<int>     *AK4JetBTag_bSFup_MultiLepCalc;
   vector<int>     *AK4JetBTag_lSFdn_MultiLepCalc;
   vector<int>     *AK4JetBTag_lSFup_MultiLepCalc;
   vector<int>     *AK4JetBTag_MultiLepCalc;
   vector<int>     *AK4JetFlav_MultiLepCalc;
   vector<int>     *HadronicVHtID_JetSubCalc;
   vector<int>     *HadronicVHtStatus_JetSubCalc;
   vector<int>     *HdecayID_TpTpCalc;
   vector<int>     *HdecayIndex_TpTpCalc;
   vector<int>     *LHEweightids_MultiLepCalc;
   vector<int>     *LeptonID_TpTpCalc;
   vector<int>     *LeptonParentID_TpTpCalc;
   vector<int>     *WdecayID_TpTpCalc;
   vector<int>     *WdecayIndex_TpTpCalc;
   vector<int>     *ZdecayID_TpTpCalc;
   vector<int>     *ZdecayIndex_TpTpCalc;
   vector<int>     *allTopsID_TTbarMassCalc;
   vector<int>     *allTopsStatus_TTbarMassCalc;
   vector<int>     *bPrimeID_TpTpCalc;
   vector<int>     *bPrimeNDaughters_TpTpCalc;
   vector<int>     *bPrimeStatus_TpTpCalc;
   vector<int>     *bosonID_TpTpCalc;
   vector<int>     *elChargeConsistent_MultiLepCalc;
   vector<int>     *elCharge_MultiLepCalc;
   vector<int>     *elCtfCharge_MultiLepCalc;
   vector<int>     *elGsfCharge_MultiLepCalc;
   vector<int>     *elIsEBEE_MultiLepCalc;
   vector<int>     *elIsMVALooseIso_MultiLepCalc;
   vector<int>     *elIsMVALoose_MultiLepCalc;
   vector<int>     *elIsMVATightIso90_MultiLepCalc;
   vector<int>     *elIsMVATight90_MultiLepCalc;
   vector<int>     *elMHits_MultiLepCalc;
   vector<int>     *elMatched_MultiLepCalc;
   vector<int>     *elMother_id_MultiLepCalc;
   vector<int>     *elMother_status_MultiLepCalc;
   vector<int>     *elNotConversion_MultiLepCalc;
   vector<int>     *elNumberOfMothers_MultiLepCalc;
   vector<int>     *elPdgId_MultiLepCalc;
   vector<int>     *elScPixCharge_MultiLepCalc;
   vector<int>     *elStatus_MultiLepCalc;
   vector<int>     *elVtxFitConv_MultiLepCalc;
   vector<int>     *electron_1_hltmatched_MultiLepCalc;
   vector<int>     *genBSLID_MultiLepCalc;
   vector<int>     *genID_MultiLepCalc;
   vector<int>     *genIndex_MultiLepCalc;
   vector<int>     *genMotherID_MultiLepCalc;
   vector<int>     *genMotherIndex_MultiLepCalc;
   vector<int>     *genStatus_MultiLepCalc;
   vector<int>     *maxProb_JetSubCalc;
   vector<int>     *muCharge_MultiLepCalc;
   vector<int>     *muGlobal_MultiLepCalc;
   vector<int>     *muIsGlobalHighPt_MultiLepCalc;
   vector<int>     *muIsLoose_MultiLepCalc;
   vector<int>     *muIsMediumPrompt_MultiLepCalc;
   vector<int>     *muIsMedium_MultiLepCalc;
   vector<int>     *muIsMiniIsoLoose_MultiLepCalc;
   vector<int>     *muIsMiniIsoMedium_MultiLepCalc;
   vector<int>     *muIsMiniIsoTight_MultiLepCalc;
   vector<int>     *muIsMiniIsoVeryTight_MultiLepCalc;
   vector<int>     *muIsMvaLoose_MultiLepCalc;
   vector<int>     *muIsMvaMedium_MultiLepCalc;
   vector<int>     *muIsMvaTight_MultiLepCalc;
   vector<int>     *muIsTight_MultiLepCalc;
   vector<int>     *muIsTrkHighPt_MultiLepCalc;
   vector<int>     *muMatched_MultiLepCalc;
   vector<int>     *muMother_id_MultiLepCalc;
   vector<int>     *muMother_status_MultiLepCalc;
   vector<int>     *muNMatchedStations_MultiLepCalc;
   vector<int>     *muNTrackerLayers_MultiLepCalc;
   vector<int>     *muNValMuHits_MultiLepCalc;
   vector<int>     *muNValPixelHits_MultiLepCalc;
   vector<int>     *muNumberOfMothers_MultiLepCalc;
   vector<int>     *muPdgId_MultiLepCalc;
   vector<int>     *muStatus_MultiLepCalc;
   vector<int>     *muon_1_hltmatched_MultiLepCalc;
   vector<int>     *quarkID_TpTpCalc;
   vector<int>     *tPrimeID_TpTpCalc;
   vector<int>     *tPrimeNDaughters_TpTpCalc;
   vector<int>     *tPrimeStatus_TpTpCalc;
   vector<int>     *theJetAK8SDSubjetHFlav_JetSubCalc;
   vector<int>     *theJetAK8SDSubjetIndex_JetSubCalc;
   vector<int>     *theJetAK8SDSubjetNDeepCSVL_JetSubCalc;
   vector<int>     *theJetAK8SDSubjetNDeepCSVMSF_JetSubCalc;
   vector<int>     *theJetAK8SDSubjetNDeepCSVM_bSFdn_JetSubCalc;
   vector<int>     *theJetAK8SDSubjetNDeepCSVM_bSFup_JetSubCalc;
   vector<int>     *theJetAK8SDSubjetNDeepCSVM_lSFdn_JetSubCalc;
   vector<int>     *theJetAK8SDSubjetNDeepCSVM_lSFup_JetSubCalc;
   vector<int>     *theJetAK8SDSubjetSize_JetSubCalc;
   vector<int>     *theJetAK8SJIndex_JetSubCalc;
   vector<int>     *theJetAK8SJSize_JetSubCalc;
   vector<int>     *theJetAK8nDaughters_JetSubCalc;
   vector<int>     *theJetBTag_JetSubCalc;
   vector<int>     *theJetBTag_bSFdn_JetSubCalc;
   vector<int>     *theJetBTag_bSFup_JetSubCalc;
   vector<int>     *theJetBTag_lSFdn_JetSubCalc;
   vector<int>     *theJetBTag_lSFup_JetSubCalc;
   vector<int>     *theJetHFlav_JetSubCalc;
   vector<int>     *theJetPFlav_JetSubCalc;
   vector<int>     *theJetnDaughters_JetSubCalc;
   vector<int>     *topID_TTbarMassCalc;
   vector<int>     *topWID_TTbarMassCalc;
   vector<int>     *topbID_TTbarMassCalc;
   vector<int>     *viSelMCTriggersEl_MultiLepCalc;
   vector<int>     *viSelMCTriggersMu_MultiLepCalc;
   vector<int>     *viSelTriggersEl_MultiLepCalc;
   vector<int>     *viSelTriggersMu_MultiLepCalc;
   vector<double>  *AK4JetDeepCSVb_MultiLepCalc;
   vector<double>  *AK4JetDeepCSVbb_MultiLepCalc;
   vector<double>  *AK4JetDeepCSVc_MultiLepCalc;
   vector<double>  *AK4JetDeepCSVudsg_MultiLepCalc;
   vector<double>  *AK4JetCSV_MultiLepCalc;
   vector<double>  *AK4JetEnergy_jerdn_MultiLepCalc;
   vector<double>  *AK4JetEnergy_jerup_MultiLepCalc;
   vector<double>  *AK4JetEnergy_jesdn_MultiLepCalc;
   vector<double>  *AK4JetEnergy_jesup_MultiLepCalc;
   vector<double>  *AK4JetEnergy_MultiLepCalc;
   vector<double>  *AK4JetEta_MultiLepCalc;
   vector<double>  *AK4JetPhi_MultiLepCalc;
   vector<double>  *AK4JetPt_jerdn_MultiLepCalc;
   vector<double>  *AK4JetPt_jerup_MultiLepCalc;
   vector<double>  *AK4JetPt_jesdn_MultiLepCalc;
   vector<double>  *AK4JetPt_jesup_MultiLepCalc;
   vector<double>  *AK4JetPt_MultiLepCalc;
   vector<double>  *AK8JetCSV_MultiLepCalc;
   vector<double>  *AK8JetDoubleB_MultiLepCalc;
   vector<double>  *AK8JetEnergy_jerdn_MultiLepCalc;
   vector<double>  *AK8JetEnergy_jerup_MultiLepCalc;
   vector<double>  *AK8JetEnergy_jesdn_MultiLepCalc;
   vector<double>  *AK8JetEnergy_jesup_MultiLepCalc;
   vector<double>  *AK8JetEnergy_MultiLepCalc;
   vector<double>  *AK8JetEta_MultiLepCalc;
   vector<double>  *AK8JetPhi_MultiLepCalc;
   vector<double>  *AK8JetPt_jerdn_MultiLepCalc;
   vector<double>  *AK8JetPt_jerup_MultiLepCalc;
   vector<double>  *AK8JetPt_jesdn_MultiLepCalc;
   vector<double>  *AK8JetPt_jesup_MultiLepCalc;
   vector<double>  *AK8JetPt_MultiLepCalc;
   vector<double>  *HadronicVHtD0E_JetSubCalc;
   vector<double>  *HadronicVHtD0Eta_JetSubCalc;
   vector<double>  *HadronicVHtD0Phi_JetSubCalc;
   vector<double>  *HadronicVHtD0Pt_JetSubCalc;
   vector<double>  *HadronicVHtD1E_JetSubCalc;
   vector<double>  *HadronicVHtD1Eta_JetSubCalc;
   vector<double>  *HadronicVHtD1Phi_JetSubCalc;
   vector<double>  *HadronicVHtD1Pt_JetSubCalc;
   vector<double>  *HadronicVHtD2E_JetSubCalc;
   vector<double>  *HadronicVHtD2Eta_JetSubCalc;
   vector<double>  *HadronicVHtD2Phi_JetSubCalc;
   vector<double>  *HadronicVHtD2Pt_JetSubCalc;
   vector<double>  *HadronicVHtEnergy_JetSubCalc;
   vector<double>  *HadronicVHtEta_JetSubCalc;
   vector<double>  *HadronicVHtPhi_JetSubCalc;
   vector<double>  *HadronicVHtPt_JetSubCalc;
   vector<double>  *HdecayEnergy_TpTpCalc;
   vector<double>  *HdecayEta_TpTpCalc;
   vector<double>  *HdecayPhi_TpTpCalc;
   vector<double>  *HdecayPt_TpTpCalc;
   vector<double>  *LHEweights_MultiLepCalc;
   vector<double>  *NewPDFweights_MultiLepCalc;
   vector<double>  *LeptonEnergy_TpTpCalc;
   vector<double>  *LeptonEta_TpTpCalc;
   vector<double>  *LeptonPhi_TpTpCalc;
   vector<double>  *LeptonPt_TpTpCalc;
   vector<double>  *WdecayEnergy_TpTpCalc;
   vector<double>  *WdecayEta_TpTpCalc;
   vector<double>  *WdecayPhi_TpTpCalc;
   vector<double>  *WdecayPt_TpTpCalc;
   vector<double>  *ZdecayEnergy_TpTpCalc;
   vector<double>  *ZdecayEta_TpTpCalc;
   vector<double>  *ZdecayPhi_TpTpCalc;
   vector<double>  *ZdecayPt_TpTpCalc;
   vector<double>  *allTopsEnergy_TTbarMassCalc;
   vector<double>  *allTopsEta_TTbarMassCalc;
   vector<double>  *allTopsPhi_TTbarMassCalc;
   vector<double>  *allTopsPt_TTbarMassCalc;
   vector<double>  *bPrimeEnergy_TpTpCalc;
   vector<double>  *bPrimeEta_TpTpCalc;
   vector<double>  *bPrimeMass_TpTpCalc;
   vector<double>  *bPrimePhi_TpTpCalc;
   vector<double>  *bPrimePt_TpTpCalc;
   vector<double>  *bosonEnergy_TpTpCalc;
   vector<double>  *bosonEta_TpTpCalc;
   vector<double>  *bosonPhi_TpTpCalc;
   vector<double>  *bosonPt_TpTpCalc;
   vector<double>  *elAEff_MultiLepCalc;
   vector<double>  *elChIso_MultiLepCalc;
   vector<double>  *elD0_MultiLepCalc;
   vector<double>  *elDEtaSCTkAtVtx_MultiLepCalc;
   vector<double>  *elDPhiSCTkAtVtx_MultiLepCalc;
   vector<double>  *elDR03TkSumPt_MultiLepCalc;
   vector<double>  *elDZ_MultiLepCalc;
   vector<double>  *elDeta_MultiLepCalc;
   vector<double>  *elDphi_MultiLepCalc;
   vector<double>  *elDxy_MultiLepCalc;
   vector<double>  *elEcalPFClusterIso_MultiLepCalc;
   vector<double>  *elEnergy_MultiLepCalc;
   vector<double>  *elEtaVtx_MultiLepCalc;
   vector<double>  *elEta_MultiLepCalc;
   vector<double>  *elGen_Reco_dr_MultiLepCalc;
   vector<double>  *elHcalPFClusterIso_MultiLepCalc;
   vector<double>  *elHoE_MultiLepCalc;
   vector<double>  *elIsLooseBarrel_MultiLepCalc;
   vector<double>  *elIsLooseEndCap_MultiLepCalc;
   vector<double>  *elIsMediumBarrel_MultiLepCalc;
   vector<double>  *elIsMediumEndCap_MultiLepCalc;
   vector<double>  *elIsTightBarrel_MultiLepCalc;
   vector<double>  *elIsTightEndCap_MultiLepCalc;
   vector<double>  *elIsVetoBarrel_MultiLepCalc;
   vector<double>  *elIsVetoEndCap_MultiLepCalc;
   vector<double>  *elMVAValue_iso_MultiLepCalc;
   vector<double>  *elMVAValue_MultiLepCalc;
   vector<double>  *elMatchedEnergy_MultiLepCalc;
   vector<double>  *elMatchedEta_MultiLepCalc;
   vector<double>  *elMatchedPhi_MultiLepCalc;
   vector<double>  *elMatchedPt_MultiLepCalc;
   vector<double>  *elMiniIso_MultiLepCalc;
   vector<double>  *elMother_energy_MultiLepCalc;
   vector<double>  *elMother_eta_MultiLepCalc;
   vector<double>  *elMother_phi_MultiLepCalc;
   vector<double>  *elMother_pt_MultiLepCalc;
   vector<double>  *elNhIso_MultiLepCalc;
   vector<double>  *elOoemoop_MultiLepCalc;
   vector<double>  *elPFEta_MultiLepCalc;
   vector<double>  *elPFPhi_MultiLepCalc;
   vector<double>  *elPhIso_MultiLepCalc;
   vector<double>  *elPhiVtx_MultiLepCalc;
   vector<double>  *elPhi_MultiLepCalc;
   vector<double>  *elPt_MultiLepCalc;
   vector<double>  *elRelIso_MultiLepCalc;
   vector<double>  *elRhoIso_MultiLepCalc;
   vector<double>  *elSCE_MultiLepCalc;
   vector<double>  *elSihih_MultiLepCalc;
   vector<double>  *evtWeightsMC_MultiLepCalc;
   vector<double>  *genBSLEnergy_MultiLepCalc;
   vector<double>  *genBSLEta_MultiLepCalc;
   vector<double>  *genBSLPhi_MultiLepCalc;
   vector<double>  *genBSLPt_MultiLepCalc;
   vector<double>  *genEnergy_MultiLepCalc;
   vector<double>  *genEta_MultiLepCalc;
   vector<double>  *genJetEnergy_MultiLepCalc;
   vector<double>  *genJetEta_MultiLepCalc;
   vector<double>  *genJetPhi_MultiLepCalc;
   vector<double>  *genJetPt_MultiLepCalc;
   vector<double>  *genPhi_MultiLepCalc;
   vector<double>  *genPt_MultiLepCalc;
   vector<double>  *muChIso_MultiLepCalc;
   vector<double>  *muChi2_MultiLepCalc;
   vector<double>  *muDxy_MultiLepCalc;
   vector<double>  *muDz_MultiLepCalc;
   vector<double>  *muEnergy_MultiLepCalc;
   vector<double>  *muEta_MultiLepCalc;
   vector<double>  *muGIso_MultiLepCalc;
   vector<double>  *muGen_Reco_dr_MultiLepCalc;
   vector<double>  *muInnerEta_MultiLepCalc;
   vector<double>  *muInnerPhi_MultiLepCalc;
   vector<double>  *muInnerPt_MultiLepCalc;
   vector<double>  *muMatchedEnergy_MultiLepCalc;
   vector<double>  *muMatchedEta_MultiLepCalc;
   vector<double>  *muMatchedPhi_MultiLepCalc;
   vector<double>  *muMatchedPt_MultiLepCalc;
   vector<double>  *muMiniIsoDB_MultiLepCalc;
   vector<double>  *muMiniIso_MultiLepCalc;
   vector<double>  *muMother_energy_MultiLepCalc;
   vector<double>  *muMother_eta_MultiLepCalc;
   vector<double>  *muMother_phi_MultiLepCalc;
   vector<double>  *muMother_pt_MultiLepCalc;
   vector<double>  *muNhIso_MultiLepCalc;
   vector<double>  *muPhi_MultiLepCalc;
   vector<double>  *muPt_MultiLepCalc;
   vector<double>  *muPuIso_MultiLepCalc;
   vector<double>  *muRelIso_MultiLepCalc;
   vector<double>  *quarkEnergy_TpTpCalc;
   vector<double>  *quarkEta_TpTpCalc;
   vector<double>  *quarkPhi_TpTpCalc;
   vector<double>  *quarkPt_TpTpCalc;
   vector<double>  *tPrimeEnergy_TpTpCalc;
   vector<double>  *tPrimeEta_TpTpCalc;
   vector<double>  *tPrimeMass_TpTpCalc;
   vector<double>  *tPrimePhi_TpTpCalc;
   vector<double>  *tPrimePt_TpTpCalc;
   vector<double>  *theJetAK8CHSEta_JetSubCalc;
   vector<double>  *theJetAK8CHSMass_JetSubCalc;
   vector<double>  *theJetAK8CHSPhi_JetSubCalc;
   vector<double>  *theJetAK8CHSPrunedMass_JetSubCalc;
   vector<double>  *theJetAK8CHSPt_JetSubCalc;
   vector<double>  *theJetAK8CHSSoftDropMass_JetSubCalc;
   vector<double>  *theJetAK8CHSTau1_JetSubCalc;
   vector<double>  *theJetAK8CHSTau2_JetSubCalc;
   vector<double>  *theJetAK8CHSTau3_JetSubCalc;
   vector<double>  *theJetAK8CSV_JetSubCalc;
   vector<double>  *theJetAK8DoubleB_JetSubCalc;
   vector<double>  *theJetAK8Energy_JetSubCalc;
   vector<double>  *theJetAK8Eta_JetSubCalc;
   vector<double>  *theJetAK8GenDR_JetSubCalc;
   vector<double>  *theJetAK8GenMass_JetSubCalc;
   vector<double>  *theJetAK8GenPt_JetSubCalc;
   vector<double>  *theJetAK8JetCharge_JetSubCalc;
   vector<double>  *theJetAK8Mass_JetSubCalc;
   vector<double>  *theJetAK8NjettinessTau1_JetSubCalc;
   vector<double>  *theJetAK8NjettinessTau2_JetSubCalc;
   vector<double>  *theJetAK8NjettinessTau3_JetSubCalc;
   vector<double>  *theJetAK8Phi_JetSubCalc;
   vector<double>  *theJetAK8Pt_JetSubCalc;
   vector<double>  *theJetAK8SDSubjetBTag_JetSubCalc;
   vector<double>  *theJetAK8SDSubjetCSVb_JetSubCalc;
   vector<double>  *theJetAK8SDSubjetCSVbb_JetSubCalc;
   vector<double>  *theJetAK8SDSubjetCSVc_JetSubCalc;
   vector<double>  *theJetAK8SDSubjetCSVudsg_JetSubCalc;
   vector<double>  *theJetAK8SDSubjetDR_JetSubCalc;
   vector<double>  *theJetAK8SDSubjetEta_JetSubCalc;
   vector<double>  *theJetAK8SDSubjetMass_JetSubCalc;
   vector<double>  *theJetAK8SDSubjetPhi_JetSubCalc;
   vector<double>  *theJetAK8SDSubjetPt_JetSubCalc;
   vector<double>  *theJetAK8SoftDropCorr_JetSubCalc;
   vector<double>  *theJetAK8SoftDropRaw_JetSubCalc;
   vector<double>  *theJetAK8SoftDrop_JMRdn_JetSubCalc;
   vector<double>  *theJetAK8SoftDrop_JMRup_JetSubCalc;
   vector<double>  *theJetAK8SoftDrop_JMSdn_JetSubCalc;
   vector<double>  *theJetAK8SoftDrop_JMSup_JetSubCalc;
   vector<double>  *theJetAK8SoftDrop_JetSubCalc;
   vector<double>  *theJetAK8SoftDropn2b1_JetSubCalc;
   vector<double>  *theJetAK8SoftDropn2b2_JetSubCalc;
   vector<double>  *theJetAK8SoftDropn3b1_JetSubCalc;
   vector<double>  *theJetAK8SoftDropn3b2_JetSubCalc;
   vector<double>  *theJetDeepCSVb_JetSubCalc;
   vector<double>  *theJetDeepCSVbb_JetSubCalc;
   vector<double>  *theJetDeepCSVc_JetSubCalc;
   vector<double>  *theJetDeepCSVudsg_JetSubCalc;
   vector<double>  *theJetEnergy_JetSubCalc;
   vector<double>  *theJetEta_JetSubCalc;
   vector<double>  *theJetPhi_JetSubCalc;
   vector<double>  *theJetPileupJetId_JetSubCalc;
   vector<double>  *theJetPt_JetSubCalc;
   vector<double>  *topEnergy_TTbarMassCalc;
   vector<double>  *topEta_TTbarMassCalc;
   vector<double>  *topMass_TTbarMassCalc;
   vector<double>  *topPhi_TTbarMassCalc;
   vector<double>  *topPt_TTbarMassCalc;
   vector<double>  *topWEnergy_TTbarMassCalc;
   vector<double>  *topWEta_TTbarMassCalc;
   vector<double>  *topWPhi_TTbarMassCalc;
   vector<double>  *topWPt_TTbarMassCalc;
   vector<double>  *topbEnergy_TTbarMassCalc;
   vector<double>  *topbEta_TTbarMassCalc;
   vector<double>  *topbPhi_TTbarMassCalc;
   vector<double>  *topbPt_TTbarMassCalc;
   vector<string>  *electron_hltfilters_MultiLepCalc;
   vector<string>  *muon_hltfilters_MultiLepCalc;
   vector<string>  *vsSelMCTriggersEl_MultiLepCalc;
   vector<string>  *vsSelMCTriggersMu_MultiLepCalc;
   vector<string>  *vsSelTriggersEl_MultiLepCalc;
   vector<string>  *vsSelTriggersMu_MultiLepCalc;

   // List of branches
   TBranch        *b_flagBadMu_MultiLepCalc;   //!
   TBranch        *b_flagDupMu_MultiLepCalc;   //!
   TBranch        *b_isBHBH_TpTpCalc;   //!
   TBranch        *b_isBHTW_TpTpCalc;   //!
   TBranch        *b_isBWBW_TpTpCalc;   //!
   TBranch        *b_isBZBH_TpTpCalc;   //!
   TBranch        *b_isBZBZ_TpTpCalc;   //!
   TBranch        *b_isBZTW_TpTpCalc;   //!
   TBranch        *b_isTHBW_TpTpCalc;   //!
   TBranch        *b_isTHTH_TpTpCalc;   //!
   TBranch        *b_isTWTW_TpTpCalc;   //!
   TBranch        *b_isTZBW_TpTpCalc;   //!
   TBranch        *b_isTZTH_TpTpCalc;   //!
   TBranch        *b_isTZTZ_TpTpCalc;   //!
   TBranch        *b_isTau_MultiLepCalc;   //!
   TBranch        *b_NBsFromTTbar_TTbarMassCalc;   //!
   TBranch        *b_NCharm_TTbarMassCalc;   //!
   TBranch        *b_NExtraBs_TTbarMassCalc;   //!
   TBranch        *b_NExtraCs_TTbarMassCalc;   //!
   TBranch        *b_NExtraLs_TTbarMassCalc;   //!
   TBranch        *b_NLeptonDecays_TpTpCalc;   //!
   TBranch        *b_NLight_TTbarMassCalc;   //!
   TBranch        *b_NPartonsfromHEPUEP_MultiLepCalc;   //!
   TBranch        *b_NTotalBs_TTbarMassCalc;   //!
   TBranch        *b_NWdecaysFromTTbar_TTbarMassCalc;   //!
   TBranch        *b_dataE_MultiLepCalc;   //!
   TBranch        *b_dataM_MultiLepCalc;   //!
   TBranch        *b_genTDLID_MultiLepCalc;   //!
   TBranch        *b_isTT_TTbarMassCalc;   //!
   TBranch        *b_isTTbb_TTbarMassCalc;   //!
   TBranch        *b_isTTbj_TTbarMassCalc;   //!
   TBranch        *b_isTTcc_TTbarMassCalc;   //!
   TBranch        *b_isTTcj_TTbarMassCalc;   //!
   TBranch        *b_isTTlf_TTbarMassCalc;   //!
   TBranch        *b_isTTll_TTbarMassCalc;   //!
   TBranch        *b_lumi_CommonCalc;   //!
   TBranch        *b_nAllJets_CommonCalc;   //!
   TBranch        *b_nLooseMuons_CommonCalc;   //!
   TBranch        *b_nPV_MultiLepCalc;   //!
   TBranch        *b_nPileupInteractions_MultiLepCalc;   //!
   TBranch        *b_nSelBtagJets_CommonCalc;   //!
   TBranch        *b_nSelElectrons_CommonCalc;   //!
   TBranch        *b_nSelJets_CommonCalc;   //!
   TBranch        *b_nTightMuons_CommonCalc;   //!
   TBranch        *b_nTrueInteractions_MultiLepCalc;   //!
   TBranch        *b_run_CommonCalc;   //!
   TBranch        *b_event_CommonCalc;   //!
   TBranch        *b_L1NonPrefiringProb_CommonCalc;   //!
   TBranch        *b_L1NonPrefiringProbUp_CommonCalc;   //!
   TBranch        *b_L1NonPrefiringProbDown_CommonCalc;   //!
   TBranch        *b_AK4HT_jerdn_MultiLepCalc;   //!
   TBranch        *b_AK4HT_jerup_MultiLepCalc;   //!
   TBranch        *b_AK4HT_jesdn_MultiLepCalc;   //!
   TBranch        *b_AK4HT_jesup_MultiLepCalc;   //!
   TBranch        *b_AK4HT_MultiLepCalc;   //!
   TBranch        *b_HTfromHEPUEP_MultiLepCalc;   //!
   TBranch        *b_MCWeight_MultiLepCalc;   //!
   TBranch        *b_corr_met_jerdn_phi_MultiLepCalc;   //!
   TBranch        *b_corr_met_jerdn_MultiLepCalc;   //!
   TBranch        *b_corr_met_jerup_phi_MultiLepCalc;   //!
   TBranch        *b_corr_met_jerup_MultiLepCalc;   //!
   TBranch        *b_corr_met_jesdn_phi_MultiLepCalc;   //!
   TBranch        *b_corr_met_jesdn_MultiLepCalc;   //!
   TBranch        *b_corr_met_jesup_phi_MultiLepCalc;   //!
   TBranch        *b_corr_met_jesup_MultiLepCalc;   //!
   TBranch        *b_corr_met_phi_MultiLepCalc;   //!
   TBranch        *b_corr_met_MultiLepCalc;   //!
   TBranch        *b_corr_metnohf_phi_MultiLepCalc;   //!
   TBranch        *b_corr_metnohf_MultiLepCalc;   //!
   TBranch        *b_genTDLEnergy_MultiLepCalc;   //!
   TBranch        *b_genTDLEta_MultiLepCalc;   //!
   TBranch        *b_genTDLPhi_MultiLepCalc;   //!
   TBranch        *b_genTDLPt_MultiLepCalc;   //!
   TBranch        *b_met_phi_MultiLepCalc;   //!
   TBranch        *b_met_MultiLepCalc;   //!
   TBranch        *b_metnohf_phi_MultiLepCalc;   //!
   TBranch        *b_metnohf_MultiLepCalc;   //!
   TBranch        *b_theJetHT_JetSubCalc;   //!
   TBranch        *b_theJetLeadPt_JetSubCalc;   //!
   TBranch        *b_theJetSubLeadPt_JetSubCalc;   //!
   TBranch        *b_ttbarMass_TTbarMassCalc;   //!
   TBranch        *b_AK4JetBTag_bSFdn_MultiLepCalc;   //!
   TBranch        *b_AK4JetBTag_bSFup_MultiLepCalc;   //!
   TBranch        *b_AK4JetBTag_lSFdn_MultiLepCalc;   //!
   TBranch        *b_AK4JetBTag_lSFup_MultiLepCalc;   //!
   TBranch        *b_AK4JetBTag_MultiLepCalc;   //!
   TBranch        *b_AK4JetFlav_MultiLepCalc;   //!
   TBranch        *b_HadronicVHtID_JetSubCalc;   //!
   TBranch        *b_HadronicVHtStatus_JetSubCalc;   //!
   TBranch        *b_HdecayID_TpTpCalc;   //!
   TBranch        *b_HdecayIndex_TpTpCalc;   //!
   TBranch        *b_LHEweightids_MultiLepCalc;   //!
   TBranch        *b_LeptonID_TpTpCalc;   //!
   TBranch        *b_LeptonParentID_TpTpCalc;   //!
   TBranch        *b_WdecayID_TpTpCalc;   //!
   TBranch        *b_WdecayIndex_TpTpCalc;   //!
   TBranch        *b_ZdecayID_TpTpCalc;   //!
   TBranch        *b_ZdecayIndex_TpTpCalc;   //!
   TBranch        *b_allTopsID_TTbarMassCalc;   //!
   TBranch        *b_allTopsStatus_TTbarMassCalc;   //!
   TBranch        *b_bPrimeID_TpTpCalc;   //!
   TBranch        *b_bPrimeNDaughters_TpTpCalc;   //!
   TBranch        *b_bPrimeStatus_TpTpCalc;   //!
   TBranch        *b_bosonID_TpTpCalc;   //!
   TBranch        *b_elChargeConsistent_MultiLepCalc;   //!
   TBranch        *b_elCharge_MultiLepCalc;   //!
   TBranch        *b_elCtfCharge_MultiLepCalc;   //!
   TBranch        *b_elGsfCharge_MultiLepCalc;   //!
   TBranch        *b_elIsEBEE_MultiLepCalc;   //!
   TBranch        *b_elIsMVALooseIso_MultiLepCalc;   //!
   TBranch        *b_elIsMVALoose_MultiLepCalc;   //!
   TBranch        *b_elIsMVATightIso90_MultiLepCalc;   //!
   TBranch        *b_elIsMVATight90_MultiLepCalc;   //!
   TBranch        *b_elMHits_MultiLepCalc;   //!
   TBranch        *b_elMatched_MultiLepCalc;   //!
   TBranch        *b_elMother_id_MultiLepCalc;   //!
   TBranch        *b_elMother_status_MultiLepCalc;   //!
   TBranch        *b_elNotConversion_MultiLepCalc;   //!
   TBranch        *b_elNumberOfMothers_MultiLepCalc;   //!
   TBranch        *b_elPdgId_MultiLepCalc;   //!
   TBranch        *b_elScPixCharge_MultiLepCalc;   //!
   TBranch        *b_elStatus_MultiLepCalc;   //!
   TBranch        *b_elVtxFitConv_MultiLepCalc;   //!
   TBranch        *b_electron_1_hltmatched_MultiLepCalc;   //!
   TBranch        *b_genBSLID_MultiLepCalc;   //!
   TBranch        *b_genID_MultiLepCalc;   //!
   TBranch        *b_genIndex_MultiLepCalc;   //!
   TBranch        *b_genMotherID_MultiLepCalc;   //!
   TBranch        *b_genMotherIndex_MultiLepCalc;   //!
   TBranch        *b_genStatus_MultiLepCalc;   //!
   TBranch        *b_maxProb_JetSubCalc;   //!
   TBranch        *b_muCharge_MultiLepCalc;   //!
   TBranch        *b_muGlobal_MultiLepCalc;   //!
   TBranch        *b_muIsGlobalHighPt_MultiLepCalc;   //!
   TBranch        *b_muIsLoose_MultiLepCalc;   //!
   TBranch        *b_muIsMediumPrompt_MultiLepCalc;   //!
   TBranch        *b_muIsMedium_MultiLepCalc;   //!
   TBranch        *b_muIsMiniIsoLoose_MultiLepCalc;   //!
   TBranch        *b_muIsMiniIsoMedium_MultiLepCalc;   //!
   TBranch        *b_muIsMiniIsoTight_MultiLepCalc;   //!
   TBranch        *b_muIsMiniIsoVeryTight_MultiLepCalc;   //!
   TBranch        *b_muIsMvaLoose_MultiLepCalc;   //!
   TBranch        *b_muIsMvaMedium_MultiLepCalc;   //!
   TBranch        *b_muIsMvaTight_MultiLepCalc;   //!
   TBranch        *b_muIsTight_MultiLepCalc;   //!
   TBranch        *b_muIsTrkHighPt_MultiLepCalc;   //!
   TBranch        *b_muMatched_MultiLepCalc;   //!
   TBranch        *b_muMother_id_MultiLepCalc;   //!
   TBranch        *b_muMother_status_MultiLepCalc;   //!
   TBranch        *b_muNMatchedStations_MultiLepCalc;   //!
   TBranch        *b_muNTrackerLayers_MultiLepCalc;   //!
   TBranch        *b_muNValMuHits_MultiLepCalc;   //!
   TBranch        *b_muNValPixelHits_MultiLepCalc;   //!
   TBranch        *b_muNumberOfMothers_MultiLepCalc;   //!
   TBranch        *b_muPdgId_MultiLepCalc;   //!
   TBranch        *b_muStatus_MultiLepCalc;   //!
   TBranch        *b_muon_1_hltmatched_MultiLepCalc;   //!
   TBranch        *b_quarkID_TpTpCalc;   //!
   TBranch        *b_tPrimeID_TpTpCalc;   //!
   TBranch        *b_tPrimeNDaughters_TpTpCalc;   //!
   TBranch        *b_tPrimeStatus_TpTpCalc;   //!
   TBranch        *b_theJetAK8SDSubjetHFlav_JetSubCalc;   //!
   TBranch        *b_theJetAK8SDSubjetIndex_JetSubCalc;   //!
   TBranch        *b_theJetAK8SDSubjetNDeepCSVL_JetSubCalc;   //!
   TBranch        *b_theJetAK8SDSubjetNDeepCSVMSF_JetSubCalc;   //!
   TBranch        *b_theJetAK8SDSubjetNDeepCSVM_bSFdn_JetSubCalc;   //!
   TBranch        *b_theJetAK8SDSubjetNDeepCSVM_bSFup_JetSubCalc;   //!
   TBranch        *b_theJetAK8SDSubjetNDeepCSVM_lSFdn_JetSubCalc;   //!
   TBranch        *b_theJetAK8SDSubjetNDeepCSVM_lSFup_JetSubCalc;   //!
   TBranch        *b_theJetAK8SDSubjetSize_JetSubCalc;   //!
   TBranch        *b_theJetAK8SJIndex_JetSubCalc;   //!
   TBranch        *b_theJetAK8SJSize_JetSubCalc;   //!
   TBranch        *b_theJetAK8nDaughters_JetSubCalc;   //!
   TBranch        *b_theJetBTag_JetSubCalc;   //!
   TBranch        *b_theJetBTag_bSFdn_JetSubCalc;   //!
   TBranch        *b_theJetBTag_bSFup_JetSubCalc;   //!
   TBranch        *b_theJetBTag_lSFdn_JetSubCalc;   //!
   TBranch        *b_theJetBTag_lSFup_JetSubCalc;   //!
   TBranch        *b_theJetHFlav_JetSubCalc;   //!
   TBranch        *b_theJetPFlav_JetSubCalc;   //!
   TBranch        *b_theJetnDaughters_JetSubCalc;   //!
   TBranch        *b_topID_TTbarMassCalc;   //!
   TBranch        *b_topWID_TTbarMassCalc;   //!
   TBranch        *b_topbID_TTbarMassCalc;   //!
   TBranch        *b_viSelMCTriggersEl_MultiLepCalc;   //!
   TBranch        *b_viSelMCTriggersMu_MultiLepCalc;   //!
   TBranch        *b_viSelTriggersEl_MultiLepCalc;   //!
   TBranch        *b_viSelTriggersMu_MultiLepCalc;   //!
   TBranch        *b_AK4JetDeepCSVb_MultiLepCalc;   //!
   TBranch        *b_AK4JetDeepCSVbb_MultiLepCalc;   //!
   TBranch        *b_AK4JetDeepCSVc_MultiLepCalc;   //!
   TBranch        *b_AK4JetDeepCSVudsg_MultiLepCalc;   //!
   TBranch        *b_AK4JetCSV_MultiLepCalc;   //!
   TBranch        *b_AK4JetEnergy_jerdn_MultiLepCalc;   //!
   TBranch        *b_AK4JetEnergy_jerup_MultiLepCalc;   //!
   TBranch        *b_AK4JetEnergy_jesdn_MultiLepCalc;   //!
   TBranch        *b_AK4JetEnergy_jesup_MultiLepCalc;   //!
   TBranch        *b_AK4JetEnergy_MultiLepCalc;   //!
   TBranch        *b_AK4JetEta_MultiLepCalc;   //!
   TBranch        *b_AK4JetPhi_MultiLepCalc;   //!
   TBranch        *b_AK4JetPt_jerdn_MultiLepCalc;   //!
   TBranch        *b_AK4JetPt_jerup_MultiLepCalc;   //!
   TBranch        *b_AK4JetPt_jesdn_MultiLepCalc;   //!
   TBranch        *b_AK4JetPt_jesup_MultiLepCalc;   //!
   TBranch        *b_AK4JetPt_MultiLepCalc;   //!
   TBranch        *b_AK8JetCSV_MultiLepCalc;   //!
   TBranch        *b_AK8JetDoubleB_MultiLepCalc;   //!
   TBranch        *b_AK8JetEnergy_jerdn_MultiLepCalc;   //!
   TBranch        *b_AK8JetEnergy_jerup_MultiLepCalc;   //!
   TBranch        *b_AK8JetEnergy_jesdn_MultiLepCalc;   //!
   TBranch        *b_AK8JetEnergy_jesup_MultiLepCalc;   //!
   TBranch        *b_AK8JetEnergy_MultiLepCalc;   //!
   TBranch        *b_AK8JetEta_MultiLepCalc;   //!
   TBranch        *b_AK8JetPhi_MultiLepCalc;   //!
   TBranch        *b_AK8JetPt_jerdn_MultiLepCalc;   //!
   TBranch        *b_AK8JetPt_jerup_MultiLepCalc;   //!
   TBranch        *b_AK8JetPt_jesdn_MultiLepCalc;   //!
   TBranch        *b_AK8JetPt_jesup_MultiLepCalc;   //!
   TBranch        *b_AK8JetPt_MultiLepCalc;   //!
   TBranch        *b_HadronicVHtD0E_JetSubCalc;   //!
   TBranch        *b_HadronicVHtD0Eta_JetSubCalc;   //!
   TBranch        *b_HadronicVHtD0Phi_JetSubCalc;   //!
   TBranch        *b_HadronicVHtD0Pt_JetSubCalc;   //!
   TBranch        *b_HadronicVHtD1E_JetSubCalc;   //!
   TBranch        *b_HadronicVHtD1Eta_JetSubCalc;   //!
   TBranch        *b_HadronicVHtD1Phi_JetSubCalc;   //!
   TBranch        *b_HadronicVHtD1Pt_JetSubCalc;   //!
   TBranch        *b_HadronicVHtD2E_JetSubCalc;   //!
   TBranch        *b_HadronicVHtD2Eta_JetSubCalc;   //!
   TBranch        *b_HadronicVHtD2Phi_JetSubCalc;   //!
   TBranch        *b_HadronicVHtD2Pt_JetSubCalc;   //!
   TBranch        *b_HadronicVHtEnergy_JetSubCalc;   //!
   TBranch        *b_HadronicVHtEta_JetSubCalc;   //!
   TBranch        *b_HadronicVHtPhi_JetSubCalc;   //!
   TBranch        *b_HadronicVHtPt_JetSubCalc;   //!
   TBranch        *b_HdecayEnergy_TpTpCalc;   //!
   TBranch        *b_HdecayEta_TpTpCalc;   //!
   TBranch        *b_HdecayPhi_TpTpCalc;   //!
   TBranch        *b_HdecayPt_TpTpCalc;   //!
   TBranch        *b_LHEweights_MultiLepCalc;   //!
   TBranch        *b_NewPDFweights_MultiLepCalc; //!
   TBranch        *b_LeptonEnergy_TpTpCalc;   //!
   TBranch        *b_LeptonEta_TpTpCalc;   //!
   TBranch        *b_LeptonPhi_TpTpCalc;   //!
   TBranch        *b_LeptonPt_TpTpCalc;   //!
   TBranch        *b_WdecayEnergy_TpTpCalc;   //!
   TBranch        *b_WdecayEta_TpTpCalc;   //!
   TBranch        *b_WdecayPhi_TpTpCalc;   //!
   TBranch        *b_WdecayPt_TpTpCalc;   //!
   TBranch        *b_ZdecayEnergy_TpTpCalc;   //!
   TBranch        *b_ZdecayEta_TpTpCalc;   //!
   TBranch        *b_ZdecayPhi_TpTpCalc;   //!
   TBranch        *b_ZdecayPt_TpTpCalc;   //!
   TBranch        *b_allTopsEnergy_TTbarMassCalc;   //!
   TBranch        *b_allTopsEta_TTbarMassCalc;   //!
   TBranch        *b_allTopsPhi_TTbarMassCalc;   //!
   TBranch        *b_allTopsPt_TTbarMassCalc;   //!
   TBranch        *b_bPrimeEnergy_TpTpCalc;   //!
   TBranch        *b_bPrimeEta_TpTpCalc;   //!
   TBranch        *b_bPrimeMass_TpTpCalc;   //!
   TBranch        *b_bPrimePhi_TpTpCalc;   //!
   TBranch        *b_bPrimePt_TpTpCalc;   //!
   TBranch        *b_bosonEnergy_TpTpCalc;   //!
   TBranch        *b_bosonEta_TpTpCalc;   //!
   TBranch        *b_bosonPhi_TpTpCalc;   //!
   TBranch        *b_bosonPt_TpTpCalc;   //!
   TBranch        *b_elAEff_MultiLepCalc;   //!
   TBranch        *b_elChIso_MultiLepCalc;   //!
   TBranch        *b_elD0_MultiLepCalc;   //!
   TBranch        *b_elDEtaSCTkAtVtx_MultiLepCalc;   //!
   TBranch        *b_elDPhiSCTkAtVtx_MultiLepCalc;   //!
   TBranch        *b_elDR03TkSumPt_MultiLepCalc;   //!
   TBranch        *b_elDZ_MultiLepCalc;   //!
   TBranch        *b_elDeta_MultiLepCalc;   //!
   TBranch        *b_elDphi_MultiLepCalc;   //!
   TBranch        *b_elDxy_MultiLepCalc;   //!
   TBranch        *b_elEcalPFClusterIso_MultiLepCalc;   //!
   TBranch        *b_elEnergy_MultiLepCalc;   //!
   TBranch        *b_elEtaVtx_MultiLepCalc;   //!
   TBranch        *b_elEta_MultiLepCalc;   //!
   TBranch        *b_elGen_Reco_dr_MultiLepCalc;   //!
   TBranch        *b_elHcalPFClusterIso_MultiLepCalc;   //!
   TBranch        *b_elHoE_MultiLepCalc;   //!
   TBranch        *b_elIsLooseBarrel_MultiLepCalc;   //!
   TBranch        *b_elIsLooseEndCap_MultiLepCalc;   //!
   TBranch        *b_elIsMediumBarrel_MultiLepCalc;   //!
   TBranch        *b_elIsMediumEndCap_MultiLepCalc;   //!
   TBranch        *b_elIsTightBarrel_MultiLepCalc;   //!
   TBranch        *b_elIsTightEndCap_MultiLepCalc;   //!
   TBranch        *b_elIsVetoBarrel_MultiLepCalc;   //!
   TBranch        *b_elIsVetoEndCap_MultiLepCalc;   //!
   TBranch        *b_elMVAValue_iso_MultiLepCalc;   //!
   TBranch        *b_elMVAValue_MultiLepCalc;   //!
   TBranch        *b_elMatchedEnergy_MultiLepCalc;   //!
   TBranch        *b_elMatchedEta_MultiLepCalc;   //!
   TBranch        *b_elMatchedPhi_MultiLepCalc;   //!
   TBranch        *b_elMatchedPt_MultiLepCalc;   //!
   TBranch        *b_elMiniIso_MultiLepCalc;   //!
   TBranch        *b_elMother_energy_MultiLepCalc;   //!
   TBranch        *b_elMother_eta_MultiLepCalc;   //!
   TBranch        *b_elMother_phi_MultiLepCalc;   //!
   TBranch        *b_elMother_pt_MultiLepCalc;   //!
   TBranch        *b_elNhIso_MultiLepCalc;   //!
   TBranch        *b_elOoemoop_MultiLepCalc;   //!
   TBranch        *b_elPFEta_MultiLepCalc;   //!
   TBranch        *b_elPFPhi_MultiLepCalc;   //!
   TBranch        *b_elPhIso_MultiLepCalc;   //!
   TBranch        *b_elPhiVtx_MultiLepCalc;   //!
   TBranch        *b_elPhi_MultiLepCalc;   //!
   TBranch        *b_elPt_MultiLepCalc;   //!
   TBranch        *b_elRelIso_MultiLepCalc;   //!
   TBranch        *b_elRhoIso_MultiLepCalc;   //!
   TBranch        *b_elSCE_MultiLepCalc;   //!
   TBranch        *b_elSihih_MultiLepCalc;   //!
   TBranch        *b_evtWeightsMC_MultiLepCalc;   //!
   TBranch        *b_genBSLEnergy_MultiLepCalc;   //!
   TBranch        *b_genBSLEta_MultiLepCalc;   //!
   TBranch        *b_genBSLPhi_MultiLepCalc;   //!
   TBranch        *b_genBSLPt_MultiLepCalc;   //!
   TBranch        *b_genEnergy_MultiLepCalc;   //!
   TBranch        *b_genEta_MultiLepCalc;   //!
   TBranch        *b_genJetEnergy_MultiLepCalc;   //!
   TBranch        *b_genJetEta_MultiLepCalc;   //!
   TBranch        *b_genJetPhi_MultiLepCalc;   //!
   TBranch        *b_genJetPt_MultiLepCalc;   //!
   TBranch        *b_genPhi_MultiLepCalc;   //!
   TBranch        *b_genPt_MultiLepCalc;   //!
   TBranch        *b_muChIso_MultiLepCalc;   //!
   TBranch        *b_muChi2_MultiLepCalc;   //!
   TBranch        *b_muDxy_MultiLepCalc;   //!
   TBranch        *b_muDz_MultiLepCalc;   //!
   TBranch        *b_muEnergy_MultiLepCalc;   //!
   TBranch        *b_muEta_MultiLepCalc;   //!
   TBranch        *b_muGIso_MultiLepCalc;   //!
   TBranch        *b_muGen_Reco_dr_MultiLepCalc;   //!
   TBranch        *b_muInnerEta_MultiLepCalc;   //!
   TBranch        *b_muInnerPhi_MultiLepCalc;   //!
   TBranch        *b_muInnerPt_MultiLepCalc;   //!
   TBranch        *b_muMatchedEnergy_MultiLepCalc;   //!
   TBranch        *b_muMatchedEta_MultiLepCalc;   //!
   TBranch        *b_muMatchedPhi_MultiLepCalc;   //!
   TBranch        *b_muMatchedPt_MultiLepCalc;   //!
   TBranch        *b_muMiniIsoDB_MultiLepCalc;   //!
   TBranch        *b_muMiniIso_MultiLepCalc;   //!
   TBranch        *b_muMother_energy_MultiLepCalc;   //!
   TBranch        *b_muMother_eta_MultiLepCalc;   //!
   TBranch        *b_muMother_phi_MultiLepCalc;   //!
   TBranch        *b_muMother_pt_MultiLepCalc;   //!
   TBranch        *b_muNhIso_MultiLepCalc;   //!
   TBranch        *b_muPhi_MultiLepCalc;   //!
   TBranch        *b_muPt_MultiLepCalc;   //!
   TBranch        *b_muPuIso_MultiLepCalc;   //!
   TBranch        *b_muRelIso_MultiLepCalc;   //!
   TBranch        *b_quarkEnergy_TpTpCalc;   //!
   TBranch        *b_quarkEta_TpTpCalc;   //!
   TBranch        *b_quarkPhi_TpTpCalc;   //!
   TBranch        *b_quarkPt_TpTpCalc;   //!
   TBranch        *b_tPrimeEnergy_TpTpCalc;   //!
   TBranch        *b_tPrimeEta_TpTpCalc;   //!
   TBranch        *b_tPrimeMass_TpTpCalc;   //!
   TBranch        *b_tPrimePhi_TpTpCalc;   //!
   TBranch        *b_tPrimePt_TpTpCalc;   //!
   TBranch        *b_theJetAK8CHSEta_JetSubCalc;   //!
   TBranch        *b_theJetAK8CHSMass_JetSubCalc;   //!
   TBranch        *b_theJetAK8CHSPhi_JetSubCalc;   //!
   TBranch        *b_theJetAK8CHSPrunedMass_JetSubCalc;   //!
   TBranch        *b_theJetAK8CHSPt_JetSubCalc;   //!
   TBranch        *b_theJetAK8CHSSoftDropMass_JetSubCalc;   //!
   TBranch        *b_theJetAK8CHSTau1_JetSubCalc;   //!
   TBranch        *b_theJetAK8CHSTau2_JetSubCalc;   //!
   TBranch        *b_theJetAK8CHSTau3_JetSubCalc;   //!
   TBranch        *b_theJetAK8CSV_JetSubCalc;   //!
   TBranch        *b_theJetAK8DoubleB_JetSubCalc;   //!
   TBranch        *b_theJetAK8Energy_JetSubCalc;   //!
   TBranch        *b_theJetAK8Eta_JetSubCalc;   //!
   TBranch        *b_theJetAK8GenDR_JetSubCalc;   //!
   TBranch        *b_theJetAK8GenMass_JetSubCalc;   //!
   TBranch        *b_theJetAK8GenPt_JetSubCalc;   //!
   TBranch        *b_theJetAK8JetCharge_JetSubCalc;   //!
   TBranch        *b_theJetAK8Mass_JetSubCalc;   //!
   TBranch        *b_theJetAK8NjettinessTau1_JetSubCalc;   //!
   TBranch        *b_theJetAK8NjettinessTau2_JetSubCalc;   //!
   TBranch        *b_theJetAK8NjettinessTau3_JetSubCalc;   //!
   TBranch        *b_theJetAK8Phi_JetSubCalc;   //!
   TBranch        *b_theJetAK8Pt_JetSubCalc;   //!
   TBranch        *b_theJetAK8SDSubjetBTag_JetSubCalc;   //!
   TBranch        *b_theJetAK8SDSubjetCSVb_JetSubCalc;   //!
   TBranch        *b_theJetAK8SDSubjetCSVbb_JetSubCalc;   //!
   TBranch        *b_theJetAK8SDSubjetCSVc_JetSubCalc;   //!
   TBranch        *b_theJetAK8SDSubjetCSVudsg_JetSubCalc;   //!
   TBranch        *b_theJetAK8SDSubjetDR_JetSubCalc;   //!
   TBranch        *b_theJetAK8SDSubjetEta_JetSubCalc;   //!
   TBranch        *b_theJetAK8SDSubjetMass_JetSubCalc;   //!
   TBranch        *b_theJetAK8SDSubjetPhi_JetSubCalc;   //!
   TBranch        *b_theJetAK8SDSubjetPt_JetSubCalc;   //!
   TBranch        *b_theJetAK8SoftDropCorr_JetSubCalc;   //!
   TBranch        *b_theJetAK8SoftDropRaw_JetSubCalc;   //!
   TBranch        *b_theJetAK8SoftDrop_JMRdn_JetSubCalc;   //!
   TBranch        *b_theJetAK8SoftDrop_JMRup_JetSubCalc;   //!
   TBranch        *b_theJetAK8SoftDrop_JMSdn_JetSubCalc;   //!
   TBranch        *b_theJetAK8SoftDrop_JMSup_JetSubCalc;   //!
   TBranch        *b_theJetAK8SoftDrop_JetSubCalc;   //!
   TBranch        *b_theJetAK8SoftDropn2b1_JetSubCalc;   //!
   TBranch        *b_theJetAK8SoftDropn2b2_JetSubCalc;   //!
   TBranch        *b_theJetAK8SoftDropn3b1_JetSubCalc;   //!
   TBranch        *b_theJetAK8SoftDropn3b2_JetSubCalc;   //!
   TBranch        *b_theJetDeepCSVb_JetSubCalc;   //!
   TBranch        *b_theJetDeepCSVbb_JetSubCalc;   //!
   TBranch        *b_theJetDeepCSVc_JetSubCalc;   //!
   TBranch        *b_theJetDeepCSVudsg_JetSubCalc;   //!
   TBranch        *b_theJetEnergy_JetSubCalc;   //!
   TBranch        *b_theJetEta_JetSubCalc;   //!
   TBranch        *b_theJetPhi_JetSubCalc;   //!
   TBranch        *b_theJetPileupJetId_JetSubCalc;   //!
   TBranch        *b_theJetPt_JetSubCalc;   //!
   TBranch        *b_topEnergy_TTbarMassCalc;   //!
   TBranch        *b_topEta_TTbarMassCalc;   //!
   TBranch        *b_topMass_TTbarMassCalc;   //!
   TBranch        *b_topPhi_TTbarMassCalc;   //!
   TBranch        *b_topPt_TTbarMassCalc;   //!
   TBranch        *b_topWEnergy_TTbarMassCalc;   //!
   TBranch        *b_topWEta_TTbarMassCalc;   //!
   TBranch        *b_topWPhi_TTbarMassCalc;   //!
   TBranch        *b_topWPt_TTbarMassCalc;   //!
   TBranch        *b_topbEnergy_TTbarMassCalc;   //!
   TBranch        *b_topbEta_TTbarMassCalc;   //!
   TBranch        *b_topbPhi_TTbarMassCalc;   //!
   TBranch        *b_topbPt_TTbarMassCalc;   //!
   TBranch        *b_electron_hltfilters_MultiLepCalc;   //!
   TBranch        *b_muon_hltfilters_MultiLepCalc;   //!
   TBranch        *b_vsSelMCTriggersEl_MultiLepCalc;   //!
   TBranch        *b_vsSelMCTriggersMu_MultiLepCalc;   //!
   TBranch        *b_vsSelTriggersEl_MultiLepCalc;   //!
   TBranch        *b_vsSelTriggersMu_MultiLepCalc;   //!

 
   step1(TString inputFileName, TString outputFileName);
   virtual ~step1();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop(TString inTreeName, TString outTreeName);
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
   bool     applySF(bool& isTagged, float tag_SF, float tag_eff);
   virtual void saveHistograms();

};

#endif

#ifdef step1_cxx
step1::step1(TString inputFileName, TString outputFileName) : inputTree(0), inputFile(0), outputFile(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.

  isSig  = inputFileName.Contains("TTTT_Tune") || inputFileName.Contains("prime") || inputFileName.Contains("X53");
  if(isSig){
    if(inputFileName.Contains("_M-700")) SigMass = 0;
    else if(inputFileName.Contains("_M-800")) SigMass = 1;
    else if(inputFileName.Contains("_M-900")) SigMass = 2;
    else if(inputFileName.Contains("_M-1000")) SigMass = 3;
    else if(inputFileName.Contains("_M-1100")) SigMass = 4;
    else if(inputFileName.Contains("_M-1200")) SigMass = 5;
    else if(inputFileName.Contains("_M-1300")) SigMass = 6;
    else if(inputFileName.Contains("_M-1400")) SigMass = 7;
    else if(inputFileName.Contains("_M-1500")) SigMass = 8;
    else if(inputFileName.Contains("_M-1600")) SigMass = 9;
    else if(inputFileName.Contains("_M-1700")) SigMass = 10;
    else if(inputFileName.Contains("_M-1800")) SigMass = 11;
    else SigMass = -1;
  }
  isMadgraphBkg = inputFileName.Contains("WJetsToLNu_HT") || inputFileName.Contains("QCD") || inputFileName.Contains("madgraph");
  isPowhegBkg = inputFileName.Contains("powheg");
  isMadgraphAmc = inputFileName.Contains("WWW_") || inputFileName.Contains("WWZ_");
  isMadgraphWZZ = inputFileName.Contains("WZZ_") || inputFileName.Contains("WZZTo");
  isTOP = (inputFileName.Contains("Mtt") || inputFileName.Contains("ST") || inputFileName.Contains("TTZ_") || inputFileName.Contains("TTW_") || (inputFileName.Contains("TT_Tune") && !(inputFileName.Contains("TTTT_"))) );
  isTT = ((inputFileName.Contains("TT_Tune") && !(inputFileName.Contains("TTTT_"))) || inputFileName.Contains("Mtt") || inputFileName.Contains("TTTo"));
  isST = inputFileName.Contains("ST");
  isTTV = (inputFileName.Contains("TTZ_") || inputFileName.Contains("TTW_"));
  isMC      = !inputFileName.Contains("DoubleEG") && !inputFileName.Contains("Muon")  ;
  isTTincMtt0to700    = outputFileName.Contains("Mtt0to700");
  isTTincMtt0to1000    = outputFileName.Contains("Mtt0to1000");
  isTTincMtt700to1000    = outputFileName.Contains("Mtt700to1000");
  isTTincMtt1000toInf = outputFileName.Contains("Mtt1000toInf");
  outBWBW = outputFileName.Contains("BWBW");
  outTZBW = outputFileName.Contains("TZBW");
  outTHBW = outputFileName.Contains("THBW");
  outTZTH = outputFileName.Contains("TZTH");
  outTZTZ = outputFileName.Contains("TZTZ");
  outTHTH = outputFileName.Contains("THTH");
  outTWTW = outputFileName.Contains("TWTW");
  outBZTW = outputFileName.Contains("BZTW");
  outBHTW = outputFileName.Contains("BHTW");
  outBZBH = outputFileName.Contains("BZBH");
  outBZBZ = outputFileName.Contains("BZBZ");
  outBHBH = outputFileName.Contains("BHBH");

  std::cout<<"Opening file: "<<inputFileName<<std::endl;
  inputFile=TFile::Open(inputFileName);
  SampleName = (string) inputFileName(inputFileName.Last('/')+1,inputFileName.Last('_')-inputFileName.Last('/')-1);
  
  outputFile=new TFile(outputFileName,"RECREATE");   
  
}

step1::~step1()
{
   if (!inputTree) return;
   delete inputTree->GetCurrentFile();
}

Int_t step1::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!inputTree) return 0;
   return inputTree->GetEntry(entry);
}
Long64_t step1::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!inputTree) return -5;
   Long64_t centry = inputTree->LoadTree(entry);
   if (centry <= 0) return centry;
   if (inputTree->GetTreeNumber() != fCurrent) {
      fCurrent = inputTree->GetTreeNumber();
      Notify();
   }
   return centry;
}

void step1::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   AK4JetBTag_bSFdn_MultiLepCalc = 0;
   AK4JetBTag_bSFup_MultiLepCalc = 0;
   AK4JetBTag_lSFdn_MultiLepCalc = 0;
   AK4JetBTag_lSFup_MultiLepCalc = 0;
   AK4JetBTag_MultiLepCalc = 0;
   AK4JetFlav_MultiLepCalc = 0;
   HadronicVHtID_JetSubCalc = 0;
   HadronicVHtStatus_JetSubCalc = 0;
   HdecayID_TpTpCalc = 0;
   HdecayIndex_TpTpCalc = 0;
   LHEweightids_MultiLepCalc = 0;
   LeptonID_TpTpCalc = 0;
   LeptonParentID_TpTpCalc = 0;
   WdecayID_TpTpCalc = 0;
   WdecayIndex_TpTpCalc = 0;
   ZdecayID_TpTpCalc = 0;
   ZdecayIndex_TpTpCalc = 0;
   allTopsID_TTbarMassCalc = 0;
   allTopsStatus_TTbarMassCalc = 0;
   bPrimeID_TpTpCalc = 0;
   bPrimeNDaughters_TpTpCalc = 0;
   bPrimeStatus_TpTpCalc = 0;
   bosonID_TpTpCalc = 0;
   elChargeConsistent_MultiLepCalc = 0;
   elCharge_MultiLepCalc = 0;
   elCtfCharge_MultiLepCalc = 0;
   elGsfCharge_MultiLepCalc = 0;
   elIsEBEE_MultiLepCalc = 0;
   elIsMVALooseIso_MultiLepCalc = 0;
   elIsMVALoose_MultiLepCalc = 0;
   elIsMVATightIso90_MultiLepCalc = 0;
   elIsMVATight90_MultiLepCalc = 0;
   elMHits_MultiLepCalc = 0;
   elMatched_MultiLepCalc = 0;
   elMother_id_MultiLepCalc = 0;
   elMother_status_MultiLepCalc = 0;
   elNotConversion_MultiLepCalc = 0;
   elNumberOfMothers_MultiLepCalc = 0;
   elPdgId_MultiLepCalc = 0;
   elScPixCharge_MultiLepCalc = 0;
   elStatus_MultiLepCalc = 0;
   elVtxFitConv_MultiLepCalc = 0;
   electron_1_hltmatched_MultiLepCalc = 0;
   genBSLID_MultiLepCalc = 0;
   genID_MultiLepCalc = 0;
   genIndex_MultiLepCalc = 0;
   genMotherID_MultiLepCalc = 0;
   genMotherIndex_MultiLepCalc = 0;
   genStatus_MultiLepCalc = 0;
   maxProb_JetSubCalc = 0;
   muCharge_MultiLepCalc = 0;
   muGlobal_MultiLepCalc = 0;
   muIsGlobalHighPt_MultiLepCalc = 0;
   muIsLoose_MultiLepCalc = 0;
   muIsMediumPrompt_MultiLepCalc = 0;
   muIsMedium_MultiLepCalc = 0;
   muIsMiniIsoLoose_MultiLepCalc = 0;
   muIsMiniIsoMedium_MultiLepCalc = 0;
   muIsMiniIsoTight_MultiLepCalc = 0;
   muIsMiniIsoVeryTight_MultiLepCalc = 0;
   muIsMvaLoose_MultiLepCalc = 0;
   muIsMvaMedium_MultiLepCalc = 0;
   muIsMvaTight_MultiLepCalc = 0;
   muIsTight_MultiLepCalc = 0;
   muIsTrkHighPt_MultiLepCalc = 0;
   muMatched_MultiLepCalc = 0;
   muMother_id_MultiLepCalc = 0;
   muMother_status_MultiLepCalc = 0;
   muNMatchedStations_MultiLepCalc = 0;
   muNTrackerLayers_MultiLepCalc = 0;
   muNValMuHits_MultiLepCalc = 0;
   muNValPixelHits_MultiLepCalc = 0;
   muNumberOfMothers_MultiLepCalc = 0;
   muPdgId_MultiLepCalc = 0;
   muStatus_MultiLepCalc = 0;
   muon_1_hltmatched_MultiLepCalc = 0;
   quarkID_TpTpCalc = 0;
   tPrimeID_TpTpCalc = 0;
   tPrimeNDaughters_TpTpCalc = 0;
   tPrimeStatus_TpTpCalc = 0;
   theJetAK8SDSubjetHFlav_JetSubCalc = 0;
   theJetAK8SDSubjetIndex_JetSubCalc = 0;
   theJetAK8SDSubjetNDeepCSVL_JetSubCalc = 0;
   theJetAK8SDSubjetNDeepCSVMSF_JetSubCalc = 0;
   theJetAK8SDSubjetNDeepCSVM_bSFdn_JetSubCalc = 0;
   theJetAK8SDSubjetNDeepCSVM_bSFup_JetSubCalc = 0;
   theJetAK8SDSubjetNDeepCSVM_lSFdn_JetSubCalc = 0;
   theJetAK8SDSubjetNDeepCSVM_lSFup_JetSubCalc = 0;
   theJetAK8SDSubjetSize_JetSubCalc = 0;
   theJetAK8SJIndex_JetSubCalc = 0;
   theJetAK8SJSize_JetSubCalc = 0;
   theJetAK8nDaughters_JetSubCalc = 0;
   theJetBTag_JetSubCalc = 0;
   theJetBTag_bSFdn_JetSubCalc = 0;
   theJetBTag_bSFup_JetSubCalc = 0;
   theJetBTag_lSFdn_JetSubCalc = 0;
   theJetBTag_lSFup_JetSubCalc = 0;
   theJetHFlav_JetSubCalc = 0;
   theJetPFlav_JetSubCalc = 0;
   theJetnDaughters_JetSubCalc = 0;
   topID_TTbarMassCalc = 0;
   topWID_TTbarMassCalc = 0;
   topbID_TTbarMassCalc = 0;
   viSelMCTriggersEl_MultiLepCalc = 0;
   viSelMCTriggersMu_MultiLepCalc = 0;
   viSelTriggersEl_MultiLepCalc = 0;
   viSelTriggersMu_MultiLepCalc = 0;
   AK4JetDeepCSVb_MultiLepCalc = 0;
   AK4JetDeepCSVbb_MultiLepCalc = 0;
   AK4JetDeepCSVc_MultiLepCalc = 0;
   AK4JetDeepCSVudsg_MultiLepCalc = 0;
   AK4JetCSV_MultiLepCalc = 0;
   AK4JetEnergy_jerdn_MultiLepCalc = 0;
   AK4JetEnergy_jerup_MultiLepCalc = 0;
   AK4JetEnergy_jesdn_MultiLepCalc = 0;
   AK4JetEnergy_jesup_MultiLepCalc = 0;
   AK4JetEnergy_MultiLepCalc = 0;
   AK4JetEta_MultiLepCalc = 0;
   AK4JetPhi_MultiLepCalc = 0;
   AK4JetPt_jerdn_MultiLepCalc = 0;
   AK4JetPt_jerup_MultiLepCalc = 0;
   AK4JetPt_jesdn_MultiLepCalc = 0;
   AK4JetPt_jesup_MultiLepCalc = 0;
   AK4JetPt_MultiLepCalc = 0;
   AK8JetCSV_MultiLepCalc = 0;
   AK8JetDoubleB_MultiLepCalc = 0;
   AK8JetEnergy_jerdn_MultiLepCalc = 0;
   AK8JetEnergy_jerup_MultiLepCalc = 0;
   AK8JetEnergy_jesdn_MultiLepCalc = 0;
   AK8JetEnergy_jesup_MultiLepCalc = 0;
   AK8JetEnergy_MultiLepCalc = 0;
   AK8JetEta_MultiLepCalc = 0;
   AK8JetPhi_MultiLepCalc = 0;
   AK8JetPt_jerdn_MultiLepCalc = 0;
   AK8JetPt_jerup_MultiLepCalc = 0;
   AK8JetPt_jesdn_MultiLepCalc = 0;
   AK8JetPt_jesup_MultiLepCalc = 0;
   AK8JetPt_MultiLepCalc = 0;
   HadronicVHtD0E_JetSubCalc = 0;
   HadronicVHtD0Eta_JetSubCalc = 0;
   HadronicVHtD0Phi_JetSubCalc = 0;
   HadronicVHtD0Pt_JetSubCalc = 0;
   HadronicVHtD1E_JetSubCalc = 0;
   HadronicVHtD1Eta_JetSubCalc = 0;
   HadronicVHtD1Phi_JetSubCalc = 0;
   HadronicVHtD1Pt_JetSubCalc = 0;
   HadronicVHtD2E_JetSubCalc = 0;
   HadronicVHtD2Eta_JetSubCalc = 0;
   HadronicVHtD2Phi_JetSubCalc = 0;
   HadronicVHtD2Pt_JetSubCalc = 0;
   HadronicVHtEnergy_JetSubCalc = 0;
   HadronicVHtEta_JetSubCalc = 0;
   HadronicVHtPhi_JetSubCalc = 0;
   HadronicVHtPt_JetSubCalc = 0;
   HdecayEnergy_TpTpCalc = 0;
   HdecayEta_TpTpCalc = 0;
   HdecayPhi_TpTpCalc = 0;
   HdecayPt_TpTpCalc = 0;
   LHEweights_MultiLepCalc = 0;
   NewPDFweights_MultiLepCalc = 0;
   LeptonEnergy_TpTpCalc = 0;
   LeptonEta_TpTpCalc = 0;
   LeptonPhi_TpTpCalc = 0;
   LeptonPt_TpTpCalc = 0;
   WdecayEnergy_TpTpCalc = 0;
   WdecayEta_TpTpCalc = 0;
   WdecayPhi_TpTpCalc = 0;
   WdecayPt_TpTpCalc = 0;
   ZdecayEnergy_TpTpCalc = 0;
   ZdecayEta_TpTpCalc = 0;
   ZdecayPhi_TpTpCalc = 0;
   ZdecayPt_TpTpCalc = 0;
   allTopsEnergy_TTbarMassCalc = 0;
   allTopsEta_TTbarMassCalc = 0;
   allTopsPhi_TTbarMassCalc = 0;
   allTopsPt_TTbarMassCalc = 0;
   bPrimeEnergy_TpTpCalc = 0;
   bPrimeEta_TpTpCalc = 0;
   bPrimeMass_TpTpCalc = 0;
   bPrimePhi_TpTpCalc = 0;
   bPrimePt_TpTpCalc = 0;
   bosonEnergy_TpTpCalc = 0;
   bosonEta_TpTpCalc = 0;
   bosonPhi_TpTpCalc = 0;
   bosonPt_TpTpCalc = 0;
   elAEff_MultiLepCalc = 0;
   elChIso_MultiLepCalc = 0;
   elD0_MultiLepCalc = 0;
   elDEtaSCTkAtVtx_MultiLepCalc = 0;
   elDPhiSCTkAtVtx_MultiLepCalc = 0;
   elDR03TkSumPt_MultiLepCalc = 0;
   elDZ_MultiLepCalc = 0;
   elDeta_MultiLepCalc = 0;
   elDphi_MultiLepCalc = 0;
   elDxy_MultiLepCalc = 0;
   elEcalPFClusterIso_MultiLepCalc = 0;
   elEnergy_MultiLepCalc = 0;
   elEtaVtx_MultiLepCalc = 0;
   elEta_MultiLepCalc = 0;
   elGen_Reco_dr_MultiLepCalc = 0;
   elHcalPFClusterIso_MultiLepCalc = 0;
   elHoE_MultiLepCalc = 0;
   elIsLooseBarrel_MultiLepCalc = 0;
   elIsLooseEndCap_MultiLepCalc = 0;
   elIsMediumBarrel_MultiLepCalc = 0;
   elIsMediumEndCap_MultiLepCalc = 0;
   elIsTightBarrel_MultiLepCalc = 0;
   elIsTightEndCap_MultiLepCalc = 0;
   elIsVetoBarrel_MultiLepCalc = 0;
   elIsVetoEndCap_MultiLepCalc = 0;
   elMVAValue_iso_MultiLepCalc = 0;
   elMVAValue_MultiLepCalc = 0;
   elMatchedEnergy_MultiLepCalc = 0;
   elMatchedEta_MultiLepCalc = 0;
   elMatchedPhi_MultiLepCalc = 0;
   elMatchedPt_MultiLepCalc = 0;
   elMiniIso_MultiLepCalc = 0;
   elMother_energy_MultiLepCalc = 0;
   elMother_eta_MultiLepCalc = 0;
   elMother_phi_MultiLepCalc = 0;
   elMother_pt_MultiLepCalc = 0;
   elNhIso_MultiLepCalc = 0;
   elOoemoop_MultiLepCalc = 0;
   elPFEta_MultiLepCalc = 0;
   elPFPhi_MultiLepCalc = 0;
   elPhIso_MultiLepCalc = 0;
   elPhiVtx_MultiLepCalc = 0;
   elPhi_MultiLepCalc = 0;
   elPt_MultiLepCalc = 0;
   elRelIso_MultiLepCalc = 0;
   elRhoIso_MultiLepCalc = 0;
   elSCE_MultiLepCalc = 0;
   elSihih_MultiLepCalc = 0;
   evtWeightsMC_MultiLepCalc = 0;
   genBSLEnergy_MultiLepCalc = 0;
   genBSLEta_MultiLepCalc = 0;
   genBSLPhi_MultiLepCalc = 0;
   genBSLPt_MultiLepCalc = 0;
   genEnergy_MultiLepCalc = 0;
   genEta_MultiLepCalc = 0;
   genJetEnergy_MultiLepCalc = 0;
   genJetEta_MultiLepCalc = 0;
   genJetPhi_MultiLepCalc = 0;
   genJetPt_MultiLepCalc = 0;
   genPhi_MultiLepCalc = 0;
   genPt_MultiLepCalc = 0;
   muChIso_MultiLepCalc = 0;
   muChi2_MultiLepCalc = 0;
   muDxy_MultiLepCalc = 0;
   muDz_MultiLepCalc = 0;
   muEnergy_MultiLepCalc = 0;
   muEta_MultiLepCalc = 0;
   muGIso_MultiLepCalc = 0;
   muGen_Reco_dr_MultiLepCalc = 0;
   muInnerEta_MultiLepCalc = 0;
   muInnerPhi_MultiLepCalc = 0;
   muInnerPt_MultiLepCalc = 0;
   muMatchedEnergy_MultiLepCalc = 0;
   muMatchedEta_MultiLepCalc = 0;
   muMatchedPhi_MultiLepCalc = 0;
   muMatchedPt_MultiLepCalc = 0;
   muMiniIsoDB_MultiLepCalc = 0;
   muMiniIso_MultiLepCalc = 0;
   muMother_energy_MultiLepCalc = 0;
   muMother_eta_MultiLepCalc = 0;
   muMother_phi_MultiLepCalc = 0;
   muMother_pt_MultiLepCalc = 0;
   muNhIso_MultiLepCalc = 0;
   muPhi_MultiLepCalc = 0;
   muPt_MultiLepCalc = 0;
   muPuIso_MultiLepCalc = 0;
   muRelIso_MultiLepCalc = 0;
   quarkEnergy_TpTpCalc = 0;
   quarkEta_TpTpCalc = 0;
   quarkPhi_TpTpCalc = 0;
   quarkPt_TpTpCalc = 0;
   tPrimeEnergy_TpTpCalc = 0;
   tPrimeEta_TpTpCalc = 0;
   tPrimeMass_TpTpCalc = 0;
   tPrimePhi_TpTpCalc = 0;
   tPrimePt_TpTpCalc = 0;
   theJetAK8CHSEta_JetSubCalc = 0;
   theJetAK8CHSMass_JetSubCalc = 0;
   theJetAK8CHSPhi_JetSubCalc = 0;
   theJetAK8CHSPrunedMass_JetSubCalc = 0;
   theJetAK8CHSPt_JetSubCalc = 0;
   theJetAK8CHSSoftDropMass_JetSubCalc = 0;
   theJetAK8CHSTau1_JetSubCalc = 0;
   theJetAK8CHSTau2_JetSubCalc = 0;
   theJetAK8CHSTau3_JetSubCalc = 0;
   theJetAK8CSV_JetSubCalc = 0;
   theJetAK8DoubleB_JetSubCalc = 0;
   theJetAK8Energy_JetSubCalc = 0;
   theJetAK8Eta_JetSubCalc = 0;
   theJetAK8GenDR_JetSubCalc = 0;
   theJetAK8GenMass_JetSubCalc = 0;
   theJetAK8GenPt_JetSubCalc = 0;
   theJetAK8JetCharge_JetSubCalc = 0;
   theJetAK8Mass_JetSubCalc = 0;
   theJetAK8NjettinessTau1_JetSubCalc = 0;
   theJetAK8NjettinessTau2_JetSubCalc = 0;
   theJetAK8NjettinessTau3_JetSubCalc = 0;
   theJetAK8Phi_JetSubCalc = 0;
   theJetAK8Pt_JetSubCalc = 0;
   theJetAK8SDSubjetBTag_JetSubCalc = 0;
   theJetAK8SDSubjetCSVb_JetSubCalc = 0;
   theJetAK8SDSubjetCSVbb_JetSubCalc = 0;
   theJetAK8SDSubjetCSVc_JetSubCalc = 0;
   theJetAK8SDSubjetCSVudsg_JetSubCalc = 0;
   theJetAK8SDSubjetDR_JetSubCalc = 0;
   theJetAK8SDSubjetEta_JetSubCalc = 0;
   theJetAK8SDSubjetMass_JetSubCalc = 0;
   theJetAK8SDSubjetPhi_JetSubCalc = 0;
   theJetAK8SDSubjetPt_JetSubCalc = 0;
   theJetAK8SoftDropCorr_JetSubCalc = 0;
   theJetAK8SoftDropRaw_JetSubCalc = 0;
   theJetAK8SoftDrop_JMRdn_JetSubCalc = 0;
   theJetAK8SoftDrop_JMRup_JetSubCalc = 0;
   theJetAK8SoftDrop_JMSdn_JetSubCalc = 0;
   theJetAK8SoftDrop_JMSup_JetSubCalc = 0;
   theJetAK8SoftDrop_JetSubCalc = 0;
   theJetAK8SoftDropn2b1_JetSubCalc = 0;
   theJetAK8SoftDropn2b2_JetSubCalc = 0;
   theJetAK8SoftDropn3b1_JetSubCalc = 0;
   theJetAK8SoftDropn3b2_JetSubCalc = 0;
   theJetDeepCSVb_JetSubCalc = 0;
   theJetDeepCSVbb_JetSubCalc = 0;
   theJetDeepCSVc_JetSubCalc = 0;
   theJetDeepCSVudsg_JetSubCalc = 0;
   theJetEnergy_JetSubCalc = 0;
   theJetEta_JetSubCalc = 0;
   theJetPhi_JetSubCalc = 0;
   theJetPileupJetId_JetSubCalc = 0;
   theJetPt_JetSubCalc = 0;
   topEnergy_TTbarMassCalc = 0;
   topEta_TTbarMassCalc = 0;
   topMass_TTbarMassCalc = 0;
   topPhi_TTbarMassCalc = 0;
   topPt_TTbarMassCalc = 0;
   topWEnergy_TTbarMassCalc = 0;
   topWEta_TTbarMassCalc = 0;
   topWPhi_TTbarMassCalc = 0;
   topWPt_TTbarMassCalc = 0;
   topbEnergy_TTbarMassCalc = 0;
   topbEta_TTbarMassCalc = 0;
   topbPhi_TTbarMassCalc = 0;
   topbPt_TTbarMassCalc = 0;
   electron_hltfilters_MultiLepCalc = 0;
   muon_hltfilters_MultiLepCalc = 0;
   vsSelMCTriggersEl_MultiLepCalc = 0;
   vsSelMCTriggersMu_MultiLepCalc = 0;
   vsSelTriggersEl_MultiLepCalc = 0;
   vsSelTriggersMu_MultiLepCalc = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   inputTree = tree;
   fCurrent = -1;
   inputTree->SetMakeClass(1);

   inputTree->SetBranchAddress("flagBadMu_MultiLepCalc", &flagBadMu_MultiLepCalc, &b_flagBadMu_MultiLepCalc);
   inputTree->SetBranchAddress("flagDupMu_MultiLepCalc", &flagDupMu_MultiLepCalc, &b_flagDupMu_MultiLepCalc);
   inputTree->SetBranchAddress("isBHBH_TpTpCalc", &isBHBH_TpTpCalc, &b_isBHBH_TpTpCalc);
   inputTree->SetBranchAddress("isBHTW_TpTpCalc", &isBHTW_TpTpCalc, &b_isBHTW_TpTpCalc);
   inputTree->SetBranchAddress("isBWBW_TpTpCalc", &isBWBW_TpTpCalc, &b_isBWBW_TpTpCalc);
   inputTree->SetBranchAddress("isBZBH_TpTpCalc", &isBZBH_TpTpCalc, &b_isBZBH_TpTpCalc);
   inputTree->SetBranchAddress("isBZBZ_TpTpCalc", &isBZBZ_TpTpCalc, &b_isBZBZ_TpTpCalc);
   inputTree->SetBranchAddress("isBZTW_TpTpCalc", &isBZTW_TpTpCalc, &b_isBZTW_TpTpCalc);
   inputTree->SetBranchAddress("isTHBW_TpTpCalc", &isTHBW_TpTpCalc, &b_isTHBW_TpTpCalc);
   inputTree->SetBranchAddress("isTHTH_TpTpCalc", &isTHTH_TpTpCalc, &b_isTHTH_TpTpCalc);
   inputTree->SetBranchAddress("isTWTW_TpTpCalc", &isTWTW_TpTpCalc, &b_isTWTW_TpTpCalc);
   inputTree->SetBranchAddress("isTZBW_TpTpCalc", &isTZBW_TpTpCalc, &b_isTZBW_TpTpCalc);
   inputTree->SetBranchAddress("isTZTH_TpTpCalc", &isTZTH_TpTpCalc, &b_isTZTH_TpTpCalc);
   inputTree->SetBranchAddress("isTZTZ_TpTpCalc", &isTZTZ_TpTpCalc, &b_isTZTZ_TpTpCalc);
   inputTree->SetBranchAddress("isTau_MultiLepCalc", &isTau_MultiLepCalc, &b_isTau_MultiLepCalc);
   inputTree->SetBranchAddress("NBsFromTTbar_TTbarMassCalc", &NBsFromTTbar_TTbarMassCalc, &b_NBsFromTTbar_TTbarMassCalc);
   inputTree->SetBranchAddress("NCharm_TTbarMassCalc", &NCharm_TTbarMassCalc, &b_NCharm_TTbarMassCalc);
   inputTree->SetBranchAddress("NExtraBs_TTbarMassCalc", &NExtraBs_TTbarMassCalc, &b_NExtraBs_TTbarMassCalc);
   inputTree->SetBranchAddress("NExtraCs_TTbarMassCalc", &NExtraCs_TTbarMassCalc, &b_NExtraCs_TTbarMassCalc);
   inputTree->SetBranchAddress("NExtraLs_TTbarMassCalc", &NExtraLs_TTbarMassCalc, &b_NExtraLs_TTbarMassCalc);
   inputTree->SetBranchAddress("NLeptonDecays_TpTpCalc", &NLeptonDecays_TpTpCalc, &b_NLeptonDecays_TpTpCalc);
   inputTree->SetBranchAddress("NLight_TTbarMassCalc", &NLight_TTbarMassCalc, &b_NLight_TTbarMassCalc);
   inputTree->SetBranchAddress("NPartonsfromHEPUEP_MultiLepCalc", &NPartonsfromHEPUEP_MultiLepCalc, &b_NPartonsfromHEPUEP_MultiLepCalc);
   inputTree->SetBranchAddress("NTotalBs_TTbarMassCalc", &NTotalBs_TTbarMassCalc, &b_NTotalBs_TTbarMassCalc);
   inputTree->SetBranchAddress("NWdecaysFromTTbar_TTbarMassCalc", &NWdecaysFromTTbar_TTbarMassCalc, &b_NWdecaysFromTTbar_TTbarMassCalc);
   inputTree->SetBranchAddress("dataE_MultiLepCalc", &dataE_MultiLepCalc, &b_dataE_MultiLepCalc);
   inputTree->SetBranchAddress("dataM_MultiLepCalc", &dataM_MultiLepCalc, &b_dataM_MultiLepCalc);
   inputTree->SetBranchAddress("genTDLID_MultiLepCalc", &genTDLID_MultiLepCalc, &b_genTDLID_MultiLepCalc);
   inputTree->SetBranchAddress("isTT_TTbarMassCalc", &isTT_TTbarMassCalc, &b_isTT_TTbarMassCalc);
   inputTree->SetBranchAddress("isTTbb_TTbarMassCalc", &isTTbb_TTbarMassCalc, &b_isTTbb_TTbarMassCalc);
   inputTree->SetBranchAddress("isTTbj_TTbarMassCalc", &isTTbj_TTbarMassCalc, &b_isTTbj_TTbarMassCalc);
   inputTree->SetBranchAddress("isTTcc_TTbarMassCalc", &isTTcc_TTbarMassCalc, &b_isTTcc_TTbarMassCalc);
   inputTree->SetBranchAddress("isTTcj_TTbarMassCalc", &isTTcj_TTbarMassCalc, &b_isTTcj_TTbarMassCalc);
   inputTree->SetBranchAddress("isTTlf_TTbarMassCalc", &isTTlf_TTbarMassCalc, &b_isTTlf_TTbarMassCalc);
   inputTree->SetBranchAddress("isTTll_TTbarMassCalc", &isTTll_TTbarMassCalc, &b_isTTll_TTbarMassCalc);
   inputTree->SetBranchAddress("lumi_CommonCalc", &lumi_CommonCalc, &b_lumi_CommonCalc);
   inputTree->SetBranchAddress("L1NonPrefiringProb_CommonCalc", &L1NonPrefiringProb_CommonCalc, &b_L1NonPrefiringProb_CommonCalc);
   inputTree->SetBranchAddress("L1NonPrefiringProbUp_CommonCalc", &L1NonPrefiringProbUp_CommonCalc, &b_L1NonPrefiringProbUp_CommonCalc);
   inputTree->SetBranchAddress("L1NonPrefiringProbDown_CommonCalc", &L1NonPrefiringProbDown_CommonCalc, &b_L1NonPrefiringProbDown_CommonCalc);
   inputTree->SetBranchAddress("nAllJets_CommonCalc", &nAllJets_CommonCalc, &b_nAllJets_CommonCalc);
   inputTree->SetBranchAddress("nLooseMuons_CommonCalc", &nLooseMuons_CommonCalc, &b_nLooseMuons_CommonCalc);
   inputTree->SetBranchAddress("nPV_MultiLepCalc", &nPV_MultiLepCalc, &b_nPV_MultiLepCalc);
   inputTree->SetBranchAddress("nPileupInteractions_MultiLepCalc", &nPileupInteractions_MultiLepCalc, &b_nPileupInteractions_MultiLepCalc);
   inputTree->SetBranchAddress("nSelBtagJets_CommonCalc", &nSelBtagJets_CommonCalc, &b_nSelBtagJets_CommonCalc);
   inputTree->SetBranchAddress("nSelElectrons_CommonCalc", &nSelElectrons_CommonCalc, &b_nSelElectrons_CommonCalc);
   inputTree->SetBranchAddress("nSelJets_CommonCalc", &nSelJets_CommonCalc, &b_nSelJets_CommonCalc);
   inputTree->SetBranchAddress("nTightMuons_CommonCalc", &nTightMuons_CommonCalc, &b_nTightMuons_CommonCalc);
   inputTree->SetBranchAddress("nTrueInteractions_MultiLepCalc", &nTrueInteractions_MultiLepCalc, &b_nTrueInteractions_MultiLepCalc);
   inputTree->SetBranchAddress("run_CommonCalc", &run_CommonCalc, &b_run_CommonCalc);
   inputTree->SetBranchAddress("event_CommonCalc", &event_CommonCalc, &b_event_CommonCalc);
   inputTree->SetBranchAddress("AK4HT_jerdn_MultiLepCalc", &AK4HT_jerdn_MultiLepCalc, &b_AK4HT_jerdn_MultiLepCalc);
   inputTree->SetBranchAddress("AK4HT_jerup_MultiLepCalc", &AK4HT_jerup_MultiLepCalc, &b_AK4HT_jerup_MultiLepCalc);
   inputTree->SetBranchAddress("AK4HT_jesdn_MultiLepCalc", &AK4HT_jesdn_MultiLepCalc, &b_AK4HT_jesdn_MultiLepCalc);
   inputTree->SetBranchAddress("AK4HT_jesup_MultiLepCalc", &AK4HT_jesup_MultiLepCalc, &b_AK4HT_jesup_MultiLepCalc);
   inputTree->SetBranchAddress("AK4HT_MultiLepCalc", &AK4HT_MultiLepCalc, &b_AK4HT_MultiLepCalc);
   inputTree->SetBranchAddress("HTfromHEPUEP_MultiLepCalc", &HTfromHEPUEP_MultiLepCalc, &b_HTfromHEPUEP_MultiLepCalc);
   inputTree->SetBranchAddress("MCWeight_MultiLepCalc", &MCWeight_MultiLepCalc, &b_MCWeight_MultiLepCalc);
   inputTree->SetBranchAddress("corr_met_jerdn_phi_MultiLepCalc", &corr_met_jerdn_phi_MultiLepCalc, &b_corr_met_jerdn_phi_MultiLepCalc);
   inputTree->SetBranchAddress("corr_met_jerdn_MultiLepCalc", &corr_met_jerdn_MultiLepCalc, &b_corr_met_jerdn_MultiLepCalc);
   inputTree->SetBranchAddress("corr_met_jerup_phi_MultiLepCalc", &corr_met_jerup_phi_MultiLepCalc, &b_corr_met_jerup_phi_MultiLepCalc);
   inputTree->SetBranchAddress("corr_met_jerup_MultiLepCalc", &corr_met_jerup_MultiLepCalc, &b_corr_met_jerup_MultiLepCalc);
   inputTree->SetBranchAddress("corr_met_jesdn_phi_MultiLepCalc", &corr_met_jesdn_phi_MultiLepCalc, &b_corr_met_jesdn_phi_MultiLepCalc);
   inputTree->SetBranchAddress("corr_met_jesdn_MultiLepCalc", &corr_met_jesdn_MultiLepCalc, &b_corr_met_jesdn_MultiLepCalc);
   inputTree->SetBranchAddress("corr_met_jesup_phi_MultiLepCalc", &corr_met_jesup_phi_MultiLepCalc, &b_corr_met_jesup_phi_MultiLepCalc);
   inputTree->SetBranchAddress("corr_met_jesup_MultiLepCalc", &corr_met_jesup_MultiLepCalc, &b_corr_met_jesup_MultiLepCalc);
   inputTree->SetBranchAddress("corr_met_phi_MultiLepCalc", &corr_met_phi_MultiLepCalc, &b_corr_met_phi_MultiLepCalc);
   inputTree->SetBranchAddress("corr_met_MultiLepCalc", &corr_met_MultiLepCalc, &b_corr_met_MultiLepCalc);
   inputTree->SetBranchAddress("corr_metnohf_phi_MultiLepCalc", &corr_metnohf_phi_MultiLepCalc, &b_corr_metnohf_phi_MultiLepCalc);
   inputTree->SetBranchAddress("corr_metnohf_MultiLepCalc", &corr_metnohf_MultiLepCalc, &b_corr_metnohf_MultiLepCalc);
   inputTree->SetBranchAddress("genTDLEnergy_MultiLepCalc", &genTDLEnergy_MultiLepCalc, &b_genTDLEnergy_MultiLepCalc);
   inputTree->SetBranchAddress("genTDLEta_MultiLepCalc", &genTDLEta_MultiLepCalc, &b_genTDLEta_MultiLepCalc);
   inputTree->SetBranchAddress("genTDLPhi_MultiLepCalc", &genTDLPhi_MultiLepCalc, &b_genTDLPhi_MultiLepCalc);
   inputTree->SetBranchAddress("genTDLPt_MultiLepCalc", &genTDLPt_MultiLepCalc, &b_genTDLPt_MultiLepCalc);
   inputTree->SetBranchAddress("met_phi_MultiLepCalc", &met_phi_MultiLepCalc, &b_met_phi_MultiLepCalc);
   inputTree->SetBranchAddress("met_MultiLepCalc", &met_MultiLepCalc, &b_met_MultiLepCalc);
   inputTree->SetBranchAddress("metnohf_phi_MultiLepCalc", &metnohf_phi_MultiLepCalc, &b_metnohf_phi_MultiLepCalc);
   inputTree->SetBranchAddress("metnohf_MultiLepCalc", &metnohf_MultiLepCalc, &b_metnohf_MultiLepCalc);
   inputTree->SetBranchAddress("theJetHT_JetSubCalc", &theJetHT_JetSubCalc, &b_theJetHT_JetSubCalc);
   inputTree->SetBranchAddress("theJetLeadPt_JetSubCalc", &theJetLeadPt_JetSubCalc, &b_theJetLeadPt_JetSubCalc);
   inputTree->SetBranchAddress("theJetSubLeadPt_JetSubCalc", &theJetSubLeadPt_JetSubCalc, &b_theJetSubLeadPt_JetSubCalc);
   inputTree->SetBranchAddress("ttbarMass_TTbarMassCalc", &ttbarMass_TTbarMassCalc, &b_ttbarMass_TTbarMassCalc);
   inputTree->SetBranchAddress("AK4JetBTag_bSFdn_MultiLepCalc", &AK4JetBTag_bSFdn_MultiLepCalc, &b_AK4JetBTag_bSFdn_MultiLepCalc);
   inputTree->SetBranchAddress("AK4JetBTag_bSFup_MultiLepCalc", &AK4JetBTag_bSFup_MultiLepCalc, &b_AK4JetBTag_bSFup_MultiLepCalc);
   inputTree->SetBranchAddress("AK4JetBTag_lSFdn_MultiLepCalc", &AK4JetBTag_lSFdn_MultiLepCalc, &b_AK4JetBTag_lSFdn_MultiLepCalc);
   inputTree->SetBranchAddress("AK4JetBTag_lSFup_MultiLepCalc", &AK4JetBTag_lSFup_MultiLepCalc, &b_AK4JetBTag_lSFup_MultiLepCalc);
   inputTree->SetBranchAddress("AK4JetBTag_MultiLepCalc", &AK4JetBTag_MultiLepCalc, &b_AK4JetBTag_MultiLepCalc);
   inputTree->SetBranchAddress("AK4JetFlav_MultiLepCalc", &AK4JetFlav_MultiLepCalc, &b_AK4JetFlav_MultiLepCalc);
   inputTree->SetBranchAddress("HadronicVHtID_JetSubCalc", &HadronicVHtID_JetSubCalc, &b_HadronicVHtID_JetSubCalc);
   inputTree->SetBranchAddress("HadronicVHtStatus_JetSubCalc", &HadronicVHtStatus_JetSubCalc, &b_HadronicVHtStatus_JetSubCalc);
   inputTree->SetBranchAddress("HdecayID_TpTpCalc", &HdecayID_TpTpCalc, &b_HdecayID_TpTpCalc);
   inputTree->SetBranchAddress("HdecayIndex_TpTpCalc", &HdecayIndex_TpTpCalc, &b_HdecayIndex_TpTpCalc);
   inputTree->SetBranchAddress("LHEweightids_MultiLepCalc", &LHEweightids_MultiLepCalc, &b_LHEweightids_MultiLepCalc);
   inputTree->SetBranchAddress("LeptonID_TpTpCalc", &LeptonID_TpTpCalc, &b_LeptonID_TpTpCalc);
   inputTree->SetBranchAddress("LeptonParentID_TpTpCalc", &LeptonParentID_TpTpCalc, &b_LeptonParentID_TpTpCalc);
   inputTree->SetBranchAddress("WdecayID_TpTpCalc", &WdecayID_TpTpCalc, &b_WdecayID_TpTpCalc);
   inputTree->SetBranchAddress("WdecayIndex_TpTpCalc", &WdecayIndex_TpTpCalc, &b_WdecayIndex_TpTpCalc);
   inputTree->SetBranchAddress("ZdecayID_TpTpCalc", &ZdecayID_TpTpCalc, &b_ZdecayID_TpTpCalc);
   inputTree->SetBranchAddress("ZdecayIndex_TpTpCalc", &ZdecayIndex_TpTpCalc, &b_ZdecayIndex_TpTpCalc);
   inputTree->SetBranchAddress("allTopsID_TTbarMassCalc", &allTopsID_TTbarMassCalc, &b_allTopsID_TTbarMassCalc);
   inputTree->SetBranchAddress("allTopsStatus_TTbarMassCalc", &allTopsStatus_TTbarMassCalc, &b_allTopsStatus_TTbarMassCalc);
   inputTree->SetBranchAddress("bPrimeID_TpTpCalc", &bPrimeID_TpTpCalc, &b_bPrimeID_TpTpCalc);
   inputTree->SetBranchAddress("bPrimeNDaughters_TpTpCalc", &bPrimeNDaughters_TpTpCalc, &b_bPrimeNDaughters_TpTpCalc);
   inputTree->SetBranchAddress("bPrimeStatus_TpTpCalc", &bPrimeStatus_TpTpCalc, &b_bPrimeStatus_TpTpCalc);
   inputTree->SetBranchAddress("bosonID_TpTpCalc", &bosonID_TpTpCalc, &b_bosonID_TpTpCalc);
   inputTree->SetBranchAddress("elChargeConsistent_MultiLepCalc", &elChargeConsistent_MultiLepCalc, &b_elChargeConsistent_MultiLepCalc);
   inputTree->SetBranchAddress("elCharge_MultiLepCalc", &elCharge_MultiLepCalc, &b_elCharge_MultiLepCalc);
   inputTree->SetBranchAddress("elCtfCharge_MultiLepCalc", &elCtfCharge_MultiLepCalc, &b_elCtfCharge_MultiLepCalc);
   inputTree->SetBranchAddress("elGsfCharge_MultiLepCalc", &elGsfCharge_MultiLepCalc, &b_elGsfCharge_MultiLepCalc);
   inputTree->SetBranchAddress("elIsEBEE_MultiLepCalc", &elIsEBEE_MultiLepCalc, &b_elIsEBEE_MultiLepCalc);
   inputTree->SetBranchAddress("elIsMVALooseIso_MultiLepCalc", &elIsMVALooseIso_MultiLepCalc, &b_elIsMVALooseIso_MultiLepCalc);
   inputTree->SetBranchAddress("elIsMVALoose_MultiLepCalc", &elIsMVALoose_MultiLepCalc, &b_elIsMVALoose_MultiLepCalc);
   inputTree->SetBranchAddress("elIsMVATightIso90_MultiLepCalc", &elIsMVATightIso90_MultiLepCalc, &b_elIsMVATightIso90_MultiLepCalc);
   inputTree->SetBranchAddress("elIsMVATight90_MultiLepCalc", &elIsMVATight90_MultiLepCalc, &b_elIsMVATight90_MultiLepCalc);
   inputTree->SetBranchAddress("elMHits_MultiLepCalc", &elMHits_MultiLepCalc, &b_elMHits_MultiLepCalc);
   inputTree->SetBranchAddress("elMatched_MultiLepCalc", &elMatched_MultiLepCalc, &b_elMatched_MultiLepCalc);
   inputTree->SetBranchAddress("elMother_id_MultiLepCalc", &elMother_id_MultiLepCalc, &b_elMother_id_MultiLepCalc);
   inputTree->SetBranchAddress("elMother_status_MultiLepCalc", &elMother_status_MultiLepCalc, &b_elMother_status_MultiLepCalc);
   inputTree->SetBranchAddress("elNotConversion_MultiLepCalc", &elNotConversion_MultiLepCalc, &b_elNotConversion_MultiLepCalc);
   inputTree->SetBranchAddress("elNumberOfMothers_MultiLepCalc", &elNumberOfMothers_MultiLepCalc, &b_elNumberOfMothers_MultiLepCalc);
   inputTree->SetBranchAddress("elPdgId_MultiLepCalc", &elPdgId_MultiLepCalc, &b_elPdgId_MultiLepCalc);
   inputTree->SetBranchAddress("elScPixCharge_MultiLepCalc", &elScPixCharge_MultiLepCalc, &b_elScPixCharge_MultiLepCalc);
   inputTree->SetBranchAddress("elStatus_MultiLepCalc", &elStatus_MultiLepCalc, &b_elStatus_MultiLepCalc);
   inputTree->SetBranchAddress("elVtxFitConv_MultiLepCalc", &elVtxFitConv_MultiLepCalc, &b_elVtxFitConv_MultiLepCalc);
   inputTree->SetBranchAddress("electron_1_hltmatched_MultiLepCalc", &electron_1_hltmatched_MultiLepCalc, &b_electron_1_hltmatched_MultiLepCalc);
   inputTree->SetBranchAddress("genBSLID_MultiLepCalc", &genBSLID_MultiLepCalc, &b_genBSLID_MultiLepCalc);
   inputTree->SetBranchAddress("genID_MultiLepCalc", &genID_MultiLepCalc, &b_genID_MultiLepCalc);
   inputTree->SetBranchAddress("genIndex_MultiLepCalc", &genIndex_MultiLepCalc, &b_genIndex_MultiLepCalc);
   inputTree->SetBranchAddress("genMotherID_MultiLepCalc", &genMotherID_MultiLepCalc, &b_genMotherID_MultiLepCalc);
   inputTree->SetBranchAddress("genMotherIndex_MultiLepCalc", &genMotherIndex_MultiLepCalc, &b_genMotherIndex_MultiLepCalc);
   inputTree->SetBranchAddress("genStatus_MultiLepCalc", &genStatus_MultiLepCalc, &b_genStatus_MultiLepCalc);
   inputTree->SetBranchAddress("maxProb_JetSubCalc", &maxProb_JetSubCalc, &b_maxProb_JetSubCalc);
   inputTree->SetBranchAddress("muCharge_MultiLepCalc", &muCharge_MultiLepCalc, &b_muCharge_MultiLepCalc);
   inputTree->SetBranchAddress("muGlobal_MultiLepCalc", &muGlobal_MultiLepCalc, &b_muGlobal_MultiLepCalc);
   inputTree->SetBranchAddress("muIsGlobalHighPt_MultiLepCalc", &muIsGlobalHighPt_MultiLepCalc, &b_muIsGlobalHighPt_MultiLepCalc);
   inputTree->SetBranchAddress("muIsLoose_MultiLepCalc", &muIsLoose_MultiLepCalc, &b_muIsLoose_MultiLepCalc);
   inputTree->SetBranchAddress("muIsMediumPrompt_MultiLepCalc", &muIsMediumPrompt_MultiLepCalc, &b_muIsMediumPrompt_MultiLepCalc);
   inputTree->SetBranchAddress("muIsMedium_MultiLepCalc", &muIsMedium_MultiLepCalc, &b_muIsMedium_MultiLepCalc);
   inputTree->SetBranchAddress("muIsMiniIsoLoose_MultiLepCalc", &muIsMiniIsoLoose_MultiLepCalc, &b_muIsMiniIsoLoose_MultiLepCalc);
   inputTree->SetBranchAddress("muIsMiniIsoMedium_MultiLepCalc", &muIsMiniIsoMedium_MultiLepCalc, &b_muIsMiniIsoMedium_MultiLepCalc);
   inputTree->SetBranchAddress("muIsMiniIsoTight_MultiLepCalc", &muIsMiniIsoTight_MultiLepCalc, &b_muIsMiniIsoTight_MultiLepCalc);
   inputTree->SetBranchAddress("muIsMiniIsoVeryTight_MultiLepCalc", &muIsMiniIsoVeryTight_MultiLepCalc, &b_muIsMiniIsoVeryTight_MultiLepCalc);
   inputTree->SetBranchAddress("muIsMvaLoose_MultiLepCalc", &muIsMvaLoose_MultiLepCalc, &b_muIsMvaLoose_MultiLepCalc);
   inputTree->SetBranchAddress("muIsMvaMedium_MultiLepCalc", &muIsMvaMedium_MultiLepCalc, &b_muIsMvaMedium_MultiLepCalc);
   inputTree->SetBranchAddress("muIsMvaTight_MultiLepCalc", &muIsMvaTight_MultiLepCalc, &b_muIsMvaTight_MultiLepCalc);
   inputTree->SetBranchAddress("muIsTight_MultiLepCalc", &muIsTight_MultiLepCalc, &b_muIsTight_MultiLepCalc);
   inputTree->SetBranchAddress("muIsTrkHighPt_MultiLepCalc", &muIsTrkHighPt_MultiLepCalc, &b_muIsTrkHighPt_MultiLepCalc);
   inputTree->SetBranchAddress("muMatched_MultiLepCalc", &muMatched_MultiLepCalc, &b_muMatched_MultiLepCalc);
   inputTree->SetBranchAddress("muMother_id_MultiLepCalc", &muMother_id_MultiLepCalc, &b_muMother_id_MultiLepCalc);
   inputTree->SetBranchAddress("muMother_status_MultiLepCalc", &muMother_status_MultiLepCalc, &b_muMother_status_MultiLepCalc);
   inputTree->SetBranchAddress("muNMatchedStations_MultiLepCalc", &muNMatchedStations_MultiLepCalc, &b_muNMatchedStations_MultiLepCalc);
   inputTree->SetBranchAddress("muNTrackerLayers_MultiLepCalc", &muNTrackerLayers_MultiLepCalc, &b_muNTrackerLayers_MultiLepCalc);
   inputTree->SetBranchAddress("muNValMuHits_MultiLepCalc", &muNValMuHits_MultiLepCalc, &b_muNValMuHits_MultiLepCalc);
   inputTree->SetBranchAddress("muNValPixelHits_MultiLepCalc", &muNValPixelHits_MultiLepCalc, &b_muNValPixelHits_MultiLepCalc);
   inputTree->SetBranchAddress("muNumberOfMothers_MultiLepCalc", &muNumberOfMothers_MultiLepCalc, &b_muNumberOfMothers_MultiLepCalc);
   inputTree->SetBranchAddress("muPdgId_MultiLepCalc", &muPdgId_MultiLepCalc, &b_muPdgId_MultiLepCalc);
   inputTree->SetBranchAddress("muStatus_MultiLepCalc", &muStatus_MultiLepCalc, &b_muStatus_MultiLepCalc);
   inputTree->SetBranchAddress("muon_1_hltmatched_MultiLepCalc", &muon_1_hltmatched_MultiLepCalc, &b_muon_1_hltmatched_MultiLepCalc);
   inputTree->SetBranchAddress("quarkID_TpTpCalc", &quarkID_TpTpCalc, &b_quarkID_TpTpCalc);
   inputTree->SetBranchAddress("tPrimeID_TpTpCalc", &tPrimeID_TpTpCalc, &b_tPrimeID_TpTpCalc);
   inputTree->SetBranchAddress("tPrimeNDaughters_TpTpCalc", &tPrimeNDaughters_TpTpCalc, &b_tPrimeNDaughters_TpTpCalc);
   inputTree->SetBranchAddress("tPrimeStatus_TpTpCalc", &tPrimeStatus_TpTpCalc, &b_tPrimeStatus_TpTpCalc);
   inputTree->SetBranchAddress("theJetAK8SDSubjetHFlav_JetSubCalc", &theJetAK8SDSubjetHFlav_JetSubCalc, &b_theJetAK8SDSubjetHFlav_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8SDSubjetIndex_JetSubCalc", &theJetAK8SDSubjetIndex_JetSubCalc, &b_theJetAK8SDSubjetIndex_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8SDSubjetNDeepCSVL_JetSubCalc", &theJetAK8SDSubjetNDeepCSVL_JetSubCalc, &b_theJetAK8SDSubjetNDeepCSVL_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8SDSubjetNDeepCSVMSF_JetSubCalc", &theJetAK8SDSubjetNDeepCSVMSF_JetSubCalc, &b_theJetAK8SDSubjetNDeepCSVMSF_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8SDSubjetNDeepCSVM_bSFdn_JetSubCalc", &theJetAK8SDSubjetNDeepCSVM_bSFdn_JetSubCalc, &b_theJetAK8SDSubjetNDeepCSVM_bSFdn_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8SDSubjetNDeepCSVM_bSFup_JetSubCalc", &theJetAK8SDSubjetNDeepCSVM_bSFup_JetSubCalc, &b_theJetAK8SDSubjetNDeepCSVM_bSFup_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8SDSubjetNDeepCSVM_lSFdn_JetSubCalc", &theJetAK8SDSubjetNDeepCSVM_lSFdn_JetSubCalc, &b_theJetAK8SDSubjetNDeepCSVM_lSFdn_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8SDSubjetNDeepCSVM_lSFup_JetSubCalc", &theJetAK8SDSubjetNDeepCSVM_lSFup_JetSubCalc, &b_theJetAK8SDSubjetNDeepCSVM_lSFup_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8SDSubjetSize_JetSubCalc", &theJetAK8SDSubjetSize_JetSubCalc, &b_theJetAK8SDSubjetSize_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8SJIndex_JetSubCalc", &theJetAK8SJIndex_JetSubCalc, &b_theJetAK8SJIndex_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8SJSize_JetSubCalc", &theJetAK8SJSize_JetSubCalc, &b_theJetAK8SJSize_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8nDaughters_JetSubCalc", &theJetAK8nDaughters_JetSubCalc, &b_theJetAK8nDaughters_JetSubCalc);
   inputTree->SetBranchAddress("theJetBTag_JetSubCalc", &theJetBTag_JetSubCalc, &b_theJetBTag_JetSubCalc);
   inputTree->SetBranchAddress("theJetBTag_bSFdn_JetSubCalc", &theJetBTag_bSFdn_JetSubCalc, &b_theJetBTag_bSFdn_JetSubCalc);
   inputTree->SetBranchAddress("theJetBTag_bSFup_JetSubCalc", &theJetBTag_bSFup_JetSubCalc, &b_theJetBTag_bSFup_JetSubCalc);
   inputTree->SetBranchAddress("theJetBTag_lSFdn_JetSubCalc", &theJetBTag_lSFdn_JetSubCalc, &b_theJetBTag_lSFdn_JetSubCalc);
   inputTree->SetBranchAddress("theJetBTag_lSFup_JetSubCalc", &theJetBTag_lSFup_JetSubCalc, &b_theJetBTag_lSFup_JetSubCalc);
   inputTree->SetBranchAddress("theJetHFlav_JetSubCalc", &theJetHFlav_JetSubCalc, &b_theJetHFlav_JetSubCalc);
   inputTree->SetBranchAddress("theJetPFlav_JetSubCalc", &theJetPFlav_JetSubCalc, &b_theJetPFlav_JetSubCalc);
   inputTree->SetBranchAddress("theJetnDaughters_JetSubCalc", &theJetnDaughters_JetSubCalc, &b_theJetnDaughters_JetSubCalc);
   inputTree->SetBranchAddress("topID_TTbarMassCalc", &topID_TTbarMassCalc, &b_topID_TTbarMassCalc);
   inputTree->SetBranchAddress("topWID_TTbarMassCalc", &topWID_TTbarMassCalc, &b_topWID_TTbarMassCalc);
   inputTree->SetBranchAddress("topbID_TTbarMassCalc", &topbID_TTbarMassCalc, &b_topbID_TTbarMassCalc);
   inputTree->SetBranchAddress("viSelMCTriggersEl_MultiLepCalc", &viSelMCTriggersEl_MultiLepCalc, &b_viSelMCTriggersEl_MultiLepCalc);
   inputTree->SetBranchAddress("viSelMCTriggersMu_MultiLepCalc", &viSelMCTriggersMu_MultiLepCalc, &b_viSelMCTriggersMu_MultiLepCalc);
   inputTree->SetBranchAddress("viSelTriggersEl_MultiLepCalc", &viSelTriggersEl_MultiLepCalc, &b_viSelTriggersEl_MultiLepCalc);
   inputTree->SetBranchAddress("viSelTriggersMu_MultiLepCalc", &viSelTriggersMu_MultiLepCalc, &b_viSelTriggersMu_MultiLepCalc);
   inputTree->SetBranchAddress("AK4JetDeepCSVb_MultiLepCalc", &AK4JetDeepCSVb_MultiLepCalc, &b_AK4JetDeepCSVb_MultiLepCalc);
   inputTree->SetBranchAddress("AK4JetDeepCSVbb_MultiLepCalc", &AK4JetDeepCSVbb_MultiLepCalc, &b_AK4JetDeepCSVbb_MultiLepCalc);
   inputTree->SetBranchAddress("AK4JetDeepCSVc_MultiLepCalc", &AK4JetDeepCSVc_MultiLepCalc, &b_AK4JetDeepCSVc_MultiLepCalc);
   inputTree->SetBranchAddress("AK4JetDeepCSVudsg_MultiLepCalc", &AK4JetDeepCSVudsg_MultiLepCalc, &b_AK4JetDeepCSVudsg_MultiLepCalc);
   inputTree->SetBranchAddress("AK4JetCSV_MultiLepCalc", &AK4JetCSV_MultiLepCalc, &b_AK4JetCSV_MultiLepCalc);
   inputTree->SetBranchAddress("AK4JetEnergy_jerdn_MultiLepCalc", &AK4JetEnergy_jerdn_MultiLepCalc, &b_AK4JetEnergy_jerdn_MultiLepCalc);
   inputTree->SetBranchAddress("AK4JetEnergy_jerup_MultiLepCalc", &AK4JetEnergy_jerup_MultiLepCalc, &b_AK4JetEnergy_jerup_MultiLepCalc);
   inputTree->SetBranchAddress("AK4JetEnergy_jesdn_MultiLepCalc", &AK4JetEnergy_jesdn_MultiLepCalc, &b_AK4JetEnergy_jesdn_MultiLepCalc);
   inputTree->SetBranchAddress("AK4JetEnergy_jesup_MultiLepCalc", &AK4JetEnergy_jesup_MultiLepCalc, &b_AK4JetEnergy_jesup_MultiLepCalc);
   inputTree->SetBranchAddress("AK4JetEnergy_MultiLepCalc", &AK4JetEnergy_MultiLepCalc, &b_AK4JetEnergy_MultiLepCalc);
   inputTree->SetBranchAddress("AK4JetEta_MultiLepCalc", &AK4JetEta_MultiLepCalc, &b_AK4JetEta_MultiLepCalc);
   inputTree->SetBranchAddress("AK4JetPhi_MultiLepCalc", &AK4JetPhi_MultiLepCalc, &b_AK4JetPhi_MultiLepCalc);
   inputTree->SetBranchAddress("AK4JetPt_jerdn_MultiLepCalc", &AK4JetPt_jerdn_MultiLepCalc, &b_AK4JetPt_jerdn_MultiLepCalc);
   inputTree->SetBranchAddress("AK4JetPt_jerup_MultiLepCalc", &AK4JetPt_jerup_MultiLepCalc, &b_AK4JetPt_jerup_MultiLepCalc);
   inputTree->SetBranchAddress("AK4JetPt_jesdn_MultiLepCalc", &AK4JetPt_jesdn_MultiLepCalc, &b_AK4JetPt_jesdn_MultiLepCalc);
   inputTree->SetBranchAddress("AK4JetPt_jesup_MultiLepCalc", &AK4JetPt_jesup_MultiLepCalc, &b_AK4JetPt_jesup_MultiLepCalc);
   inputTree->SetBranchAddress("AK4JetPt_MultiLepCalc", &AK4JetPt_MultiLepCalc, &b_AK4JetPt_MultiLepCalc);
   inputTree->SetBranchAddress("AK8JetCSV_MultiLepCalc", &AK8JetCSV_MultiLepCalc, &b_AK8JetCSV_MultiLepCalc);
   inputTree->SetBranchAddress("AK8JetDoubleB_MultiLepCalc", &AK8JetDoubleB_MultiLepCalc, &b_AK8JetDoubleB_MultiLepCalc);
   inputTree->SetBranchAddress("AK8JetEnergy_jerdn_MultiLepCalc", &AK8JetEnergy_jerdn_MultiLepCalc, &b_AK8JetEnergy_jerdn_MultiLepCalc);
   inputTree->SetBranchAddress("AK8JetEnergy_jerup_MultiLepCalc", &AK8JetEnergy_jerup_MultiLepCalc, &b_AK8JetEnergy_jerup_MultiLepCalc);
   inputTree->SetBranchAddress("AK8JetEnergy_jesdn_MultiLepCalc", &AK8JetEnergy_jesdn_MultiLepCalc, &b_AK8JetEnergy_jesdn_MultiLepCalc);
   inputTree->SetBranchAddress("AK8JetEnergy_jesup_MultiLepCalc", &AK8JetEnergy_jesup_MultiLepCalc, &b_AK8JetEnergy_jesup_MultiLepCalc);
   inputTree->SetBranchAddress("AK8JetEnergy_MultiLepCalc", &AK8JetEnergy_MultiLepCalc, &b_AK8JetEnergy_MultiLepCalc);
   inputTree->SetBranchAddress("AK8JetEta_MultiLepCalc", &AK8JetEta_MultiLepCalc, &b_AK8JetEta_MultiLepCalc);
   inputTree->SetBranchAddress("AK8JetPhi_MultiLepCalc", &AK8JetPhi_MultiLepCalc, &b_AK8JetPhi_MultiLepCalc);
   inputTree->SetBranchAddress("AK8JetPt_jerdn_MultiLepCalc", &AK8JetPt_jerdn_MultiLepCalc, &b_AK8JetPt_jerdn_MultiLepCalc);
   inputTree->SetBranchAddress("AK8JetPt_jerup_MultiLepCalc", &AK8JetPt_jerup_MultiLepCalc, &b_AK8JetPt_jerup_MultiLepCalc);
   inputTree->SetBranchAddress("AK8JetPt_jesdn_MultiLepCalc", &AK8JetPt_jesdn_MultiLepCalc, &b_AK8JetPt_jesdn_MultiLepCalc);
   inputTree->SetBranchAddress("AK8JetPt_jesup_MultiLepCalc", &AK8JetPt_jesup_MultiLepCalc, &b_AK8JetPt_jesup_MultiLepCalc);
   inputTree->SetBranchAddress("AK8JetPt_MultiLepCalc", &AK8JetPt_MultiLepCalc, &b_AK8JetPt_MultiLepCalc);
   inputTree->SetBranchAddress("HadronicVHtD0E_JetSubCalc", &HadronicVHtD0E_JetSubCalc, &b_HadronicVHtD0E_JetSubCalc);
   inputTree->SetBranchAddress("HadronicVHtD0Eta_JetSubCalc", &HadronicVHtD0Eta_JetSubCalc, &b_HadronicVHtD0Eta_JetSubCalc);
   inputTree->SetBranchAddress("HadronicVHtD0Phi_JetSubCalc", &HadronicVHtD0Phi_JetSubCalc, &b_HadronicVHtD0Phi_JetSubCalc);
   inputTree->SetBranchAddress("HadronicVHtD0Pt_JetSubCalc", &HadronicVHtD0Pt_JetSubCalc, &b_HadronicVHtD0Pt_JetSubCalc);
   inputTree->SetBranchAddress("HadronicVHtD1E_JetSubCalc", &HadronicVHtD1E_JetSubCalc, &b_HadronicVHtD1E_JetSubCalc);
   inputTree->SetBranchAddress("HadronicVHtD1Eta_JetSubCalc", &HadronicVHtD1Eta_JetSubCalc, &b_HadronicVHtD1Eta_JetSubCalc);
   inputTree->SetBranchAddress("HadronicVHtD1Phi_JetSubCalc", &HadronicVHtD1Phi_JetSubCalc, &b_HadronicVHtD1Phi_JetSubCalc);
   inputTree->SetBranchAddress("HadronicVHtD1Pt_JetSubCalc", &HadronicVHtD1Pt_JetSubCalc, &b_HadronicVHtD1Pt_JetSubCalc);
   inputTree->SetBranchAddress("HadronicVHtD2E_JetSubCalc", &HadronicVHtD2E_JetSubCalc, &b_HadronicVHtD2E_JetSubCalc);
   inputTree->SetBranchAddress("HadronicVHtD2Eta_JetSubCalc", &HadronicVHtD2Eta_JetSubCalc, &b_HadronicVHtD2Eta_JetSubCalc);
   inputTree->SetBranchAddress("HadronicVHtD2Phi_JetSubCalc", &HadronicVHtD2Phi_JetSubCalc, &b_HadronicVHtD2Phi_JetSubCalc);
   inputTree->SetBranchAddress("HadronicVHtD2Pt_JetSubCalc", &HadronicVHtD2Pt_JetSubCalc, &b_HadronicVHtD2Pt_JetSubCalc);
   inputTree->SetBranchAddress("HadronicVHtEnergy_JetSubCalc", &HadronicVHtEnergy_JetSubCalc, &b_HadronicVHtEnergy_JetSubCalc);
   inputTree->SetBranchAddress("HadronicVHtEta_JetSubCalc", &HadronicVHtEta_JetSubCalc, &b_HadronicVHtEta_JetSubCalc);
   inputTree->SetBranchAddress("HadronicVHtPhi_JetSubCalc", &HadronicVHtPhi_JetSubCalc, &b_HadronicVHtPhi_JetSubCalc);
   inputTree->SetBranchAddress("HadronicVHtPt_JetSubCalc", &HadronicVHtPt_JetSubCalc, &b_HadronicVHtPt_JetSubCalc);
   inputTree->SetBranchAddress("HdecayEnergy_TpTpCalc", &HdecayEnergy_TpTpCalc, &b_HdecayEnergy_TpTpCalc);
   inputTree->SetBranchAddress("HdecayEta_TpTpCalc", &HdecayEta_TpTpCalc, &b_HdecayEta_TpTpCalc);
   inputTree->SetBranchAddress("HdecayPhi_TpTpCalc", &HdecayPhi_TpTpCalc, &b_HdecayPhi_TpTpCalc);
   inputTree->SetBranchAddress("HdecayPt_TpTpCalc", &HdecayPt_TpTpCalc, &b_HdecayPt_TpTpCalc);
   inputTree->SetBranchAddress("LHEweights_MultiLepCalc", &LHEweights_MultiLepCalc, &b_LHEweights_MultiLepCalc);
   inputTree->SetBranchAddress("NewPDFweights_MultiLepCalc", &NewPDFweights_MultiLepCalc, &b_NewPDFweights_MultiLepCalc);
   inputTree->SetBranchAddress("LeptonEnergy_TpTpCalc", &LeptonEnergy_TpTpCalc, &b_LeptonEnergy_TpTpCalc);
   inputTree->SetBranchAddress("LeptonEta_TpTpCalc", &LeptonEta_TpTpCalc, &b_LeptonEta_TpTpCalc);
   inputTree->SetBranchAddress("LeptonPhi_TpTpCalc", &LeptonPhi_TpTpCalc, &b_LeptonPhi_TpTpCalc);
   inputTree->SetBranchAddress("LeptonPt_TpTpCalc", &LeptonPt_TpTpCalc, &b_LeptonPt_TpTpCalc);
   inputTree->SetBranchAddress("WdecayEnergy_TpTpCalc", &WdecayEnergy_TpTpCalc, &b_WdecayEnergy_TpTpCalc);
   inputTree->SetBranchAddress("WdecayEta_TpTpCalc", &WdecayEta_TpTpCalc, &b_WdecayEta_TpTpCalc);
   inputTree->SetBranchAddress("WdecayPhi_TpTpCalc", &WdecayPhi_TpTpCalc, &b_WdecayPhi_TpTpCalc);
   inputTree->SetBranchAddress("WdecayPt_TpTpCalc", &WdecayPt_TpTpCalc, &b_WdecayPt_TpTpCalc);
   inputTree->SetBranchAddress("ZdecayEnergy_TpTpCalc", &ZdecayEnergy_TpTpCalc, &b_ZdecayEnergy_TpTpCalc);
   inputTree->SetBranchAddress("ZdecayEta_TpTpCalc", &ZdecayEta_TpTpCalc, &b_ZdecayEta_TpTpCalc);
   inputTree->SetBranchAddress("ZdecayPhi_TpTpCalc", &ZdecayPhi_TpTpCalc, &b_ZdecayPhi_TpTpCalc);
   inputTree->SetBranchAddress("ZdecayPt_TpTpCalc", &ZdecayPt_TpTpCalc, &b_ZdecayPt_TpTpCalc);
   inputTree->SetBranchAddress("allTopsEnergy_TTbarMassCalc", &allTopsEnergy_TTbarMassCalc, &b_allTopsEnergy_TTbarMassCalc);
   inputTree->SetBranchAddress("allTopsEta_TTbarMassCalc", &allTopsEta_TTbarMassCalc, &b_allTopsEta_TTbarMassCalc);
   inputTree->SetBranchAddress("allTopsPhi_TTbarMassCalc", &allTopsPhi_TTbarMassCalc, &b_allTopsPhi_TTbarMassCalc);
   inputTree->SetBranchAddress("allTopsPt_TTbarMassCalc", &allTopsPt_TTbarMassCalc, &b_allTopsPt_TTbarMassCalc);
   inputTree->SetBranchAddress("bPrimeEnergy_TpTpCalc", &bPrimeEnergy_TpTpCalc, &b_bPrimeEnergy_TpTpCalc);
   inputTree->SetBranchAddress("bPrimeEta_TpTpCalc", &bPrimeEta_TpTpCalc, &b_bPrimeEta_TpTpCalc);
   inputTree->SetBranchAddress("bPrimeMass_TpTpCalc", &bPrimeMass_TpTpCalc, &b_bPrimeMass_TpTpCalc);
   inputTree->SetBranchAddress("bPrimePhi_TpTpCalc", &bPrimePhi_TpTpCalc, &b_bPrimePhi_TpTpCalc);
   inputTree->SetBranchAddress("bPrimePt_TpTpCalc", &bPrimePt_TpTpCalc, &b_bPrimePt_TpTpCalc);
   inputTree->SetBranchAddress("bosonEnergy_TpTpCalc", &bosonEnergy_TpTpCalc, &b_bosonEnergy_TpTpCalc);
   inputTree->SetBranchAddress("bosonEta_TpTpCalc", &bosonEta_TpTpCalc, &b_bosonEta_TpTpCalc);
   inputTree->SetBranchAddress("bosonPhi_TpTpCalc", &bosonPhi_TpTpCalc, &b_bosonPhi_TpTpCalc);
   inputTree->SetBranchAddress("bosonPt_TpTpCalc", &bosonPt_TpTpCalc, &b_bosonPt_TpTpCalc);
   inputTree->SetBranchAddress("elAEff_MultiLepCalc", &elAEff_MultiLepCalc, &b_elAEff_MultiLepCalc);
   inputTree->SetBranchAddress("elChIso_MultiLepCalc", &elChIso_MultiLepCalc, &b_elChIso_MultiLepCalc);
   inputTree->SetBranchAddress("elD0_MultiLepCalc", &elD0_MultiLepCalc, &b_elD0_MultiLepCalc);
   inputTree->SetBranchAddress("elDEtaSCTkAtVtx_MultiLepCalc", &elDEtaSCTkAtVtx_MultiLepCalc, &b_elDEtaSCTkAtVtx_MultiLepCalc);
   inputTree->SetBranchAddress("elDPhiSCTkAtVtx_MultiLepCalc", &elDPhiSCTkAtVtx_MultiLepCalc, &b_elDPhiSCTkAtVtx_MultiLepCalc);
   inputTree->SetBranchAddress("elDR03TkSumPt_MultiLepCalc", &elDR03TkSumPt_MultiLepCalc, &b_elDR03TkSumPt_MultiLepCalc);
   inputTree->SetBranchAddress("elDZ_MultiLepCalc", &elDZ_MultiLepCalc, &b_elDZ_MultiLepCalc);
   inputTree->SetBranchAddress("elDeta_MultiLepCalc", &elDeta_MultiLepCalc, &b_elDeta_MultiLepCalc);
   inputTree->SetBranchAddress("elDphi_MultiLepCalc", &elDphi_MultiLepCalc, &b_elDphi_MultiLepCalc);
   inputTree->SetBranchAddress("elDxy_MultiLepCalc", &elDxy_MultiLepCalc, &b_elDxy_MultiLepCalc);
   inputTree->SetBranchAddress("elEcalPFClusterIso_MultiLepCalc", &elEcalPFClusterIso_MultiLepCalc, &b_elEcalPFClusterIso_MultiLepCalc);
   inputTree->SetBranchAddress("elEnergy_MultiLepCalc", &elEnergy_MultiLepCalc, &b_elEnergy_MultiLepCalc);
   inputTree->SetBranchAddress("elEtaVtx_MultiLepCalc", &elEtaVtx_MultiLepCalc, &b_elEtaVtx_MultiLepCalc);
   inputTree->SetBranchAddress("elEta_MultiLepCalc", &elEta_MultiLepCalc, &b_elEta_MultiLepCalc);
   inputTree->SetBranchAddress("elGen_Reco_dr_MultiLepCalc", &elGen_Reco_dr_MultiLepCalc, &b_elGen_Reco_dr_MultiLepCalc);
   inputTree->SetBranchAddress("elHcalPFClusterIso_MultiLepCalc", &elHcalPFClusterIso_MultiLepCalc, &b_elHcalPFClusterIso_MultiLepCalc);
   inputTree->SetBranchAddress("elHoE_MultiLepCalc", &elHoE_MultiLepCalc, &b_elHoE_MultiLepCalc);
   inputTree->SetBranchAddress("elIsLooseBarrel_MultiLepCalc", &elIsLooseBarrel_MultiLepCalc, &b_elIsLooseBarrel_MultiLepCalc);
   inputTree->SetBranchAddress("elIsLooseEndCap_MultiLepCalc", &elIsLooseEndCap_MultiLepCalc, &b_elIsLooseEndCap_MultiLepCalc);
   inputTree->SetBranchAddress("elIsMediumBarrel_MultiLepCalc", &elIsMediumBarrel_MultiLepCalc, &b_elIsMediumBarrel_MultiLepCalc);
   inputTree->SetBranchAddress("elIsMediumEndCap_MultiLepCalc", &elIsMediumEndCap_MultiLepCalc, &b_elIsMediumEndCap_MultiLepCalc);
   inputTree->SetBranchAddress("elIsTightBarrel_MultiLepCalc", &elIsTightBarrel_MultiLepCalc, &b_elIsTightBarrel_MultiLepCalc);
   inputTree->SetBranchAddress("elIsTightEndCap_MultiLepCalc", &elIsTightEndCap_MultiLepCalc, &b_elIsTightEndCap_MultiLepCalc);
   inputTree->SetBranchAddress("elIsVetoBarrel_MultiLepCalc", &elIsVetoBarrel_MultiLepCalc, &b_elIsVetoBarrel_MultiLepCalc);
   inputTree->SetBranchAddress("elIsVetoEndCap_MultiLepCalc", &elIsVetoEndCap_MultiLepCalc, &b_elIsVetoEndCap_MultiLepCalc);
   inputTree->SetBranchAddress("elMVAValue_iso_MultiLepCalc", &elMVAValue_iso_MultiLepCalc, &b_elMVAValue_iso_MultiLepCalc);
   inputTree->SetBranchAddress("elMVAValue_MultiLepCalc", &elMVAValue_MultiLepCalc, &b_elMVAValue_MultiLepCalc);
   inputTree->SetBranchAddress("elMatchedEnergy_MultiLepCalc", &elMatchedEnergy_MultiLepCalc, &b_elMatchedEnergy_MultiLepCalc);
   inputTree->SetBranchAddress("elMatchedEta_MultiLepCalc", &elMatchedEta_MultiLepCalc, &b_elMatchedEta_MultiLepCalc);
   inputTree->SetBranchAddress("elMatchedPhi_MultiLepCalc", &elMatchedPhi_MultiLepCalc, &b_elMatchedPhi_MultiLepCalc);
   inputTree->SetBranchAddress("elMatchedPt_MultiLepCalc", &elMatchedPt_MultiLepCalc, &b_elMatchedPt_MultiLepCalc);
   inputTree->SetBranchAddress("elMiniIso_MultiLepCalc", &elMiniIso_MultiLepCalc, &b_elMiniIso_MultiLepCalc);
   inputTree->SetBranchAddress("elMother_energy_MultiLepCalc", &elMother_energy_MultiLepCalc, &b_elMother_energy_MultiLepCalc);
   inputTree->SetBranchAddress("elMother_eta_MultiLepCalc", &elMother_eta_MultiLepCalc, &b_elMother_eta_MultiLepCalc);
   inputTree->SetBranchAddress("elMother_phi_MultiLepCalc", &elMother_phi_MultiLepCalc, &b_elMother_phi_MultiLepCalc);
   inputTree->SetBranchAddress("elMother_pt_MultiLepCalc", &elMother_pt_MultiLepCalc, &b_elMother_pt_MultiLepCalc);
   inputTree->SetBranchAddress("elNhIso_MultiLepCalc", &elNhIso_MultiLepCalc, &b_elNhIso_MultiLepCalc);
   inputTree->SetBranchAddress("elOoemoop_MultiLepCalc", &elOoemoop_MultiLepCalc, &b_elOoemoop_MultiLepCalc);
   inputTree->SetBranchAddress("elPFEta_MultiLepCalc", &elPFEta_MultiLepCalc, &b_elPFEta_MultiLepCalc);
   inputTree->SetBranchAddress("elPFPhi_MultiLepCalc", &elPFPhi_MultiLepCalc, &b_elPFPhi_MultiLepCalc);
   inputTree->SetBranchAddress("elPhIso_MultiLepCalc", &elPhIso_MultiLepCalc, &b_elPhIso_MultiLepCalc);
   inputTree->SetBranchAddress("elPhiVtx_MultiLepCalc", &elPhiVtx_MultiLepCalc, &b_elPhiVtx_MultiLepCalc);
   inputTree->SetBranchAddress("elPhi_MultiLepCalc", &elPhi_MultiLepCalc, &b_elPhi_MultiLepCalc);
   inputTree->SetBranchAddress("elPt_MultiLepCalc", &elPt_MultiLepCalc, &b_elPt_MultiLepCalc);
   inputTree->SetBranchAddress("elRelIso_MultiLepCalc", &elRelIso_MultiLepCalc, &b_elRelIso_MultiLepCalc);
   inputTree->SetBranchAddress("elRhoIso_MultiLepCalc", &elRhoIso_MultiLepCalc, &b_elRhoIso_MultiLepCalc);
   inputTree->SetBranchAddress("elSCE_MultiLepCalc", &elSCE_MultiLepCalc, &b_elSCE_MultiLepCalc);
   inputTree->SetBranchAddress("elSihih_MultiLepCalc", &elSihih_MultiLepCalc, &b_elSihih_MultiLepCalc);
   inputTree->SetBranchAddress("evtWeightsMC_MultiLepCalc", &evtWeightsMC_MultiLepCalc, &b_evtWeightsMC_MultiLepCalc);
   inputTree->SetBranchAddress("genBSLEnergy_MultiLepCalc", &genBSLEnergy_MultiLepCalc, &b_genBSLEnergy_MultiLepCalc);
   inputTree->SetBranchAddress("genBSLEta_MultiLepCalc", &genBSLEta_MultiLepCalc, &b_genBSLEta_MultiLepCalc);
   inputTree->SetBranchAddress("genBSLPhi_MultiLepCalc", &genBSLPhi_MultiLepCalc, &b_genBSLPhi_MultiLepCalc);
   inputTree->SetBranchAddress("genBSLPt_MultiLepCalc", &genBSLPt_MultiLepCalc, &b_genBSLPt_MultiLepCalc);
   inputTree->SetBranchAddress("genEnergy_MultiLepCalc", &genEnergy_MultiLepCalc, &b_genEnergy_MultiLepCalc);
   inputTree->SetBranchAddress("genEta_MultiLepCalc", &genEta_MultiLepCalc, &b_genEta_MultiLepCalc);
   inputTree->SetBranchAddress("genJetEnergy_MultiLepCalc", &genJetEnergy_MultiLepCalc, &b_genJetEnergy_MultiLepCalc);
   inputTree->SetBranchAddress("genJetEta_MultiLepCalc", &genJetEta_MultiLepCalc, &b_genJetEta_MultiLepCalc);
   inputTree->SetBranchAddress("genJetPhi_MultiLepCalc", &genJetPhi_MultiLepCalc, &b_genJetPhi_MultiLepCalc);
   inputTree->SetBranchAddress("genJetPt_MultiLepCalc", &genJetPt_MultiLepCalc, &b_genJetPt_MultiLepCalc);
   inputTree->SetBranchAddress("genPhi_MultiLepCalc", &genPhi_MultiLepCalc, &b_genPhi_MultiLepCalc);
   inputTree->SetBranchAddress("genPt_MultiLepCalc", &genPt_MultiLepCalc, &b_genPt_MultiLepCalc);
   inputTree->SetBranchAddress("muChIso_MultiLepCalc", &muChIso_MultiLepCalc, &b_muChIso_MultiLepCalc);
   inputTree->SetBranchAddress("muChi2_MultiLepCalc", &muChi2_MultiLepCalc, &b_muChi2_MultiLepCalc);
   inputTree->SetBranchAddress("muDxy_MultiLepCalc", &muDxy_MultiLepCalc, &b_muDxy_MultiLepCalc);
   inputTree->SetBranchAddress("muDz_MultiLepCalc", &muDz_MultiLepCalc, &b_muDz_MultiLepCalc);
   inputTree->SetBranchAddress("muEnergy_MultiLepCalc", &muEnergy_MultiLepCalc, &b_muEnergy_MultiLepCalc);
   inputTree->SetBranchAddress("muEta_MultiLepCalc", &muEta_MultiLepCalc, &b_muEta_MultiLepCalc);
   inputTree->SetBranchAddress("muGIso_MultiLepCalc", &muGIso_MultiLepCalc, &b_muGIso_MultiLepCalc);
   inputTree->SetBranchAddress("muGen_Reco_dr_MultiLepCalc", &muGen_Reco_dr_MultiLepCalc, &b_muGen_Reco_dr_MultiLepCalc);
   inputTree->SetBranchAddress("muInnerEta_MultiLepCalc", &muInnerEta_MultiLepCalc, &b_muInnerEta_MultiLepCalc);
   inputTree->SetBranchAddress("muInnerPhi_MultiLepCalc", &muInnerPhi_MultiLepCalc, &b_muInnerPhi_MultiLepCalc);
   inputTree->SetBranchAddress("muInnerPt_MultiLepCalc", &muInnerPt_MultiLepCalc, &b_muInnerPt_MultiLepCalc);
   inputTree->SetBranchAddress("muMatchedEnergy_MultiLepCalc", &muMatchedEnergy_MultiLepCalc, &b_muMatchedEnergy_MultiLepCalc);
   inputTree->SetBranchAddress("muMatchedEta_MultiLepCalc", &muMatchedEta_MultiLepCalc, &b_muMatchedEta_MultiLepCalc);
   inputTree->SetBranchAddress("muMatchedPhi_MultiLepCalc", &muMatchedPhi_MultiLepCalc, &b_muMatchedPhi_MultiLepCalc);
   inputTree->SetBranchAddress("muMatchedPt_MultiLepCalc", &muMatchedPt_MultiLepCalc, &b_muMatchedPt_MultiLepCalc);
   inputTree->SetBranchAddress("muMiniIsoDB_MultiLepCalc", &muMiniIsoDB_MultiLepCalc, &b_muMiniIsoDB_MultiLepCalc);
   inputTree->SetBranchAddress("muMiniIso_MultiLepCalc", &muMiniIso_MultiLepCalc, &b_muMiniIso_MultiLepCalc);
   inputTree->SetBranchAddress("muMother_energy_MultiLepCalc", &muMother_energy_MultiLepCalc, &b_muMother_energy_MultiLepCalc);
   inputTree->SetBranchAddress("muMother_eta_MultiLepCalc", &muMother_eta_MultiLepCalc, &b_muMother_eta_MultiLepCalc);
   inputTree->SetBranchAddress("muMother_phi_MultiLepCalc", &muMother_phi_MultiLepCalc, &b_muMother_phi_MultiLepCalc);
   inputTree->SetBranchAddress("muMother_pt_MultiLepCalc", &muMother_pt_MultiLepCalc, &b_muMother_pt_MultiLepCalc);
   inputTree->SetBranchAddress("muNhIso_MultiLepCalc", &muNhIso_MultiLepCalc, &b_muNhIso_MultiLepCalc);
   inputTree->SetBranchAddress("muPhi_MultiLepCalc", &muPhi_MultiLepCalc, &b_muPhi_MultiLepCalc);
   inputTree->SetBranchAddress("muPt_MultiLepCalc", &muPt_MultiLepCalc, &b_muPt_MultiLepCalc);
   inputTree->SetBranchAddress("muPuIso_MultiLepCalc", &muPuIso_MultiLepCalc, &b_muPuIso_MultiLepCalc);
   inputTree->SetBranchAddress("muRelIso_MultiLepCalc", &muRelIso_MultiLepCalc, &b_muRelIso_MultiLepCalc);
   inputTree->SetBranchAddress("quarkEnergy_TpTpCalc", &quarkEnergy_TpTpCalc, &b_quarkEnergy_TpTpCalc);
   inputTree->SetBranchAddress("quarkEta_TpTpCalc", &quarkEta_TpTpCalc, &b_quarkEta_TpTpCalc);
   inputTree->SetBranchAddress("quarkPhi_TpTpCalc", &quarkPhi_TpTpCalc, &b_quarkPhi_TpTpCalc);
   inputTree->SetBranchAddress("quarkPt_TpTpCalc", &quarkPt_TpTpCalc, &b_quarkPt_TpTpCalc);
   inputTree->SetBranchAddress("tPrimeEnergy_TpTpCalc", &tPrimeEnergy_TpTpCalc, &b_tPrimeEnergy_TpTpCalc);
   inputTree->SetBranchAddress("tPrimeEta_TpTpCalc", &tPrimeEta_TpTpCalc, &b_tPrimeEta_TpTpCalc);
   inputTree->SetBranchAddress("tPrimeMass_TpTpCalc", &tPrimeMass_TpTpCalc, &b_tPrimeMass_TpTpCalc);
   inputTree->SetBranchAddress("tPrimePhi_TpTpCalc", &tPrimePhi_TpTpCalc, &b_tPrimePhi_TpTpCalc);
   inputTree->SetBranchAddress("tPrimePt_TpTpCalc", &tPrimePt_TpTpCalc, &b_tPrimePt_TpTpCalc);
   inputTree->SetBranchAddress("theJetAK8CHSEta_JetSubCalc", &theJetAK8CHSEta_JetSubCalc, &b_theJetAK8CHSEta_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8CHSMass_JetSubCalc", &theJetAK8CHSMass_JetSubCalc, &b_theJetAK8CHSMass_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8CHSPhi_JetSubCalc", &theJetAK8CHSPhi_JetSubCalc, &b_theJetAK8CHSPhi_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8CHSPrunedMass_JetSubCalc", &theJetAK8CHSPrunedMass_JetSubCalc, &b_theJetAK8CHSPrunedMass_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8CHSPt_JetSubCalc", &theJetAK8CHSPt_JetSubCalc, &b_theJetAK8CHSPt_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8CHSSoftDropMass_JetSubCalc", &theJetAK8CHSSoftDropMass_JetSubCalc, &b_theJetAK8CHSSoftDropMass_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8CHSTau1_JetSubCalc", &theJetAK8CHSTau1_JetSubCalc, &b_theJetAK8CHSTau1_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8CHSTau2_JetSubCalc", &theJetAK8CHSTau2_JetSubCalc, &b_theJetAK8CHSTau2_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8CHSTau3_JetSubCalc", &theJetAK8CHSTau3_JetSubCalc, &b_theJetAK8CHSTau3_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8CSV_JetSubCalc", &theJetAK8CSV_JetSubCalc, &b_theJetAK8CSV_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8DoubleB_JetSubCalc", &theJetAK8DoubleB_JetSubCalc, &b_theJetAK8DoubleB_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8Energy_JetSubCalc", &theJetAK8Energy_JetSubCalc, &b_theJetAK8Energy_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8Eta_JetSubCalc", &theJetAK8Eta_JetSubCalc, &b_theJetAK8Eta_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8GenDR_JetSubCalc", &theJetAK8GenDR_JetSubCalc, &b_theJetAK8GenDR_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8GenMass_JetSubCalc", &theJetAK8GenMass_JetSubCalc, &b_theJetAK8GenMass_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8GenPt_JetSubCalc", &theJetAK8GenPt_JetSubCalc, &b_theJetAK8GenPt_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8JetCharge_JetSubCalc", &theJetAK8JetCharge_JetSubCalc, &b_theJetAK8JetCharge_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8Mass_JetSubCalc", &theJetAK8Mass_JetSubCalc, &b_theJetAK8Mass_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8NjettinessTau1_JetSubCalc", &theJetAK8NjettinessTau1_JetSubCalc, &b_theJetAK8NjettinessTau1_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8NjettinessTau2_JetSubCalc", &theJetAK8NjettinessTau2_JetSubCalc, &b_theJetAK8NjettinessTau2_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8NjettinessTau3_JetSubCalc", &theJetAK8NjettinessTau3_JetSubCalc, &b_theJetAK8NjettinessTau3_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8Phi_JetSubCalc", &theJetAK8Phi_JetSubCalc, &b_theJetAK8Phi_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8Pt_JetSubCalc", &theJetAK8Pt_JetSubCalc, &b_theJetAK8Pt_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8SDSubjetBTag_JetSubCalc", &theJetAK8SDSubjetBTag_JetSubCalc, &b_theJetAK8SDSubjetBTag_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8SDSubjetCSVb_JetSubCalc", &theJetAK8SDSubjetCSVb_JetSubCalc, &b_theJetAK8SDSubjetCSVb_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8SDSubjetCSVbb_JetSubCalc", &theJetAK8SDSubjetCSVbb_JetSubCalc, &b_theJetAK8SDSubjetCSVbb_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8SDSubjetCSVc_JetSubCalc", &theJetAK8SDSubjetCSVc_JetSubCalc, &b_theJetAK8SDSubjetCSVc_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8SDSubjetCSVudsg_JetSubCalc", &theJetAK8SDSubjetCSVudsg_JetSubCalc, &b_theJetAK8SDSubjetCSVudsg_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8SDSubjetDR_JetSubCalc", &theJetAK8SDSubjetDR_JetSubCalc, &b_theJetAK8SDSubjetDR_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8SDSubjetEta_JetSubCalc", &theJetAK8SDSubjetEta_JetSubCalc, &b_theJetAK8SDSubjetEta_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8SDSubjetMass_JetSubCalc", &theJetAK8SDSubjetMass_JetSubCalc, &b_theJetAK8SDSubjetMass_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8SDSubjetPhi_JetSubCalc", &theJetAK8SDSubjetPhi_JetSubCalc, &b_theJetAK8SDSubjetPhi_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8SDSubjetPt_JetSubCalc", &theJetAK8SDSubjetPt_JetSubCalc, &b_theJetAK8SDSubjetPt_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8SoftDropCorr_JetSubCalc", &theJetAK8SoftDropCorr_JetSubCalc, &b_theJetAK8SoftDropCorr_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8SoftDropRaw_JetSubCalc", &theJetAK8SoftDropRaw_JetSubCalc, &b_theJetAK8SoftDropRaw_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8SoftDrop_JMRdn_JetSubCalc", &theJetAK8SoftDrop_JMRdn_JetSubCalc, &b_theJetAK8SoftDrop_JMRdn_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8SoftDrop_JMRup_JetSubCalc", &theJetAK8SoftDrop_JMRup_JetSubCalc, &b_theJetAK8SoftDrop_JMRup_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8SoftDrop_JMSdn_JetSubCalc", &theJetAK8SoftDrop_JMSdn_JetSubCalc, &b_theJetAK8SoftDrop_JMSdn_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8SoftDrop_JMSup_JetSubCalc", &theJetAK8SoftDrop_JMSup_JetSubCalc, &b_theJetAK8SoftDrop_JMSup_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8SoftDrop_JetSubCalc", &theJetAK8SoftDrop_JetSubCalc, &b_theJetAK8SoftDrop_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8SoftDropn2b1_JetSubCalc", &theJetAK8SoftDropn2b1_JetSubCalc, &b_theJetAK8SoftDropn2b1_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8SoftDropn2b2_JetSubCalc", &theJetAK8SoftDropn2b2_JetSubCalc, &b_theJetAK8SoftDropn2b2_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8SoftDropn3b1_JetSubCalc", &theJetAK8SoftDropn3b1_JetSubCalc, &b_theJetAK8SoftDropn3b1_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8SoftDropn3b2_JetSubCalc", &theJetAK8SoftDropn3b2_JetSubCalc, &b_theJetAK8SoftDropn3b2_JetSubCalc);
   inputTree->SetBranchAddress("theJetDeepCSVb_JetSubCalc", &theJetDeepCSVb_JetSubCalc, &b_theJetDeepCSVb_JetSubCalc);
   inputTree->SetBranchAddress("theJetDeepCSVbb_JetSubCalc", &theJetDeepCSVbb_JetSubCalc, &b_theJetDeepCSVbb_JetSubCalc);
   inputTree->SetBranchAddress("theJetDeepCSVc_JetSubCalc", &theJetDeepCSVc_JetSubCalc, &b_theJetDeepCSVc_JetSubCalc);
   inputTree->SetBranchAddress("theJetDeepCSVudsg_JetSubCalc", &theJetDeepCSVudsg_JetSubCalc, &b_theJetDeepCSVudsg_JetSubCalc);
   inputTree->SetBranchAddress("theJetEnergy_JetSubCalc", &theJetEnergy_JetSubCalc, &b_theJetEnergy_JetSubCalc);
   inputTree->SetBranchAddress("theJetEta_JetSubCalc", &theJetEta_JetSubCalc, &b_theJetEta_JetSubCalc);
   inputTree->SetBranchAddress("theJetPhi_JetSubCalc", &theJetPhi_JetSubCalc, &b_theJetPhi_JetSubCalc);
   inputTree->SetBranchAddress("theJetPileupJetId_JetSubCalc", &theJetPileupJetId_JetSubCalc, &b_theJetPileupJetId_JetSubCalc);
   inputTree->SetBranchAddress("theJetPt_JetSubCalc", &theJetPt_JetSubCalc, &b_theJetPt_JetSubCalc);
   inputTree->SetBranchAddress("topEnergy_TTbarMassCalc", &topEnergy_TTbarMassCalc, &b_topEnergy_TTbarMassCalc);
   inputTree->SetBranchAddress("topEta_TTbarMassCalc", &topEta_TTbarMassCalc, &b_topEta_TTbarMassCalc);
   inputTree->SetBranchAddress("topMass_TTbarMassCalc", &topMass_TTbarMassCalc, &b_topMass_TTbarMassCalc);
   inputTree->SetBranchAddress("topPhi_TTbarMassCalc", &topPhi_TTbarMassCalc, &b_topPhi_TTbarMassCalc);
   inputTree->SetBranchAddress("topPt_TTbarMassCalc", &topPt_TTbarMassCalc, &b_topPt_TTbarMassCalc);
   inputTree->SetBranchAddress("topWEnergy_TTbarMassCalc", &topWEnergy_TTbarMassCalc, &b_topWEnergy_TTbarMassCalc);
   inputTree->SetBranchAddress("topWEta_TTbarMassCalc", &topWEta_TTbarMassCalc, &b_topWEta_TTbarMassCalc);
   inputTree->SetBranchAddress("topWPhi_TTbarMassCalc", &topWPhi_TTbarMassCalc, &b_topWPhi_TTbarMassCalc);
   inputTree->SetBranchAddress("topWPt_TTbarMassCalc", &topWPt_TTbarMassCalc, &b_topWPt_TTbarMassCalc);
   inputTree->SetBranchAddress("topbEnergy_TTbarMassCalc", &topbEnergy_TTbarMassCalc, &b_topbEnergy_TTbarMassCalc);
   inputTree->SetBranchAddress("topbEta_TTbarMassCalc", &topbEta_TTbarMassCalc, &b_topbEta_TTbarMassCalc);
   inputTree->SetBranchAddress("topbPhi_TTbarMassCalc", &topbPhi_TTbarMassCalc, &b_topbPhi_TTbarMassCalc);
   inputTree->SetBranchAddress("topbPt_TTbarMassCalc", &topbPt_TTbarMassCalc, &b_topbPt_TTbarMassCalc);
   inputTree->SetBranchAddress("electron_hltfilters_MultiLepCalc", &electron_hltfilters_MultiLepCalc, &b_electron_hltfilters_MultiLepCalc);
   inputTree->SetBranchAddress("muon_hltfilters_MultiLepCalc", &muon_hltfilters_MultiLepCalc, &b_muon_hltfilters_MultiLepCalc);
   inputTree->SetBranchAddress("vsSelMCTriggersEl_MultiLepCalc", &vsSelMCTriggersEl_MultiLepCalc, &b_vsSelMCTriggersEl_MultiLepCalc);
   inputTree->SetBranchAddress("vsSelMCTriggersMu_MultiLepCalc", &vsSelMCTriggersMu_MultiLepCalc, &b_vsSelMCTriggersMu_MultiLepCalc);
   inputTree->SetBranchAddress("vsSelTriggersEl_MultiLepCalc", &vsSelTriggersEl_MultiLepCalc, &b_vsSelTriggersEl_MultiLepCalc);
   inputTree->SetBranchAddress("vsSelTriggersMu_MultiLepCalc", &vsSelTriggersMu_MultiLepCalc, &b_vsSelTriggersMu_MultiLepCalc);
   
   Notify();
}

Bool_t step1::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void step1::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!inputTree) return;
   inputTree->Show(entry);
}
Int_t step1::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef step1_cxx
