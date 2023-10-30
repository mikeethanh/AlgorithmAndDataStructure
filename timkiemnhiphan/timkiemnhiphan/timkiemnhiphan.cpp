#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//linear search: tim kiem tuyen tinh 
//O(n)
/*10 3
* 1 2 8 9 0 7 6 5 3 4 
*/
bool ls(int a[], int n, int x) {
	for (int i = 0; i < n; i++) {
		if (a[i] == x) {
			return true;
		}
	}
	return false;
}

//binary_search
//O(logn)
//cac phan tu trong mang phai duoc sap xep tang dan or gia mdan 
/* 10 3
* 1 2 3 4 5 6 7 8 9 10
* 
*/

bool bs(int a[], int n, int x) {
	int l = 0; int r = n - 1;
	while (l <= r) {
		int m = (l + r) / 2;
		if (a[m] == x) {
			return true;
		}
		else if (a[m] > x) {
			r = m - 1;
		}
		else if (a[m] < x) {
			l = m + 1;
		}
	}
	return false;
}
// binary_search(a + x, a + y, key) => a[x] => a[y - 1]
int main() {
	int n,x; cin >> n>>x;
	int a[100];
	for (int i = 0; i < n; i++) {
		if (bs(a, n, x)) {
			cout << "found" << endl;
		}
		else {
			cout << "not found" << endl;
		}
	}

	//ham co san 
	if (binary_search(a, a + n, x)) {
		cout << "found" << endl;
	}
	else {
		cout << "not found" << endl;
	}

	//binary_search tren vector 
	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	if(binary_search(v.begin(), v.end(), x)) {
		cout << "found" << endl;
	}
	else {
		cout << " not found" << endl;
	}
}