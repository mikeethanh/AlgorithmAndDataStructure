#include<stack>
#include<iostream>
using namespace std;
//LIFO:last in first out 

//push: day 1 phan tu cao trong stack
//pop: lay 1 phan tu khoi ngan xep
//top: lay ra phan tu o dinh ngan xep
// size : tra ve so luong phan tu o dinh ngan xep 
// empty: check xem ngan xep co  rong hay khong 
//O(1)

//Next greater element : phan tu lon hon tiep theo
int main() {
	stack<int> st;
	st.push(1);
	st.push(2);
	st.push(3);
	// in ra phan tu o dinh stack
	cout << st.top() << endl;
	// xoa phan tu tren dinh stack
	st.pop();
	cout << st.top() << endl;

	cout << st.size() << endl;

	// 
	if (st.empty()) {
		cout << "empty" << endl;
	}
}