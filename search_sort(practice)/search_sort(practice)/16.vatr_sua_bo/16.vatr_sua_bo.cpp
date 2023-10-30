#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int n; cin >> n;
	int a[100];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	sort(a, a + n, greater<int>());
	int res = a[0];
	for (int i = 1; i < n; i++) {
		int slx = a[i] - i;
		if (slx > 0) {
			res += slx;
		}
		else {
			break;
		}
	}
	cout << res << endl;
}