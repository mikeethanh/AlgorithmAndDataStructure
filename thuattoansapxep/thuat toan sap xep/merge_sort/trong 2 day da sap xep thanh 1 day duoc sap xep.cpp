#include<iostream>

using namespace std;

int main() {
	int n, m; cin >> m >> n;
	int a[100], b[100];
	//doc vao cac phan tu trong 2 mang
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < m; i++) {
		cin >> a[i];
	}

	//sap xep 
	int i = 0; int j = 0; int cnt = 0; int c[200];
	//dung vong lap khi khong con cap phan tu de so sanh
	while (i < n && j < m) {
		if (a[i] <= a[j]) {
			c[cnt] = a[i];
			cnt++;
			i++;
		}
		else {
			c[cnt] = b[j];
			cnt++;
			j++;
		}
	}
	//in ra cac phan tu con lai trong mang
	while (i < n) {
		c[cnt] = a[i];
		cnt++;
		i++;
	}
	while (j < m) {
		c[cnt] = b[j];
		cnt++;
		j++;
	}
}