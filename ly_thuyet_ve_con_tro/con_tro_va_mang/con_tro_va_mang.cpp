#include<iostream>
#include<stdio.h>
using namespace std;

//mảng a được gọi là hằng con trỏ
//in ra a la in ra địa chỉ của phần tử đầu tiên trong mảng


int main() {
	int a[100];
	cout << a << endl; 
	int n; cin >> n;
	for (int i = 0; i < 5; i++) {
		//in ra dia chi cua cac phan tu trong mang 
		cout << &a[i];
	}
	// thay vi nhap cac phan tu trong mang nhu bth,ta co the nhap nhu sau 
	for (int i = 0; i < n; i++) {
		cin >> *(a + i);
	}
	//gan 1 bien kieu con tro vao mang 
	// con tro se tro vao dia chi dau tien cua mang 
	//thay doi tren con tro la thay doi tren mang 
	int* b = a;
	//CAP PHAT DONG
	int* a = new int[100];
	//GIAI PHONG BO NHO 
	delete[]a;
}