#include<iostream>
#include<algorithm>
#include<map>
using namespace std;

int main() {
	int a[100];
	int n; cin >> n;
	int k; cin >> k;
	map<int, int> mp;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		mp[a[i]]++;
	}
	int dem = 0; 
	for (int i = 0; i < n; i++) {
		dem += mp[k - a[i]];
		if (dem * 2 == k) {
			dem--;
		}
	}
	cout << dem / 2 << endl;
}