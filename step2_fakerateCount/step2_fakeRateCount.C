#define step2_fakeRateCount_cxx
#include "step2_fakeRateCount.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

void step2_fakeRateCount::Loop()
{
//   In a ROOT session, you can do:
//      root> .L step2_fakeRateCount.C
//      root> step2_fakeRateCount t
//      root> t.GetEntry(12); // Fill t data members with entry number 12
//      root> t.Show();       // Show values of entry 12
//      root> t.Show(16);     // Read and show values of entry 16
//      root> t.Loop();       // Loop on all entries
//

//     This is the loop skeleton where:
//    jentry is the global entry number in the chain
//    ientry is the entry number in the current Tree
//  Note that the argument to GetEntry must be:
//    jentry for TChain::GetEntry
//    ientry for TTree::GetEntry and TBranch::GetEntry
//
//       To read only selected branches, Insert statements like:
// METHOD1:
//    inputTree->SetBranchStatus("*",0);  // disable all branches
//    inputTree->SetBranchStatus("branchname",1);  // activate branchname
// METHOD2: replace line
//    inputTree->GetEntry(jentry);       //read all branches
//by  b_branchname->GetEntry(ientry); //read only this branch
   if (inputTree == 0) return;

//    inputTree->SetBranchStatus("*",0); //if you want just specific branches

   // OUTPUT FILE
   outputFile->cd();
   TTree *outputTree = new TTree("ljmet","ljmet");
//    outputTree = inputTree->CloneTree(0);

   // define cuts values
   int minNbjetsCut = 1;
   int maxNbjetsCut = 999;
   int mllOSCut  = 20;

   float LeptonPt;
   float LeptonEta;
   float LeptonPhi;
   float LeptonEnergy;
   int LeptonFlavor;
   int LeptonIsTight;
   
   int LeptonIsPrompt;
   int LeptonIsMatched;
   int LeptonIsFromB;
   int LeptonIsFromC;
   int LeptonIsFromHL;
   int LeptonIsFromPh;
   int LeptonIsFromL;
   int LeptonCount;

   outputTree->Branch("LeptonPt",&LeptonPt,"LeptonPt/F");
   outputTree->Branch("LeptonEta",&LeptonEta,"LeptonEta/F");
   outputTree->Branch("LeptonPhi",&LeptonPhi,"LeptonPhi/F");
   outputTree->Branch("LeptonEnergy",&LeptonEnergy,"LeptonEnergy/F");
   outputTree->Branch("LeptonFlavor",&LeptonFlavor,"LeptonFlavor/I");
   outputTree->Branch("LeptonIsTight",&LeptonIsTight,"LeptonIsTight/I");
   outputTree->Branch("LeptonIsPrompt",&LeptonIsPrompt,"LeptonIsPrompt/I");
   outputTree->Branch("LeptonIsMatched",&LeptonIsMatched,"LeptonIsMatched/I");
   outputTree->Branch("LeptonIsFromB",&LeptonIsFromB,"LeptonIsFromB/I");
   outputTree->Branch("LeptonIsFromC",&LeptonIsFromC,"LeptonIsFromC/I");
   outputTree->Branch("LeptonIsFromHL",&LeptonIsFromHL,"LeptonIsFromHL/I");
   outputTree->Branch("LeptonIsFromPh",&LeptonIsFromPh,"LeptonIsFromPh/I");
   outputTree->Branch("LeptonIsFromL",&LeptonIsFromL,"LeptonIsFromL/I");
   outputTree->Branch("LeptonCount",&LeptonCount,"LeptonCount/I");

	const Int_t nbins = 20; 
	Double_t bins[nbins+1]={0,10,30,40,60,80,100,120,140,160,180,200,220,240,260,280,300,350,400,450,500};
// 	const Int_t nbins = 7; 
// 	Double_t bins[nbins+1]={0,10,30,50,100,150,200,500};

   TH1D *h_el_f_t_pt = new TH1D("h_el_f_t_pt","h_el_f_t_pt",nbins,bins); 
   TH1D *h_el_f_t_pt_isFromL = new TH1D("h_el_f_t_pt_isFromL","h_el_f_t_pt_isFromL",nbins,bins);
   TH1D *h_el_f_t_pt_isFromC = new TH1D("h_el_f_t_pt_isFromC","h_el_f_t_pt_isFromC",nbins,bins);
   TH1D *h_el_f_t_pt_isFromB = new TH1D("h_el_f_t_pt_isFromB","h_el_f_t_pt_isFromB",nbins,bins);
   TH1D *h_el_f_t_pt_isFromElse = new TH1D("h_el_f_t_pt_isFromElse","h_el_f_t_pt_isFromElse",nbins,bins);
   TH1D *h_el_f_t_pt_isNotMatched = new TH1D("h_el_f_t_pt_isNotMatched","h_el_f_t_pt_isNotMatched",nbins,bins);

   TH1D *h_el_f_pt = new TH1D("h_el_f_pt","h_el_f_pt",nbins,bins); 
   TH1D *h_el_f_pt_isFromL = new TH1D("h_el_f_pt_isFromL","h_el_f_pt_isFromL",nbins,bins);
   TH1D *h_el_f_pt_isFromC = new TH1D("h_el_f_pt_isFromC","h_el_f_pt_isFromC",nbins,bins);
   TH1D *h_el_f_pt_isFromB = new TH1D("h_el_f_pt_isFromB","h_el_f_pt_isFromB",nbins,bins);
   TH1D *h_el_f_pt_isFromElse = new TH1D("h_el_f_pt_isFromElse","h_el_f_pt_isFromElse",nbins,bins);
   TH1D *h_el_f_pt_isNotMatched = new TH1D("h_el_f_pt_isNotMatched","h_el_f_pt_isNotMatched",nbins,bins);

   TH1D *h_mu_f_t_pt = new TH1D("h_mu_f_t_pt","h_mu_f_t_pt",nbins,bins); 
   TH1D *h_mu_f_t_pt_isFromL = new TH1D("h_mu_f_t_pt_isFromL","h_mu_f_t_pt_isFromL",nbins,bins);
   TH1D *h_mu_f_t_pt_isFromC = new TH1D("h_mu_f_t_pt_isFromC","h_mu_f_t_pt_isFromC",nbins,bins);
   TH1D *h_mu_f_t_pt_isFromB = new TH1D("h_mu_f_t_pt_isFromB","h_mu_f_t_pt_isFromB",nbins,bins);
   TH1D *h_mu_f_t_pt_isFromElse = new TH1D("h_mu_f_t_pt_isFromElse","h_mu_f_t_pt_isFromElse",nbins,bins);
   TH1D *h_mu_f_t_pt_isNotMatched = new TH1D("h_mu_f_t_pt_isNotMatched","h_mu_f_t_pt_isNotMatched",nbins,bins);

   TH1D *h_mu_f_pt = new TH1D("h_mu_f_pt","h_mu_f_pt",nbins,bins); 
   TH1D *h_mu_f_pt_isFromL = new TH1D("h_mu_f_pt_isFromL","h_mu_f_pt_isFromL",nbins,bins);
   TH1D *h_mu_f_pt_isFromC = new TH1D("h_mu_f_pt_isFromC","h_mu_f_pt_isFromC",nbins,bins);
   TH1D *h_mu_f_pt_isFromB = new TH1D("h_mu_f_pt_isFromB","h_mu_f_pt_isFromB",nbins,bins);
   TH1D *h_mu_f_pt_isFromElse = new TH1D("h_mu_f_pt_isFromElse","h_mu_f_pt_isFromElse",nbins,bins);
   TH1D *h_mu_f_pt_isNotMatched = new TH1D("h_mu_f_pt_isNotMatched","h_mu_f_pt_isNotMatched",nbins,bins);


   Long64_t nentries = inputTree->GetEntriesFast();

   Long64_t nbytes = 0, nb = 0;
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = inputTree->GetEntry(jentry);   nbytes += nb;
      // if (Cut(ientry) < 0) continue;

      if(jentry % 10000 ==0) std::cout<<"Completed "<<jentry<<" out of "<<nentries<<" events"<<std::endl;
//       if(jentry >= 1000000) break;

//       if(AllLeptonCount_PtOrdered!=3) continue;
//       if(AllLeptonCount_PtOrdered!=2) continue;
//       if(AllLeptonCount_PtOrdered!=1) continue;
      //if(NJetsBTagwithSF_MultiLepCalc < minNbjetsCut || NJetsBTagwithSF_MultiLepCalc > maxNbjetsCut) continue;
      //if( !(MllOS_allComb->at(0) > mllOSCut || MllOS_allComb->at(0) < 0)) continue;
      //if( !(MllOS_allComb->at(1) > mllOSCut || MllOS_allComb->at(1) < 0)) continue;
      //if( !(MllOS_allComb->at(2) > mllOSCut || MllOS_allComb->at(2) < 0)) continue;

      for(int i=0; i<AllLeptonPt_PtOrdered->size(); i++){

      		LeptonPt		= AllLeptonPt_PtOrdered->at(i);
		LeptonEta		= AllLeptonEta_PtOrdered->at(i);
		LeptonPhi		= AllLeptonPhi_PtOrdered->at(i);
		LeptonEnergy		= AllLeptonEnergy_PtOrdered->at(i);
		LeptonFlavor		= AllLeptonFlavor_PtOrdered->at(i);
		LeptonIsTight		= AllLeptonIsTight_PtOrdered->at(i);
		LeptonIsPrompt		= AllLeptonIsPrompt_PtOrdered->at(i);
		LeptonIsMatched		= AllLeptonIsMatched_PtOrdered->at(i);
		LeptonIsFromB		= AllLeptonIsFromB_PtOrdered->at(i);
		LeptonIsFromC		= AllLeptonIsFromC_PtOrdered->at(i);
		LeptonIsFromHL		= AllLeptonIsFromHL_PtOrdered->at(i);
		LeptonIsFromPh		= AllLeptonIsFromPh_PtOrdered->at(i);
		LeptonIsFromL		= AllLeptonIsFromL_PtOrdered->at(i);
		LeptonCount		= AllLeptonCount_PtOrdered;
		
		outputTree->Fill();
		
		if(LeptonIsPrompt) continue;
		
		if(LeptonFlavor==0){ //electron
			h_el_f_pt->Fill(LeptonPt);
			if(LeptonIsTight==1){
				h_el_f_t_pt->Fill(LeptonPt);
			}
			
			if(LeptonIsMatched){
				if(LeptonIsFromB==1){
					h_el_f_pt_isFromB->Fill(LeptonPt);
					if(LeptonIsTight==1){
						h_el_f_t_pt_isFromB->Fill(LeptonPt);
					}
				}
				if(LeptonIsFromC==1 && LeptonIsFromB==0){
					h_el_f_pt_isFromC->Fill(LeptonPt);
					if(LeptonIsTight==1){
						h_el_f_t_pt_isFromC->Fill(LeptonPt);
					}
				}
				if(LeptonIsFromL==1 && LeptonIsFromC==0 && LeptonIsFromB==0){
					h_el_f_pt_isFromL->Fill(LeptonPt);
					if(LeptonIsTight==1){
						h_el_f_t_pt_isFromL->Fill(LeptonPt);
					}
				}
				if(LeptonIsFromL==0 && LeptonIsFromC==0 && LeptonIsFromB==0){
					h_el_f_pt_isFromElse->Fill(LeptonPt);
					if(LeptonIsTight==1){
						h_el_f_t_pt_isFromElse->Fill(LeptonPt);
					}
				}
			}
			else{
				h_el_f_pt_isNotMatched->Fill(LeptonPt);
				if(LeptonIsTight==1){
					h_el_f_t_pt_isNotMatched->Fill(LeptonPt);
				}
			}

		}
		else{ //muon
			h_mu_f_pt->Fill(LeptonPt);
			if(LeptonIsTight==1){
				h_mu_f_t_pt->Fill(LeptonPt);
			}
			
			if(LeptonIsMatched){
				if(LeptonIsFromB==1){
					h_mu_f_pt_isFromB->Fill(LeptonPt);
					if(LeptonIsTight==1){
						h_mu_f_t_pt_isFromB->Fill(LeptonPt);
					}
				}
				if(LeptonIsFromC==1 && LeptonIsFromB==0){
					h_mu_f_pt_isFromC->Fill(LeptonPt);
					if(LeptonIsTight==1){
						h_mu_f_t_pt_isFromC->Fill(LeptonPt);
					}
				}
				if(LeptonIsFromL==1 && LeptonIsFromC==0 && LeptonIsFromB==0){
					h_mu_f_pt_isFromL->Fill(LeptonPt);
					if(LeptonIsTight==1){
						h_mu_f_t_pt_isFromL->Fill(LeptonPt);
					}
				}
				if(LeptonIsFromL==0 && LeptonIsFromC==0 && LeptonIsFromB==0){
					h_mu_f_pt_isFromElse->Fill(LeptonPt);
					if(LeptonIsTight==1){
						h_mu_f_t_pt_isFromElse->Fill(LeptonPt);
					}
				}
			}
			else{
				h_mu_f_pt_isNotMatched->Fill(LeptonPt);
					if(LeptonIsTight==1){
						h_mu_f_t_pt_isNotMatched->Fill(LeptonPt);
					}
			}
			
		}
       	
      }

   }

   h_el_f_t_pt->Write();
   h_el_f_t_pt_isFromL->Write();
   h_el_f_t_pt_isFromC->Write();
   h_el_f_t_pt_isFromB->Write();
   h_el_f_t_pt_isFromElse->Write();
   h_el_f_t_pt_isNotMatched->Write();

   h_el_f_pt->Write();
   h_el_f_pt_isFromL->Write();
   h_el_f_pt_isFromC->Write();
   h_el_f_pt_isFromB->Write();
   h_el_f_pt_isFromElse->Write();
   h_el_f_pt_isNotMatched->Write();

   h_mu_f_t_pt->Write();
   h_mu_f_t_pt_isFromL->Write();
   h_mu_f_t_pt_isFromC->Write();
   h_mu_f_t_pt_isFromB->Write();
   h_mu_f_t_pt_isFromElse->Write();
   h_mu_f_t_pt_isNotMatched->Write();

   h_mu_f_pt->Write();
   h_mu_f_pt_isFromL->Write();
   h_mu_f_pt_isFromC->Write();
   h_mu_f_pt_isFromB->Write();
   h_mu_f_pt_isFromElse->Write();
   h_mu_f_pt_isNotMatched->Write();

   outputTree->Write();

}
