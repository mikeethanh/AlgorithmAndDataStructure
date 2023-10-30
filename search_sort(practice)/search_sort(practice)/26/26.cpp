#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int t; cin >> t; 
	while (t--) {
		int a[100];
		int b[100];
		int n,m; cin >> n >> m; 
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		for (int i = 0; i < n; i++) {
			cin >> b[i];
		}
		int m1 = *max_element(a, a + n);
		int m2 = *min_element(b, b + m);
		cout << m1 * m2 << endl;
	}
}