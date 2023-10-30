#include<iostream>
#include<algorithm>
using namespace std;

bool binary_serach(int a[], int l, int r, int x) {
	while (l <= r) {
		int m = (l + r) / 2;
		if (x < a[m]) {
			r = m - 1;
		}
		else if (x > a[m]) {
			l = m + 1;
		}
		else
			return true;
	}
	return false;
}
int main() {
	int n,x; cin >> n >> x; 
	int a[100];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	cout << binary_serach(a, 0, n - 1, x) << endl;
}