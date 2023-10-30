#include<iostream>
#include <string>
#include<iomanip>
#include<algorithm>
using namespace std;

//class
//thuoc tinh : attribute
//phuong thuc : method . behavior 
//object : doi tuong 

//encapsulation: dong goi 
//access modifier : 
//public 
//private 

//ham tao : constructor 
//destructor " ham huy 

// SV001 => Sv002 => sv003 

class sinhvien {
private:
	string id, ten, ns;
	double gpa;
	static int dem;//khong the khoi tao luon 
public:
	void tangdem();
	int getdem();
	sinhvien();
	sinhvien(string, string, string, double);
	~sinhvien();//ham huy 
	void nhap();
	void in();
	double getgpa();
	void setgpa(double);
};

int sinhvien::dem = 0; 

void sinhvien::tangdem() {
	dem++;
}

int sinhvien :: getdem() {
	return dem;
}


sinhvien::sinhvien() { //khoi tao cac gia tri mac dinh 
	cout << "ham khoitaoduocgoi";
	id = ten = ns = "";
	gpa = 0;
}

sinhvien::sinhvien(string id, string ten, string ns, double gpa) { //lay tham so truyen vao gan cho cac thuoc tinh 
	this->id = id; 
	this->ten = ten; 
	this->ns = ns; 
	this->gpa = gpa; 
}

sinhvien :: ~sinhvien() {
	cout << "doi tuong duoc huy ";
}

void sinhvien::nhap() {
	cout << "Nhap id : "; cin >> this->id;
	cin.ignore();
	cout << " Nhap ten :  "; 
	getline(cin,ten);
	cout << "Nhap ns : "; cin >> this->ns;
	cout << "Nhap diem : "; cin >> this->gpa;
}

void sinhvien::in() {
	cout << id << " " << ten << " " << ns << " " << fixed << setprecision(2) << gpa << endl;

}

double sinhvien::getgpa() {
	return this->gpa;
}

void sinhvien::setgpa(double gpa) {
	this ->gpa = gpa; 
}

//thuat toan bumble sort 
bool cmp(sinhvien a, sinhvien b) {
	return a.getgpa() > b.getgpa();
}
int main() {
	//sinhvien x; 
	//x.nhap();
	//x.in();
	//sinhvien x1("12234", "Nguyen van a ", " 23/12/2004", 3, 15);
	sinhvien a[100];
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		a[i].nhap();
	}
	for (int i = 0; i < n; i++) {
		a[i].in();
	}
	//sinhvien x;
	//x.setgpa(3.14);
	sort(a, a + n, cmp);
}