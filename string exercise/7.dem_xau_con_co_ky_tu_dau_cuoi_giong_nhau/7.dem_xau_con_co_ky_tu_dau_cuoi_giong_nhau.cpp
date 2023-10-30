#include<iostream>
#include<string>
#include<sstream>
#include<set>
#include<map>

using namespace std;

int main() {
	int t; cin >> t; 
	string s; 
	cin >> s; 
	map<char, int> mp;
	for (int i = 0; i < s.size(); i++) {
		mp[s[i]]++;
	}

	int res = s.size();
	for (auto it : mp) {
		res += ((it.second * (it.second - 1)) / 2);
	}
	cout << res << endl;
}