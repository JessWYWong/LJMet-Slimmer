#ifndef _FAKERATE_H
#define _FAKERATE_H
#include <TRandom2.h>
#include "Math/Random.h"
#include <iostream>
// #include "CMSStyle.C"

#include "TStyle.h"
#include "TColor.h"
#include "TFile.h"
#include <TH1F.h>
#include <TH2.h>
#include "TCanvas.h"

using namespace std;

bool DEBUGfakerate_h = true;

float Pr(int mode,std::vector<double> lep_info);
inline float uPr(std::vector<double> lep_info);
float Fr(int mode,std::vector<double> lep_info);
inline float uFr(std::vector<double> lep_info);

inline float uQe();

inline double epsilon(double f);//these are guearenteed to be small numbers
inline double eta(double p);//these are guearenteed to be small numbers

inline int frModeBehavior(int mode,int flavour);
inline int prModeBehavior(int mode,int flavour);
inline int qeModeBehavior(int mode);


std::vector<double> SF3Lepbkg(double f, double p, int N_t0, int N_t1, int N_t2, int N_t3);
	//output: {0:N_ppp, 1:N_fpp, 2:N_ffp, 3:N_fff, 4:N_signal, 5:N_1fake, 6:N_2fakes, 7:N_3fakes, 8:N_bkg}
double SF3Lepbkg_simple(double f, double p, int N_t0, int N_t1, int N_t2, int N_t3);


/////////////////// Tripple electron ////////////////////////
double GetWeight(int mode, std::vector<double> lep1_info, std::vector<double> lep2_info, std::vector<double> lep3_info);

double W_ttt(int mode, std::vector<double> lep1_info, std::vector<double> lep2_info, std::vector<double> lep3_info );
double W_ttl(int mode, std::vector<double> lep1_info, std::vector<double> lep2_info, std::vector<double> lep3_info );
double W_tlt(int mode, std::vector<double> lep1_info, std::vector<double> lep2_info, std::vector<double> lep3_info );
double W_ltt(int mode, std::vector<double> lep1_info, std::vector<double> lep2_info, std::vector<double> lep3_info );
double W_tll(int mode, std::vector<double> lep1_info, std::vector<double> lep2_info, std::vector<double> lep3_info );
double W_ltl(int mode, std::vector<double> lep1_info, std::vector<double> lep2_info, std::vector<double> lep3_info );
double W_llt(int mode, std::vector<double> lep1_info, std::vector<double> lep2_info, std::vector<double> lep3_info );
double W_lll(int mode, std::vector<double> lep1_info, std::vector<double> lep2_info, std::vector<double> lep3_info );

/////////////////////////////
// 


