#include "../include/fft.h"

FFT::FFT(){
	oriArr.clear();
	ansArr.clear();
}

FFT::~FFT(){}

bool FFT::update(std::vector<std::complex<double> > vecComp){
	oriArr = vecComp;
	ansArr.clear();
	return true;
}

std::vector<std::complex<double> > FFT::get(){
	if(oriArr.size() == 0){
		ansArr.clear();
		return ansArr;
	}
	if(ansArr.size() == 0){
		ansArr = fft(oriArr);
	}
	return ansArr;
}

std::vector<std::complex<double> > FFT::fft(std::vector<std::complex<double> > X){
	std::vector<std::complex<double> > R;
	if(X.size() == 1){
		R.push_back(std::complex<double> (X[0].real(), X[0].imag()));
		return R;
	}
	std::vector<std::complex<double> > Y;
	std::vector<std::complex<double> > Z;
	for(int i = 0; i < X.size() / 2; i ++){
		int even = 2 * i;
		int odd = even + 1;
		Y.push_back(std::complex<double> (X[even].real(), X[even].imag()));
		Z.push_back(std::complex<double> (X[odd].real(), X[odd].imag()));
	}
	std::vector<std::complex<double> > E = fft(Y);
	std::vector<std::complex<double> > O = fft(Z);
	R.resize(X.size());
	for(int i = 0; i < X.size() / 2; ++i){
		double theta = - i * M_PI * 2 / X.size();
		std::complex<double> Wk(cos(theta), sin(theta));
		Wk = Wk * O[i];
		R[i] = E[i] + Wk;
		R[i + X.size() / 2] = E[i] - Wk;
	}
	return R;
}
