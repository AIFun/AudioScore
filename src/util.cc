#include "../include/util.h"

double getMaxValue(const std::vector<double>& vec){
	double ret = vec[0];
	for(int i = 1; i < vec.size(); ++i){
		if(ret < vec[i]){
			ret = vec[i];
		}
	}
	return ret;
}

bool normalization(std::vector<double> &vec){
	double maxValue = getMaxValue(vec);
	if(fabs(maxValue - 0.0) < 1e-6){
		return false;
	}
	for(int i = 0;i < vec.size(); ++i){
		vec[i] /= maxValue;
	}
	return true;
}

std::vector<double> intercept(std::vector<double> &vec, double threshold){
	return intercept(vec, threshold, threshold);
}

std::vector<double> intercept(std::vector<double> &vec, 
		double startThreshold, double endThreshold){
	int start, end;
	for(int i = 0;i < vec.size(); ++i){
		if(vec[i] >= startThreshold){
			start = i;
			break;
		}
	}
	for(int i = vec.size() - 1; i >= 0; --i){
		if(vec[i] >= endThreshold){
			end = i;
			break;
		}
	}
	return std::vector<double> (vec.begin() + start, vec.begin() + end + 1);
}

double vecLength(const std::vector<double>& vec){
	double sum = 0.0;
	for(int i = 0; i < vec.size(); ++i){
		sum += vec[i] * vec[i];
	}
	return sqrt(sum);
}

double dotProduct(const std::vector<double>& vec1, const std::vector<double>& vec2){
	double sum = 0.0;
	for(int i = 0; i < vec1.size(); ++i){
		sum += vec1[i] * vec2[i];
	}
	return sum;
}

double cosSimilar(const std::vector<double>& vec1, const std::vector<double>& vec2){
	return dotProduct(vec1, vec2) / (vecLength(vec1) * vecLength(vec2));
}

std::vector<double> getAmplitude(const std::vector<complex<double> >& vec){
	vector<double> ret;
	for(int i = 0; i < vec.size(); ++i){
		double real = vec[i].real();
		double imag = vec[i].iamg();
		ret.push_back(sqrt(real * real + imag * imag));
	}
	return ret;
}
