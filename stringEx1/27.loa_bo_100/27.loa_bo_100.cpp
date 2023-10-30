#include<iostream>
#include<string>
using namespace std;

int main() {
	int t; cin >> t; 
	while (t--) {
		string s; cin >> s;
		int res = 0; 
		for (int i = 0; i < s.size() - 2;i++) {
			if (s[i] == '1' && s[i + 1] == '0' && s[i + 2] == '0') {
				res += 3;
				s.erase(i, 3);
				i = -1;
			}
		}
		cout << res;
	}
}