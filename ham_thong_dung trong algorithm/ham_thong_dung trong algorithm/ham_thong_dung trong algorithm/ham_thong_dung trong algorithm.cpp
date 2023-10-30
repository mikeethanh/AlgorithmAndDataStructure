#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric>
using namespace std;
/*
* min 
* nax 
* min_element
* max_element
* accumulate
* swap
* sort
* stable_sort
* find
* binary_search
* lower_bound
* upper_bound
* fill
* merge
* reverse
* set_union
* set_intersection
* set_difference
* set_symmetric_difference
*/
int main() {
	//min,max
	cout << min(10,20) << endl;
	cout << min({ 1,2,1,4 }) << endl;
	//min,max_element: torng mang or vector
	int a[5] = { 1,2,3,4,5 };
	cout << *min_element(a, a + 5) << endl;

	vector<int> v = { 1,3,1,34,3 };
	cout << *min_element(v.begin(), v.end());
	//accumulate:tong cua cac phan tu 
	int a[5] = { 1,2,3,4,5 };
	int sum = accumulate(a, a + 5, 0);
	cout << sum << endl;
	//swap: hoan doi vi tri
	int x = 100; int y = 200;
	swap(x, y);
	cout << x << " " << y << endl;
	//find
	int a[5] = { 1 ,2 ,3 ,4 ,5 };
	auto it = find(a, a + 5, 3);
	if (it == a + 5) {
		cout << "not found";
	}
	else {
		cout << "found";
	}
	vector<int> v = { 1,3,1,34,3 };
	auto it1 = find(v.begin(), v.end(), 5);
	if (it1 == v.end()) {
		cout << "not found";
	}
	else {
		cout << "found";
	}
	//lower_bound: >= dau tien 
	//upper_bound > dau tien 
	
	//memset: gan cac phan tu trong mang 
	int a[5] = { 1 ,2 ,3 ,4 ,5 };
	memset(a, 0, sizeof(a));
	//fill: gan cac gia tri trong mang , vector , ...
	vector<int> v(10);
	fill(v.begin(), v.end(), 1000);
	for (int x : a) cout << x << " ";

	//merge: chi ap dung voi 2 vector hoac mang tang dan 
	vector<int> v1 = { 1 ,2 ,3 ,4 ,5 };
	vector<int> v2 = { 3 ,4 ,5 ,6,7 };
	vector<int> res(10);
	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), res.begin(), res.end());
	for (int x : res);
	cout << x << " ";

	//reverse : lat nguoc cac phan tu trogn string ,mang , vector
	int a[5] = { 1 ,2 ,3 ,4 ,5 };
	reverse(a, a + 5);
	for (int i = 0; i < 5; i++) {
		cout << a[i];
	}

	string s = "thanh";
	reverse(s.begin(), s.end());
	cout << s << endl;

	//set_union: deu phai sort
	int a[] = { 1 ,2 ,3 ,4 ,5 };
	int b[] = { 1 ,4 ,5, 6 ,7,8,9 };
	vector<int> u(12);
	auto it2 =  set_union(a, a + 5, b, b + 7, u.begin());
	u.resize(it2 - u.begin());
	for (int x : u) cout << x << " ";

	//set_intersection
}