#pragma once
#include<iostream>
#include<string>
using namespace std;

class employee
{
private:
	string fullname;
	string address;
	string position;
	string sdt;
	int salary; 
public: 
	void setfullname(string);
	void setaddress(string);
	void setposition(string);
	void setsdt(string);
	void setsalary(int);

	string getfullname();
	string getaddress();
	string getposition();
	string getsdt();
	int getsalary();

	employee();
	employee(string, string, string, string, int);

	int raisesalary(int);

	void showin4();
};

