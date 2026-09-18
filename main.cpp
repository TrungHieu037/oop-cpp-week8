#include <iostream>
#include <string>

using namespace std;

int main() {
    string text;
    cout << "Nhập vào một câu bất kỳ: ";
    getline(cin, text);

    // 1. Độ dài của chuỗi
    cout << "Độ dài chuỗi: " << text.length() << " ký tự." << endl;

    // 2. Tìm vị trí từ "C++"
    size_t pos = text.find("C++");
    if (pos != string::npos) {
        cout << "Tìm thấy 'C++' tại vị trí: " << pos << endl;

        // 3. Trích xuất chuỗi từ vị trí tìm thấy đến hết
        string part = text.substr(pos);
        cout << "Chuỗi từ vị trí tìm thấy: " << part << endl;

        // 4. Thay thế "C++" bằng "Programming"
        text.replace(pos, 3, "Programming");
        cout << "Chuỗi sau khi thay thế: " << text << endl;
    } else {
        cout << "Không tìm thấy từ 'C++' trong câu." << endl;
    }

    return 0;
}