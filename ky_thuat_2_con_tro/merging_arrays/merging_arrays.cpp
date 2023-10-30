#include<iostream>
using namespace std;

int main() {
	int n, m; 
	cin >> n >> m;
	int a[100], b[100];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}
	int i = 0, j = 0;
	while (i < n && j < m) {
		if (a[i] <= b[j]) {
			cout << a[i] << " ";
			i++;
		}
		else {
			cout << b[j] << " ";
			j++;
		}
	}
	if (i < n) {
		while (i < n) {
			cout << a[i] << " ";
			i++;
		}
	}
	if (j < m) {
		while (j < m) {
			cout << b[j] << " ";
			j++;
		}
	}
}