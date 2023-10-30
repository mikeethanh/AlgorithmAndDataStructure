#include<iostream>
//o(n^2)
using namespace std;
void bubble_sort(int a[], int n) {
	for (int i =0; i < n; i++) {
		//duyet cac phan tu tu 
		for (int j = 0; j < n - i - 1; j++) {
			if (a[j] > a[j + 1]) {
				swap(a[j], a[j + 1]) ;
			}
		}
	}
}
int main() {
	int a[100];
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	bubble_sort(a, n);
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}