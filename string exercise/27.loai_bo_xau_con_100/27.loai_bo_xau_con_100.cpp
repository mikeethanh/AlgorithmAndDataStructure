#include<iostream>
using namespace std;

int main() {
	int t; cin >> t; 
	while (t--) {
		string s; cin >> s; 
		string tmp = "";
		int dem = 0; 
		for (int i = 0; i < s.size() - 2; i++) {
			if (s[i] = '1' && s[i + 1] == '0' && s[i + 2] == '0') {
				s.erase(i, 3);
				dem += 3;
				i = -1;
			}
		}

		cout << dem; 
	}
}