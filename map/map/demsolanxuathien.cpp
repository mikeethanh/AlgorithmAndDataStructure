#include<iostream>
#include<map>
using namespace std;
//dem so lan xuat hien cua cac phan tu trong mang
//input 
//8
//1 1 2 1 3 5 1 4 
//output
//1 4 
//2 1 
//3 1 
//4 1 
//5 1
//co thu tu theo key

int main() {
	map<int,int> mp;
	int n; cin >> n;
	for (int i = 0; i < n ; i++) {
		int x; cin >> x;
		mp[x]++;
	}
	for (auto it : mp) {
		cout << it.first << " " << it.second << endl;
	}
}