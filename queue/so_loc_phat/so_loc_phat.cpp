#include<iostream>
#include<queue>
#include<vector>
#include<string>
using namespace std;
vector<int> v;

void solve(int n) {
	queue<string> q;
	q.push("8");
	q.push("6");
	v.push_back(8);
	v.push_back(6);
	while (v.size() < 100) {
		string top = q.front();
		v.push_back(stoi(top + "8"));
		v.push_back(stoi(top + "6"));
		q.pop();
		if (top.size() == n + 1) break;
		q.push(top + "8");
		q.push(top + "6");
	}


}

int main() {
	int n; cin >> n; 
	solve(n);
	for (int i = v.size() -1; i >= 0; i--) {
		cout << v[i] << " ";
	}
}