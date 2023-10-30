#include<stack>
#include<iostream>
using namespace std;

int main() {
	string s; 
	cin >> s;
	stack<char> st;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] = '(') {
			st.push(s[i]);
		}
		else {
			if (st.empty()) {
				cout << "INVALID" << endl;
			}
			else {
				st.pop();
			}
		}
	}
	if (st.empty()) {
		cout << "VALID" << endl;
	}
	else {
		cout << "INVALID " << endl;
	}
}