#include<iostream>
using namespace std;
template <class T> 
class Stack{
    private:
        struct Node{
        T info;
        Node *next;
    };
    //cho node o dau la private vi khi truy cap duoc vao node o dau la truy cap duoc vao ca stack
    Node *top;
    void makeEmpty( );
public:
    Stack(); 
    Stack(const Stack& ); 
    ~Stack( ); 
    bool isEmpty( ) ;
    //lay ra phat tu dau tien 
    T &topOfStack( );
    //pop 
    void pop( );
    //push
    void push( T );
};
// tao ra 1 doi tuong moi voi 0 tham so => con tro dau tro vao null;
template <class T> 
Stack<T>::Stack(){
    top = NULL;
}

template <class T> Stack<T>::Stack(const Stack &s){
    top = NULL;
    while(!s.isEmpty()){
    this->push(s.topOfStack());
    s.pop();
 }
}
//destructor
template <class T> 
Stack<T>::~Stack(){
    makeEmpty(); 
}
//Check xem có rỗng không 
template <class T>
bool Stack<T>::isEmpty() {
    return top == NULL;
}

//lay ra phan tu dau tien cua stack
template <class T> 
T& Stack<T>::topOfStack() {
    if(isEmpty()) {
        cout<<"empty stack !";
        exit(1);
    }
return top->info;
}

//pop cho den khi nao khong con phan tu nao ben trong 
template <class T> 
void Stack<T>::makeEmpty(){
while(!isEmpty())
    pop();
}

template <class T> 
void Stack<T>::pop(){
    if(isEmpty()){
        cout<<"Stack Empty !"<<endl; 

        return ;
    }else {
    Node *temp = top;
    top = top->next;
    delete temp;
    }
}
template <class T> void Stack<T>::push(T x){
    Node *t = new Node;
    t->info = x;
    t->next = top;
    top = t;
}

int main() {
    Stack<int> stack;
    stack.push(2);
    stack.push(4);
    stack.push(3);
    stack.push(4);
    stack.pop();
    int top1 = stack.topOfStack();
    int top2 = stack.topOfStack();
    cout << top1 << " " << top2 << endl;
}