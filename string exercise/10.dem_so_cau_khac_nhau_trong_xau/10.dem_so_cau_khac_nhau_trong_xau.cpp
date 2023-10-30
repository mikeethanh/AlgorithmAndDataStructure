#include<iostream>
#include<string>
#include<sstream>
#include<set>

using namespace std;

int main() {
	int n; cin >> n; 
	cin.ignore();
	set<string> se; 
	for (int i = 0; i < n; i++) {
		string s; 
		getline(cin,s);
		se.insert(s);
	}
	cout << se.size() << endl;
}