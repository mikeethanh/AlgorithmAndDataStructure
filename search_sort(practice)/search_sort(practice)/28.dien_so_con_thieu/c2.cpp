#include<iostream>
#include<algorithm>
#include<set>

using namespace std;

int main() {
	//c1 : su dung mang danh dau 
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		set <int> s;
		for (int i = 0; i < n; i++) {
			int x; cin >> x; 
			s.insert(x);
		}
		int l = *s.begin();
		int r = *s.rbegin();
		int dem = 0; 
		for (int i = l; i <= r; i++) {
			if (s.count(i) == 0) {
				dem++;
			}
		}
		cout << dem << endl;
	}
}