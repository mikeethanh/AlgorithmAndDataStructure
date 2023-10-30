#include<iostream>
#include<string>
#include<set>
#include<sstream>
using namespace std;

int main() {
	int t; cin >> t; 
	cin.ignore();
	while (t--) {
		string a; 
		getline(cin, a);
		string b = a.substr(6, 6); 
		b.erase(3,1);
		for (int i = 0; i < b.size(); i++) {
			cout << b[i]; 
		}
	}
}