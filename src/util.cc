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
