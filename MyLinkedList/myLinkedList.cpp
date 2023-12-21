#include<iostream>
using namespace std;
template<class T>
class node{
	T elem;
	node *next;
	public:
		node(){
		}
		node(T x,node<T> *N=NULL){
			elem =x;
			next = N;
		}
		void setelem(T x){
			elem =x;
		}
		void setnext(node<T> *N=NULL){
			next = N;
		}
		T &getelem() {
			return elem;
		}
		node<T> *&getnext(){ 
			return next;
		}
};

template<class T>
class slist_iterator{
	node<T> *curr;//con tro tro vao node hien tai
	public:
		slist_iterator(){ curr=NULL;}
		slist_iterator(node<T> *p){ curr=p;}
		node<T> *getcurr(){
			return curr;
		}
		slist_iterator<T> &operator=(slist_iterator<T> p){
			this->curr = p.getcurr();
			return *this;
		}
		bool operator!=(slist_iterator<T> p){
			return curr!=p.getcurr();
		}
		slist_iterator<T> operator++()//++curr
		{
			curr=curr->getnext();
			return curr;//tu dong ep kieu thanh iterator vi co ham tao co doi
		}
		slist_iterator<T> operator++(int)//curr++
		{
			node<T> *temp = curr;
			curr=curr->getnext();
			return temp;
		}
		T &operator*(){ return curr->getelem();
		}
};

template<class T>
class slist{
	node<T> *head,*tail;
	unsigned int num;//so phan tu hien tai trong list -> size
	public:
		typedef slist_iterator<T> iterator;
		slist(){ head = tail = nullptr; num=0;}
		slist(int k,T x){
			head=tail=NULL; num=0;
			for(int i=1;i<=k;i++) push_back(x);
		}
		iterator begin(){
			return head;
		}
		iterator end(){
			return NULL;
		}
 
		unsigned size(){ return num;}
		bool empty(){ return num==0;}
		T &front(){ return head->getelem();	}
		T &back(){ return tail->getelem();	}
		void push_front(T x){
			head = new node<T>(x,head);
			if(num==0) tail = head; 
			num++;
		}
		void push_back(T x){
			if(num==0) push_front(x);
			else{
				tail->setnext(new node<T>(x,NULL));
				tail = tail->getnext();
				num++;
			}
		}
		void pop_front(){
			if(num==0) return;
			if(num==1) {
				head=tail=NULL;
			}
			else{
				head=head->getnext();
			}
			num--;
		}
		void pop_back(){
			if(num==0) return;
			if(num==1){head=tail=NULL; num--; return;}
			node<T> *p=head;
			while(p->getnext()!=tail) p=p->getnext();
			p->setnext(NULL);
			tail=p;
			num--;
		}
};

int main ()
{
	slist<int> L(10,1);
	for(auto x:L) cout<<x<<" ";  
	slist<int>::iterator it;
	cout<<"\nDuyet bo lap xuoi: "; for(it=L.begin();it!=L.end();it++) cout<<*it<<" ";
	int k=0; for(slist<int>::iterator z=L.begin();z!=L.end();z++) *z=++k;
	cout<<"\nDuyet auto: "; for(auto x:L) cout<<x<<" ";
	L.pop_back();//xoa duoi
	L.pop_back();//xoa duoi
	L.pop_front();//xoa dau
	L.pop_front();//xoa dau
	cout<<"\nDuyet auto: "; for(auto x:L) cout<<x<<" ";  
	L.push_front(12);
	L.push_back(35);
	cout<<"\nDuyet auto: "; for(auto x:L) cout<<x<<" ";  
  return 0;
}