#include<iostream>
#include<string>
#include<sstream>
#include<set>
#include<map>

using namespace std;

int main() {
	int t; cin >> t; 
	while (t--) {
		string s; 
		cin >> s;
		string t = s; 
		reverse(s.begin(), s.end());
		bool so; 
		if (s != t) {
			so = false;
		}
		for(auto x : s) {
			if ((x - '0') % 2 == 1) {
				so = false;
				break;
			}
		}
		if (so = true) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
}