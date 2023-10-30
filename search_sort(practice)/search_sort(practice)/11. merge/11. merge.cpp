#include<iostream>
#include<vector>

using namespace std;

int main() {
	int a[100];
	int b[100];
	int m, n;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < m; i++) {
		cin >> b[i];
	}
	int i = 0; int j = 0; 
	while (i < n && j < m) {
		if (a[i] <= b[j]) {
			cout << "a" << i + 1;
			i++;
		}
		else {
			cout << "b" << j + 1;
			j++;
		}
	}
	while (i < n) {
		cout << "a" << i + 1;
		i++;
	}
	while (j < m) {
		cout << "b" << j + 1;
		j++;
	}
}