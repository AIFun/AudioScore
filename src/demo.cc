#include <iostream>
#include "../include/fft.h"

using namespace std;

int main(){
	FFT ft;
	
	vector<complex<double> > vec;
	for(int i = 0;i < 16; ++i){
		vec.push_back(complex<double>(i * 1., 0.));
	}

	ft.update(vec);

	vec = ft.get();

	for(int i = 0; i < vec.size(); ++i){
		cout << vec[i] << endl;
	}

	return 0;
}
