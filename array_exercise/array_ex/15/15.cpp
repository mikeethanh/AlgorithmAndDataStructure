#include<iostream>
#include<algorithm>
using namespace std;
//day con lien tuc cac phan tu nhieu nhat trong mang 

int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int a[100];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		int res = 1; int dem = 1; 
		for (int i = 0; i < n-1; i++) {
			if (a[i] = a[i + 1]) {
				dem++;
			}
			else {
				dem = 1;
			}
			res = max(dem, res);
		}
		cout << n - res - 1 << endl;
	}
}