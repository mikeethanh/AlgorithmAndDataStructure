#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int n; cin >> n; 
	int a[100];
	int ok = 1;
	for(int i = 1 ; i <= n ; i++) { 
		a[i] = n - i + 1;
	}
	do {
		for (int i = 1; i <= n; i++) {
			cout << a[i]; 
		}
	} while (prev_permutation(a, a + n));
	cout << endl;
}