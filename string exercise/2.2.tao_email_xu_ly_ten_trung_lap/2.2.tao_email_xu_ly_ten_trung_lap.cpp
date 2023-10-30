#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<map>

using namespace std;

int main() {
	int t; cin >> t; 
	cin.ignore();
	map<string, int> mp;
	while (t--) {
		string s; 
		getline(cin, s);
		for (int i = 0; i < s.size(); i++) {
			s[i] = tolower(s[i]);
		}
		stringstream ss(s);
		string tmp;
		vector<string> v; 
		while (ss >> tmp) {
			v. push_back(tmp);
		}
		string res = *(v.end()-1);
		for (int i = 0; i < (v.size()-1); i++) {
			res += v[i][0];
		} 
		if (mp[res] == 0) {
			cout << res << "@gmail.com" << endl;
		}
		else {
			cout << res << mp[res] + 1 << "@gmail" << endl;
		}
		mp[res]++;
	}
}