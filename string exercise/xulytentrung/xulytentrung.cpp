#include<iostream>
#include<string>
#include<sstream>
#include<vector>

using namespace std;

int main() {
	int n; cin >> n;
	cin.ignore();
	for (int i = 1; i <= n; i++) {
		string s; 
		getline(cin, s);
		for (int j = 0; j < s.size(); j++) {
			s[j] = tolower(s[j]);
		}
		vector <string> v;
		stringstream ss(s);
		string tmp;
		while(ss >> tmp) {
			v.push_back(tmp);
		}
		cout << v[v.size() - 1];
		for (int i = 0; i < (v.size() - 1); i++) {
			cout << v[i][0];
		}
	}
}