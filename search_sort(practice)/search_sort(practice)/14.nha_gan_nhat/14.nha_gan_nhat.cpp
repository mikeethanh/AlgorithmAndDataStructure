#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int n; cin >> n; 
	int a[100];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n);
	cout << a[1] - a[0] << endl;
}