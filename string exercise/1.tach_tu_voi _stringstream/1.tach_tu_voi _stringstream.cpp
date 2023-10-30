#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main() {
	int t; cin >> t; 
	cin.ignore();
	while (t--) {
		string s; 
		getline(cin, s);
		stringstream ss(s);
		string tmp;
		int dem = 0; 
		while (ss >> tmp) {
			dem++;
		}
		cout << dem << endl;
	}
}