#include<iostream>
#include<set>
using namespace std;

int main() {
	int n, k; 
	cin >> n >> k;
	int a[100];
	multiset<int> ms;
	int ans = 0; 
	int l = 0; 
	for (int r = 0; r < n; r++) {
		ms.insert(a[r]);
		while (*ms.rbegin() - *ms.begin() > k) {
			auto it = ms.find(a[l]);
			ms.erase(it); l++;
		}
		ans += r - l + 1;
	}

}