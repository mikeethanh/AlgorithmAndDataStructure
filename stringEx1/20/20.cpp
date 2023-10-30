#include<iostream>
#include<string>
#include<set>
#include<sstream>
using namespace std;


int check(string s) {
	set<char> se;
	for (char x : s) {
		if (!isdigit(x)) return -1;
		else {
			se.insert(x);
		}
	}
	return se.size() == 10;
}

int main() {
	int t; cin >> t;  
	while (t--) {
		string s;
		cin >> s; 
		if (check(s) == -1) cout << " invalid";
		else if (check(s)) cout << "yes";
		else {
			cout << "no";
		}
	}
}