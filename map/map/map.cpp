#include<iostream>
#include<map>
using namespace std;
//O(logn)
// phu hop khi : 
//tan suat xuat hien 
//(key ,value)
//key o the trrung nhau , value co the trung nhau 
 
//find (tra ve cap iterator dc tim thay)
// 
//cout
//erase
int main() {
	//map<datatype 1 , datatype 2> mp;
	map<int, int > mp;
	mp[100] = 200;//(100.200)
	mp[200] = 300;//(200.300)
	mp.insert({ 300,400 });
	mp.insert({ 400,500 });
	cout << mp.size() << endl;
	mp[100] = 300;//(100,300)
	for (pair<int, int> x : mp) {
		cout << x.first << " " << x.second << endl;
	}
	//or 
	for (auto it : mp) {
		cout << it.first << " " << it.second << endl;
	}

	//
	if (mp.count(100) != 0) {
		cout << " found"; //co 1 key nao do co gia tri la 100
	}
	else {
		cout << " not found ";
	}
	//e
	mp.erase(100);//xoa cap [100] = 200.


}
