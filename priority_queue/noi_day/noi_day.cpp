#include<iostream>
#include<queue>
using namespace std;

int main() {
	priority_queue<int, vector<int>, greater<int>> pq;
	int n;
	int a[100];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	};

	for (int i = 0; i < n; i++) {
		pq.push(a[i]);
	}
	int sum = 0;
	while (pq.size() > 1) {
		int sum1 = 0;
		for (int i = 0; i < 2; i++) {
			sum1 += pq.top();
			pq.pop();
		}
		pq.push(sum1);
		sum += sum1;
	} 
	cout << sum;
}