#include<iostream>
#include<string>
#include<set>
#include<sstream>
using namespace std;

void tach(set<string>& se,string s) {
	string tmp;
	stringstream ss(s);
	while (ss >> tmp) {
		se.insert(tmp);
	}
}

int main() {
	int t; cin >> t; 
	cin.ignore();
	while (t--) {
		string s1, s2;
		getline(cin, s1);
		getline(cin, s2);
		set<string> se1; 
		set<string> se2;
		tach(se1, s1);
		tach(se2, s2);
		for (auto it : se1) {
			if (se2.count(it) == 0) {
				cout << it << " ";
			}
		}
	}
	
}