#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Cat {
    public:
    string name;
    int age;
    Cat(string thisName, int thisAge) {
        name = thisName;
        age = thisAge;
    }
};

class Person {
    public:
    Cat myCat;
    string myName;
    Person(Cat cat, string name) {
        cat = myCat;
        name = myName;
    }
};

int main() {
    Person myPer1("Puppy", 6, "Nhat");
    Person myPer2("Tom", 5, "Phat");
    Person myPer3("Chihuahua", 4, "Duy");
    string h = Person myPer3;
}