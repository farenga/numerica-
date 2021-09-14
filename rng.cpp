#include "rng.h"
#include <cmath>
#include <iostream>
#include <vector>
#include <numeric>



// Linear Congruential Generator - INT
std::vector<int> lcg_int(int a, int b, int m, int seed, int maxN){

	int xk = seed;
	std::vector<int> x;
	
	for(int k = 0; k<=maxN; ++k)
	{
		xk = (a*xk + b) % m;
		x.push_back(xk);
	}

	return x;

}

// Linear Congruential Generator - FLOAT in (0,1)
std::vector<double> lcg_double(int a, int b, int m, int seed, int maxN){

	int xk = seed;
	double uk;
	std::vector<double> u;
	for(int k = 0; k<=maxN; ++k)
	{
		xk = (a*xk + b) % m;
		double xk_double = xk;
		uk = xk_double/m;
		u.push_back(uk);
	}

	return u;

}


// Multiple Recursive Generator - INT
// Fixed order = length of input vector a
std::vector<int> mrg_int(std::vector<int> a, int b, int m, int seed, int q, int maxN){

	int xk = seed;
	std::vector<int> x;
	x.push_back(xk);
	int innerProd;
	for(int k = 0; k<=maxN; ++k)
	{	
			
		innerProd = inner_product(a.begin(), a.end(), x.begin(),0);
		xk = innerProd % m;
		x.push_back(xk);
	}

	return x;

}


