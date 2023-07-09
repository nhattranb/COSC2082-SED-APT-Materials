/* Source: https://www.programiz.com/cpp-programming/examples/reverse-number */

#include <iostream>
using namespace std;

int main() {
    cout << "Hello friends, this is question 4 of the tutorial!"
    int n, f = 0, r;
    cout << "Please enter your number (do NOT give an imaginary number): \n";
    cin >> n;
    while(n != 0) {
        r = n % 10;
        f = f * 10 + r;
        n /= 10;
    }
    cout << "Your Flipped Number = " << f;
    return 0;
}