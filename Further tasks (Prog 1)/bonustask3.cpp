#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Ingredient {
    public:
    string name;
    string unit;

    public:
    Ingredient(string name, string unit) {
        this->name = name;
        this->unit = unit;
    }

    Ingredient() {

    }

    void Input() {
        cout << "Enter your ingredient name: \n";
        cin >> name;
        cout << "Enter the unit: \n";
        cin >> name;
    }
};

int main() {
    cout << "Testing the program \n";
    Ingredient ing1("soy sauce", "ml");
    Ingredient ing2("pepper", "grams");
    Ingredient myIng;
    myIng.Input();
    cout << ing1.name << ":" << ing1.unit << "\n";
    cout << ing2.name << ":" << ing2.unit << "\n";
    cout << myIng.name << ":" << myIng.unit << "\n";
    cout << "Exiting the program. Goodbye! \n";
    return 0;
}