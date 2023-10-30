#include "Person.h"
#include<iostream>
#include<cstring>
#include<string>
using namespace std;

Person::Person() {
	this->seri = 0;
	this->surname = "";
	this->middlename= "";
	this->name = "";
	this->age = 0;
	this->sex = "";
	this->address = "";
	this->sdt = 0;
}

Person::Person(int seri  , string surname, string middlename, string name,//gan cac gia tri trong thassm so la thuoc tinh cua lop 
	int age, string sex, string address, int sdt) {
	setseri(seri);
	setsurname(surname);
	setmiddlename(middlename);
	setname(name);
	setage(age);
	setsex(sex);
	setaddress(address);
	setsdt(sdt);
}

    void Person :: setseri(int seri) {
		this->seri = seri;

		//truy cap vao thuoc tinh seri cua class , gan tham so seri cho thuoc tin hseri cua class
	}
	void Person:: setsurname(string surname) {
		this->surname = surname;
	}
	void Person:: setmiddlename(string middlename) {
		this->middlename = middlename;
	}
	void Person:: setname(string name) {
		this->name = name;
	}
	void Person:: setage(int age) {
		this->age = age;
	}
	void Person:: setsex(string sex) {
	    this->sex = sex;
	}
	void Person:: setaddress(string address) {
		this->address= address ;
	}
	void Person:: setsdt(int sdt) {
		this->sdt = sdt;
	}

	int Person:: getseri() {
		return this->seri;
	}
	string Person:: getsurname() {
		return this->surname;
	}
	string Person:: getmiddlename() {
		return this->middlename;
	}
	string Person:: getname() {
		return this->name;
	}
	int Person:: getage() {
		return this->age;
	}
	string Person:: getsex() {
		return this->sex;
	}
	string Person:: getaddress() {
		return this->address;
	}
	int Person::getsdt() {
		return this->sdt;
	}

	void Person:: showin4() {
		cout << "===============================" << endl;
		cout << "stt : " << getseri() << endl;
		cout << "ten ho : " << getsurname << endl;
		cout << " ten dem : " << middlename << endl;
		cout << " ten :" << name << endl;
		cout << "tuoi : " << age << endl;
		cout << "gioi tinh : " << sex << endl;
		cout << "dia chi : " << address << endl;
		cout << "so dien thoai : " << sdt << endl;
		cout << "===============================" << endl;
	}

