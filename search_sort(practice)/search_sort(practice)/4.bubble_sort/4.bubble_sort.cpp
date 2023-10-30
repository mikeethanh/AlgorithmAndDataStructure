#include<iostream>
#include<algorithm>
using namespace std;
/*input : 
4 
5 3 2 7 
output 
3 2 5 7 
2 3 5 7 
*/
int main() {
	int n; cin >> n; 
	int a[100];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < n - 1 - i; j++) {
			if (a[j] > a[j + 1]) {
				swap(a[j], a[j + 1]);
			}
		}
			for (int j = 0; j < n; j++) {
				cout << a[j] << " ";
			} 	
			cout << endl; 
		}
	}