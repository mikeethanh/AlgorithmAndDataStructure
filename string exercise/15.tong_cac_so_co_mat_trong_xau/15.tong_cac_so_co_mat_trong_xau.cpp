#include<iostream>
#include<string>
#include<map>
#include<algorithm>
using namespace std;

int main() {
	string s; 
	cin >> s;
	int res = 0; 
	int sum = 0; 
	for (char x : s) {
		if (isdigit(x)) {
			sum = sum * 10 + x - '0';
		}
		else {
			res += sum;
			sum = 0;
		} 
	} 
	res += sum;
	cout << res; 
}