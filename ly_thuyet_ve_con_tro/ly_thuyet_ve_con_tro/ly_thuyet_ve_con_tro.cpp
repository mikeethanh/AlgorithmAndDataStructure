#include<iostream>
using namespace std;
//pointer
//một biến thông thường chiếm 4 byte trong bộ nhơ RAM 
// mõi biến chứa 1 giá trị nào đó , và mỗi biết có một địa chỉ riêng ,
// vd nhà và địa chỉ của cái nhà đó 
//con trỏ cũng là một biến nhưng nó dùng để lưu địa chỉ của biến mà nó đang trỏ tới 

// con tro null la con tro chua luu dia chi cua mot bien khac 

//int *ptr;

void double1(int& n) {
	n *= 2;
}

//luc truyen phai truyen dia chi cua bien n
void double2(int* n) {
	(*n) *=2;
}
int main() {
	int a = 100;
	int* ptr;
	if(ptr == nullptr) {
		cout << "con tro null ! : ";
	}
	//in ra dia chi cua bien a : 
	cout << (&a) << endl;
	//gan dia chi cua a cho con tro ptr
	ptr = &a;
	// gia tri cua bien ma con tro dang tro toi 
	//truy cap vao gia tri cua bien ma con tro dang tro toi 
	cout << (*ptr) << endl;
	// co nhieu con tro cung tro vao 1 bien 
	int* ptr2 = &a;
	double2(&a);
}