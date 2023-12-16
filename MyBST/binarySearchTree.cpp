#include<iostream> 
using namespace std ; 
//xay dung 1 node trong binary search tree 
//node trong bst bao gom : 
// parent , key , value , left , right 


//template : khi chua biet dung kieu du lieu gi 
template<class Key , class Data >
class BSTNode {
    private:
    Key key;
    Data data;
    BSTNode* parent ; 
    BSTNode* left ; 
    BSTNode* right ; 

    public: 
    // constructor 0 tham so : 
    BSTNode() : parent(nullptr) , left(nullptr) , right(nullptr) {};

    // setter : 
    void setKey(Key key) {
        return this->key = key ; 
    }

    void setData(Data data) {
        return this->data = data;
    }

    void setParent(BsNode<Key,Data>* Node) {
        return this->parent = Node;
    }

    void setLeft(BSTNode<Key,Data>* Node) {
        return this-> left = Node;
    }

    void setRight(BSTNode<Key,Data>* Node) {
        return this-> right = Node;
    }

    //getter : 
    Key getKey() {
        return this->key ; 
    }

    Data getData() {
        return this->data;
    }

    BSTNode* getParent() {
        return this->parent;
    }

    BSTNode* getLeft() {
        reutrn this->left;
    }

    BSTNode* getRight() {
        reutrn this->right;
    }

    int hasLeft() {
        return left != nullptr;
    }

    int hasRight() {
        return right != nullptr;
    }

};

//xay dung binary search tree voi cac node la BSTNode

template<class Key , class Data>
class BinarySearchTree {
    private:
    BSTNode<Key,Data>* root;
    //size:
    int size;
    //ham remove truc tiep cac node de trong private de xoa cac node mot cach cu the va linh hoat hon 
    void remove(BSTNode<Key,Data> *&p) ;
    // tra ve min key trong tree
    BSTNode<Key,Data> *minKey() ;
    //tra ve max key trong tree
    BSTNode<Key,Data> *maxKey();

    public: 
    //Constructor:
    BinarySearchTree();

    BSTNode<Key,Data>* getRoot();
    int getSize();
    int isEmpty();
    //check xem 1 node co phai la node trong khong 
    int isInternal(BSTNode<Key,Data> *p);
    //check xem 1 node co phai node la khong (leaf)
    int isExternal(BSTNode<Key,Data> *p);
    //search dua tren key 
    // truyen node root vao ham de co the so sanh key > ket root hay < key root de sang keft or right 
    BSTNode<Key,Data>* search(Key key);
    //truyen key va data :  
    void insert(Key key , Data data);
    //check xem 1 node co la root hay khong 
    int isRoot(BSTNode<Key,Data> *p);
    //xoa 1 node dua tren key
    void remove(Key key);
    //tra ve chieu cao cua cay 
    int getHeight();

    // cac kieu duyet cay  : 
    //truyen vao ham inOrder mot ham khac (con tro ham) nhan mot doi so la con tro tro toi mot node trong tree
    void inOrderTraversal(BSTNode<Key,Data> *p ,void (*visit) (BSTNode<Key,Data> *));
    //duyet tree theo thu tu tien to (preOrder)
    void preOrderTraversal(BSTNode<Key,Data> *p,void (*visit) (BSTNode<Key,Data> *));
    //duyet tree theo thu tu hau to (postOrder)
    void postOrderTraversal(BSTNode<Key,DaTa> *p , void (*visit) (BSTNode<Key,Data> *));
};

// xay dung cac phuong thuc 

//constructor : 
template<class Key,class Data> 
BinarySearchTree<Key,Data>::BinarySearchTree() {
    //tao mot bst voi root = nullptr va co size = 0
    root = nullptr;
    size = 0;
}

// ham de lay ra node root cua cay 
template<class Key,class Data> 
BSTNode<Key,Data>* BinarySearchTree<Key,Data> ::getRoot() {
    if (root == nullptr) {
        print("is Empty!");
        return ;
    }else {
        return root;
    }
};

template<class Key,class Data> 
int BinarySearchTree<Key,Data> ::getSize() {
    return size;
}

template<class Key,class Data> 
int BinarySearchTree<Key,Data> ::isEmpty() {
    return root == nullptr;
}

//check xem co phai la node trong khong 
//node trong la phai co 1 or 2 node children
template<class Key,class Data> 
int BinarySearchTree<Key,Data> ::isInternal(BSTNode<Key,Data> *p) {
    if(p->getLeft == nullptr && p->getRight == nullptr) {
        return 0;
    }else { 
        return 1;
    }
}

//check xem mot node co phai node leaf khong 
template<class Key,class Data>
int BinarySearchTree<Key,Data> ::isExternal(BSTNode<Key,Data> *p) {
    if(p->getLeft == nullptr && p->getRight == nullptr) {
        return 1 ; 
    }else { 
        return 0;
    }
}

//check xem 1 node co phai node root hay khong 
//node root la parent == nullprt
template<class Key,class Data> 
int BinarySearchTree<Key,Data> ::isRoot(BSTNode<Key,Data> *p) {
    if(p->getParent == null) return 1;
    else return 0;
}

//tra ve key min va key max 
template<class Key,class Data> 
BSTNode<Key,Data>* BinarySearchTree<Key,Data> ::minKey() {
    BSTNode<Key,Data> *temp 
    temp = root
    while(temp->getLeft() != nullptr) {
        temp = temp->getLeft();
    }
    return temp ; 
}

template<class Key,class Data> 
BSTNode<Key,Data>* BinarySearchTree<Key,Data> ::maxKey() {
    BSTNode<Key,Data> *temp 
    temp = root
    while(temp->getRight()  != nullptr) {
        temp = temp->getRight();
    }
    return temp ; 
}

