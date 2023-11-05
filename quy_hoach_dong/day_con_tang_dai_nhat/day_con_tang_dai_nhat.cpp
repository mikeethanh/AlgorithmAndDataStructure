#include<iostream>
using namespace std;

int main() {
	int n; cin >> n;
	int a[100];
	//luu do dai cua cac day con;
	int l[100];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		//truong hop co so;
		l[i] = 1;
	}
	int res = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			if (a[i] > a[j]) {
				l[i] = max(l[i], l[j] + 1);
			}
		}
	}
	auto it = *max_element(l, l + n);
	cout << it << endl;
}