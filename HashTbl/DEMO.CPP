#include <iostream>
#include "hashtbl.cpp"

using namespace std;

int h(int key, int m) {
    return key % m;
}

int main() {
    Hashtable<int, float> ht(997);
    Node<int, float> *p;
    int key;

    // system("cls");  // If you are using this for clearing the console, consider alternatives

    ht.Add(1, 45.5, h);
    // ht.Add(1, 42.5, h);
    ht.Add(3, 4.23, h);
    ht.Add(10, 100.23, h);
    ht.Add(67, 1000, h);
    ht.Add(201, 500, h);

    cout << "\nSo phan tu hien co trong bang bam: " << ht.Count();
    cout << "\nNhap khoa can tim:";
    cin >> key;

    p = ht.Find(key, h);
    if (p == NULL)
        cout << "Khong tim thay phan tu co khoa = " << key;
    else
        cout << "Tim thay phan tu co khoa = " << key << " gia tri cua no=" << p->getElem();

    return 0;
}

