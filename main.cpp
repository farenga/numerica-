#include <iostream>
#include "rng.h"
#include <cmath>
#include <vector>

using namespace std;


int main(){
	
	int a = 2;
	int b = 33;
	int m = 50;
	int seed = 5;
	std::vector<double> v;
	v = lcg_double(a,b,m,seed);
	
	for(auto i : v)
	{
		std::cout << i << "\n";	
	}
	
	return 0;
}



