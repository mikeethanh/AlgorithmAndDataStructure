#include<iostream>
#include<algorithm>
using namespace std;
/*input 
* 4 
* 5 7 3 2 
* output 
* 5 
* 5 7 
* 3 5 7 
* 2 3 5 7   
*/
int main() {
	int n; cin >> n; 
	int a[100]; 
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		int pos = i - 1; int x = a[i];
		while (pos >= 0 && a[pos] > x) {
			a[pos + 1] = a[pos];
			pos--;
		}
		a[pos + 1] = x;
		for (int j = 0; j <= i; j++) {
			cout << a[j] << " ";
		}
		cout << endl;
	}
}