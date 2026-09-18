#include <iostream>
#include <string>

using namespace std;

int main() {
    string text;
    cout << "Enter text: ";
    getline(cin, text);

    int countWithSpaces = text.length();
    int countWithoutSpaces = 0;

    for (char c : text) {
        if (c != ' ') {
            countWithoutSpaces++;
        }
    }

    cout << "Count all characters : " << countWithSpaces << endl;
    cout << "Count without spaces : " << countWithoutSpaces << endl;

    return 0;
}