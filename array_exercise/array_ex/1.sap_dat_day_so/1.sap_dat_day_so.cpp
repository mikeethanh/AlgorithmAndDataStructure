#include<iostream>
#include<map>
using namespace std;
/*input
* 2 
* 10
* -1 -1 6 1 9 3 2 -1 4 -1
* 6 
* 0 -3 1 -2 3 -4 
* output
* -1 1 2 3 4 -1 6 -1 -1 9
* 0 1 -1 3 -1 -1 
*/
int main() { 
	int test; cin >> test; 
	while (test--) {
		int n; cin >> n;
		map<int, bool> mp;
		for (int i = 0; i < n; i++) {
			int x; cin >> x;
			mp[x] = true;
		}

		for (int i = 0; i < n; i++) {
			if (mp[i]) {
				cout << i << " ";
			}
			else {
				cout << "-1" << " ";
			}
		}
	}
	return 0;
}