  #include<iostream>
#include<set>
using namespace std;

int main() {
	//cho mang co n phan tu va so nguyen k,doi voi moi day con lien tiep co chieu dai k 
	//in ra duoc phan tu lon nhat trong day con do 


	// 10 3 
	// 1 2 3 1 4 5 1 8 9 10
	int n; cin >> n;
	int k; cin >> k;
	//xu ly day con 
	int a[100];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	multiset<int>ms;
	for (int i = 0; i < k; i++) {
		ms.insert(a[i]);
	}
	cout << *ms.rbegin() << " ";
	for (int i = k; i < n; i++) {
		ms.erase(ms.find(a[i - k]));
		ms.insert(a[i]);
		cout << *ms.rbegin() << " ";
	}
}