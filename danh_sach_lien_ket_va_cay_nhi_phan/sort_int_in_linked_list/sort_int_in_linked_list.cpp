#include<iostream>
using namespace std;

struct node {
	int data; 
	struct node* next;
};

node* makeNode(int x) {
	node* newNode = new node();
	newNode->data = x; 
	newNode->next = NULL;
	return newNode;
}

void pushback(node*& head, int x) {
	node* newNode = makeNode(x);
	if (head == NULL) {
		head = newNode;
		return;
	}
	node* tmp = head;
	while (tmp->next != NULL) {
		tmp = tmp->next;
	}
	tmp->next = newNode;
}

void output(node* head) {
	while (head != NULL) {
		cout << head->data << " ";
		head = head->next;
	}
}

void sel_sort(node*& head) {
	for (node* i = head; i != NULL; i = i->next) {
		node* minNode = i; 
		for (node* j = i->next; j != NULL; j = j -> next) {
			if (minNode->data > j->data) {
				minNode = j;
			}
		}
		swap(i->data, minNode->data);
	}
}

int main() {
	node* head = NULL;
	int a[] = { 5 ,3 , 1 ,2 ,6 ,9 ,0 ,7 ,8,4};
	for (int i = 0; i < 10; i++) {
		pushback(head, a[i]);
	}
	sel_sort(head);
	output(head);
	
}