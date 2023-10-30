#include<iostream>
#include<vector>
#include<string>
#include<sstream>
using namespace std;

//vector nhu la mot mang dong 
//vector<kieu du lieu> ten vector

//push_back()
//size() : kich thuoc cua vector
//truy cap cac phan tu thong qua chi so 
//duyet
//duyet bang iterator
//vector  <int> v
//vector <int> v(n)
//vector <int> v(n,value)

int main() {

	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	cout << v.size() << endl;

	cout << " phau tu dau tien trong vector : " << v[0] << endl;
	cout << " phau tu cuoi cung trong vector : " << v[v.size() -1] << endl;
	
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << endl;
	}

	//su dung iterator
	for (vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
		cout << *it << endl;
	}

	cout << v[2] << endl;
	cout << *(v.begin() + 2) << endl;

	//
	int n; cin >> n;
	vector<int> v(n, 100);
	for (int i = 0; i < n; i++) {
		cout << v[i] << endl;
	}

	//
	int n; cin >> n;
	vector <int> s(n);//khai bao vector nhung da co san phan tu v[n]
	//day vao cuoi 
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		v.push_back(x);
	}

	//
	string s = "mai thanh";
	stringstream ss(s);
	string tmp;
	vector <string> v;
	while (ss >> tmp) {
		v.push_back(tmp);
	}

	return 0;
}