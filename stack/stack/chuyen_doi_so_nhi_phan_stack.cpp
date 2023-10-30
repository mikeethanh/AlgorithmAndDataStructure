#include<stack>
#include<iostream>
using namespace std;

int main() {
	int n; cin >> n; 
	stack<int> st;
	while (n != 0) {
		int q = n % 2; 
		st.push(q);
		n = n / 2; 
	}
	while (!st.empty()) {
		cout << st.top();
		st.pop();
	}
}