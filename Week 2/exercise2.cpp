/* Source: https://www.programiz.com/cpp-programming/library-function/cctype/isxdigit#:~:text=The%20isxdigit()%20function%20in,a%20hexadecimal%20character%20or%20not. */

#include <cctype>
#include <iostream>
#include <fstream>
using namespace std;


int main() {
    string t;
    cout << "Please type your argument \n";
    cin >> t;
    bool flag = 0;
    char str = t;
    for (int i = 0; i< strlen(str); i++) {
        if (!isxdigit(str[i])) {
            flag = 1;
            break;
        }
    }
    if (flag) {
        cout << str << " is not a valid hexadecimal number";
    else {
        cout << str << " is a valid hexadecimal number";
    }
    return 0;
}