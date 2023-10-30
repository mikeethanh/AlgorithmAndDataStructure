#include<iostream>
using namespace std;
int n = 0;
int stack[10001];
void push(int x) {
	stack[n] = x; 
	n++;
}

void pop() {
	if (n >= 1) {
		n--;
	 }
}

int top() {
	return stack[n - 1];
}
int size() {
	return n;
}
int main() {

}