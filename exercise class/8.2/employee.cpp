#include "employee.h"
#include<string>
#include<iostream>

employee::employee(string fullname, string address, string position, string sdt, int salary) {
	setfullname(fullname);
	setaddress(address);
	setposition(position);
	setsdt(sdt);
	setsalary(salary);
} 
void employee::setfullname(string fullname) {
	this->fullname = fullname;
};
void employee::setaddress(string address) {
	this->address = address;
};
void employee::setposition(string position) {
	this->position = position;
};
void employee::setsdt(string sdt) {
	this->sdt = sdt;
};
void employee::setsalary(int salary) {
	this->salary = salary;
};

string employee::getfullname() {
	return this->fullname;
};
string employee::getaddress() {
	return this->address;
};
string employee::getposition() {
	return this->position;
};
string employee::getsdt() {
	return this->sdt;
};
int employee::getsalary() {
	return this->salary;
};

employee :: employee() {
	fullname = "";
	address = "";
	position = "";
	sdt = "";
	salary = 0;
}


int employee::raisesalary(int salary) {
	salary *= 2;
	return salary;
}

void employee::showin4() {
	cout << "====================================" << endl;
	cout << "thong tin nhan vien : " << endl;
	cout << "ten : " <<getfullname() << endl;
	cout << "dia chi : " << getaddress() << endl;
	cout << " chuc vu : " << getposition() << endl;;
	cout << " sdt : " << getsdt() << endl;;
	cout << "luong : " << getsalary() << endl;
}