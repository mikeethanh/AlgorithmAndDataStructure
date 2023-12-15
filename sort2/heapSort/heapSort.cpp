#include<iostream> 
#include<vector>
using namespace std;
//maxheap : cac node parent phai lon hon cac node children 
//heapify : hoan doi vi tri giua cac node parent va children de tap thanh maxheap
//heapsort :: hoan doi vi tri giua node root va node leaf cuoi cung sau do cut
// tu tuongthuat toan , sasp xep tu phai sang trai , node root luc nao cx la lon nhat 

void heapify(int arr[],int n , int i) {
    int largest = i ;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    if(left < n && arr[left] > arr[largest]) {
        largest = left;
    }
    if(right < n && arr[right] > arr[largest]) {
        largest = right;
    }

    if(largest != i ) {
        swap(arr[i],arr[largest]);
        heapify(arr,n,largest);
    }
}

void heapSort(int arr[],int n) {
    //build max heap 
    // cho heapify tat ca cac node ko phai node la : i = n/2 - 1 
    for (int i = n / 2 - 1 ; i >= 0 ;  i--) {
        heapify(arr,n,i);
    }
    
    //heapSort : hoan doi and cut 

    for (int i = n-1 ; i >= 0 ; i--) {
        swap(arr[0],arr[i]);

        heapify(arr,i,0);
    }
}



int main() {
    int arr[8] = {0,5,6,3,2,4,1,7};
    int n  = 8;
    heapSort(arr,n);
    for (int i = 0 ; i < 8 ; i++) {
        cout << arr[i] << " ";
    }
}