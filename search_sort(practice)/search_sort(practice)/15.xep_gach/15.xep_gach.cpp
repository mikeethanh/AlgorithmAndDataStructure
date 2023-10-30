#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int n; cin >> n;
	int a[100];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n, greater<int>());
	int res = 1; 
	int docung = a[0];
	for (int i = 1; i < n; i++) {
		if (docung >= 1) {
			docung = min(docung - 1, a[i]);
			res++; 
		}
		else {
			break;
		}
	}
	cout << res << endl;
}