#include<iostream>
using namespace std;
/*input 
2 
7 
-7 1 5 2 -4 3 0 
5 
1 2 3 4 
output 
3 
-1
*/
int main() {
	//c1 :o(n*n)
	int t; cin >> t; 
	while (t--) {
		int a[100];
		int n; cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		int sum1 = 0, sum2 = 0, index = 0;
		 bool ok = false; 
		for (int i = 0; i < n-1; i++) { 
			sum1 += a[i];
			sum2 = 0; 
			for (int j = i + 2; j < n; j++) {
				sum2 += a[j];
			}
			index = i + 1;
			if (sum1 == sum2) {
				cout << index << endl;
				ok = true;
			}
		}
		if (!ok) {
			cout << "-1" << endl;
		}
	}

	//c2 : o(n)
	int t; cin >> t;
	while (t--) {
		int a[100];
		int n; cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		long long sum = 0; 
		for (int i = 0; i < n; i++) {
			sum += a[i];
		}
		int index = 0; 
		long long left = 0;
		for (int i = 0; i < n; i++) {
			sum -= a[i];
			if (sum == left) {
				cout << a[i] << endl;
			}
			left += a[i];
		}

	
	}
}