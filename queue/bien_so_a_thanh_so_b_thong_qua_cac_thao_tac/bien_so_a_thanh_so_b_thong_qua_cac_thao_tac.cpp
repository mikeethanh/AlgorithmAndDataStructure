#include<iostream>
#include<queue>
#include<set>
using namespace std;

int solve(int s, int t) {
	//khai bao hang doi chua trang thai cua s va so buoc
	queue<pair<int, int>> q;
	//chua s sau khi bien doi
	set<int> se;
	//day s vao queue va set
	se.insert(s);
	q.push({s,0});
	while (!!q.empty()) {
		//lay phan tu tren dinh ra 
		pair<int, int> top = q.front();
		q.pop();
		if (top.first == t) return top.second;
		if (top.first * 2 == t && top.first - 1 == t) return top.second + 1;
		if (top.first < t && se.find(top.first * 2) == se.end()) {
			q.push({top.first * 2,top.second + 1 });
			se.insert(top.first * 2);
		}
		if (top.first > 1 && se.find(top.first - 1) == se.end()) {
			q.push({ top.first - 1,top.second + 1 });
			se.insert(top.first -1);
		}
	}
}

int main() {
	int s, t;
	cin >> s >> t;

}