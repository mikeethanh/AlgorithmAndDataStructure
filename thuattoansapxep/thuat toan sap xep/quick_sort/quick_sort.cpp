#include<iostream>
#include<algorithm>
using namespace std;
//O(n*logn)
//pho bien duoc ung dung nhieu 
//pivot : chot


//phan hoan lomuto
int patrition(int a[], int l, int r) {
	int pivot = a[r];
	int i = l - 1;
	for (int j = l; j < r; j++) {
		if (a[j] <= pivot) {
			i++;
			swap(a[i], a[j]);
		}
	}
	swap(a[i + 1], a[r]);
	return i + 1;
}

int quicksort(int a[], int l, int r) {
	if (l >= r) return; 
	else {
		int q = patrition(a, l, r);
		quicksort(a, l, q - 1);
		quicksort(a, q + 1, r);
	}
}

//
int patrition2(int a[], int l, int r) {
	int pivot = a[l];
	int i = l - 1; 
	int j = r + 1;
	while (1) {
		do {
			++i;
		} while (a[i] < pivot);
		do {
			j--;
		} while (a[j] > pivot);
		if (i < j) {
			swap(a[i], a[j]);
		}
		else {
			return j; 
		}
	}
}

int quicksort(int a[], int l, int r) {
	if (l >= r) return;
	else {
		int q = patrition2(a, l, r);
		quicksort(a, l, q);
		quicksort(a, q + 1, r);
	}
}
int main() {
	int a[100]; 
	int n; cin >> n; 
	for (int i = 0; i < n; i++) {
		cin >> a[i]; 
	}
}