#include<iostream>
using namespace std;

int main() {
	int n; cin >> n;
	int s; cin >> s;
	int a[100];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int l = 0;
	int ans = 0;
	int sum = 0;
	for (int r = 0; r < n; r++) {
		sum += a[r];
		while (sum > s) {
			ans = n - r;
			sum -= a[l];
			l++;
		}
	}
	cout << ans;
}