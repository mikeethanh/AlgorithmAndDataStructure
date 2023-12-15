#include<iostream>
#include<vector>
using namespace  std;

//tim phan tu nho hon  vi tri dang xet r chen phan tu do vap trc no , truoc khi chenn phair dich tat ca phan tu lon hon dung dang trc so can xet sang phai  


void insertionSort(vector<int> &v ) {
    //xet tu index x= 1
    int n = v.size();
    for (int i = 0 ; i < n ; i++) {
        //khai bao x = phan tu dang xet de ve sau co the chen 
        //lay ra vi tri cua phan tu dung truoc no 
        int x = v[i];
        int pos = i-1;
        //xet vong lap while de dich phai va tim vi tri nho hon x 
        while(pos >= 0 && x < v[pos]) {
            v[pos+1] = v[pos];
            pos--; 
        }
        v[pos+1] = x;
    }
}

int main() {
    vector<int> v = {8,2,3,9,4,7};
    int n = v.size();
    insertionSort(v);
    for (int i = 0 ; i < n ; i++) {
        cout << v[i] << "  ";
    }
}