float Pr(int mode, std::vector<double> lep_info){
	if(lep_info.at(0)==0){
		//ele prompt rate
		double pt_el = lep_info.at(2);
		double eta_el = lep_info.at(3);
		double weight = 0.0;

		////PRvMuPRtest,PRv9 from http://cms.cern.ch/iCMS/jsp/db_notes/noteInfo.jsp?cmsnoteid=CMS%20AN-2016/242 v16
		//if(pt_el>=30. && pt_el < 40.) weight = 0.904;
        	//else if(pt_el<50) weight = 0.928;
      		//else if(pt_el<60) weight = 0.934;
        	//else if(pt_el<70) weight = 0.942;
        	//else if(pt_el<80) weight = 0.947;
        	//else if(pt_el<90) weight = 0.953;
        	//else if(pt_el<100) weight = 0.955;
        	//else if(pt_el<125) weight = 0.948;
        	//else if(pt_el<150) weight = 0.951;
        	//else if(pt_el<200) weight = 0.946;
        	//else if(pt_el<300) weight = 0.935;
        	//else if(pt_el<400) weight = 0.920;
        	//else if(pt_el<500) weight = 0.902;
        	//else weight = 0.800;
        	
		//2017 PRv1
                if(pt_el>=30. && pt_el < 40.) weight = 0.807;
                else if(pt_el<50) weight = 0.851;
                else if(pt_el<60) weight = 0.872;
                else if(pt_el<70) weight = 0.879;
                else if(pt_el<80) weight = 0.882;
                else if(pt_el<90) weight = 0.881;
                else if(pt_el<100) weight = 0.882;
                else if(pt_el<125) weight = 0.867;
                else if(pt_el<150) weight = 0.858;
                else if(pt_el<200) weight = 0.854;
                else if(pt_el<300) weight = 0.856;
                else if(pt_el<400) weight = 0.827;
                else if(pt_el<500) weight = 0.839;
                else weight = 0.803;

		//if(DEBUGfakerate_h)std::cout << "elPR used (mode:"<<mode<<") = " << weight << " + " << "("<<prModeBehavior(mode)<<")"<<uPr(lep_info)<< std::endl;
		if(DEBUGfakerate_h)std::cout << "Ele PR -- Mode: " << mode << ", " << weight <<" + "<< prModeBehavior(mode,lep_info.at(0)) <<  " * " << uPr(lep_info)<< endl;
		return weight + uPr(lep_info)*prModeBehavior(mode,lep_info.at(0));


	}
	else{
		//muon prompt rate
		double pt_mu = lep_info.at(2);
		double eta_mu = lep_info.at(3);
		double weight = 0.0;

		// PRv6, PRv7test, PRvElPRtest, PRv9 - From Clint, https://indico.cern.ch/event/605620/contributions/2441087/attachments/1398025/2132153/VHFMeeting_X53_01.18.17.pdf http://cms.cern.ch/iCMS/jsp/db_notes/noteInfo.jsp?cmsnoteid=CMS%20AN-2016/242 v16
		//weight = 0.943;
		// 2017 PRv1 average of PR-eta of isotrig
		weight = 0.944;
		//if(DEBUGfakerate_h)std::cout << "muPR used (mode:"<<mode<<") = " << weight << " + " << "("<<prModeBehavior(mode)<<")"<<uPr(lep_info)<< std::endl;
 		if(DEBUGfakerate_h)std::cout << "Mu  PR -- Mode: " << mode << ", " << weight <<" + "<<  prModeBehavior(mode,lep_info.at(0)) << " * " << uPr(lep_info)<< endl;
		return weight + uPr(lep_info)*prModeBehavior(mode,lep_info.at(0));


	}
}

float Fr(int mode, std::vector<double> lep_info){
	if(lep_info.at(0)==0){
		//ele fake rate
		double pt_el = lep_info.at(2);
		double eta_el = lep_info.at(3);
		double weight = 0.0;

		if(lep_info.size()==4){ //before scan size is 4

			//FRv49 FRCR2 elMVAValueFix
			//weight = 0.20 + uFr(lep_info)*frModeBehavior(mode,lep_info.at(0));

                        //FRv1 FRCR2
                        weight = 0.10 + uFr(lep_info)*frModeBehavior(mode,lep_info.at(0));

			//FRv50 FRCR1 elMVAValueFix
// 			weight = 0.23 + uFr(lep_info)*frModeBehavior(mode,lep_info.at(0));

		}
		else{
			weight = lep_info.at(5);
		}

// 		if(DEBUGfakerate_h)std::cout << "elFR used = " << weight << std::endl;
		if(DEBUGfakerate_h)std::cout << "Ele FR -- Mode: " << mode << ", " << frModeBehavior(mode,lep_info.at(0)) << " * " << uFr(lep_info)<<  endl;

		return weight;


	}
	else{
		//muon fake rate
		double pt_mu = lep_info.at(2);
		double eta_mu = lep_info.at(3);
		double weight = 0.0;

		if(lep_info.size()==4) {  //before scan size is 4


			//FRv49MuEtatest - model after Clints eta dependence - central=FRv49
			//weight = ( 0.14 - 3.849218e-18*eta_mu + 0.0257206*(eta_mu*eta_mu) ) + uFr(lep_info)*frModeBehavior(mode,lep_info.at(0));

                        //FRv1 
                        weight = ( 0.15 - 3.849218e-18*eta_mu + 0.0257206*(eta_mu*eta_mu) ) + uFr(lep_info)*frModeBehavior(mode,lep_info.at(0));

			//FRv50 FRCR1 elMVAValueFix
// 			weight = 0.15 + uFr(lep_info)*frModeBehavior(mode,lep_info.at(0));

		}
		else{
			weight = lep_info.at(4);
		}

// 		if(DEBUGfakerate_h)std::cout << "muFR used = " << weight << std::endl;
		if(DEBUGfakerate_h)std::cout << "Mu  FR -- Mode: " << mode << ", " << frModeBehavior(mode,lep_info.at(0)) << " * " << uFr(lep_info)<<  endl;

		return weight;

	}
}

