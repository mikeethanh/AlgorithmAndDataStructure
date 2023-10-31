#include<iostream>
using namespace std;

struct TreeNode {
	int val;
	TreeNode* left; 
	TreeNode* right;
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {};
};

void addLeaf(TreeNode*& root, int x) {
	if (root == nullptr) {
		TreeNode* newNode = new TreeNode(x);
		root = newNode;
	}
	else {
		if (x < root->val) {
			addLeaf(root->left, x);
		}
		else if (x > root->val) {
			addLeaf(root->right, x);
		}
	}
}
//6_type_printf
void printfTypeNLR(TreeNode* root) {
	if (root != nullptr) {
		cout << root->val << " "; 
	}
	printfTypeNLR(root->left);
	printfTypeNLR(root->right);
}

void printfTypeNRL(TreeNode* root) {
	if (root != nullptr) {
		cout << root->val << " ";
	}
	printfTypeNRL(root->right);
	printfTypeNRL(root->left);
}

//in_order(descending) 
void printfTypeLNR(TreeNode* root) {
	if(root != nullptr) {
		printfTypeLNR(root->left);
		cout << root->val<<" ";
		printfTypeLNR(root->right);
	}
}

//n_order(acsending)
void printfTypeRNL(TreeNode* root) {
	if (root != nullptr) {
		printfTypeLNR(root->right);
		cout << root->val << " ";
		printfTypeLNR(root->left);
	}
}

//printfTypeChildren
void printPreorder(TreeNode* root) {
	if (root==nullptr) {
		return;
	}
	cout << root->val << " "; 
	printPreorder(root->left); 
	printPreorder(root->right); 
}

int main() {

}