#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int x;
bool cmp( int a, int b) {
	return abs(x - a) < abs(x - b);
}
int main() {
	int t; cin >> t; 
	while (t--) {
		int n; cin >> n >>x; 
		int a[100];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		sort(a, a + n, cmp);
		for (int i = 0; i < n; i++) {
			cout << a[i] << " ";
		}
	}
}