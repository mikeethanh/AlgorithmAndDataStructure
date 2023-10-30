#include<iostream>
#include"Person.h"
#include<string>
#include<cstring>
using namespace std;

void getpersonin4(Person* ps, size_t n) {
	int age; 
	int phone;
	string first, last, mid, addr, gender;
	for(int i = 0; i < n; i++) {
		cout << "firstname : "; 
		cin >> first;
		cout << "lastname : "; 
		cin >> last;
		cout << "Midname : ";
		cin.ignore();
		getline(cin,mid);
		cout << "address : ";
		cin >> addr;
		cout << "Gender : "; 
		cin >> gender;
		cout << "Phone: ";
		cin >> phone;


		Person p(0, first, mid, last, age, gender, addr, phone);
		ps[i] = p;//them ps vao mang p
	}
}

void showin(Person* ps, size_t n) {
	for (int i = 0; i < n; i++) {
		ps[i].showin4();
	}

}
int main() {
	Person* people; 
	size_t n;
	people = new Person[n];
	cout << "enter the number of people : ";
	cin >> n;
	

	getpersonin4(people, n);

	showin(people, n);
	return 0;
}