#include<iostream>
#include<string>
#include<map>
#include<stack>
using namespace std;

// Mức độ ưu tiên của từng toán tử
map<char, int> m = { {'*', 2},{'/', 2},{'+', 1},{'-', 1},{'(', 0} };

// Hàm tính toán kết quả của biểu thức hậu tố
int f(int a, int b, char o) {
    if (o == '+') return a + b;
    if (o == '-') return a - b;
    if (o == '*') return a * b;
    if (o == '/') return a / b;
    return 0; // Trường hợp không xác định
}

int main() {
    string x;
    string y;
    stack<char> s1;

    getline(cin, x);
    for (auto c : x) {
        if (c >= '0' && c <= '9') {
            y += c;
        }
        else if (c == '(') {
            s1.push(c);
        }
        else if (m.find(c) != m.end()) {
            while (!s1.empty() && m[s1.top()] >= m[c]) {
                y += s1.top();
                s1.pop();
            }
            s1.push(c);
        }
        else if (c == ')') {
            while (!s1.empty() && s1.top() != '(') {
                y += s1.top();
                s1.pop();
            }
            if (!s1.empty() && s1.top() == '(') {
                s1.pop(); // Loại bỏ dấu '(' khỏi ngăn xếp
            }
        }
    }
    while (!s1.empty()) {
        y += s1.top();
        s1.pop();
    }

    stack<int> res;
    for (auto c : y) {
        if (c >= '0' && c <= '9') {
            res.push(c - '0');
        }
        else {
            int second = res.top();
            res.pop();
            int first = res.top();
            res.pop();
            res.push(f(first, second, c));
        }
    }
    cout << res.top() << endl;
}
