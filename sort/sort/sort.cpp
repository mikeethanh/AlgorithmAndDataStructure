#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

//ham sort
// mac dinh sap xep theo thu tu tang dan
//sort(a,a+n)
//sort(a.begin(),a.end())
// greater<int>()  
//stable_sort: bubble ,insertion,merge

int main() {
	int n; cin >> n;
	int a[100];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n,greater<int>());//a[x]; a[y] sort (a+x, a+y+1)
	sort(a, a + n);
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	//sap xep xau;
	string b[100];
	for (int i = 0; i < n; i++) {
		cin >> a[i];//khong doc vao giau cach 
	}
	sort(b, b + n,greater <string>());
	for (string x : b) {
		cout << x << " ";
	}

	//sap xep cac ky tu trong xau
	string s; 
	getline(cin, s);
	sort(s.begin(), s.end(), greater<char>());
	cout << s << endl;

	//pair 
	int n; cin >> n;
	pair<int, int> p[100];
	for (int i = 0; i < n; i++) {
		cin >> p[i].first >> p[i].second;
	}

	sort(p, p + n);
	for (auto it : p) {
		cout << it.first << " " << it.second;//mac dinh sap xep theo first 
	}
}