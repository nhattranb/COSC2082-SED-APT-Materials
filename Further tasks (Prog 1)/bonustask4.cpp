#include <iostream>
#include <fstream>
#include <sstream>
#include <cstring>
#include <iomanip>
#include <vector>
using namespace std;

class Animal {
    protected:
    string name;

    public:
    Animal(string name=""): name(name) {}

    string toString() {
        return "Animal name: " + name + "\n";
    }

    void showInfo() {
        cout << toString();
    }

    string speak() {
        return "The animal is speaking. \n";
    }
};

class Dog: public Animal {
    protected:
    string breed;

    public:
    Dog(string name="", string breed=""): breed(breed) {
        this->name = name;
    }

    string toString() {
        return "Dog's breed: " + breed + "\n";
    }

    void showBreed() {
        cout << toString();
    }

    string speak() {
        return "Woof Woof \n";
    }
};

class Cat: public Animal {
    protected:
    string breed;

    public:
    Cat(string name="", string breed=""): breed(breed) {
        this->name = name;
    }

    string toString() {
        return "Cat's breed: " + breed + "\n";
    }

    void showBreed() {
        cout << toString();
    }

    string speak() {
        return "Meow Meow \n";
    }
};

int main() {
    cout << "testing the software. \n";

    Dog buddy("Buddy", "Labrador Retriever");
    cout << buddy.toString();
    buddy.showInfo();
    buddy.showBreed();

    Cat fluffy("Fluffy", "Siamese");
    cout << fluffy.toString();
    fluffy.showInfo();
    fluffy.showBreed();
}