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
		if (a[i] < b[j]) {
			i++; continue;
		}
		else if (a[i] > b[j]) {
			j++; continue;
		}
		else {
			int dem1 = 0;
			int dem2 = 0;
			while (a[i] == b[j]) {
				dem1++; i++;
			}
			while (b[j] = a[i - 1]) {
				dem2++; j++;
			}
			cout << (dem1 * dem2) << " ";
		}
	}
}