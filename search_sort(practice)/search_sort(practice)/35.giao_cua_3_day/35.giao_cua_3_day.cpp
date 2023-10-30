#include<iostream>
#include<algorithm>
#include<set>
using namespace std;

int main() {
	int n, m, k; 
	cin >> n >> m >> k;
	int a[100], b[100], c[100];
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < m; i++) cin >> b[i];
	for (int i = 0; i < k; i++) cin >> c[i];
	int i = 0;
	int j = 0; 
	int l = 0; 
	set<int> se;
	while (i < n && j < m && l < k) {
		if (a[i] == b[j] && b[j] == c[l]) {
			se.insert(a[i]);
			i++; j++; l++;
		}
		else if (a[i] <= b[j] && a[i] <= c[l]) {
			i++;
		}
		else if (b[j] <= a[i] && b[j] <= c[l]) {
			j++;
		}
		else
			l++;
	}
	for (int x : se)  cout << x << " ";
}