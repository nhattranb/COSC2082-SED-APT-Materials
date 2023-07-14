#include <iostream>
#include <fstream>
using namespace std;

class Rectangle {
    public:
    int width;
    int height;
    Rectangle(int myWidth, int myHeight) {
        width = myWidth;
        height = myHeight;  
    }
};

int main() {
    Rectangle recObj1(6, 4);
    Rectangle recObj2(10, 8);
    cout << recObj1.width << " " << recObj1.height << "\n";
    cout << recObj2.width << " " << recObj2.height << "\n";
    return 0;
}


