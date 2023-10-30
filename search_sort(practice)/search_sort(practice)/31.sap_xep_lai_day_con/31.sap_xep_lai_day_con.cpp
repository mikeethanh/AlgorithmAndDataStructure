#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int t; cin >> t; 
	while (t--) {
		int n; cin >> n;
		int a[100];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		int l ;
		for (int i = 1; i < n; i++) {
			if (a[i + 1] < a[i]) {
				l = i;
			}
			break;
		}
		int r ;
		for (int i = n - 1; i > 0; i--) {
			if (a[i] < a[i - 1]) {
				r = i;
			}
			break;
		}

		int m1 = *min_element(a + l, a + r + 1);
		int m2 = *max_element(a + l, a + r + 1);

		for (int i = 0; i < l; i++) {
			if (a[i] > m1) {
				l = i;
				break;
			}
		}
		for (int i = n-1; i >= r; i--) {
			if (a[i] < m2) {
				r = i;
				break;
			}
		}
		cout << l+1 << " " << r << endl;
	}
}