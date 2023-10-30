#include<iostream>
using namespace std;

//pair:lup cac cap 
// pair <datatype 1,datatype 2>
//make_paira(a,b)
//v.first 
//v.second

//tuple
int main() {
	pair <int, int> v = { 100,200 };
	cout << v.first << endl;
	cout << v.second << endl;

	tuple<int, int, int> t = make_tuple(1,2,3);
	cout << get<0>(t) << endl;
	return 0;
}