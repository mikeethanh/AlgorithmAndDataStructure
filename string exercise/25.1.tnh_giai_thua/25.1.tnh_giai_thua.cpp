#include<iostream>
#include<algorithm>
using namespace std;

void solve(string s, int n) {
	string res = ""; 
	for (char x : s) {
		if (x == '4') {
			res += "322";
		}
		else if (x == '6') {
			res += "35";
		}
		else if (x == '8') {
			res += "2227";
		}
		else if (x == '9') {
			res += "3327";
		}
	}
	sort(res.begin(), res.end(), greater<char>());
	cout << res;
}

int main() {
	int t; cin >> t; 
	while (t--) {
		int n; cin >> n;  
		string s; cin >> s; 
		solve(s, n);
	}
}