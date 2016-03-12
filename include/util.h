#ifndef MM_UTIL
#define MM_UTIL

#include <cmath>
#include <vector>

bool normalization(std::vector<double>& vec);

double getMaxValue(const std::vector<double>& vec);

std::vector<double> intercept(std::vector<double>& vec, double threshold);
std::vector<double> intercept(std::vector<double>& vec, double startThreshold, double endThreshold);

double vecLength(const std::vector<double>& vec);
double dotProduct(const std::vector<double>& vec1, const std::vector<double>& vec2);
double cosSimilar(const std::vector<double>& vec1, const std::vector<double>& vec2);

std::vector<double> getAmplitude(const std::vector<complex<double> >& vec);

#endif
