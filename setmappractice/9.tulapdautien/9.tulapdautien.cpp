#include<iostream>
#include<map>
#include<set>
#include<string>
#include<sstream>

using namespace std;
/*input
* 2
* abc abc zzz zzz abc cd
* ngon gngu lap lap ngon ngu
* output
* abc 
* lap
*/
int main() {
	int t; cin >> t;
	cin.ignore();
	while (t--) {
		string s;
		getline(cin, s);
		stringstream ss(s);
		string word;
		set <string> se;
		set<string> se2;
		while (ss >> word) {
			se2.insert(word);
		}

		for (string x : se2) {
			if (se.find(x) != se.end()) {
				cout << x << endl;
				break;
			}
			se.insert(x);
		}
	}
}

