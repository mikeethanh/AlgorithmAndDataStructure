#include<iostream>
using namespace std;

int main() {
	//tinh tong cac phan tu tu chi so left den chi so rigth 

	//c1 : o(n)
	int n; cin >> n;
	int a[100];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int t; cin >> t; 
	for (int i = 1; i <= t; i++) {
		int l, r; cin >> l >> r; 
		int sum = 0; 
		for (int i = l; i <= r; i++) {
			sum += a[l];
		}
	}

	//c2 : su dung prefix sums; o(1)
	int n; cin >> n;
	int a[100];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int prefix[101] = { 0 };
	for (int i = 1; i < n; i++) {
		prefix[i] = prefix[i - 1] + a[i - 1];
	}
}