#include <array>
#include <iostream>
#include <string>
using namespace std;

char uppercase(char letter) {
    return letter >= 'a' && letter <= 'z' ? letter - 32 : letter;
}

char lowercase(char letter) {
    return letter >= 'A' && letter <= 'Z' ? letter + 32 : letter;
}

int main() {
    string test;
    cout << "Enter your string \n";
    cin >> test;
    for(char& c : test) {
        char uppercase(char letter);
        char lowercase(char letter);
    }
    return 0;
}