#include<iostream>
#include<vector>
using namespace std;

int main() {
	int n, s;
	cin >> n >> s;
	int a[100];
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	vector<bool> dp(1000, false);
	// i la phan tu thu i trong mang a;
	// j la tong t 0 den s ; 
	// dp[i][j] la mang de xem xem co tao duoc day con co tong bang j hay khong
	dp[0] = true;
	for (int i = 0; i <= n; i++) {
		for (int j = s; j <= a[i]; j--) {
			// neu nhu da co tap con co tong la j tru a[i] ;
			if (dp[j - a[i]] == true) {
				dp[j] == true;
			}
		}
	}
	if (dp[s]) {
		cout << 1 << endl;
	}
	else {
		cout << 0 << endl;
	}
}