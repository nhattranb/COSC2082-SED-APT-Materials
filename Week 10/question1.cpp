#include <iostream>
using namespace std;

template <typename T>

void swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 10;
    double p = 3.14, q = 6.28;

    cout << "Before swapping: " << endl;
    cout << "x = " << x << ", y = " << y << endl;
    cout << "p = " << p << ", q = " << q << endl;

    swap(x, y);
    swap(p, q);

    cout << "\nAfter swapping: " << endl;
    cout << "x = " << x << ", y = " << y << endl;
    cout << "p = " << p << ", q = " << q << endl;

    return 0;
}
