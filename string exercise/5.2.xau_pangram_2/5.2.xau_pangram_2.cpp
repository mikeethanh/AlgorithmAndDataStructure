#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<set>

using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int k; cin >> k;
		cin.ignore();
		string s; 
		getline(cin, s);
		set<char> st; 
		for(int i = 0 ; i < s.size();i++) { 
			st.insert(s[i]);
		}

		if (26 - st.size() <= k) cout << "1" << endl;
		else cout << "0" << endl;

	}
}