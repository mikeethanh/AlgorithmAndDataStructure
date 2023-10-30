#include<iostream>
#include<string>
#include<sstream>
#include<vector>

using namespace std;

void chuanhoa(string& s) {
	s[0] = toupper(s[0]);
	for (int i = 1; i < s.size(); i++) {
		s[i] = tolower(s[i]);
	}
}

int main() {
	int t; cin >> t; 
	cin.ignore();
	while (t--) {
		string s; 
		getline(cin, s);
		stringstream ss(s);
		string tmp;
		vector<string> v; 
		while (ss >> tmp) {
			v.push_back(tmp);
		}

		chuanhoa(v[v.size() - 1]);
		cout << v[v.size() - 1] << "," << " ";
		for (int i = 0; i < (v.size()-1); i++) {
			chuanhoa(v[i]);
			cout << v[i] << " "; 
		}
	}
}