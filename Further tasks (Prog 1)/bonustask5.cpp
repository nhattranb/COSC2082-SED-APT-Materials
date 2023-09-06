#include <iostream>
#include <fstream>
#include <sstream>
#include <cstring>
#include <iomanip>
#include <vector>
using namespace std;

class Shape {
    protected:
    string name;

    public:
    Shape(string name=""): name(name) {}

    string toString() {
        return "This shape is named " + name + "\n";
    }

    void showInfo() {
        cout << toString();
    }

    virtual double area() = 0;
};

class Circle: public Shape {
    protected:
    double radius;

    public:
    Circle(string name="", double radius=0): Shape(name), radius(radius) {}

    string toString() {
        return "This circle has a radius of " + to_string(radius) + "\n";
    }

    void showInfo() {
        cout << toString();
    }

    double area() {
        return radius*radius*3.14;
    }
};

class Rectangle: public Shape {
    protected:
    int width;
    int height;

    public:
    Rectangle(string name="", int width=0, int height=0): Shape(name), width(width), height(height) {}

    string toString() {
        return "This rectangle has a width of " + to_string(width) + " and is " + to_string(height) + " tall. \n";
    }

    void showInfo() {
        cout << toString();
    }

    double area() {
        return width*height;
    }
};

int main() {
    cout << "Testing the application here. \n";

    Circle circle("Nhat", 6.5);
    circle.showInfo();
    cout << "The area of the circle is" << circle.area() << "\n";

    Rectangle rect("Ling", 9, 8);
    rect.showInfo();
    cout << "The area of the rectangle is" << rect.area() << "\n";

    return 0;
}