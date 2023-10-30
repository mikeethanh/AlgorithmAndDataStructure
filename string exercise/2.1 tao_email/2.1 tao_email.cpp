#include<iostream>
#include<string>
#include<sstream>
#include<vector>
using namespace std;

//coi string la mang chua cac ky tu 

int main() {
	int t; cin >> t; 
	cin.ignore();
	while (t--) {
		string s; 
		getline(cin, s);
		for (int i = 0; i < s.size(); i++) {
			s[i] = tolower(s[i]);
		}
		stringstream ss(s);
		string tmp;
		vector < string>  v;
		while (ss >> tmp) {
			v.push_back(tmp);
		}
		cout << *(v.end() - 1);
		for (int i = 0; i < (v.size()-1); i++) {
			cout << v[i][0];
		}

		cout << "@gmail.com" << endl;
	}
}