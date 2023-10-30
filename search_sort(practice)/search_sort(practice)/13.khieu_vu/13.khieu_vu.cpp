#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int a[100];
	int b[100];
	int n, m; cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < m; i++) {
		cin >> b[i];
	}
	sort(a, a + n);
	sort(b, b + n);
	int i = 0; int j = 0; int dem = 0;
	while (i < n && j < m) {
		if (a[i] <= b[j]) {
			i++;
		}
		else {
			dem++;
			i++;
			j++;
		}
	}
	cout << dem << endl;
}