#include <iostream>
#include <fstream>
#include <sstream>
#include <cstring>
#include <iomanip>
using namespace std;

class Book {
    private:
       string name;
       int price;
    
    public:

    Book(string name="", int price=0) {
        this->name = name;
        this->price = price;
    }

    string getName() const {
        return name;
    }

    int getPrice() const {
        return price;
    }

    string toString() {
        return "Name :" + name + "Price: " + to_string(price);
    }
};

int main() {
    Book *arrB = new Book[2]{Book("Mein Kampf", 30000), Book("CSI", 45000)};
    Book arr[2];

    if(arrB == nullptr) {
        cout << "memory failed. \n";
        return -1;
    }

    for (int i = 0; i < 2; i++) {
        arr[i] = arrB[i];
    }

    for (Book x : arr) {
        cout << x.toString();
    }
    
    Book** books[5];

    for (int i = 0; i < 5; i++) {
        string name;
        int price;

        cout << "Enter book name " << i + 1 << " : ";
        cin >> name;
        cout << "Enter book price " << i + 1 << " : ";
        cin >> price;

        books[i] = new Book(name, price);
        if (books[i] == nullptr) {
            cout << "Failed attempt due to file misallocation \n";
            return 1;
        }
 
    }

    for (const auto& book: books) {
        cout << book.getName() << 
    }

    Book* mEx = books[0];
    for (int i = 0; i < 5; i++) {
        if (books[i]->getPrice() > mEx->getPrice()) {
            mEx = books[i];
        }
    }

    cout << "The most expensive is \n";
    cout << mEx->getName() << "Price" << mEx->getPrice() << "\n";

    for (int i = 0; i < 5; i++) {
        delete books[i];
    }

    return 0;
}