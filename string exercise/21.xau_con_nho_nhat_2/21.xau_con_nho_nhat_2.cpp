#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
using namespace std;

int main() {
	int t; cin >> t; 
	while (t--) {
		string s; cin >> s;
		int dem[256] = { 0 };
		for (char x : s) dem[x]++;
		int left = 0; 
		while (dem[s[left]] > 1) {
			dem[s[left]]--;
			left++;
		}
		cout << s.size() - left;
	}
}
