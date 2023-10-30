#include<iostream>
#include<string>
#include<sstream>
using namespace std;

//truy cap ki tu cua xau thong qua chi so
//length()
//cin,getline
//noi 2 chuoi 
//so sanh chuoi theo thu tu tu dien 
//substr()
//stoi , stoill
//to_string


int main() {
	string s;
	cin >> s;
	cout << s << endl;

	//co dau cach 
	string s;
	getline(cin, s);
	cout << s << endl;

	//getline bi troi lenh 
	int n;
	cin >> n;//van con phim enter 
	cin.ignore();
	string s;
	getline(cin, s);
	cout << s << endl;

	string s = "python";
	cout << s[1] << endl;
	//muon biet size cua string
	cout << s.length() << endl;

	//duyet xau 
	string s = "python";
	for (int i = 0; i < s.length(); i++) {
		cout << s[i] << endl;
	}

	//noi 2 string 
	string a = "pythonn";
	string b = "java";
	string c = a + b;
	cout << c << endl;


	//so sanh 2 xau(theo thu tu tu dien )
	string a = "abc";
	string b = "def";
	if (a > b) {
		cout << " a lon hon b ";
	}
	else if (a == b) {
		cout << "a nho hon b ";
	}
	else {
		cout << " a nho hon b";
	}

	//cat string 
	string a = " abcdef";
	string b = a.substr(2, 3);

	//chuyen xau thanh 1 so tu nhien 
	string a = "123456";
	int x = stoi(a);
	cout << x << endl;

	//to_string
	int n = 123456;
	string s = to_string(n);
	cout << s << endl;

	//
	string s = "java python";
	stringstream ss(s);
	string tmp;
	while (ss >> tmp) {
		cout << tmp << endl;
	}

	//chuyen viet hoa thanh viert thuong
	std::string str = "Hello World";

	// Duyệt qua từng ký tự trong chuỗi và chuyển đổi từ viết hoa thành viết thường
	for (char& c : str) {
		c = std::tolower(c);
	}
	return 0;

	// xoa 1 tu 
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == ',' || str[i] == '.') {
			str.erase(i, 1);
			i--; // Giảm giá trị của i để kiểm tra lại vị trí hiện tại
		}
	}

	//kiem tra co pha iso nguyen hay khong 

} for (string token : tokens) {
	if (isdigit(token[0]) || (token.size() > 1 && token[0] == '-' && isdigit(token[1]))) {
		st.push(stoi(token));
	}
	else {