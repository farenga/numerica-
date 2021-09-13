#include <iostream>
#include "rng.h"
#include <cmath>
#include <vector>

using namespace std;


int main(){
	
	std::vector<int> a {1,2,3,4,5};
	int b = 9;
	int m = 50;
	int seed = 5;
	int q = 1;
	std::vector<int> v;
	v = mrg_int(a,b,m,seed,q);

	for(auto i : v)
	{
		std::cout << i << "\n";	
	}
	
	return 0;
}



