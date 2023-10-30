#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int main() {
	int t; cin >> t; 
	for (int i = 1; i <= t; i++) {
		int a[100];
		int n, k; cin >> n >> k; 
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		sort(a, a + n);
		int dem = 1; 
		for (int i = 1; i < n; i++) {
			if (abs(a[i] - a[i - 1]) > k) {
				dem++;
			}
		}
		cout << "case#" << i << ": " << dem << endl;
	}
}