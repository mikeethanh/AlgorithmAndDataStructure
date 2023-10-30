#include<iostream>
using namespace std;
int a[10000]; 
int n = 0;

void push() {
	if (n == 10000) return; 
	int x; 
	cin >> x;
	a[n] = x; 
	n++
}

void pop() {
	if (n == 0) return; 
	for (int i; i < n - 1; i++) {
		a[i] = a[i + 1];
	}
}

int size() {
	return n; 
}

int front() {
	return a[0];
}

int main() {

}
