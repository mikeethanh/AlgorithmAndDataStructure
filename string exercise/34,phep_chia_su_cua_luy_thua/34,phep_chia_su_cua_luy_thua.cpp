#include<iostream>
#include<cmath>
using namespace std;

int solve(string a, int m) {
	int res = 0; 
	int sm = a.size() - 1;
	for (int i = 0; i < a.size(); i++) {
		int digit = a[i] - '0';
		long long pc = (long long)(pow(10, sm) * digit) % m;
		res += pc; 
	}
	return res; 
}

void binpow(int a, int b, int m) {
	int res = 1;
	//lap den trung nao b != 0
	while (b) {
		if (b % 2 == 1) {
			res *= a;
			res %= m;
		}
		a *= a;
		a %= m;
		b /= 2;
	}
	cout << res;
}

int main() {
	string a; cin >> a; 
	int b, m; cin >> b >> m; 
	int r =solve(a, m);
	cout << binpow(r, b, m) << endl;
}