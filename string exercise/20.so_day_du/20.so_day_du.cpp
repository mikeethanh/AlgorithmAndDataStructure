#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
#include<set>
#include<vector>
using namespace std;

int check(string s) {
	set<char> se;
	for (char x : s) {
		if (!isdigit(x)) return -1;
		else {
			se.insert(x);
		}
	}
	return se.size();
}

int main() {
	int t; cin >> t; 
	while (t--) {
		string s; cin >> s; 
		int res = check(s);
		if (res == 10) {
			cout << "yes";
		}
		else if (res == -1) {
			cout << "invalid";
		}
		else {
			cout << "no";
		}
	
	}
}