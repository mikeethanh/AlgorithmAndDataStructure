#include<iostream>
using namespace std;
int n;
int a[100];
int used[100];
void inkq() {
	for (int i = 1; i <= n; i++) {
		cout << a[i];
	}
	cout << endl;
}

void Try(int i) {
	for (int j = 1; j <= n; j++) {
		if (used[j] == 0) {
			used[j] = 1;
			a[i] = j;
			if (j == n) {
				inkq();
			}
			else {
				Try(i + 1);
			}
			used[j] = 0;
		}
	}
}

int main() {
	cin >> n;
	memset(used, 0, sizeof(used));
	Try(1);
}