#include<iostream>
#include<string>
#include<sstream>
#include<vector>
using namespace std;

int main() {
	int n; cin >> n; 
	cin.ignore();
	for (int i = 1; i <= n; i++) {
		string s; 
		getline(cin, s);
		//chuyen ve viet thuong 
		for (int j = 0; j < s.length(); j++) {
			s[j] = tolower(s[j]);
		}
		//ham tolower : chuyen tat ca ve dang thuong
		//tao mang kieu string 
		//nhet  tung tu vao string
		//in ra tu can in
		vector <string> v;
		stringstream ss(s);
		string tmp;
		while (ss >> tmp) {
			v.push_back(tmp);
		}
	     cout << v[v.size() - 1];
		 for (int j = 0; j < (v.size() - 1); j++) {
			 cout << v[j][0]; 
		 }
	}
	return 0;
}

