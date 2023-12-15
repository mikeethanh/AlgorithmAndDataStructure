#include<iostream>
#include<vector>
using namespace std;

// Trong mã của bạn, hàm bubbleSort đang nhận một vector a như một tham số thông thường, không phải tham chiếu. 
//Khi bạn truyền một vector vào một hàm theo cách này, một bản sao của vector được tạo ra trong hàm và các thay đổi 
//chỉ ảnh hưởng đến bản sao đó, không ảnh hưởng đến vector gốc trong hàm main.
void bubbleSort(vector<int> &a) {
    int n = a.size();
    for (int i = 0; i < n-1;i++) {
        for (int j = 0; j <n-1-i;j++) {
            if(a[j]  > a[j+1]) {
                swap(a[j],a[j+1]);
            }
        }   
    }
}

int main() {
    vector<int> a = {8, 2, 1, 9, 7, 2, 5, 6};
    bubbleSort(a);
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
}