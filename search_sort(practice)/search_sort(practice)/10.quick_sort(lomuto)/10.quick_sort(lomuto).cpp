#include<iostream>
using namespace std;

void patrition(int a[], int l, int r) {
	int pivot = a[r];
	int i = l - 1;

	for(int j = l; j <= r; j++) {
		if (a[j] < pivot) {
			i++;
			swap(a[j], a[i]);
		}
	}
	i++;
	swap(a[i], a[r]);
	for (int j = l; j <= r; j++) {
		if (i == j) {
			cout << "[" << a[j] << "]";
		}
		else {
			cout << a[j] << " ";
		}
	}
}
int main() {
	int n; cin >> n;
	int a[100];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	patrition(a, 0, n - 1);
}