#include<iostream>
#include<algorithm>

using namespace std;
//cay nhi phan :
// chuyen tu mang sang cay nhi phan 
// i goc = 0;
// i(l) = 2i + 1;i(r)= 2i + 2;
//cay nhi phan hoan chinh khi duoc dien day o cac level : uu tien thu tu
//tu l -> r;
//tim cha cua not i = (i-1)/2

//heap: 
//tat cac cac not khong phai not la tm tinh chat lon hon hoac 
//nho hon not con cua no : max heap or min heap
//thao tac heapify ded tim pha ntu lon nhat trong 3 phan tu : 
void heapify(int a[], int n, int i) {
	int largest = i; 
	int left = 2 * i + 1;
	int right = 2 * i + 2;
	if (left < n && a[left] > a[largest]) {
		largest = left;
	}
	if (right < n && a[right] > a[largest]) {
		largest = right;
	}
	if (largest != i) {
		swap(a[i],a[largest]);
		heapify(a, n, largest);
	}
}

//not dau tien khong phai not la : n/2 -1
void heapsort(int a[], int n) {
	//xay dung max heap
	for (int i = n / 2 - 1; i >= 0; i--) {
		heapify(a, n, i);
	}

	for(int i = n - 1; i >= 0; i++) {
		swap(a[i], a[0]);
		heapify(a, i, 0);
	}
}

int main() {

}