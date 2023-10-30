#include<iostream>
#include<set>
using namespace std;

//nhap vao 1 mang , dem so phan tu khac nhau trong mang
int main() {
	int n; cin >> n;
	set<int> a;
	//doc vao cac phan tu trong mang
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		a.insert(x);
	}
} 
