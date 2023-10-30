#include<iostream>
using namespace std;
/* 
input
2 
5 2 
10 4 5 15 20
4 2 
-12 34 56 7
output 
15 20 
34 56
*/
int main() {
	int t; cin >> t; 
	while (t--) {
		int a[100];
		int n,k; cin >> n >> k;
		int sum = 0; 
		for (int i = 0; i < k; i++) {
			sum += a[i];
		}
		int res = sum; int index = 0;
		for (int i = k; i < n; i++) {
			sum = sum - a[i - k] + a[i];
			if (sum > res) {
				index = i - k + 1;
			}
		}
		for (int i = 0; i < k; i++) {
			cout << a[index + i] << " ";
		}
	}
}