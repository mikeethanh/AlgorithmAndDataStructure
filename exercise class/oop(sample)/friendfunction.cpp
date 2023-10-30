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
//friend function : khong thuoc memeber cua class sinhvien 
//nhung van co the truy cap vao cac thuoc tinh 

//nguyen VAN A => Nguyen Van A(ham chuan hoa ten)

class sinhvien {
private:
	string id, ten, ns;
	double gpa;
	static int dem;//khong the khoi tao luon 
public:
	sinhvien();
	sinhvien(string, string, string, double);
	void nhap();
	void in();
	friend void inthongtin(sinhvien);
	friend void chuanhoa(sinhvien&);//truyen tham chieu
};

void chuanhoa(sinhvien &a) {
	string res = "";
	stringstream ss(a.ten);
	string token;
	while (ss >> token) {
		res += toupper(token[0]);
		for(int i = 0; i < token.length(); i++) {
			res += tolower(token[i]);
		}
		res += " ";
	}
	res.erase(res.length() - 1);
	a.ten = res;
}
int sinhvien::dem = 0;


void inthongtin(sinhvien a) {
	cout << a.id << " " << a.ten << endl;
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


void sinhvien::nhap() {
	++dem;//dem = 1 ; 
	this->id = "SV" + string(3 - to_string(dem).length(), '0') + to_string(dem);
	//tao 1 constructor string co do dai la 3 - tostring cua dem.length(),chen them '0' chen them SV

	cout << " Nhap ten :  ";
	getline(cin, ten);
	cout << "Nhap ns : "; cin >> this->ns;
	cout << "Nhap diem : "; cin >> this->gpa;
	cin.ignore();
}

void sinhvien::in() {
	cout << id << " " << ten << " " << ns << " " << fixed << setprecision(2) << gpa << endl;

}

int main() {
	sinhvien x;//goi ham khoi tao mac dinh 
	x.nhap();
	inthongtin(x);
	//x.in();

}