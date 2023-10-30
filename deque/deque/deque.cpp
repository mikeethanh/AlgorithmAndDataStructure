#include<iostream>
#include<deque>
using namespace std;

//stack : LIFO
// queue: FIFO
// deque : double end queue 
//size()
//push_front(): day vao dau
//push_back(): day vao cuoi
//pop_front() : xoa dau 
//pop_back() : xoa cuoi 
//empty();
// front(); lay ra phan tu o dau 
//back(); lay a phan tu o cuoi 

int main() {
	deque<int> q;
	q.push_front(2);
	q.push_back(3);
	q.push_back(4);
	q.push_back(5);
	q.push_front(1);
	q.push_front(0);

	q.pop_front();
	q.pop_back();
}