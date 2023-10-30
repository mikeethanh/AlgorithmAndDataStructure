#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main() {
	string s;
	getline(cin, s);
	string word;
	cin >> word;
	stringstream ss(s);
	string after; 
	while (ss >> after) {
		if (after != word) {
			cout << after << " ";
		}
	}
	return 0;
}