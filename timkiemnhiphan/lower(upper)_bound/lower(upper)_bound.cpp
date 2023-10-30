#include<iostream>
#include<algorithm>
using namespace std;
//lower_bound(iter1 , iter2 , key) => tra ve vi tri cua phan tu dau tien >= key
//da duoc sap xep
//neu ma tat ca cac phan tu trong mang deu nho hon key => iter2

/*input 
* 10 3 
* 1 2 2 2 3 3 3 4 4 4 5 
* output
* 5
*/

//upper_bound(iter1 , iter 2,key) [iter1,iter2) => tra ve vi tri dau tien cua phan tu > key

int main() {
	int n, x; cin >> n >> x;
	int a[100];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	auto it = lower_bound(a, a + n, x);//tim kiem vi tri dau tien cua phan >=x nam trong mang
	cout << *it << endl;
	cout << it - a << endl;

	auto it1 = upper_bound(a, a + n, x);
		cout << *it1 << endl;
		cout << it1 - a << endl;
}