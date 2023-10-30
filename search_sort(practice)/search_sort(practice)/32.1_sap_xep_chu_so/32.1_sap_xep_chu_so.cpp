// 32.1_sap_xep_chu_so.cpp 
#include <iostream>
#include<string>
#include<set>
#include<sstream>
#include<map>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		cin.ignore();
		string s; 
		getline(cin, s);

		int a[10] = { 0 };
		for (char x : s) {
			if (isdigit(x)) {
				a[x - '0'] = 1;
			}
		}
		for (int i = 0; i < 10; i++) {
			if (a[i]) cout << i << " ";
		}
	}
}
