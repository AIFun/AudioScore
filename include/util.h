#ifndef MM_UTIL
#define MM_UTIL

#include <vector>

bool normalization(std::vector<double> &vec);

double getMaxValue(const std::vector<double>& vec);

std::vector<double> intercept(std::vector<double> &vec, double threshold);
std::vector<double> intercept(std::vector<double> &vec, double startThreshold, double endThreshold);

#endif
