#include<set>
#include<iostream>
//set duy tri cac thu tu tu nho den lon 
//muon luu cac phan tu rieng biet 
//dem cac phan tu khac nhau trong 1 mang 
//tim kiem nhanh
using namespace std;
//O(logn)
//insert 
//size
// O(logn)
//find 
//count
//O(logn)
//erase

 
int main() {
	set<int> s;
	s.insert(100);
	s.insert(200);
	s.insert(300);
	s.insert(100);
	s.insert(200);
	cout << s.size() << endl;

	//
	set<int> n;
	for (int i = 0; i < 10; i++) {
		n.insert(i);
	}
	cout << n.size() << endl;
	if (s.count(5) != 0) {
		cout << "found" << endl;
	}
	else {
		cout << "not found" << endl;
	}

	n.erase(5);

	//duyet 
	for (int x : n) {
		cout << x << " ";
	}
	
	for (auto x : n) {
		cout << x << endl;
	}

	//phan tu dau tien 
	cout << *s.begin() << endl;//s.begin la iterator tro den phan tu dau tien //detruy cao vao phan tu au tien trong set
	//phan tu cuoi cung 
	cout << *s.rbegin() << endl;
 	
}
