#include<iostream>
using namespace std;

void sinh(int a[], int k,int n) {
	int i = k;
	while (i >= 1 && a[i] == n - k + i) {
		i--;
	}
	if (i != 0) {
		a[i]++;
		for (int j = i + 1; j <= k; j++) {
			a[j] = a[j - 1] + 1;
		}
		for (int i = 1; i <= k; i++) {
			cout << a[i] << " ";
		}
	}
	else {
		for (int i = 1; i <= k; i++) {
			cout << i << " ";
		}
	}
}

int main() {
	int t; cin >> t; 
	while (t--) {
		int n, k; 
		cin >> n >> k; 
		int a[100];
		for (int i = 1; i <= k; i++) {
			cin >> a[i];
		}
		sinh(a, k, n);
	}
}