#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
	string s; 
	cin >> s;
	int i = s.size() - 2;
	while (i >= 0 && s[i] <= s[i + 1]) {
		i--;
	}
	if (i < 0) {
		cout << "-1" << endl;
	}
	int j = s.size() - 1;
	while (s[i] <= s[j] || (s[j - 1] == s[j] && s[j] < s[i])) {
		j--;
	}
	swap(s[i], s[j]);
	for (int i = 0; i < s.size(); i++) {
		cout << s[i];
	}
}