#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
#include<set>
#include<vector>
using namespace std;


set<string> convert(string s) {
	set<string> se; 
	stringstream ss;
	string tmp; 
	while (ss >> tmp) {
		se.insert(tmp);
	}
	return se; 
}


int main() {
	int t; cin >> t; 
	cin.ignore();
	while (t--) {
		vector <string> v1;
		string s1;
		getline(cin, s1);
		stringstream ss(s1);
		string tmp;
		while (ss >> tmp) {
			v1.push_back(tmp);
		} 

		set <string> st2;
		string s2; 
		getline(cin, s2);
		convert(s2);
		for (int i = 0; i < v1.size(); i++) {
			if (st2.count(v1[i]) == 0) {
				cout << v1[i];
			}
		}
		cin.ignore();
	}
}