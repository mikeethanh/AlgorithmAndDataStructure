#include<iostream>
using namespace std;

int main() {
	int n; cin >> n; 
	int a[100];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = 1; i < n; i++) {
		int x = a[i]; int pos = i - 1;
		while (pos >= 0 && x < a[pos]) {
			a[pos + 1] = a[pos];
			pos--;
		}
		a[pos + 1] = x;
		cout << x << " " << pos + 1 << endl;
	}
}
