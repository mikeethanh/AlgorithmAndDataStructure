#include<iostream>
#include<algorithm>
using namespace std;
//tim vi tri dau tien or vi tri cuoi cung trong mang da sap xep 
/*10 3
* 1 2 2 3 3 3 3 7  8 9
*/

//tim vi tri dau tien cua 1 phan tu > x trong 1 mang da sap xep 
//tim vi tri dau tien cua 1 phan tu < x trong 1 mang da sap xep
////tim vi tri cuoi cung cua 1 phan tu > x trong 1 mang da sap xep 
//tim vi  tri cuoi cung cua 1 phan tu > x trong 1 mang d asap xep

int first_pots(int a[], int n, int x) {
	int res = -1;
	int l = 0;
	int r = n-1;
	while(l <= r) {
		int m = (l + r) / 2;
		if (a[m] == x) {
			res = m;
			r = m - 1;
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

int last_pots(int a[], int n, int x) {
	int res = -1;
	int l = 0; 
	int r = n-1;
	while (l <= r) {
		int m = (l + r) / 2;
		if (a[m] == x) {
			res = m; 
			l = m + 1;
		}
		else if(a[m] > x) {
			r = m - 1;
		}
		else {
			l = m + 1;
		}
	}
	return res;
}

int main() {
	int n,x; cin >> n>>x;
	int a[100]; 
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cout << first_pots(a, n, x) << " " << last_pots(a, n, x) << endl;
}