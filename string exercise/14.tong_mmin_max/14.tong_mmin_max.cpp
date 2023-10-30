#include<iostream>
#include<string>
#include<map>
#include<algorithm>
using namespace std;

void sum_min(string s1, string s2) {
	for (int i = 0; i < s1.size(); i++) {
		if (s1[i] == 6) s1[i] == 5; 
	}
	for (int i = 0; i < s2.size(); i++) {
		if (s2[i] == 6) s2[i] == 5;
	}

	cout << stoi(s1) + stoi(s2) << endl;
}


void sum_max(string s1, string s2) {
	for (int i = 0; i < s2.size(); i++) {
		if (s2[i] == 5) s2[i] == 6;
	}
	for (int i = 0; i < s1.size(); i++) {
		if (s1[i] == 5) s1[i] == 6;
	}

	cout << stoi(s1) + stoi(s2) << endl;
} 
int main() {
	string s1, s2; cin >> s1 >> s2;
	sum_min(s1, s2);
	sum_max(s1,s2);

}