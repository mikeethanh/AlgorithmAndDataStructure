#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	int n; cin >> n;
	vector<pair<int, int>> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i].first >> v[i].second;
	}

	sort(v.begin(), v.end());
	for (int i = 0; i < n; i++) {
		v[i].second = v[i].first + v[i].second;
	}
	int res = v[n - 1].second;
	for (int i = 0; i < n-1; i++) {
		if (v[i].second > v[i+1].first) {
			res += (v[i].second - v[i+1].first);
		}
	}
	cout << res;
}