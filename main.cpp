#include <iostream>
#include <string>

using namespace std;

int main() {
    string text, word;
    cout << "Enter sentence: ";
    getline(cin, text);
    cout << "Enter word to find: ";
    cin >> word;

    size_t pos = text.find(word);
    if (pos != string::npos) {
        cout << "The word \"" << word << "\" is found at position " << pos << "." << endl;
    } else {
        cout << "The word \"" << word << "\" was not found." << endl;
    }

    return 0;
}