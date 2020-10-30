#include <cstdio>
#include <vector>
#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
	vector<double> v;
	v.push_back(0.1);
	v.push_back(0.2);
	v.push_back(0.3);
	v[2] = 0.4;
	
	v.insert(v.begin() + 2, 0.8);
	v.erase(v.begin()+1);
	v.push_back(0.9);
	printf("%ld\n", v.size());
	return 0;
}