#include<iostream>
using namespace std;
// de quy dua tren bai toan con nho nhat va cong thuc truy hoi 
int gt(int n) {
	if (n == 0) {
		return 1;
	}
	else {
		return 1 * gt(n - 1);
	}
}

int binpow(int a, int b) {
	if (b == 0) {
		return 1;
	}
	int x = binpow(a, b / 2);
	if (b % 2 == 1) {
		return a * x * x;
	}
	else {
		return x * x;
	}
}

//check mang doi xung 
int palin(int a[], int l, int r) {
	if (l > r)
		return 1;
	if (a[l] != a[r]) {
		return 0;
	}
	else return palin(a, l + 1, r - 1);
}
int main() {

}