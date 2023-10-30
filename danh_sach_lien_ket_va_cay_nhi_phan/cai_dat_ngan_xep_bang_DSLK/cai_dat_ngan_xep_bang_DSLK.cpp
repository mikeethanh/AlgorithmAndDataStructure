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

void push(node** top, int x) {
	node* newNode = makeNode(x);
	if (*top == NULL) {
		*top = newNode;
		return;
	}
	newNode->next = *top;
	*top = newNode;
}

void pop(node** top) {
	if ((*top) != NULL) {
		node* tmp = *top;
		(*top) = tmp->next;
		delete tmp;
	}
}

int Top(node* top) {
	if (top != NULL)
		return top->data;
}

int size(node* top) {
	int ans = 0;
	while (top != NULL) {
		++ans;
		top = top->next;
	}
	return ans;
}
int main() {

}