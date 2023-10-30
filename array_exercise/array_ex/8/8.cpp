#include<iostream>
using namespace std;
/*hieu lon nhat cua cac cap phan tu 
* input 
* 2 
* 7 
* 2 3 10 6 4 8 1 
* output 
* 8
*/
int main() {
	int t; cin >> t;
	while (t--) {
		int a[100];
		int n; cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		int max = INT_MIN;
		for (int i = 1; i < n; i++) {
			for (int j = i - 1; j >= 0; j--) {
				int res = a[i] - a[j];
				if (res > max && a[i] > a[j]) {
					max = res;
				}
			}
		}
		if (max == INT_MIN) {
			cout << "-1";
		}
		else {
			cout << max;
		}
	}

	//c2 
	int t; cin >> t;
	while (t--) {
		int a[100];
		int n; cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		int min_val = a[0], res =-1e9;
		for (int i = 1; i < n; i++) {
			if (a[i] > min_val) {
				res = max(res, a[i] - min_val);
			}
			min_val = min(a[i], min_val);
		}
	}
}