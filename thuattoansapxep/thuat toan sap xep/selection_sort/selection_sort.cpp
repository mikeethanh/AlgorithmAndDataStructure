 #include<iostream>
//o(n^2)
using namespace std;
void selection_sort(int a[], int n) {
	//tang dan
	for (int i = 0; i < n - 1;i++) {
		//dung 1 bien de luu chi so cua phan tu nho nhat 
		int min = i;
		//duyet tat ca cac phan tu dung sau phan tu nho nhat 
		for (int j = i + 1; j < n; j++) {
			if (a[min] > a[j]) {
				min = j;
			}
		}
		swap(a[i], a[min]);
	}
}

int main() {
	int a[100];
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	selection_sort(a, n);
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}