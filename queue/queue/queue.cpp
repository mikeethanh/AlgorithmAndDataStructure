#include<iostream>
#include<queue>
using namespace std;
//FIFO
//O(1)
//push
//pop
////empty
//size
//frontf

int main() {
	queue<int> q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);

	cout << q.front() << endl;
	cout << q.size() << endl;

	q.pop();

}