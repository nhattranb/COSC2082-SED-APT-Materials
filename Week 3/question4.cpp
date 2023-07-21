/* THE CODE IS GENERATED USING BING GPT COPILOT*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Cat {
public:
    string name;
    int age;
    Cat(string name, int age) {
        this->name = name;
        this->age = age;
    }
};

class Person {
public:
    Cat cat;
    string name;
    Person(Cat cat, string name) {
        this->cat = cat;
        this->name = name;
    }
};

int main() {
    Cat cat1("Tom", 3);
    Cat cat2("Jerry", 4);
    Cat cat3("Nibbles", 5);

    Person people[3] = { Person(cat1, "Mr. Nhat"), Person(cat2, "Ms. Anna"), Person(cat3, "Mr. Ling") };

    int maxAge = -1;
    int Index = -1;

    for (int i = 0; i < 3; i++) {
        if (people[i].cat.age > maxAge) {
            maxAge = people[i].cat.age;
            Index = i;
        }
    }

    cout << "The person with the oldest cat is " << people[Index].name << endl;
    cout << "The oldest cat's name is " << people[Index].cat.name << endl;
    cout << "The oldest cat's age is " << people[Index].cat.age << endl;

    return 0;
}