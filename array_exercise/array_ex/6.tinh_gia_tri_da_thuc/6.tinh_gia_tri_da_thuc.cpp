#include<iostream>
#include<math.h>

using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int a[100];
		int n, x; cin >> n >> x;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		int sum = 0;
		int m = n; 
		for (int i = 0; i < n; i++) {
			sum += a[i] * pow(x, m - 1);
			m--;
		}
		cout << sum; 
	}
}
