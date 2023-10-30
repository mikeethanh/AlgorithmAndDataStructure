#include<iostream>
using namespace std;

int giaithua(int x) {
	int ans = 1; 
	while (x > 1) {
		ans *= (x);
		x--;
	}
	return ans;
}

// n = 4 ; r = 1 , g = 1 , b = 2 ; 
// R + G + B = n ; R >= r ; G >= g ; B >= b;
void solve(int n , int r, int g , int b) {
	int ans = 0;
	for (int R = n; R >= r; R--) {
		for (int G = n - R; G >= g; G--) {
			int B =n- R - G; 
			if (B >= b) {
				ans += giaithua(n) /( giaithua(R) * giaithua(B) * giaithua(G));
			}
		}
	}
	cout << ans; 
}

int main() {
	int t; cin >> t; 
	while (t--) {
		int n, r, g, b;
		cin >> n >> r >> b >> g; 
		solve(n, r, g, b);
	}
}