#include<iostream>
#include<queue>
#include<vector>
#include<string>
using namespace std;
vector<int> v; 

void solve() {
	//dung string de cong so "0" va "1" cho de
	queue<string> q;
	q.push("9");
	v.push_back(9);
	while (v.size() < 100) {
		string top = q.front();
		v.push_back(stoi(top + "0"));
		v.push_back(stoi(top + "9"));
		q.pop();
		q.push(top + "0");
		q.push(top + "9");
	}
}

int main() {
	solve();
	int n; cin >> n;
	for (int i = 0; i < 100; i++) {
		if (v[i] % n == 0) {
			cout << v[i];
			break;
		}
	}
}