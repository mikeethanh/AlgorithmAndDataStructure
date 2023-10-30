#include<iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int a[100];
    int cnt[10000];
    int dem = 0;
    int l = 0; 
    int r = 0;
    int res = 0;
    for (int r = 0; r < n; r++) {
        cnt[a[r]]++;
        if (cnt[a[r]] == 1) dem++;
        while (dem > k) {
            if (cnt[a[l]] == 1) dem--;
            cnt[a[l]]--; l++;
        }
        res += (l - r + 1);
    }
}