#include <iostream>
#include <fstream>
#include <sstream>
#include <cstring>
#include <iomanip>
#include <vector>
using namespace std;

class Customer {
    public:
    string name;
    int expense;
    int bonus;
    Customer* next = nullptr;

    public:
    Customer(string name="", int expense=0, int bonus=0) {
        this->name = name;
        this->expense = expense;
        this->bonus = bonus;
    }

    void setLinks(Customer *next) {
        this->next = next;
    }
};

int main() {
    cout << "testing the functions now. \n";

    Customer c1("Peter", 1000), c2("John", 200), c3("Harry", 1200), c4("Luna", 400);
    c1.next = &c2;
    c2.next = &c3;
    c3.next = &c4;
    c4.next = nullptr;

    cout << "\nLinked list of the transactions is: \n";
    Customer *head = &c1;

     while (head != nullptr) {
         cout << head->name << "(" << head->expense << ")" << " --> ";
         head = head->next;
     }
    int largestExp = c1.expense;
    for (int i = 1; i < 4; i++) {
        if(largestExp < head->expense) {
            largestExp = c2->expense;
        }
    }
}