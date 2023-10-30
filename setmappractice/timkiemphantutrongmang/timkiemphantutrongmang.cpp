#include<iostream>
#include<set>
#include<map>
#include<algorithm>

using namespace std;
/*input 
* 1 
* 6 
* 1 2 3 8 7 0
* 4
* 1
* 2 
* 10
* 20
* output
* yes 
* yes 
* no 
* no
*/
int main() {
	//set 
	int t; cin >> t;
	for (int i = 0; i < t; i++) {
		int n; cin >> n;
		set <int> s;
		for (int i = 0; i < n; i++) {
			int x; cin >> x;
			s.insert(x);//0 1 2 3 7 8 
		}
		int truyvan; cin >> truyvan;
		for (int i = 0; i < truyvan; i++) {
			int songuyen; cin >> songuyen;
			if (s.count(songuyen) != 0) {
				cout << "YES" << endl;
			}
			else {
				cout << "NO" << endl;
			}
		}
	}

	//map
	int t; cin >> t;
	for (int i = 0; i < t; i++) {
		int n; cin >> n;
		map <int, int> mp;
		for (int i = 0; i < n; i++) {
			int x; cin >> x;
			mp[x]++;
		}
		int truyvan; cin >> truyvan;
		for (int i = 0; i < truyvan; i++) {
			int songuyen; cin >> songuyen;
			if (mp.count(songuyen) != 0) {
				cout << "YES" << endl;
			}
			else {
				cout << "NO" << endl;
			}
		}
	}

	//tim kiem nhi phan 
	int t; cin >> t;
	for (int i = 0; i < t; i++) {
		int n; cin >> n;
		int a[100];
		for (int i = 0; i < n; i++) {
			cin>>a[i];
		}
		int truyvan; cin >> truyvan;
		for (int i = 0; i < truyvan; i++) {
			int songuyen; cin >> songuyen;
			//binary_search:tim kiem nhi phan 
			//binary(arr , arr+n;x)
			if (binary_search(a,a+n,songuyen)) {
				cout << "YES" << endl;
			}
			else {
				cout << "NO" << endl;
			}
		}
	}


}