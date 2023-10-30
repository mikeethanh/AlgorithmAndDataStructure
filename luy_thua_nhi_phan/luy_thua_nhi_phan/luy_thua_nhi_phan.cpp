#include<iostream> 
using namespace std;

int binpow(int a, int b) {
	int res = 1; 
	while (b) {
		if (b % 2 == 1) {
			res *= a;
		}
		b /= 2;
		a *= 2;
	}
	return res;
}
