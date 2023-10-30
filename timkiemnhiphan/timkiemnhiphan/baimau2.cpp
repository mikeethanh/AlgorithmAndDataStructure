//tim vi tri dau tien cua 1 phan tu > x trong 1 mang da sap xep
//tim vi tri cuoi cung cua 1 phan tu < x trong 1 mang da sap xep
//tim vi tri dau tien cua 1 phan tu < x trong 1 mang da sap xep
#include<iostream>
#include<algorithm>

/*input
* 10 3 
* 1 2 2 2 3 3 3 4 4 5
* output
* 7
* 2
*/
//tim vi tri phan tu cuoi cung = x ,sao do +1
using namespace std;
int bs(int a[], int n, int x) {
	int l = 0; int r = n - 1;
	int res = -1;
	int m = (l + r) / 2;
	while (l <= r) {
		if (a[m] == x) {
			l = m + 1;
			res = m + 1;
		}
		else if (a[m] > x) {
			r = m - 1;
		}
		else {
			l = m + 1;
		}
	}
	return res;
}

//tim vi tri dau tien = x , sau do - 1;
int bs1(int a[], int n, int x) {
	int l = 0; int r = n - 1;
	int res = -1;
	int m = (l + r) / 2;
	if (a[m] = x) {
		r = m - 1;
		res = m - 1;
	}
	else if (a[m] > x) {
		r = m - 1;
	}
	else {
		l = m + 1;
	}
	return res;
}


int main() {
	int a[100];
	int n,x; cin >> n>>x;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

}