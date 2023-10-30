#include<iostream>
#include<algorithm>
using namespace std;

void sinh(int a[], int n) {
	int i = n - 1;
	while (i >= 1 && a[i] >= a[i + 1]) {
		i--;
	}
	if (i == 0) {
		for (int i = 1 ; i <= n; i++) {
			cout << i << " ";
		}
	}
	else {
		int j = n; 
		while ( j >= i+1 && a[i] > a[j]) {
			j--;
		}
		swap(a[i], a[j]);
		reverse(a + i + 1, a + n + 1);
		for (int i = 1; i <= n; i++) {
			cout << a[i] << " ";
		}
	}
}

int main() {
	int t; cin >> t; 
	while(t--) {
		int n; cin >> n; 
		int a[100];
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
		}
		sinh(a, n);
	}
}
