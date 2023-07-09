#include <iostream>
using namespace std;

int main() {
    cout << "Hello C++ friends! This is exercise 1 of the tutorial! \n";
    cout << "We will solve the linear equation ax + b = 0 today! \n";
    float x;
    int a;
    cout << "Enter your numbers for the a here! \n";
    cin >> a;
    int b;
    cout << "Do the same for the b here! \n";
    cin >> b;
    if (a == 0) {
        if (b == 0) {
            cout << "This equation has infinite solutions! Free to choose" << endl;
        } else {
            cout << "Sorry but this equation has NO solutions! " << endl;
        }
    } else {
        x = (-1.0 * b)/a;
        cout << "There is only 1 equation root, and it is: " << x << endl;
    }
    return 0;
}