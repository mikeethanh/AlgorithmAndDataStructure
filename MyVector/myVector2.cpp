#include<iostream>
using namespace std;

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
    Vector(int cap , int num ) : cap(cap) , num(num) buff(new T[num]) {
        for (int i = 0; i < cap; i++)  buff[i] = num
    } 
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
    void extend() {
};


int main() {

}