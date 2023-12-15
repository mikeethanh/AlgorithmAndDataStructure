#include<iostream>
#include<vector>
using namespace std;

void merge(int a[], int l, int m, int r) {
    vector<int> x(a + l, a + m + 1);
    vector<int> y(a + m + 1, a + r + 1);

    int i = 0;
    int j = 0;
    int k = l;

    while (i < x.size() && j < y.size()) {
        if (x[i] <= y[j]) {
            a[k++] = x[i++];
        } else {
             a[k++] = y[j++];
        }
    }

    while (j < y.size()) {
        a[k++] = y[j++];
    }

    while (i < x.size()) {
        a[k++] = x[i++];
    }
}

void mergeSort(int a[], int l, int r) {
    if (l >= r) return;
    int m = (l + r) / 2;
    mergeSort(a, l, m);
    mergeSort(a, m + 1, r);
    merge(a, l, m, r);
}

int main() {
    int a[8] = {7, 4, 6, 2, 5, 1, 3, 0};
    int l = 0; // Starting index of the array
    int r = 7; // Ending index of the array

    mergeSort(a, l, r);
    for (int i = 0; i < 8; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
