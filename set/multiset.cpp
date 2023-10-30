#include<iostream>
#include<set>
using namespace std;
//mutilset : muon luu cac pha ntu khac nhau 
//tuong tu nhu set
int main() {
	multiset<int> n;
	n.insert(100);
	n.insert(200);
	n.insert(100);
	n.insert(200);
	for (int x : n) {
		cout << x << " ";

		cout << n.count(100) << endl;//in ra so lan 100 xuat hien
	}

}