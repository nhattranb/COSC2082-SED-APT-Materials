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
    int avCopies;
    vector<Book*> books;

    public:
    User(string name="", vector<Book*> books) {
        this->name = name;
        this->books = books;
    }

    bool doBorrow(Book &abook) {
        if (avCopies = 0) {
           return false;
        } else {
           avCopies = avCopies - 1;
           abook.addBorrowerName("John Doe");
           return true;
        }
    }

    void doReturn(Book &abook) {

    } 
};

int main() {
    User u1("Tran Minh Nhat", 2);
    vector<Book*> books;
    for (int i = 0; i < 3; i++) {
        Book* book = new Book();
        books.push_back(book);
    }
    return 0;
}