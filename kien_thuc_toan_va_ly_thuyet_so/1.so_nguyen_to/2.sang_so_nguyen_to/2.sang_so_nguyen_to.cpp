#include<iostream>
using namespace std;

void sieve(int a[] , int n ) {
	a[0] = 0; a[1] = 0;
	for (int i = 2; i < n; i++) {
		//a[2] ==1 ; 
		if (a[i]) {
			for (int j = i * i; j < n; j += i) {
				a[j] = 0;
			}
		}
	}
}

int main() {
	int n; cin >> n; 
	int a[10000];
	for (int i = 0; i < n; i++) {
		a[i] = 1; 
	}

	sieve(a, n);
	for (int i = 0; i < n; i++) {
		if (a[i] == 1) {
			cout << i << " ";
		}
	}

}