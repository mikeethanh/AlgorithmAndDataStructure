#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int t; cin >> t; 
	while (t--) {
		string s; cin >> s;
		int x; cin >> x;
		int res = 0;
		int sm = s.size() - 1;
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == '1') {
				res += pow(2, sm);
			}
			sm--;
		}
		int sbc = pow(2, x);
		if (res % sbc == 0) cout << "yes" << endl;
		else cout << "no" << endl;
	}
}