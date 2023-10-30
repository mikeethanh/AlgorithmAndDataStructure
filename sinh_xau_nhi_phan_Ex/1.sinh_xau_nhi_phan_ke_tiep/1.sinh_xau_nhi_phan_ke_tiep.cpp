#include<iostream>
using namespace std;

void sinh(string s) {
	int i = s.size() - 1;
	while (i >= 0 && s[i] == '1') {
		s[i] = '0';
		i--;
	}
	if (i < 0) {
		for (int i = 0; i <s.size() ; i++) {
			s[i] = '0';
			cout << s[i];
		}
	}
	else {
		s[i] = '1';
		for (int i = 0; i < s.size(); i++) {
			cout << s[i];
		}
	}
}


int main() {
	int t; cin >> t; 
	while (t--) {
		string s; cin >> s;
		sinh(s);
	}
}