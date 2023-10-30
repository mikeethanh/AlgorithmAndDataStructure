#include<iostream>
#include<string>
#include<map>
#include<algorithm>
using namespace std;

int main() {
	string s; cin >> s;  
	map<char, int> mp;
	for (char x : s) {
		mp[x]++;
	}
	int max = 0; 
	for (auto it : mp) {
		if (it.second > max) max = it.second;
	}

	int tscl = 0;
	for (auto it : mp) {
		tscl += it.second; 
	}
	tscl = tscl - max; 
	if (max - tscl <= 1) {
		cout << "1" << endl;
	}
	else {
		cout << "0" << endl;
	}
}