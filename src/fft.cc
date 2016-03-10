#include "../include/score.h"

FFT::FFT(){
	oriArr.clear();
	ansArr.clear();
}

FFT::~FFT(){
	
}

bool FFT::update(std::vector<std::complex<double> > vecComp){
	oriArr = vecComp;
	ansArr.clear();
}

std::vector<std::complex<double> > FFT::get(){

}
