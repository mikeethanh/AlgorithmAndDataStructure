#include<iostream>
#include<map>
#include<string>
using namespace std;
//input : 
//8
//python java csharp sql javascript python python python 

//output : 
// python 4

int main() {
	int n; cin >> n;
	map<string, int> mp;
	for (int i = 0; i < n; i++) {
		string tmp; cin >> tmp;
		mp[tmp]++;
	}
	
	int max_fre = 0; 
	string res;
	for (auto it : mp) {
		if (it.second > max_fre) {
			max_fre = it.second;
			res = it.first;
		}
	}
	cout << res << " " << max_fre;
}