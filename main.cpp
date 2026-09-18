#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string fullName;
    int birthYear;

    cout << "Enter full name: ";
    getline(cin, fullName);
    cout << "Enter birth year: ";
    cin >> birthYear;

    // Loại bỏ khoảng trắng và chuyển thành chữ thường
    string username = "";
    for (char c : fullName) {
        if (c != ' ') {
            username += tolower(c);
        }
    }

    // Ghép năm sinh vào cuối username
    username += to_string(birthYear);

    cout << "Username: " << username << endl;

    return 0;
}