//ham insert
//khoi tao 1 node va cap hat dong cho node do 
//check xem key va data truyen vao co dung dinh dang hay khong 
//so sanh voi node node dang xet , neu nho hon thi ->left , > right , cho den khi gap null thi insert
template<class Key,class Data> 
void BinarySearchTree<Key,Data> ::insert(Key key , Data data) {
    BSTNode<Key,Data>* NewNode = new BSTNode<Key.Data>();
    NewNode->setKey(key);
    NewNode->setData(data);
    BSTNode<Key,Data>* temp;
    temp = root;
    //kiem tra Th if root == nullptr
    if(root == nullptr) {
        root = NewNode;
        size++;
        return;
    }
    //truong hop con lai : root != nullptr
    while(temp != nullptr) {
        if(NewNode->getKey() < temp->getKey()) {
            if(temp->getLeft == nullptr) {
                NewNode->setParent(temp);
                temp->setLeft(NewNode);
                size++;
                break;
            } else {
                temp = temp->getLeft();
            }
        }
        else { 
            if(NewNode->getKey() > temp->getKey()) {
                if(temp->getRight == nullptr) {
                    NewNode->setParent(temp);
                    temp->setRight(NewNode);
                    size++;
                    break;
                }else {
                    temp = temp->getRight();
                }               
            }
            //truong hop 2 key = nhau 
            else {
                delete NewNode;
                break;
            }
        }
    }
}

//xay dung function search:
template <class Key, class Data> 
BSTNode<Key,Data>* BinarySearchTree<Key,Data> ::search(Key key) {
    //khai bao mot con tro bsnode tro toi dia chi node root 
    BSTNode<Key,Data>* temp;
    while(temp != nullptr) {
        if(key < temp->getKey()) {
            temp = temp -> getLeft();
        }
        else if(key > temp->getKey()) {
            temp = temp->getRight();
        }else {
            return temp ; 
        }
    }
    //khong tim thay 
    return nullptr;
}

//xoa node theo node duong ap dung e xoa node theo ki , vi the se xay dung ham xoa node them node truoc  : 
//th1 : node khong co trong tree
//th2 : node la node la => xet con tro tro den parent cua node . neu parent == null => xoa node root , neu parent != null thi xet xem node do nam ben left or right,
//sau o xoa node
//th3: key la node co 1 child => cho 1 con tro tro den node can xoa va 1 con tro tro den node child cua no sau do xoa node can xoa va noi not child cua node can xoa 



template<class Key,class Data> 
void BinarySearchTree<Key,Data> ::remove(BSTNode<Key,Data> *&p) {
    BSTNode<Key,Data> *temp;
    //TH1 : Node leaf:
    if(!p->hasLeft && !p->hasRight) {
        temp = v->getParent();
        if(temp != nullptr) {
            if(temp->getLeft() == p) {
                temp->setLeft(nullptr);
            }else {
                temp->setRight(nullptr);
            }
        }else{
            root = nullptr;
        }
    }
    //TH2: Node have one left child : 
    if(p->hasLeft && !p->hasRight) {
        temp = p->getParent();
        p->getLeft()->setParent(temp);
        if(temp->getLeft() == p) {
            temp->setLeft(p->getLeft());
        }else {
            temp->setRight(p->getLeft());
        }
    }
    //TH3: Node have one right child : 
    if(!p->hasLeft() && p->hasRight()) {
        temp = p->getParent();
        p->getRight()->setParent(temp);
        if(temp->getLeft() == p) {
            temp->setLeft(p->getRight());
        }else {
            temp->setRight(p->getRight());
        }
    }
}

//xoa node theo key : 
//tim xem key do co trong key khong ; neu co moi thuc hien ham remove ben tren , neu khong thi return ve luon 
// th4 : neu node can xoa co 2 node child ; tim node con nho nhat ben phai node can xoa sau do lau key va value cuar node do thay cho node can xoa 
//xoa node do di ; 

template<class Key,class Data> 
void BinarySearchTree<Key,Data> ::remove(Key key) {
    BSTNode<Key,Data>* p = search(key);
    if(p->hasLeft && p->hasRight) {
        BSTNode<Key,Data>* temp ;
        temp = minKey(p->getRight());
        p->setKey(temp->getKey);
        p->setData(temp->getData);
        remove(temp);
    }else {
        remove(v);
    }
    cout--;
}

//xay dung ham duyet theo thu tu inorder(left-> print->right)
template<class Key,class Data>
void inOrderTraversal(BSTNode<Key,Data> *p ,void (*visit) (BSTNode<Key,Data> *)) {
    if(p != nullptr) {
        inOrderTraversal(p->getLeft,visit);
        visit(p);
        inOrderTraversal(p->getRight,visit);
    }    
}

//preorder(print->left-right)
template<class Key,class Data>
void preOrderTraversal(BSTNode<Key,Data> *p ,void (*visit) (BSTNode<Key,Data> *)) {
    if(p != nullptr) {
         visit(p);
        inOrderTraversal(p->getLeft,visit);
        inOrderTraversal(p->getRight,visit);
    }    
}

//postOrder(left->right->print) 
template<class Key,class Data>
void preOrderTraversal(BSTNode<Key,Data> *p ,void (*visit) (BSTNode<Key,Data> *)) {
    if(p != nullptr) {
        inOrderTraversal(p->getLeft,visit);
        inOrderTraversal(p->getRight,visit);
        visit(p);
    }    
}


void v(BSTNode<int,char*> *p) {
    cout << p->getKey() << "," << p->getData();
}