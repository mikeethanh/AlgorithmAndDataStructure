#include<iostream>
#include<string>
#include<sstream>
#include<map>
#include<set>
#include<vector>
using namespace std;

bool check(char s) {
	return s == '.' || s == ',' || s == '!' || s == '-';
}

int main() {
	int t; cin >> t;
	cin.ignore();
	map<string, int> mp;
	while (t--) {
		string s;
		getline(cin, s);
		string tmp = "";
		for (int i = 0; i < s.size(); i++) {
			while (!check(s[i]) && i < s.size()) {
				tmp += s[i]; i++;
			}
			mp[tmp]++;
			tmp = ""; 
		}
		for (auto it : mp) {
			cout << it.first << " " << it.second << endl;
		}
		
	}
}