#include<iostream>
#include<queue>
#include<map>
using namespace std;

int main() {
	string s;
	cin >> s;
	int k; cin >> k;
	map<char, int> mp;
	priority_queue<int> q;
	for (int i = 0; i < s.size(); i++) {
		mp[s[i]]++;
	}
	for (auto it : mp) {
		q.push(it.second);
	}

	int x = q.top() - k;
	if (x < 0) {
		while (!q.empty() && x < 0) {
			int tmp = abs(q.top() - k);
			q.pop();
			x = q.top() - tmp;
		}
		q.pop();
		q.push(x);
	}
	else {
		q.pop();
		q.push(x);
	}
	int sum = 0;
	while (!q.empty()) {
		sum += pow(q.top(), 2);
		q.pop();
	}
	cout << sum;
}