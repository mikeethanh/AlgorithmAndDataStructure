#include<iostream>
#include<set>
#include<vector>
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    int a[100];
    int b[100];
    vector<int> hop;
    vector<int> giao;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    int i = 0; int j = 0;
    while (i < n && j < m) {
        if (a[i] < b[j]) {
            hop.push_back(a[i]);
            i++;
        }
        else if (a[i] > b[j]) {
            hop.push_back(b[j]);
            j++;
        }
        else {
            hop.push_back(a[i]);
            giao.push_back(a[i]);
            i++;
            j++;
        }
    }
    while (i < n) {
        hop.push_back(a[i++]);
    }
    while (j < m) {
        hop.push_back(b[j++]);
    }
    for (int x : hop) {
        cout << x << " ";
    }
    cout << endl;
    for (int x : giao) {
        cout << x << " ";
    }
}