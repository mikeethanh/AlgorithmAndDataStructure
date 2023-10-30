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
	int r = 0; 
	int ans = INT_MAX;
	int sum = 0;
	for (int r = 0; r < n; r++) {
		sum += a[r];
		while (sum > s) {
			ans = min(ans, l - r + 1);
			sum -= a[l];
			l++;
		}
	}
	cout << ans << endl;
}