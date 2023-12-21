#include"iostream"
using namespace std;
template<class T>
struct node{
T elem;
node<T> *next;
node<T>(T e,node<T>*N=0) {elem=e;next=N;}
};
template<class T>
class QUEUE{
int num;
node<T> *head,*trail;
public:
QUEUE() {num=0;head=trail=0;}
int size() {return num;}
bool empty() {return num==0;}
T&front() {return head->elem;}
T&back() {return trail->elem;}
void push(T x){
if(num==0) head=trail=new node<T>(x);
else {trail->next=new node<T>(x); trail=trail->next;}
num++;
}
void pop(){
head=head->next;
num--;
if(!num) trail=0;
}
};