#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string fullName;
    cout << "Enter full name: ";
    getline(cin, fullName);

    string initials = "";
    
    // Lấy chữ cái đầu tiên nếu chuỗi không rỗng
    if (!fullName.empty()) {
        initials += toupper(fullName[0]);
    }

    // Duyệt qua chuỗi để tìm ký tự đầu tiên sau mỗi khoảng trắng
    for (size_t i = 0; i < fullName.length(); i++) {
        if (fullName[i] == ' ' && i + 1 < fullName.length() && fullName[i + 1] != ' ') {
            initials += '.';
            initials += toupper(fullName[i + 1]);
        }
    }

    cout << "Initials: " << initials << endl;

    return 0;
}