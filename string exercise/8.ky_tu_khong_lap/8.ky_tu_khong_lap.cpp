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
		map<char, int> mp;
		for (int i = 0; i < s.size(); i++) {
			mp[s[i]]++;
		}
		for (auto it : mp) {
			if (it.second == 1) {
				cout << it.first;
			}
		}
	}
}