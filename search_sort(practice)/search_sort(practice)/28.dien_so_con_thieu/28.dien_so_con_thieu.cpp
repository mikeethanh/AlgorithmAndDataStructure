#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	//c1 : su dung mang danh dau 
	int t; cin >> t;
	while (t--) {
		int n; cin >> n; 
		int a[1000] = {0};
		int l = INT_MAX; int r = INT_MIN;
		for (int i = 0; i < n; i++) {
			int x; cin >> x; 
			 l =min(l, x);
			  r = max(r, x);
			a[x] = 1;
		}
		int cnt = 0; 
		for (int i = l; i <= r; i++) {
			if (a[i] == 0) {
				cnt++;
			}
		}
		cout << cnt << endl;
	}
}
