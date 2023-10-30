#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int t; cin >> t; 
	while (t--) {
		int a[100];
		int b[100];
		int n,m; cin >> n >> m;
		vector<int> v(n + m);
		for (int i = 0; i < n; i++) cin >> a[i];
		for (int i = 0; i < m; i++) cin >> b[i];
		sort(a, a + n);
		sort(b, b + m);
		int i = 0; int j = 0; 
		int l = 0; 
		while (i < n && j < m) {
			if (a[i] <= b[j]) {
				v[l] = a[i];
				i++;
				l++;
			}
			else {
				v[l] = b[j];
				j++;
				l++;
			}
		}
		while (i < n) {
			v[l] = a[i];
			i++; l++;
		}
		while (j < m) {
			v[l] = b[j];
		    j++; l++;
		}
		for (int i = 0; i < v.size(); i++) {
			cout << v[i] << " ";
		}
	}
}