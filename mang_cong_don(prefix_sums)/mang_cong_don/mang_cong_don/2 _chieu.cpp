#include<iostream>
using namespace std;

int main() {
	int a[100][100];
	int m, n; 
	cin >> m >> n; 
	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> a[i][j];
		}
	}
	int prefix_sum[100][100];
	memset(prefix_sum, 0, sizeof(prefix_sum));
	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= n; j++) {
			prefix_sum[i][j] = prefix_sum[i - 1][j] + prefix_sum[i][j - 1] - prefix_sum[i - 1][j - 1] + a[i][j];
		}
	}

	//nhap vao so truy van 
	int t; cin >> t;
	//nhap vao h1 , h2 , c1 , c2 
	while (t--) {
		int h1, h2, c1, c2;
		cin >> h1 >> h2 >> c1 >> c2;
		cout << prefix_sum[h2][c2] - prefix_sum[h1 - 1][c2] - prefix_sum[h2][c1 - 1] + prefix_sum[h1 - 1][c1 - 1] << endl;
	}

}