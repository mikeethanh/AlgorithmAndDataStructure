#include<iostream>
#include<math.h>
using namespace std;
//chung minh no khong phai la so nguyen to 
bool snt(int n) {
	for (int i = 2; i < sqrt(n); i++) {
		if (n % i == 0) {
			return false ;
		}
	}
	return true;
}
int main() {
	int n; cin >> n;
	if (snt(n) == true) cout << "yes";
	else cout << "no";
}