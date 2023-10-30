#include<iostream>
using namespace std;



struct node {
	//chua data 
	int data;
	//chua dia chi
	node* next;
};

//khai bao node:
node* makeNode(int x) {
	node* newNode = new node();
	newNode->data = x;
	newNode->next = NULL;
	return newNode;
}

// bao than node la kieu giu lieu con tro roi , ban than no 
//da la con tro roi , nen khi truyen vao ham nhu ben duoi , day la truyen gia tri 
//khong phai truyen kieu tham chieu , hay con tro
//nen la danh sach lien ket khong bi thay doi

//duyet node : 
void duyet(node* head) {
	while (head != NULL) {
		cout << head->data << " ";
		head = head->next;
	}
	cout << endl;
}
//dem so node
int count(node* head) {
	int dem = 0; 
	while (head != NULL) {
		dem++;
		head = head->next;
	}
	return dem;
}


// muon them 1 node vao dau danh sach thi tuc la phai thay doi dslk => phai truyen kieu con tro
void pushFront(node*& head, int x) {
	node* newNode = makeNode(x);
	//buoc 1 : phan next cua newNode => head
	newNode->next = head; //*head la dia chi cia node head trong danh sach lien ket
	//buoc 2 L cap nhat node head => newNode
	head = newNode;

}


// them 1 node vao cuoi danh sach lien ket : 
void pushback(node*& head, int x) {
	node* temp = head;
	node* newNode = makeNode(x);
	if (head == NULL) {
		head = newNode;
		return;
	}
	while (temp->next != NULL) {
		temp = temp->next;
	}
	temp->next = newNode;
}


// them 1 node vao gua anh sach : 
void insert(node*& head, int k, int x) {
	int n = count(head);
	node* temp = head;
	if (k < 1 || k > n + 1) return; 
	if (k == 1) {
		pushFront(head, x);
	}
	for (int i = 1; i < k - 2; i++) {
		temp = temp->next;
	}

	//temp = k -1;
	node* newNode = makeNode(x);
	newNode->next = temp->next;
	temp->next = newNode;
}

//xoa 1 node khoi danh sach 
void popFront(node*& head) {
	if (head == NULL) return;
	node* temp = head;
	head = head->next;
	delete temp;
}

//xoa 1 node o cuoi danh sach 
void popBack(node*& head) {
	if (head == NULL) return; 
	node* temp = head; 
	if (temp->next == NULL) {
		head = NULL;
	}
	while (temp->next->next != NULL) {
		temp = temp->next;
	}
	node* last = temp->next; // truy cap vao phan tu cuoi cung
	temp->next = NULL;
	delete last;
}

//xoa node o cuoi danh sach 
void erase(node* head, int k) {
	int n = count(head);
	if (head == NULL) return; 
	if (k < 1 || k > n) return; 
	if (k == 1) {
		popFront(head);
	}
	else {
		node* temp = head; 
		for (int i = 1; i < k - 2; i++) {
			temp = temp->next; 
		}
		//temp = k - 1 ; 
		node* kNeedErase = temp->next;//node thu k;
		//cho k -1 ket not voi k +1;
		temp->next = kNeedErase->next; 
		delete kNeedErase;
	}
}

int main() {
	/*node* head = NULL;
	for (int i = 1; i <= 5 ; i++) {
		pushFront(head, i);
	}
	duyet(head);
	cout << count(head);

	for (int i = 1; i <= 10; i++) {
		pushback(head, i);
	}*/
	node* head = NULL;
	while (1) {
		cout << "-----------------------------\n"; 
		cout << "1.Them vao dau danh sach \n";
		cout << "2.Them vao cuoi danh sach \n";
		cout << "3.them vao giua sanh sach \n";
		cout << "4.Xoa node khoi dau danh sach \n";
		cout << "5.Xoa node khoi cuoi danh sach \n";
		cout << "6,Xoa node o giua danh sach \n";
		cout << "7.Duyet \n";
		cout << "0.thoat \n";
		cout << "--------------------------------\n";
		cout << "nhap lua chon : ";
		int lc; 
		cin >> lc; 
		if (lc == 1) {
			int x; cin >> x; 
			pushFront(head, x);
		}
		else if (lc == 2) {
			int x; cin >> x;
			pushback(head, x);
		}
		else if (lc == 3) {
			int x, k;
			cin >> x >> k;
			insert(head, k, x);
		}
		else if (lc == 4) {
			popFront(head);
		}
		else if (lc == 5) {
			popBack(head);
		}
  		else if (lc == 6) {
			erase(head, 2);
		}
		else if (lc == 7) {
			duyet(head);
		}
		else if (lc == 0) {
			break;
		}
	}

}