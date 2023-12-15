#include<iostream>
using namespace std;
//chon phan tu nho nhat ma chua duoc sap xep sau moi lan lap
void selectionSort(int a[], int n) {
    int minIndex;
    for (int i = 0; i < n - 1; i++) {
        minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[minIndex]) {
                minIndex = j;
            }
        }
        swap(a[i], a[minIndex]);
    }
}

int main() {
    int a[8] = {8, 2, 1, 9, 7, 2, 5, 6};
    int n = 8;

    selectionSort(a, n);
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}