#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
#include<set>
#include<vector>
using namespace std;

bool th1(string s) {
	for (int i = 1; i < 5; i++) {
		if (s[i] != s[i-1]+1) {
			return false;
		}
	}
	return true;
}

bool th2(string s) {
	for (int i = 1; i < 5; i++) { 
		if (s[i]!= s[i - 1]) {
			return false;
		}
	}
	return true;
}

bool th3(string s) {
	if (s[0] == s[2] && s[2] == s[1] && s[3] == s[4]) return true;
	else false;

}

bool th4(string s) { 
	for (int i = 0; i < 5; i++) {
		if (s[i] != 6 || s[i] != 8) {
			return false;
		}
	}
	return true;
}
int main() {
	int t; cin >> t; 
	while (t--) {
		string s;
		cin >> s;
		string tmp = s.substr(5, 6);
		tmp.erase(3, 1);
		if (th1(tmp) || th2(tmp) || th3(tmp) || th4(tmp)) cout << "yes" << endl;
		else cout << "no" << endl;
	}
}