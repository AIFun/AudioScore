#ifndef DFT_FFT
#define DTT_FFT

#include <complex>
#include <vector>
#include <cmath>

class FFT{
private:
	std::vector<std::complex<double> > oriArr;
	std::vector<std::complex<double> > ansArr;

	std::vector<std::complex<double> > fft(std::vector<std::complex<double> > X);

public:
	FFT();
	~FFT();

	bool update(std::vector<std::complex<double> > vecComp);
	std::vector<std::complex<double> > get();
	
};

#endif
