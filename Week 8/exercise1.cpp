#include <iostream>
#include <fstream>
#include <sstream>
#include <cstring>
#include <iomanip>
#include <vector>
using namespace std;

class Book {
    private:
    string title;
    int avCopies;
    vector<string> borrowers;

    public:
    Book(string title="", int avCopies=0, vector<string> borrowers) {
        this->title = title;
        this->avCopies = avCopies;
        this->borrowers = borrowers;
    }

};

class User {
    private:
    string name;
    vector<Book*> books;

    public:
    User(string name="", vector<Book*> books) {
        this->name = name;
        this->books = books;
    }

    bool doBorrow(Book &abook) {
        if (Book.avCopies = 0) {
           return false;
        } else {
           abook.decreaseAvailableCopies();
           abook.addBorrowerName("John Doe");
           return true;
        }
    }

    void doReturn(Book &abook) {

    } 
};