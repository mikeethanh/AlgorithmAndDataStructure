#include<iostream>
#include<string>
#include<sstream>
#include<vector>
using namespace std;

int main() {
	string s; 
	getline(cin, s);
	stringstream ss(s);
	string tmp;
	vector<string> dlt; 
	while (ss >> tmp) {
		dlt.push_back(tmp);
	}
	for (auto x : dlt) {
		cout << x << " "; 
	}
}