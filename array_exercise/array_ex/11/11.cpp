#include<iostream>
using namespace std;
/* uoc chung lon nhat cua day
* input 
* 1 
* 10 
* 2 4 1 4 5 7 14 3 5 10
*/
int ucln(int a, int b) {
	if (b == 0) return a;
	return ucln(b, a % b);
}

int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
	    int a[100];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		int res = 1;
		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				res = max(res, ucln(a[i], a[j]));
			}
		}
		cout << res; 
	}
}