inline float uPr(std::vector<double> lep_info){

	if(lep_info.at(0)==0){
		//ele prompt rate unc

		//PRv6,PRv8test,PRv9,PRvMuPRtest
		return 0.001;


	}
	else{
		//mu prompt rate unc

		return 0.001; // PRv3, PRv4, PRv5test, PRv6,PRv7test,PRv9,PRvElPRtest

	}
}

inline float uFr(std::vector<double> lep_info){
	if(lep_info.at(0)==0){
		//ele fake rate unc
		double pt_el = lep_info.at(2);
		double eta_el = lep_info.at(3);

	 	//FRv49sys - adding ttbar∆(CR2-SR)
		return sqrt(0.018*0.018 + 0.04*0.04);



	}
	else{
		//mu fake rate unc
		double pt_mu = lep_info.at(2);
		double eta_mu = lep_info.at(3);

	 	//FRv49sys - adding ttbar∆(CR2-SR)
		return sqrt(0.014*0.014 + 0.0*0.0);


	}
}


inline float uQe(){return 0.30;}//percent

inline double epsilon(double f){return f/(1.0-f);}
inline double eta(double p){return (1.0-p)/p;}


//    ____
//   |___ \
//     __) |
//    |__ <
//    ___) |
//   |____/
//
//


std::vector<double> SF3Lepbkg(double f, double p, int N_t0, int N_t1, int N_t2, int N_t3){
	//Calculates all prompt and fake bkg info for Same Flavor trilepton events
	//output: {0:N_ppp, 1:N_fpp, 2:N_ffp, 3:N_fff, 4:N_signal, 5:N_1fake, 6:N_2fakes, 7:N_3fakes, 8:N_bkg}
	//This is taken from AN-10-261_v1 Section 4
	//N_t0 is #events with all 3 loose leptons failing tight
	//N_t1 is #events with one loose leptons failing tight and the other 2 passing tight
	//N_t2 is #events with two  loose leptons failing tight and the other one passing tight
	//N_t3 is #events with all 3 loose leptons passing tight
	//p is the probability ratio of a true lepton passes tight / a true lepton passing loose
	//f is the probability ratio of a fake lepton passes tight / a true lepton passing loose
	//N_fff is the loose leptons from three non-prompt fakes.
	//N_ffp is the loose leptons with one real lepton and two fakes.
	//N_fpp is the loose leptons with two real lepton and one fakes.
	//N_ppp is the number of true tri-lepton events passing loose
	//N_signal is the number of true tri-leptons all passing tight
	//N_1fake  is the number of events passing tight-tight with one fake lepton
	//N_2fake  is the number of events passing tight-tight with two fake lepton
	//N_3fake  is the number of events passing tight-tight with all three leptons fake
	//N_bkg = N_1fake + N_2fake + N_3fakes is the number of events passing tight that are not from two real leptons.
	double div = 1.0/pow(p-f,3);
	double omf = 1.0-f;
	double omp = 1.0-p;
	std::vector<double> out;
	out.push_back(div*(omf*omf*omf*N_t0 - f*omf*omf*N_t2 + f*f*omf*N_t1 - f*f*f*N_t0)); //N_ppp 0
	out.push_back(div*( 3.0*p*f*f*N_t0 - (f*f*omp + 2.0*p*f*omf)*N_t1 + (2.0*f*omp*omf + p*omf*omf)*N_t2 - 3.0*omp*omf*omf*N_t3) );//N_fpp 1
	out.push_back(div*(-3.0*p*p*f*N_t0 + (2.0*p*f*omp + p*p*omf)*N_t1 - (f*omp*omp + 2.0*p*omp*omf)*N_t2 + 2.0*omp*omp*omf*N_t3) );//N_ffp 2
	out.push_back(div*(p*p*p*N_t0 - p*p*omp*N_t1 + p*omp*omp*N_t2 - omp*omp*omp*N_t3));// N_fff 3
	out.push_back(p*p*p*out[0]); //4
	out.push_back(p*p*f*out[1]); //5
	out.push_back(p*f*f*out[2]); //6
	out.push_back(f*f*f*out[3]); //7
	out.push_back(out[5] + out[6] + out[7]);
	return out;
}
double SF3Lepbkg_simple(double f, double p, int N_t0, int N_t1, int N_t2, int N_t3){
	//returns  the number of tight tri-lepton events with at least one fake object (N_bkg from SF3Lepbkg)
	//This is taken from AN-10-261_v1 Section 4
	//N_t0 is #events with all 3 loose leptons failing tight
	//N_t1 is #events with one loose leptons failing tight and the other 2 passing tight
	//N_t2 is #events with two  loose leptons failing tight and the other one passing tight
	//N_t3 is #events with all 3 loose leptons passing tight
	//p is the probability ratio of a true lepton passes tight / a true lepton passing loose
	//f is the probability ratio of a fake lepton passes tight / a true lepton passing loose
	double div = 1.0/pow(p-f,3);
	double omf = 1.0-f;
	double omp = 1.0-p;
	double N_fpp = div*( 3.0*p*f*f*N_t0 - (f*f*omp + 2.0*p*f*omf)*N_t1 + (2.0*f*omp*omf + p*omf*omf)*N_t2 - 3.0*omp*omf*omf*N_t3);
	double N_ffp = div*(-3.0*p*p*f*N_t0 + (2.0*p*f*omp + p*p*omf)*N_t1 - (f*omp*omp + 2.0*p*omp*omf)*N_t2 + 2.0*omp*omp*omf*N_t3);
	double N_fff = div*(p*p*p*N_t0 - p*p*omp*N_t1 + p*omp*omp*N_t2 - omp*omp*omp*N_t3);
	return p*p*f*N_fpp + p*f*f*N_ffp + f*f*f*N_fff;
}


