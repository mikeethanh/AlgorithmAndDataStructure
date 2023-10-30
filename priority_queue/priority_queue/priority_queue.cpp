#include<iostream>
#include<queue>
using namespace std;

//priority_queue

// top() : luon la so lon nhat 
//push()
//size()
//empty()
//pop(): 


//neu mmuon cho top la phan tu nho nhat 
//priority_queue<int,vector<int>,greater<int>> pq
int main() {
	priority_queue<int,vector<int>,greater<int>> pq;
	pq.push(1);
	pq.push(2);
	pq.push(4);
	pq.push(5);
	cout << pq.top() << endl;
	pq.pop();

}
