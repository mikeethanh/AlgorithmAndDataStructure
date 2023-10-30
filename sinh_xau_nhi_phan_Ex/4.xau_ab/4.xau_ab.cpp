#include<iostream>
using namespace std;
int n, ok;
string s;

void ktao() {
   s = string(n, 'A');
}

void sinh() {
	int i = n - 1;
	while (i >= 0 && s[i] == 'B') {
		s[i] = 'A';
		i--;
	}
	if (i < 0) {
		ok = 0;
	}
	else {
		s[i] = 'B';
	}
}

int main() {
	cin >> n;
	ok = 1;
	ktao();
	while (ok) {
		for (int i = 0; i < n; i++) {
			cout << s[i];
		}
		cout << " ";
		sinh();
	}
}





