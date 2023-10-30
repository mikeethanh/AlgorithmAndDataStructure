#include<iostream>
using namespace std; 
#define f(x) = x ; 

int gt(int x) {
	int ans = 1; 
	while (x > 1) {
		ans *= x; 
		x--;
	}
	return ans; 
}

int main() {
	int t; cin >> t; 
	while (t--) {
		string s; cin >> s;
		int res = 1; 
		for (int i = 0; i < s.size(); i++) {
			res *= gt(s[i]-'0');
		}
		cout << res; 
	}
}