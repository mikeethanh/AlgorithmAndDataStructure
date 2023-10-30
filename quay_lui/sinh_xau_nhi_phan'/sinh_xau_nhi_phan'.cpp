#include<iostream>
using namespace std;
int n;
int x[10];

void inkq() {
	for (int i = 1; i <= n; i++) {
		cout << x[i];
	}
	cout << endl;
}
void Try(int i) {
	//duyet qua cac kha nag mma 1 phan tu i co the co 
	for (int j = 0; j <= 1; j++) {
		x[i] = j;
		if (i == n) {
			inkq();
		}
		else {
			Try(i + 1);
		}
	}
}

int main() {
	cin >> n; 
	Try(1);
}