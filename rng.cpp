#include "rng.h"
#include <cmath>
#include <iostream>
#include <vector>

// Linear Congruential Generator - INT
std::vector<int> lcg_int(int a, int b, int m, int seed){

	int xk = seed;
	std::vector<int> x;
	
	for(int k = 0; k<=m; ++k)
	{
		xk = (a*xk + b) % m;
		x.push_back(xk);
	}

	return x;

}

// Linear Congruential Generator - FLOAT in (0,1)
std::vector<double> lcg_double(int a, int b, int m, int seed){

	int xk = seed;
	double uk;
	std::vector<double> u;
	for(int k = 0; k<=m; ++k)
	{
		xk = (a*xk + b) % m;
		double xk_double = xk;
		uk = xk_double/m;
		u.push_back(uk);
	}

	return u;

}

