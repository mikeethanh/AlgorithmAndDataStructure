#include<iostream>
using namespace std;

class Sinhvien {
public:
	string Masv;
	string hoten;
	string ntm;
	string gioitinh;
	string quequan;
	//Constructor : create 1 sinhvien
	Sinhvien(string Masv, string hoten, string ntm, string gioitinh, string quequan) {
		this->Masv = Masv; 
		this->hoten = hoten;
		this->ntm = ntm;
		this->gioitinh = gioitinh;
		this->quequan = quequan;
	};
};

class ListSV {
private:
	struct ListNode {
		Sinhvien data;
		ListNode* next;
		ListNode(Sinhvien& x) : data(x), next(nullptr) {};
	};
	ListNode* head; 
public:
	//constructor:
	ListSV() :head(nullptr) {};
	//push_back:
	void push_back(Sinhvien& x) {
		ListNode* newNode = new ListNode(x);
		if (head == nullptr) {
			head = newNode;
			return;
		}
		ListNode* temp = head; 
		while (temp->next != nullptr) {
			temp = temp->next;
		}
		temp->next = newNode;
	}
	//push_front:
	void push_front(Sinhvien& x) {
		ListNode* newNode = new ListNode(x);
		if (head == nullptr) {
			head = newNode;
			return;
		}
		newNode->next = head;
		head = newNode;
	}
	// erase by index 
	void erasse(int index) {
		ListNode* temp = head; 
		if (index == 1) {
			ListNode* temp = head; 
			head = head-> next;
			delete temp;
		 }
		for (int i = 1; i < index; i++) {
			temp = temp->next;
		}
		ListNode* eraseThisNode = temp->next;
		temp->next = eraseThisNode->next;
		delete eraseThisNode;
	}
	//replace by index
	void replace(int index, Sinhvien& x) {
		ListNode* temp = head;
		for (int i = 0; i <= index; i++) {
			temp = temp -> next;
		}
		temp->data = x;
	}
	//printf
	void printfList() {
		ListNode* temp = head;
		while (temp != nullptr) {
			cout << temp->data.Masv << " " << temp->data.hoten << " " << temp->data.ntm << " " << temp->data.gioitinh << temp->data.gioitinh << endl;
			temp = temp->next;
		}
	}
};



int main() {
	Sinhvien sv1("A1", "nguyen mai thanh", "130404", "nam", "hanoi");
	Sinhvien sv2("A2", "nguyen mai kien", "140404", "nu", "hatinh");
	Sinhvien sv3("A3", "nguyen mai C", "136404", "nam", "nghean");
	Sinhvien sv4("A4", "nguyen mai D", "120404", "nam", "hanoi");

	ListSV sv;
	sv.push_back(sv1);
	sv.push_front(sv2);
	sv.push_back(sv3);
	sv.push_back(sv4);
	sv.erasse(3);
	sv.printfList();
}
