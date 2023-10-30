#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	int n; cin >> n;
	int a[100];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	vector<int> evens; 
	vector<int> odds;
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 0) {
			evens.push_back(a[i]);
		}
		else {
			odds.push_back(a[i]);
		}
	}
	sort(evens.begin(), evens.end());
	sort(odds.begin(), odds.end(), greater<int>());
	int pos_e = 0; 
	int pos_o = 0; 
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 0) {
			a[i] = evens[pos_e];
			i++; pos_e++;
		}
		else {
			a[i] = odds[pos_o];
			i++; pos_o++;
		}
	}
	for (int i = 0; i < n; i++) cout << a[i] << " ";
}