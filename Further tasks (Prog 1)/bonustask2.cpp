#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Rectangle {
    public:
    int r;
    int c;

    Rectangle() { }

    Rectangle(int Row, int Column) {
        r = Row;
        c = Column;
    }

    void Visualize() {
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cout << "*";
            }
            cout << " \n";
        }
    }
};

int main() {
    cout << "Hey there! Welcome to the Rectangle Making System! Have fun! \n";
    cout << "Testing the class - first time \n";
    Rectangle myRec1(5, 4);
    cout << "next \n";
    cout << "Testing the class - second time \n";
    Rectangle myRec2(7, 6);
    Rectangle userRec;
    cout << "Now make your own! Please enter your width \n";
    cin >> userRec.r;
    cout << "Do the same for the height \n";
    cin >> userRec.c;
    myRec1.Visualize();
    myRec2.Visualize();
    userRec.Visualize();
    cout << "Thank you for using the system! Have a nice day! \n";
    return 0;
}