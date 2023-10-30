#include<iostream>
#include<set>
#include<map>
#include<algorithm>

using namespace std;
//input 
//2 
//5 
//1 2 2 2 1 
//4 
//1 2 3 4 
// 2 
//4 
int main() {
	//set 
	/*int n; cin >> n;
	for (int i = 0; i < n; i++) {
		int d; cin >> d;
		set <int> s;
		for (int i = 0; i < d; i++) {
			int x; cin >> x;
			s.insert(x);
		}
		cout << s.size() << endl;
	}*/

	//map
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		int d; cin >> d;
		map <int, int> mp;
		for (int i = 0; i < d; i++) {
			int x; cin >> x;
			mp[x]++;
		}
		cout << mp.size() << endl;
	}

	//su dung sap xep 
	int n; cin >> n;
	int a[100];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n);//a : arr ; n: so phan tu //mac inh sap xep theo thu tu tang dan 

	int dem = 1; 
	for (int i = 1; i < n-1; i++) {
	    if (a[i] != a[i - 1]) {
			dem++;
		}
	}


}
