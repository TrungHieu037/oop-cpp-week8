#include <iostream>
#include <string>

using namespace std;

int main() {
    // Khai báo chuỗi ban đầu theo ví dụ trên bảng
    string s = "abcdefgh";
    string s1 = "khj";

    // 1. Cắt chuỗi con (substring) từ vị trí 0, độ dài 5 kí tự
    string sub = s.substr(0, 5);
    cout << "s.substr(0, 5) = \"" << sub << "\"" << endl;

    // 2. Tìm vị trí của ký tự 'd' trong chuỗi s
    size_t pos = s.find("d"); 
    cout << "s.find(\"d\") = " << pos << endl;

    // 3. Nối chuỗi s1 vào cuối chuỗi s
    s.append(s1);
    cout << "s.append(s1) -> " << s << endl;

    return 0;
}