#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;
bool cmp(pair<int,int> a , pair<int,int> b) {
	return a.second < b.second;
}

int main() {
	int n; cin >> n; 
	vector<pair<int, int>> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i].first >> v[i].second;
	}
	sort(v.begin(), v.end(), cmp);

	int ans = 1; 
	int tmp = v[0].second;
	for (int i = 1; i < v.size(); i++) {
		if (v[i].first > tmp) {
			ans++;
			tmp = v[i].second;
		}
	}
	cout << ans << endl;
}