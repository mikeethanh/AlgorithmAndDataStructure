#include<iostream>
#include<map>
#include<string>
#include<sstream>

using namespace std;
/*input 
* 1
* ngon ngu lap trinh ngon ngu
* output
* ngon
*/
int main() {
	int t; cin >> t;
	cin.ignore();
	while (t--) {
		string s;
		getline(cin,s);
		stringstream ss(s);
		string word;
		map<string,int> mp;
		while (ss >> word) {
			mp[word]++;
		}
		int max = 0; 
		string tmp;
		for (auto it : mp) {
			if (it.second > max) {
				max = it.second;
				tmp = it.first;
			}
		}
		cout << tmp;
	}
}