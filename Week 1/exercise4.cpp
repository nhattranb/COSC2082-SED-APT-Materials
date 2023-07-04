/* Source: https://www.programiz.com/cpp-programming/examples/reverse-number */

#include <iostream>
using namespace std;

int main() {
    int n, f = 0, r;
    cout << "Enter your integer: \n";
    cin >> n;
    while(n != 0) {
        r = n % 10;
        f = f * 10 + r;
        n /= 10;
    }
    cout << "Your Flipped Number = " << f;
    return 0;
}