#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<set>

using namespace std;

int main() {
	int t; cin >> t; 
	cin.ignore();
	while (t--) {
		string s; 
		getline(cin, s);
		set<char> st; 
		for (int i = 0; i < s.size(); i++) {
			st.insert(s[i]);
		}

		if (st.size() == 26) cout << " YES" << endl;
		else cout << "NO" << endl;
	}
}