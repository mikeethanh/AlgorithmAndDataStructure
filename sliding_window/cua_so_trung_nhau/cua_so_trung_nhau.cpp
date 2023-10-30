#include<iostream>
#include<set>
using namespace std;

bool solve() {
	int n, k;
	int a[100];
	set<int> se;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < k; i++) {
		if (se.count(a[i])) {
			return true;
		}
		se.insert(a[i]);
	}

	for (int i = k; i < n; i++) {
		se.erase(a[i - k]);
		if (se.count(a[i])) {
			return true;
		}
		se.insert(a[i]);
	}
	return false;
}

int main() {
	int t; cin >> t;
	while (t--) {
		if (solve()) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
