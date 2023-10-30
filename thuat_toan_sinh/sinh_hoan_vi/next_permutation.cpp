#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int n; cin >> n; 
	int a[100];
	for (int i = 1; i <= n; i++) {
		a[i] = i; 
	}
	do {
		for (int i = 1; i <= n; i++) {
			cout << a[i];
		}
		cout << endl;
	} while (next_permutation(a, a + n));

}

//nguoc lai co ham prev_permutation