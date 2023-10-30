#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int t; cin >> t; 
	while (t--) {
		int n; cin >> n; 
		int a[100];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		sort(a, a + n, greater<int>());
		int i = 0; int j = n - 1;
		while (i < j) {
			cout << a[i] << " " << a[j] << " ";
			i++;
			j--;
		}
		if (i == j) {
			cout << a[i] << endl;
		}
	}
}