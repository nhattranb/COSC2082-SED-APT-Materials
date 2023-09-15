#include <iostream>
using namespace std;

template <typename T>

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a = 5, b = 10;
    cout << "Before swapping: " << endl;
    cout << "x = " << a << ", y = " << b << endl;
    swap<int>(a, b);
    cout << "\nAfter swapping: " << endl;
    cout << "x = " << a << ", y = " << b << endl;
    return 0;
}
