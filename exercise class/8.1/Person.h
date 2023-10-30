#pragma once
class Person
{private: 
	int seri;
	static int ID;
	string surname;
	string middlename;
	string name;
	int age;
	string sex;
	string address;
	int sdt;
public :
	//ham tao mac dinh 
	Person();
	//ham tao day du tham so 
	Person(int, string, string, string, int, string, string, int);
	//ham set/get
	void setseri(int );
	void setsurname(string );
	void setmiddlename(string);
	void setname(string);
	void setage(int);
	void setsex(string);
	void setaddress(string);
	void setsdt(int);

	int getseri();
	string getsurname();
	string getmiddlename();
	string getname();
	int getage();
	string getsex();
	string getaddress();
	int getsdt();

	//viet ham show in4
	void showin4();
};

