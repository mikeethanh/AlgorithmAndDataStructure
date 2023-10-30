#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
using namespace std;

int main() {
	int t; cin >> t; 
	while (t--) {
		string s1; string s2;
		cin >> s1 >> s2;
		int dem1[256] = { 0 };
		int dem2[256] = { 0 };
		for (char x : s2)
			dem2[x] ++;
		int ans = INT_MAX, left = 0, cnt = 0, index = -1; 
		for (int i = 0; i < s1.size(); i++) {
			dem1[s1[i]]++;
			if (dem1[s1[i]] <= dem2[s2[i]]) cnt++;
			if (cnt == s2.size()) {
				while (dem1[s1[left]] > dem2[s1[left]] || dem2[s1[left]] == 0) {
					if (dem1[s1[left]] > dem2[s1[left]]) {
						dem1[s1[left]]--;
					}
					left++;
				}
				if (ans > i - left + 1) {
					ans = i - left + 1;
					index = left; 
				}
			}
		}
	}
}