#include<iostream>
using namespace std;
int n, cnt, a[100],ok;

void ktao() {
	cnt = 1; 
	a[1] = n;
}

void sinh() {
	int i = cnt;
	while (i >= 0 && a[i] == 1) {
		i--;
	}
	if (i == 0) {
		ok = 0;
	}else {
		a[i]--;
		int d = cnt - i + 1;
		cnt = 1;
		int q = d / a[i];
		int r = d % a[i];
		if (q!= 0) {
			for (int j = 1; j <= q; j++) {
				cnt++;
				a[cnt] = a[i];
			}
		}
		if (r != 0) 
			cnt++; a[cnt] = r;
	}
}

int main() {
	cin >> n; 
	ok = 1;
	ktao();
	while (ok) {
		for (int i = 1; i <= cnt; i++) {
			cout << a[i];
		}
		cout << endl;
		sinh();
	}
}