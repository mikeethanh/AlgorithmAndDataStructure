#include<iostream>
#include<set>
#include<map>
#include<algorithm>
using namespace std;

/*input
* 1 
* 4 5 
* 1 2 2 9
* 2 0 9 8 3 
* output 
* 1
* (tim kiem trong mang 2)
*/
int main() {
	//set
	int test; cin >> test;
	while (test--) {
		int n, m; cin >> n >> m;
		int a[100];
		int b[100];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		set <int> s;
		for (int i = 0; i < m; i++) {
			int x; cin >> x;
			s.insert(x);
		}
		bool ok = false;
		for (int i = 0; i < n; i++) {
			if (s.count(a[i]) == 0) {
				cout << a[i];
				ok = true;//tim thay
			}
		}
		if (!ok) {
			cout << "not found";
		}
	}
}