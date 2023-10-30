#include<iostream>
#include<set>
#include<map>

using namespace std;
//tan suat 
/*input 
* 1 
* 10 
* 1 1 2 2 2 1  4 7 8 19
* output 
* 1 3
*/
int main() {
	//map 
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		map<int, int> mp;
		for (int i = 0; i < n; i++) {
			int x; cin >> x;
			mp[x]++;
		}
		int key; 
		int value = 0;
		for (auto it : mp) {
			if (it.second > value) {
				value = it.second;
				key = it.first;
			}
		}
		cout << key << " " << value << endl;
	}
	return 0;
}