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
	int sum = 0;
	int ans;
	for (int r = 0; r < n; r++) {
		sum += a[r];
		while (sum > s) {
			sum -= a[l], l++;
		}
		ans = max(ans, r - l + 1);
	}
	cout << ans;
}