#include <iostream>
#include <fstream>
using namespace std;

class Rectangle {
public:
    int width;
    int height;

int getWidth() {
	return this->width;
}
void setWidth(int width) {
	this->width = width;
}

int getHeight() {
    return this->height;
}
void setHeight(int height) {
    this->height = height;
}

Rectangle(int getWidth, int getHeight) {
    width = getWidth;
    height = getHeight;  
}

};

int main() {
    Rectangle recObj1(6, 4);
    Rectangle recObj2(10, 8);
    cout << recObj1.width << " " << recObj1.height << "\n";
    cout << recObj2.width << " " << recObj2.height << "\n";
    return 0;
}


