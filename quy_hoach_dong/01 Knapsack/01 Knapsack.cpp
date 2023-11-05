#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int n, s; 
	cin >> n >> s;
	int w[100];
	int v[100];
	for (int i = 1; i <= n; i++) {
		//doc vao can nang cua tung do vat
		cin >> w[i];
	}
	for (int i = 1; i < n; i++) {
		//doc vao gia tri cua tung do vat
		cin >> v[i];
	}
	//mang chua gia tri cua do vat xem co the dua duoc vao tui hay khong 
	int dp[100][100];
	memset(dp, 0, sizeof(dp));
	// i la o vat thu i 
	// j la trong luong cua cai tuis
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= s; j++) {
			//gia su khong cho do vat i vao tui 
			dp[i][j] = dp[i - 1][j];
			//co the cho o vat vao tui
			if (j >= w[i]) {
				dp[i][j] = max(dp[i][j], dp[i - 1][j - w[i]] + v[i]);
			}
		}
	}
	cout << dp[n][s] << endl;
}