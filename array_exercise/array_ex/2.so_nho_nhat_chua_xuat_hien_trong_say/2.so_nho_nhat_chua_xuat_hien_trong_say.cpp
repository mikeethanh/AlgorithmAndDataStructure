#include<iostream>
#include<map>
#include<algorithm>
//ddung mang danh dau 
/* input 
* 2 5 
* 1 2 3 4 5 
* 5 
* 0 -10 1 3 -20
* output
* 6 
* 2 
*/
using namespace std;

int main() {
	//c1 : 
	int t; cin >> t;
	while (t--) {
		int n; cin >> n; 
		map<int, bool>mp;
		for (int i = 0; i < n; i++) {
			int x; cin >> x;
				mp[x] = true;
		}
		for (int i = 1; i < 10000000; i++) {
			if (mp[i]) {
				continue;
			}
			else {
				cout << i << endl;
				break;
			}
		}
	}
	//c2 : 
	int cnt[10000000];
	int t; cin >> t; 
	while ( t--) {
		int n; cin >> n;
		memset(cnt, 0, sizeof(n));
		for (int i = 0; i < n; i++) {
			int x; cin >> x;
			if (x > 0) cnt[x] = 1;
		}

		for (int i = 1; i < 10000000; i++) {
			if (cnt[i] == 0) {
				cout << i << endl;
				break;
			}
		}
	}
}