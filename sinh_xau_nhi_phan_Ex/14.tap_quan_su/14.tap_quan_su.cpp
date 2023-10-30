#include<iostream>
#include<set>
using namespace std;
set<int> se;

void sinh(int a[], int n, int k) {
	int i = k;
	while (i >= 1 && a[i] == n - k + i) {
		i--;
	}
	if (i == 0) {
		cout << k;
	}
	else {
		a[i]++;
		for (int j = i + 1; j <= k; j++) {
			a[j] = a[j - 1] + 1;
		}
		int cnt = 0;
		for (int i = 1; i <= k; i++) {
			if (se.find(a[i]) == se.end()) cnt++;
		}
		cout << cnt;
	}
}

int main() {
	int t; cin >> t; 
	while (t--) {
		int n, k;
		int a[100];
		cin >> n >> k;
		for (int i = 1; i <= k; i++) {
			cin >> a[i];
			se.insert(a[i]);
		}

		sinh(a, n, k);
		se.clear();
	}
}