#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Triangle {
    public:
    int x;
    int y;
    int z;

    Triangle(){
        
    }

    Triangle(int myX, int myY, int myZ){
        x = myX;
        y = myY;
        z = myZ;
    }

    void verify() {
        if ((x + y > z) && (y + z > x) && (z + x > y)) {
            cout << "This is a triangle \n";
            if (x == y && y == z) {
                cout << "Furthermore this is an equilateral triangle \n";
            } else if (x == y || y == z || x == z) {
                cout << "Furthermore this is an isosceles triangle \n";
            } else {
                cout << "Furthermore this is a regular triangle \n";
            }
        } else {
            cout << "This is NOT a triangle \n";
        }
    }
};

int main() {
    Triangle myTrg1(6, 8, 10);
    Triangle myTrg2(9, 9, 9);
    Triangle myTrg3(5, 6, 7);
    Triangle userTrg;
    cout << "Enter your x value \n";
    cin >> userTrg.x;
    cout << "Do the same for your y value \n";
    cin >> userTrg.y;
    cout << "Do the same for your z value \n";
    cin >> userTrg.z;
    myTrg1.verify();
    myTrg2.verify();
    myTrg3.verify();
}