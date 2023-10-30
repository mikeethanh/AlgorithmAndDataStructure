#include<iostream>
#include<queue>
using namespace std;
vector<string> v; 

void solve(int n ) {
	queue<string> q;
	q.push("1");
	v.push_back("1");
	while (v.size() < n) {
		string top = q.front();
		v.push_back(top + "0");
		v.push_back(top + "1");
		q.pop();
		q.push(top + "0");
		q.push(top + "1");
	}
}

int main() {
	int n; cin >> n; 
	solve(n);
	for (int i = 0; i < n; i++) {
		cout << v[i] << " ";
	}
}