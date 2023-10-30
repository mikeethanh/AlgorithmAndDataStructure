#include"employee.h"
#include<iostream>
#include<string>
using namespace std;

void input(employee* e, size_t n) {
	string fullname, address, position, sdt;
	int salary;
	for (int i = 0; i < n; i++) {
		cin.ignore();
		cout << "Nhap ten : "; getline(cin, fullname);
		cout << "Nhap dia chi : "; getline(cin, address);
		cout << "Nhap chuc vu : "; getline(cin, position);
		cout << "Nhap sdt : "; cin >> sdt;
		cout << "NHap tien luong"; cin >> salary;

		employee p(fullname, address, position, sdt, salary);
		e[i] = p;
	}
}

 
void output(employee* e, size_t n) {
	for (int i = 0; i < n; i++) {
		e[i].showin4();
	}
}
int main() {
	size_t n; 
	employee* p;
	cout << "Nhap n : "; cin >> n; 
	p = new employee[n];
	input(p, n);
	output(p, n);
}
