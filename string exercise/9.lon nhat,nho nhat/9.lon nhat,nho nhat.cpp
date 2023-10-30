#include<iostream>
#include<string>
#include<sstream>
#include<set>
#include<map>

using namespace std;

void sonhonhat(int a[], int m, int s) {
	for (int i = m - 1; i >= 0; i--) {
		if (s > 0 && s <= 9) {
			a[i] = s;
			s = s - s;
		}
		else if (s > 9) {
			a[i] = 9;
			s = s - 9;
		}
		else if (s <= 0) {
			a[i] = 0;
		}
	}
	a[0] = a[0] + 1;
	for (int i = 0; i < m; i++) {
		cout << a[i];
	}
}

void solonnhat(int a[], int m, int s) {
	//so lon nhat
	for (int i = 0; i < m; i++) {
		if (s > 0 && s <= 9) {
			a[i] = s;
			s = s - s;
		}
		else if (s > 9) {
			a[i] = 9;
			s = s - 9;
		}
		else if (s <= 0) {
			a[i] = 0;
		}
	}
	for (int i = 0; i < m; i++) {
		cout << a[i];
	}
}

int main() {
	int s; cin >> s; 
	int m; cin >> m;
	int a[100];
	if (s < 0 && s > 9 * m) {
		cout << "-1 -1" << endl;
	}
	else if (s == 0 && m > 1) {
		cout << "-1 -1" << endl;
	}
	else {
		solonnhat(a, m, s);
		cout << " ";
		sonhonhat(a, m, s - 1);
	}
}