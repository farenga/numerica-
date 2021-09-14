#include <iostream>
#include "rng.h"
#include <cmath>
#include <vector>

using namespace std;


int main(){
	
	std::vector<int> a {1,2,5,2,6,1,2,5};
	int b = 12;
	int m = 100;
	int seed = 10;
	int q = 1;
	int maxN = 5;
	std::vector<int> v;
	v = mrg_int(a,b,m,seed,q,maxN);

	for(auto i : v)
	{
		std::cout << i << "\n";	
	}
	
	return 0;
}



