#include<iostream>
using namespace std;
struct sinhvien {
	string name; 
	int gpa; 
	sinhvien() {
	
	};
	sinhvien(string ten, int diem) {
		name = ten;
		gpa = diem;
	}
};

struct node {
	sinhvien data;
	struct node* next; 
};

node* makeNode(sinhvien x) {
	node* newNode = new node;
	newNode->data = x;
	newNode->next = NULL;
	return newNode;
}

void push_back(node*& head, sinhvien x) {
	node* NewNode = makeNode(x);
	node* tmp = head;
	if (head == NULL) {
		head = NewNode; return;
	}
	while (tmp->next != NULL) {
		tmp = tmp->next;
	}
	tmp->next = NewNode;
}

void output(node* head) {
	while (head != NULL) {
		cout << head->data.name << " " << head->data.gpa;
		head = head->next;
	}
}

void sel_sort(node*& head) {
	for (node* i = head; i != NULL; i = i->next) {
		node* minNode = i;
		for (node* j = i->next; j != NULL; j = j->next) {
			if (minNode->data.gpa > j->data.gpa) {
				minNode = j;
			}
		}
		swap(i->data, minNode->data);
	}
}

int main() {
	node* head = NULL;
	sinhvien s("Teo", 3.5);
	sinhvien t("Ti", 3.8);
	sinhvien u("Long", 3.5);
	sinhvien v("Hai", 3.8);
	push_back(head, s);
	push_back(head, t);
	push_back(head, u);
	push_back(head, v);
	output(head);
	cout << endl;
	sel_sort(head);
	output(head);
}