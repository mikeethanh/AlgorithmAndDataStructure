#include <iostream>
using namespace std;

// Định nghĩa cấu trúc của một nút trong cây
struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int value) {
        data = value;
        left = right = nullptr;
    }
};

// Hàm chèn một giá trị vào cây nhị phân
Node* insert(Node* root, int value) {
    if (root == nullptr) {
        return new Node(value);
    }

    if (value < root->data) {
        root->left = insert(root->left, value);
    } else if (value > root->data) {
        root->right = insert(root->right, value);
    }
    

    return root;
}

// Duyệt cây theo thứ tự in-order và in ra màn hình
void inOrderTraversal(Node* root) {
    if (root != nullptr) {
        inOrderTraversal(root->left);
        cout << root->data << " ";
        inOrderTraversal(root->right);
    }
}

int main() {
    int a[] = {10, 3, 8, 1, 18, 9, 5, 12, 2, 6, 7, 15};
    int n = sizeof(a) / sizeof(a[0]);

    Node* root = nullptr;
    for (int i = 0; i < n; ++i) {
        root = insert(root, a[i]);
    }

    cout << "Cay tim kiem nhi phan da tao tu day so: ";
    inOrderTraversal(root);

    return 0;
}
