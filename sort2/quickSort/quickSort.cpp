#include<iostream>
using namespace std;
//quicksort su dung phan hoach lomuto , chon pivot o vi tri cuoi , tach ra thanh 2 dday , sau do tu 2 day tach ra tiep 
//tach theo thu tu  day 1 < pivot < dady 2 


int LomutoPatrition(int arr[],int l , int r ) {
    int pivot = arr[r]; // cho pivot la phan tu o vi tri ngoai cung ben phai
    int i =  l -1   ; 
    for (int j = l  ; j < r ;j++) {
        if(arr[j] < pivot ) {
            i++;
            swap(arr[j],arr[i]);
        }
    }
    i++ ; 
    swap(arr[r] , arr[i]);
    return i ; 
}

void quickSort(int arr[] , int l , int r ) {
    if(l >= r) return ; 
    int p = LomutoPatrition(arr,l,r);
    quickSort(arr,l,p-1);
    quickSort(arr,p+1,r);
}

// quick sort su dung phan hoach hoare 
// tu tuong phan hoach hoare : tim cac cap nghich the , sap xep chungg 

int hoarePatrition(int arr[],int l , int r) {
    //cho pivot la phan tu ngoai cung ben trai
    int pivot = arr[l];
    int i = l - 1 ; 
    int j = r + 1;
    while(1) {
        do{
            i++;
        }while(arr[i] < pivot);

        do{
            j--;
        }while(arr[j] > pivot);

        if(i < j ) {
            swap(arr[i],arr[j]);
        }else { 
            return j ; 
        }
    }
}

void quickSort2(int arr[],int l , int r) {
    if(l >= r) return ; 
    int p = hoarePatrition(arr,l,r);
    quickSort2(arr,l,p);
    quickSort2(arr,p+1,r);
}
int main() {
    int arr[8] = {0,5,6,3,2,4,1,7};
    int l = 0;
    int r = 7;
    quickSort(arr,l,r);

    for (int i = 0 ; i < 8 ; i++) {
        cout << arr[i] << " ";
    }

    return 0 ; 
}