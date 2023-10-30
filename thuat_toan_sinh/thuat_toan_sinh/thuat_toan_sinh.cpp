#include<iostream>
using namespace std;

/* n = 3
* 000
* 001
* 010
* 011
* 100
* 101
* 110
* 111
*/

/*cau hinh dau tien
* cau hinh cuoi cung 
* phuong phap sinh
*/

/*ktao cau hinh dau tien
* while(khi chua phai cau hinh cuoi cung) { 
* in ra cau hinh hien tai 
* sinh ra cau hinh tiep theo
*/

int n, a[100],ok,k;

void ktao() {
	for (int i = 1; i <= n; i++) {
		a[i] = 0; 
	}
}

void sinh() {
	int i = n; 
	while (i >= 1 && a[i] == 1) {
		a[i] = 0;
		i--;
	}

	if (i == 0) {
		ok = 0; 
	}
	else {
		a[i] = 1;
	}
}


/* gia su cho bai toan : 
* sinh ra xau nhi phan co k bit 1 ; 
*/

bool check() {
	int cnt = 0; 
	for (int i = 1; i <= n; i++) {
		cnt += a[i];
	}
	return cnt == k;
}

int main() { 
	cin >> n >> k; 
	ok = 1;
	while (ok) {
		if (check()) {
			for (int i = 1; i <= n; i++) {
				cout << a[i];
			}
			cout << endl;
		}
		sinh();
	}
}