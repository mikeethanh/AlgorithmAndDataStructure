#include<iostream>
#include<map>
#include<string>

using namespace std;
/*input 
* 11
* an 
* binh
* an 
* binh
* long
* huong
* ngon 
* thuan 
* nhung 
* nhung 
* nhung 
*/
int main() {
	int t; cin >> t;
	cin.ignore();
	map <string, int> mp;
	while (t--) {
		string s;
		getline(cin, s);
			if (mp.count(s) == 0) {
				cout << s << endl;
			}
			else {
				cout << s << mp[s] << endl;;
			}
			mp[s]++;
	}
}