#include <iostream>
#include <vector>
using namespace std;

template<int n>
class Factorial {
    public:
    int value;

    Factorial() {
        int r = 1;
        for(int i=1; i<=n; i++) {
            r = r * i;
        }
        value = r;
    }
};

template<>
class Factorial<0> {
    public:
    int value = 1;

    Factorial() {}
};

int main() {
    cout << "testing \n";
    
    Factorial<3> myFac;
    cout << myFac.value;

    Factorial<4> myFac2;
    cout << myFac2.value;

    return 0;
}