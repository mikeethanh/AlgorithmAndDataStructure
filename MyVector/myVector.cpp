#include<iostream>
using namespace std;
//xay dun lop bo duyet nguoc 
template<class T> 
class VRI {
    T* curr; // bo duyet tro den node hien tai 
    public:
    //ham khoi tao 1 tham so 
    vector_reverse_iterator(T *node = nullptr) : curr(node) {};

    //nap toan tu = 
    VRI<T> &operator = (VRI<T> it) {
        this->curr = it.curr;
        return *this;
    }

    //nap chong toan tu ++ hau to  :
    //Trong trường hợp của toán tử ++, việc trả về curr sẽ là việc trả về một con trỏ tới phần tử trước đó trong lớp duyệt ngược
    // (vector_reverse_iterator). Thông thường, toán tử ++ sẽ di chuyển con trỏ đến phần tử trước đó trong chuỗi. Trong trường hợp
    // này, curr là một con trỏ (chỉ tới một phần tử trong lớp duyệt ngược) và việc trả về curr sẽ trả về con trỏ tới phần tử mới sau khi con trỏ đã được di chuyển về phía trước.
    VRI<T> &operator++() {
        curr--;
        return curr;
    }

    // nap chon toan tu hau to : 
    VRI<T> &operator++(int) {
        VRI<T> tmp = curr;
        curr--;
        return tmp;
    }

    // nap chon toan tu * tra ve phan tu ben trong con tro curr dan tro toi 
    T &operator *() {
        return *curr;
    }

    bool operator!=(vector_reverse_iterator<T> t) { return curr != t.curr; }
};


//Xây dưng class Vector dưới dạng mảng động 
template <class T>
class Vector {
    private:
    int cap ;  //Suc chua 
    int num ; //so luong phan tu 
    T *buff; //con tro buff , su dung de quan li cac phan tu trong mang dong 
    public:
    //constructor : 
    Vector() : cap(0) , num(0) , buff(nullptr) {};
    //constructor have 2 para ;
    Vector(int cap , int num ) : cap(cap) , num(num) buff(new T[cap]) {
        for (int i = 0; i < cap; i++)  buff[i] = num
    } 
    //constructor have 1 para 
    Vector()
    //destructor : 
    ~Vector() {
        if(buff) delete[] buff;
    }

    // phuong thuc : 

    // tra ve suc chua 
    int capacity() { return cap};
    
    //tra ve size 
    int size() { return num; };
    //check Empty
    bool isEmpty() { return num == 0; };
    //pop_back : pop phan tu cuoi cun ra khoi vector 
    void pop_back() {
        if(num > 0) {
            num--;
            return;
        }
    }
    //extend : neu nhu muon them 1 phan tu vao ma suc chua khong du se ggoi ham extend de mo rong duc chua 
    void extend(int newcap) {
        if(newcap =< cap) {
            return ; 
        }
        // neu newcap > cap 
        cap = newcap;
        //khai bao 1 doi mang dong moi voi tham so la cap

        //copy cac phan tu sang mang don moi 
        T* temp = new T[cap];
        for(int i = 0 ; i < num ; i++) {
            temp[i] = buff[i];
        } 
        // xoa buff 
        if(buff) {
            delete[] buff;
        }
        //
        buff = temp;
    }

    // lay ra phan tu cuoi con 

    T *back() {
        return buff[num-1];
    }

    //void day 1 phan tu vao cuoi 
    void push_back(T newElem) {
        if(cap == num) {
            extend(cap*2 + 5);
        } else {
            buff[num] = newElem;
            num++;
        }
    }

    //cach xay dun operator[]
    // ten lop operator,,() {}
    
    T &operator[](int k) {
        return buff[k];
    }

    //insert vao vi tri n 1 so 
    void insert(int index , T elem) {
        if(cap == num) {
            extend(cap*2 + 5);
        }else {
            for(int i = num - 1 ; i >= index; i--) {
                buff[i+1] = buff[i];
            }
            buff[k] = x ; 
        }
    }

    //nap chong toan tu de copy vector hien tai ra 1 vector khac :
    Vector &operator=(Vector<T> v) {
        this->num = v.num;
        this->cap = v.cap;
        if(cap) {
            // khai bao 1 man dong moi voi dun luong ban cap
            this->buff = new T[cap];
            //an cac phan tu o buff cho cap 
            for (int i = 0 ; i < num , i++) {
                buff[i] = V.buff[i];
            }           
        }
    }
};


int main() {

}