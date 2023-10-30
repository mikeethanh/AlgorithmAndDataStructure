#include<iostream>
using namespace std;

int n, k, ok,a[100];

void ktao() {
	for (int i = 1; i <= n; i++) {
		a[i] = 0;
	}
}

void sinh() {
	int i = n;
	while (i >= 1 && a[i] == 1) {
		a[i] = 0;
		i--;
	}
	if (i == 0) {
		ok = 0;
	}
	else {
		a[i] = 1;
	}
}

bool check() {
	int dem = 0, res = 0;
	for (int i = 1; i <= n; i++) {
		if (a[i] == 0) {
			dem++;
		}
		else {
			dem = 0; 
		}
		if (dem == k) res++;
	}
	return res == 1;
}

int main() {
	cin >> n>>k;
	ok = 1;
	ktao();
	while (ok) {
		if (check() == true) {
			for (int i = 1; i <= n; i++) {
				if (a[i] == 0) cout << "A";
				else cout << "B";
			}
			cout << endl;
		}
		sinh();
	}
}
