#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[100];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int l = 0;
        for (int i = 1; i < n; i++) {
            if (a[i] < a[l]) {
                l = i;
            }
        }
        int r = n - 1;
        for (int i = n - 2; i >= 0; i--) {
            if (a[i] > a[r]) {
                r = i;
            }
        }

        int m1 = *min_element(a + l, a + r + 1);
        int m2 = *max_element(a + l, a + r + 1);

        l = lower_bound(a, a + l, m1) - a;
        r = upper_bound(a + r + 1, a + n, m2) - a - 1;

        cout << l + 1 << " " << r + 1 << endl;
    }
    return 0;
}