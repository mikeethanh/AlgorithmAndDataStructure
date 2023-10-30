#include<iostream>

using namespace std;

int main() {
	int n; cin >> n;
	int a = 10; //O(1)
	int a = a + 10; //O(1)

	//O(n*1)
	for (int i = 1; i <= n; i++) {
		cout << i << endl;//O(1)
	}

	//O(5*10)
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 10; j++) {
			cout << " hello" << endl;
		}
	}
}