#include<iostream>
#include<string>
#include<map>
#include<sstream>
#include<set>

using namespace std;

int main() {
	//set
	int t; cin >> t;
	cin.ignore();
	while(t--) {
		string s;
		getline(cin, s);
		set<string> se;
		stringstream ss(s);
		string word; 
		while (ss >> word) {
			se.insert(word);
		}
		cout << se.size();
	}

	//map
	int t; cin >> t;
	cin.ignore();
	while (t--) {
		string s;
		getline(cin, s);
		map<string, int> mp;
		stringstream ss(s);
		string word;
		while (ss >> word) {
			mp[word]++;
		}
		cout << mp.size();
	}
}
