#ifndef SCORE_ENGINE
#define SCORE_ENGINE

#include <complex>
#include <vector>

class FFT{
private:
	std::vector<std::complex<double> > oriArr;
	std::vector<std::complex<double> > ansArr;

	vector<std::complex<double> > fft(std::vector<std::complex<double> >);

public:
	FFT();
	~FFT();

	bool update(std::vector<std::complex<double> > vecComp);
	std::vector<std::complex<double> > get();

};



#endif