/////////////////////// FUNCTIONS FOR WEIGHTS /////////////////////
///////////////////////coifs for SS emu////////////////////////////
//mode 0 = nominal. 1 = elfakerate plus, 2 = elfakerate minus, 3 = elpassrate plus, 4 = elpassrate minus, 5 = mufakerate plus, 6 = mufakerate minus, 7 = mupassrate plus, 8 = mupassrate minus
inline int frModeBehavior(int mode,int flavour){
	int temp = 0;
	if(flavour==0){
		if(mode==1) temp = 1;
		if(mode==2) temp = -1;
	}
	if(flavour==1){
		if(mode==5) temp = 1;
		if(mode==6) temp = -1;
	}
	return temp	;
} //if electron:+1,-1 for 1,2 ; if muon:+1,-1 for 5,6, else 0
inline int prModeBehavior(int mode,int flavour){
	int temp = 0;
	if(flavour==0){
		if(mode==3) temp = 1;
		if(mode==4) temp = -1;
	}
	if(flavour==1){
		if(mode==7) temp = 1;
		if(mode==8) temp = -1;
	}
	return temp	;
} //if electron:+1,-1 for 3,4 ; if muon:+1,-1 for 7,8, else 0


inline double Det_em(double fe, double pe, double fm, double pm, double q){ return -(1.0 - 2.0* q)*(pe - fe)*(pm - fm); } //det is always negative.


