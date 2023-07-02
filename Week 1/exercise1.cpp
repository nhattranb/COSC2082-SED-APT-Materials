#include <iostream>
using namespace std;

int main() {
    cout << "Hello everyone! This is exercise 1 \n";
    cout << "We will solve the liner ax+b=0 ! \n";
    double r;
    int a;
    cout << "Enter your numbers for the a here \n";
    cin >> a;
    int b;
    cout << "Do the same for the b here \n";
    cin >> b;
    if (a == 0) {
        if (b == 0) {
            cout << "This equation has infinite solutions" << endl;
        } else {
            cout << "This equation has NO solutions " << endl;
        }
    } else {
        r = -b/a;
        cout << "The equation root is: " << r << endl;
    }
    return 0;
}