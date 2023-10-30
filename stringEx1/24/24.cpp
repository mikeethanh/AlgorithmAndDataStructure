#include<iostream>
#include<string>
#include<set>
#include<sstream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int t; cin >> t; 
	cin.ignore();
	while (t--) {
		string s; 
		getline(cin, s);
		vector<string> v;
		stringstream ss(s);
		string tmp; 
		while (ss >> tmp) {
			v.push_back(tmp);
		}
		reverse(v.begin(), v.end());
		for (auto it : v) {
			cout << it << " ";
		}
	}
}