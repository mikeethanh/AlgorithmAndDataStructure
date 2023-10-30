#include<iostream>
using namespace std;
//__gcd
int gcd(int a, int b) {
	if (b == 0)
		return a; 
	return gcd(b, a % b);
}

int main() {
	int a, x, y; 
	cin >> a >> x >> y;
	int g = gcd(x, y);
	for (int i = 0; i < x; i++) {
		s1 += a-'0';
	}
	cout << s1; 

}