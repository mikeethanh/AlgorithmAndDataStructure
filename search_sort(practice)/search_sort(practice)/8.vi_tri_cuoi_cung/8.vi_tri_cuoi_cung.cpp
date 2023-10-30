#include<iostream>
using namespace std;
int b_s(int a[], int n, int x) {
	int l = 0; 
	int r = n - 1;
	int res = -1;
	while (l <= r) {
		int m = (l + r) / 2;
		if (a[m] == x) {
			res = m; 
			l = m + 1;
		}
		else if (a[m] > x) {
			r = m - 1;
		}
		else {
			l = m + 1;
		}
	}
	return res;
}
int main() {
	int t; cin >> t;
	while (t--) {
		int n, x; cin >> n >> x;
		int a[100];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		int q = b_s(a, n, x);
		cout << q << endl;
	}
}