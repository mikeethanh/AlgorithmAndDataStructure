#include<iostream>
#include<string>
#include<map>
using namespace std;
/*input 
* 1
* abcdzzzzzzzzz
* output
* z
*/
int main() {
	int t; cin >> t;
	cin.ignore();
	while (t--) {
		string s;
		getline(cin, s);
		map<char, int> mp;
		for (char x : s) {
			mp[x]++;
		}
		char key ;
		int value = 0;
		for (auto it : mp) {
			if (it.second > value) {
				value = it.second;
				key = it.first;
			}
		}
		cout << key;
	}
}