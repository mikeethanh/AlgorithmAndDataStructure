#include<iostream>
#include<algorithm>
#include<map>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int n, x; cin >> n >> x;
		map<int, int> mp;
		for (int i = 0; i < n; i++) {
			int y; cin >> y;
			mp[y]++;
		}
		cout << mp[x] << endl;
	}
}