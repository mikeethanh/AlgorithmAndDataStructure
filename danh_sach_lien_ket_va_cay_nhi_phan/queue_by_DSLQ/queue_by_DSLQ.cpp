#include<iostream>
using namespace std;
int n = 0;
struct node {
	int data;
	struct node *next;
};

node* makenote (int x){
	node *Newnode = new node();
	Newnode->data = x;
	Newnode->next = NULL;
	return Newnode;
}
//khong thay doi vi khong chuyen tham chieu
int size_linked(node *head) {
	int count = 0;
	while (head != NULL) {
		count++;
		head = head->next;
	}
	return count;
}
//hang doi phai day vao cuoi danh sanh
void push(node *&head, int x) {
	node* Newnode = makenote(x);
	node* tmp = head;
	while (tmp->next != NULL) {
		tmp = tmp->next;
	}
	tmp->next = Newnode;
}
//head van o dau

//phai co bien tmp boi vi phai xoa no di 
void pop(node *&head) {
	node* tmp = head;
	head = head->next;
	delete tmp;
}

int front(node* head) {
	return head->data;
}
int main() {
	node* head = NULL;
}
