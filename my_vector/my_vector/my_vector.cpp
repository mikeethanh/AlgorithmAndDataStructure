#include<iostream>
using namespace std;

class MyVector {
private:
    struct ListNode {
        int val;
        ListNode* next;
        ListNode(int x) : val(x), next(nullptr) {};
    };
    ListNode* head;
    int size_data;

public:
    MyVector() : head(nullptr), size_data(0) {};

    void push_back(int x) {
        ListNode* newNode = new ListNode(x);
        if (head == nullptr) {
            head = newNode;
        }
        else {
            ListNode* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
        size_data++;
    }

    void push_front(int x) {
        ListNode* newNode = new ListNode(x);
        newNode->next = head;
        head = newNode;
        size_data++;
    }

    void erase(int index) {
        if (index <= 0 || index > size_data) {
            return; // Kiểm tra chỉ mục không hợp lệ
        }
        if (index == 1) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
            size_data--;
            return;
        }
        ListNode* temp = head;
        for (int i = 1; i < index - 1; i++) {
            temp = temp->next;
        }
        ListNode* eraseThisNode = temp->next;
        temp->next = eraseThisNode->next;
        delete eraseThisNode;
        size_data--;
    }

    void replace(int index, int val) {
        if (index <= 0 || index > size_data) {
            return; // Kiểm tra chỉ mục không hợp lệ
        }
        ListNode* temp = head;
        for (int i = 1; i < index; i++) {
            temp = temp->next;
        }
        temp->val = val;
    }

    int getElement(int index) {
        if (index <= 0 || index > size_data) {
            return 0; // Hoặc giá trị mặc định khác tùy bạn muốn
        }
        ListNode* temp = head;
        for (int i = 1; i < index; i++) {
            temp = temp->next;
        }
        return temp->val;
    }

    int size() {
        return size_data;
    }

    void pop_back() {
        if (size_data > 0) {
            erase(size_data);
        }
    }

    bool empty() {
        return size_data == 0;
    }

    void printList() {
        ListNode* temp = head;
        while (temp != nullptr) {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    //xay dung iterator:
    class iterator {
    private:
        ListNode* current;
    public:
        iterator(ListNode* node) :current(node){};
        // Toán tử ++ (tiền tố): Di chuyển đến phần tử tiếp theo
        iterator& operator++() {
            if (current) {
                current = current->next;
            }
            return *this;
        }

        // Toán tử ++ (hậu tố): Di chuyển đến phần tử tiếp theo và trả về bản sao của trạng thái trước đó
        iterator operator++(int) {
            iterator temp = *this;
            ++(*this);
            return temp;
        }

        // Toán tử *: Trả về giá trị của phần tử hiện tại
        double operator*() {
            return current->val;
        }

        // Toán tử ==: So sánh hai iterator có bằng nhau không
        bool operator==(const iterator& other) const {
            return current == other.current;
        }

        // Toán tử !=: So sánh hai iterator có khác nhau không
        bool operator!=(const iterator& other) const {
            return !(*this == other);
        }
    };

    // Phương thức trả về iterator đầu tiên của vector
    iterator begin() {
        return iterator(head);
    }

    // Phương thức trả về iterator sau phần tử cuối cùng của vector
    iterator end() {
        return iterator(nullptr);
    }
};

int main() {
    MyVector v;
    v.push_back(2);
    v.push_back(4);
    v.push_front(5);
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);
    cout << "first: ";
    v.printList();
    v.pop_back();
    v.replace(2, 9);
    v.erase(4);
    cout << "second: ";
    v.printList();
    for (MyVector::iterator it = v.begin(); it != v.end(); ++it) {
         cout << *it << " ";
    }
    return 0;
}
