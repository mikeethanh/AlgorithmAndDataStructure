#include<iostream>
using namespace std;

int main() {
	int t; cin >> t; 
	while (t--) {
		int n, k;
		int a[100];
		cin >> n >> k;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		int sum = 0; 
		for (int i = 0; i < k; i++) {
			sum += a[i];
		}
		int max = INT_MIN;
		int index = -1;
		for (int i = k; i < n; i++) {
			sum += a[i];
			sum -= a[i - k];
			if (max < sum) {
				max = sum; 
				index = i;
			}
		}
		cout << max << endl;
		for (int i = k; i > 0; i--) {
			cout << a[index - i+1] << " ";
		}
	}
}