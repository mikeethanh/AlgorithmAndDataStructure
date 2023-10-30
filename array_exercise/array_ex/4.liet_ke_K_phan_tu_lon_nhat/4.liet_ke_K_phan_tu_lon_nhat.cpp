#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--) {
		int n; cin >> n;
		int a[100];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		sort(a, a + n, greater<int>());
		int k; cin >> k;
		for (int i = 0; i < k; i++) {
			cout << a[i] << " ";
		}
	}
}