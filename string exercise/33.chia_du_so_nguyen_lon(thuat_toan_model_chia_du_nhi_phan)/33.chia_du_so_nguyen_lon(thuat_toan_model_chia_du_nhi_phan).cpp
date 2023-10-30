#include<iostream>
#include<cmath>
using namespace std;

int main() {
	string s; 
	cin >> s;
	int m; cin >> m;
	int sm = s.size() - 1;
	int res = 0; 
	for (int i = 0; i < s.size(); i++) {
		int digit = s[i] - '0';
		long long pc =(long long)(pow(10, sm) * digit) % m;
		res += pc;
		sm--;
	}
	cout << res << endl;
}