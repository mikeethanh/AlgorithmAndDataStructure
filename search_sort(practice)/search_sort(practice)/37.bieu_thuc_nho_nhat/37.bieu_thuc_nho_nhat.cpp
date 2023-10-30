#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int n, k; cin >> n >> k;
	int a[100];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n,greater<int>());
	int res = 0;
	for (int i = 0; i <= k; i++) {
		res += a[i];
	}
	for (int i = k + 1; i < n; i++) {
		res -= a[i];
	}
	cout << res; 
}