/////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////
/////////////////Tripple Lepton /////////////////////////
/////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////
double GetWeight(int mode, std::vector<double> lep1_info, std::vector<double> lep2_info, std::vector<double> lep3_info){
	//std::cout << "GetWeight: "<<" mode = "<<mode<<", lep1_info.at(1) = "<<lep1_info.at(1)<<", lep2_info.at(1) = "<<lep2_info.at(1)<<", lep3_info.at(1) = "<<lep3_info.at(1) << std::endl;
    if(		lep1_info.at(1)==1 && lep2_info.at(1)==1 && lep3_info.at(1)==1){return W_ttt(mode, lep1_info, lep2_info, lep3_info);}
    else if(lep1_info.at(1)==1 && lep2_info.at(1)==1 && lep3_info.at(1)==0){return W_ttl(mode, lep1_info, lep2_info, lep3_info);}
    else if(lep1_info.at(1)==1 && lep2_info.at(1)==0 && lep3_info.at(1)==1){return W_tlt(mode, lep1_info, lep2_info, lep3_info);}
    else if(lep1_info.at(1)==0 && lep2_info.at(1)==1 && lep3_info.at(1)==1){return W_ltt(mode, lep1_info, lep2_info, lep3_info);}
    else if(lep1_info.at(1)==1 && lep2_info.at(1)==0 && lep3_info.at(1)==0){return W_tll(mode, lep1_info, lep2_info, lep3_info);}
    else if(lep1_info.at(1)==0 && lep2_info.at(1)==1 && lep3_info.at(1)==0){return W_ltl(mode, lep1_info, lep2_info, lep3_info);}
    else if(lep1_info.at(1)==0 && lep2_info.at(1)==0 && lep3_info.at(1)==1){return W_llt(mode, lep1_info, lep2_info, lep3_info);}
    else if(lep1_info.at(1)==0 && lep2_info.at(1)==0 && lep3_info.at(1)==0){return W_lll(mode, lep1_info, lep2_info, lep3_info);}
    else return 0.0;
    }


