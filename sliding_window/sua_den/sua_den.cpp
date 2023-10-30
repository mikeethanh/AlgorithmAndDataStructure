#include<iostream>
#include<set>
using namespace std;

int main() {
	int n, k, b;
	cin >> n >> k >> b;
	int a[100];
	set<int> se;
	for (int i = 0; i < n; i++) {
		a[i] = i + 1;
	}
	for (int i = 0; i < b; i++) {
		int x; cin >> x; 
		se.insert(x);
	}
	int cnt = 0;
	for (int i = 0; i < k; i++) {
		if (se.find(a[i]) != se.end()) cnt++;
	}

	int res = cnt;
	for (int i = k; i < n; i++) {
		if (se.find(a[i]) != se.end()) cnt++;
		if (se.find(a[i-k]) != se.end()) cnt--;
		res = min(cnt, res);
	}
	cout << res << endl;
}