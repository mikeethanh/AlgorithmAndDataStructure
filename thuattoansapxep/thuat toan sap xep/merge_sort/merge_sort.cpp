#include<iostream>
#include<vector>
using namespace std;
/*tu tuong : chia va tri
*/
//tron 2 day con : day 1 [l ,m] ,day 2 : [ m+1  ,r]
void merge(int a[], int l, int m, int r) {
	vector<int> x(a + l, a + m + 1);
	vector<int> y(a + m + 1, a + r + 1);
	//sap xep
	int i = 0; int j = 0;
	while (i < x.size() && j < y.size()) {
		if (a[i] <= a[j]) {
			a[l] = a[i];
			l++;
			i++;
		}   
		else {
			a[l] = a[j];
			l++;
			j++;
		}
	}
	while (i < x.size()) {
		a[l] = a[i];
		l++;
		i++;
	}
	while (j < y.size()) {
		a[l] = a[j];
		l++;
		j++;
	}
}

void merge_sort(int a[], int l, int r) {
	if (l >= r) return;
	int m = (l + r) /  2;
	merge_sort(a, l, m);
	merge_sort(a, m + 1,r);
	merge(a, l, m, r);
}
int main() {
	int n = 100;
	int a[100];
	srand(time(NULL));
	for (int i = 0; i < n; i++) {
		a[i] = rand() % 1000;
	}
}