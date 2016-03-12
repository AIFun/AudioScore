#include <iostream>
#include "../include/fft.h"
#include "../include/util.h"

using namespace std;

int main(){
	FFT ft;
	
	vector<complex<double> > vec;
	for(int i = 0;i < 4; ++i){
		vec.push_back(complex<double>(i * 1., 0.));
	}

	ft.update(vec);

	vec = ft.get();

	for(int i = 0; i < vec.size(); ++i){
		cout << vec[i] << endl;
	}


	std::vector<double> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	cout << getMaxValue(v) << endl;

	return 0;
}
