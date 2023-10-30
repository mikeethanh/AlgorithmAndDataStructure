#include<iostream>
#include<map>
#include<string>
#include<sstream>
using namespace std;

bool check(char c) {
	return  c == ' ' || c == ',' || c == '.' || c == '-' || c == '!'; 
}

int main() {
	int t;  cin >> t; 
	cin.ignore();
	while (t--) {
		string s;
		getline(cin, s);
		map < string, int> mp;
		string tmp = "";
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == ' ') continue;
			while (i < s.size() && !check(s[i])) {
				tmp += s[i]; i++;
			}
			mp[tmp]++;
			tmp = "";
		}
	}
}