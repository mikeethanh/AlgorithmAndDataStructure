#include<iostream>
#include<string>
using namespace std;

int main() {
	int t; cin >> t; 
	while (t--) {
		string s; 
		cin >> s; 
		int max1 = 0; 
		int sum = 0; 
		for (char x : s) {
			if (isdigit(x)) {
				sum = sum * 10 + x - '0';
			}
			else {
				max1 = max(max1, sum);
				sum = 0; 
			}
		}
		cout << max1 << endl;
	}
}