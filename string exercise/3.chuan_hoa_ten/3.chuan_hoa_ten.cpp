#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<map>

using namespace std;
void ten(string& s) {
	for (int i = 0; i < s.size(); i++) {
		s[i] = toupper(s[i]);
	}
}

void hodem(string& s) {
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
		for (int i = 0; i < v.size() - 1; i++) {
			hodem(v[i]);
			cout << v[i]; 
			if (i == 1) {
				cout << ",";
			}
			else {
				cout << " ";
			}
		}
		
		ten(v[v.size() - 1]);
		cout  << v[v.size() - 1];
	}
}