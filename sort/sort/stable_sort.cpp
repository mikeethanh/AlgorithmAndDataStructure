#include<iostream>
#include<algorithm>
#include<string>

using namespace std;
//stable_sort:bubble,insertion,merges
//theo 1 tieu chi sap xep

/*sap xep cac phan tu trong mang thoe thu tu tang dan ve gia tri tuyen doi
8
1 -1 2 1 5 -2 -5
output 
1 -1 1 2 -2 5 -5
*/

//comparator: tieu chi sap xep
/*
* 
*/

bool cmp(int a, int b) {
	return abs(a) < abs(b);
}

int main() {
	int n; cin >> n; 
	int a[100];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	stable_sort(a, a + n, cmp);
}