///Tri-lep
double W_lll(int mode, std::vector<double> lep1_info, std::vector<double> lep2_info, std::vector<double> lep3_info){
	double f1 = Fr(mode, lep1_info);
	double p1 = Pr(mode, lep1_info);
	double f2 = Fr(mode, lep2_info);
	double p2 = Pr(mode, lep2_info);
	double f3 = Fr(mode, lep3_info);
	double p3 = Pr(mode, lep3_info);
	//std::cout << "W_lll: f1 = "<<f1<<", p1 = "<<p1<<", f2 = "<<f2<<", p2 = "<<p2<<", f3 = "<<f3<<", p3 = "<<p3 << std::endl;
	double div = ((f1 - p1)*(f2 - p2)*(f3 - p3));
	return -f1*f2*f3*p1*p2*p3/div;
}
double W_ltt(int mode, std::vector<double> lep1_info, std::vector<double> lep2_info, std::vector<double> lep3_info){
	double f1 = Fr(mode, lep1_info);
	double p1 = Pr(mode, lep1_info);
	double f2 = Fr(mode, lep2_info);
	double p2 = Pr(mode, lep2_info);
	double f3 = Fr(mode, lep3_info);
	double p3 = Pr(mode, lep3_info);
	//std::cout << "W_ltt: f1 = "<<f1<<", p1 = "<<p1<<", f2 = "<<f2<<", p2 = "<<p2<<", f3 = "<<f3<<", p3 = "<<p3 << std::endl;
	double div = ((f1 - p1)*(f2 - p2)*(f3 - p3));
	return (-f1*p1*p2*p3 + f1*f2*p1*p2*p3 + f1*f3*p1*p2*p3 - f1*f2*f3*p1*p2*p3 )/div;
}
double W_tlt(int mode, std::vector<double> lep1_info, std::vector<double> lep2_info, std::vector<double> lep3_info){
	double f1 = Fr(mode, lep1_info);
	double p1 = Pr(mode, lep1_info);
	double f2 = Fr(mode, lep2_info);
	double p2 = Pr(mode, lep2_info);
	double f3 = Fr(mode, lep3_info);
	double p3 = Pr(mode, lep3_info);
	//std::cout << "W_tlt: f1 = "<<f1<<", p1 = "<<p1<<", f2 = "<<f2<<", p2 = "<<p2<<", f3 = "<<f3<<", p3 = "<<p3 << std::endl;
	double div = ((f1 - p1)*(f2 - p2)*(f3 - p3));
	return ( -f2*p1*p2*p3 + f1*f2*p1*p2*p3 + f2*f3*p1*p2*p3 - f1*f2*f3*p1*p2*p3 )/div;
}
double W_ttl(int mode, std::vector<double> lep1_info, std::vector<double> lep2_info, std::vector<double> lep3_info){
	double f1 = Fr(mode, lep1_info);
	double p1 = Pr(mode, lep1_info);
	double f2 = Fr(mode, lep2_info);
	double p2 = Pr(mode, lep2_info);
	double f3 = Fr(mode, lep3_info);
	double p3 = Pr(mode, lep3_info);
	//std::cout << "W_ttl: f1 = "<<f1<<", p1 = "<<p1<<", f2 = "<<f2<<", p2 = "<<p2<<", f3 = "<<f3<<", p3 = "<<p3 << std::endl;
	double div = ((f1 - p1)*(f2 - p2)*(f3 - p3));
	return ( - f3*p1*p2*p3 + f1*f3*p1*p2*p3 + f2*f3*p1*p2*p3 - f1*f2*f3*p1*p2*p3 )/div;
}
double W_llt(int mode, std::vector<double> lep1_info, std::vector<double> lep2_info, std::vector<double> lep3_info){
	double f1 = Fr(mode, lep1_info);
	double p1 = Pr(mode, lep1_info);
	double f2 = Fr(mode, lep2_info);
	double p2 = Pr(mode, lep2_info);
	double f3 = Fr(mode, lep3_info);
	double p3 = Pr(mode, lep3_info);
	//std::cout << "W_llt: f1 = "<<f1<<", p1 = "<<p1<<", f2 = "<<f2<<", p2 = "<<p2<<", f3 = "<<f3<<", p3 = "<<p3 << std::endl;
	double div = ((f1 - p1)*(f2 - p2)*(f3 - p3));
	return (-f1*f2*(-1 + f3)*p1*p2*p3 )/div;
}
double W_ltl(int mode, std::vector<double> lep1_info, std::vector<double> lep2_info, std::vector<double> lep3_info){
	double f1 = Fr(mode, lep1_info);
	double p1 = Pr(mode, lep1_info);
	double f2 = Fr(mode, lep2_info);
	double p2 = Pr(mode, lep2_info);
	double f3 = Fr(mode, lep3_info);
	double p3 = Pr(mode, lep3_info);
	//std::cout << "W_ltl: f1 = "<<f1<<", p1 = "<<p1<<", f2 = "<<f2<<", p2 = "<<p2<<", f3 = "<<f3<<", p3 = "<<p3 << std::endl;
	double div = ((f1 - p1)*(f2 - p2)*(f3 - p3));
	return ( f1*f3*p1*p2*p3 - f1*f2*f3*p1*p2*p3 )/div;
}
double W_tll(int mode, std::vector<double> lep1_info, std::vector<double> lep2_info, std::vector<double> lep3_info){
	double f1 = Fr(mode, lep1_info);
	double p1 = Pr(mode, lep1_info);
	double f2 = Fr(mode, lep2_info);
	double p2 = Pr(mode, lep2_info);
	double f3 = Fr(mode, lep3_info);
	double p3 = Pr(mode, lep3_info);
	//std::cout << "W_tll: f1 = "<<f1<<", p1 = "<<p1<<", f2 = "<<f2<<", p2 = "<<p2<<", f3 = "<<f3<<", p3 = "<<p3 << std::endl;
	double div = ((f1 - p1)*(f2 - p2)*(f3 - p3));
	return ( f2*f3*p1*p2*p3 - f1*f2*f3*p1*p2*p3 )/div;
}
double W_ttt(int mode, std::vector<double> lep1_info, std::vector<double> lep2_info, std::vector<double> lep3_info){
	double f1 = Fr(mode, lep1_info);
	double p1 = Pr(mode, lep1_info);
	double f2 = Fr(mode, lep2_info);
	double p2 = Pr(mode, lep2_info);
	double f3 = Fr(mode, lep3_info);
	double p3 = Pr(mode, lep3_info);
	//std::cout << "W_ttt: f1 = "<<f1<<", p1 = "<<p1<<", f2 = "<<f2<<", p2 = "<<p2<<", f3 = "<<f3<<", p3 = "<<p3 << std::endl;
	double div = ((f1 - p1)*(f2 - p2)*(f3 - p3));
	return (  (f3*(f1 - p1)*(f2 - p2) + (f2*(-f1 + p1) + (f1 - (f1 + f2 - f1*f2 + (-1 + f1)*(-1 + f2)*f3)*p1)*p2)*p3)  )/div;
}


#endif
