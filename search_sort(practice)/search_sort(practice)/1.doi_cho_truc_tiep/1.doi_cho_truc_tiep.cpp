#include<iostream>
#include<algorithm>
using namespace std;
//0(n2)
/* input
* 4
5 7 3 2
* ouput
* buoc 1 : 2 7 5 3 ;
* buoc 2 : 2 3 7 5 ;
* buoc 3 : 2 3 5 7 ;
*/
int main() {
	int n; cin >> n;
	int a[100];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] > a[j]) {
				swap(a[i], a[j]);
			}
		}
		for (int i = 0; i < n; i++) {
			cout << a[i] << " ";
		}
		cout << endl;
	}
}