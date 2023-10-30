#include<iostream>
#include<map>
#include<unordered_map>

using namespace std;

int main() {
	multimap<int, int> mp;
	mp.insert({ 1,100 });
	mp.insert({ 2, 200 });
	mp.insert({ 1,200 });
}