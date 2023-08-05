#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Account {
    public:
    string name;
    float amount;

    Account(string myName, float myAmount) {
        name = myName;
        account = myAmount;
    }

    public:
    void withdraw(float num) {
        
    }
};

int main() {
    cout << "Welcome to the program! \n";
    Account bankAcc1("Nhat Tran", 6790000);
    Account bankAcc2("Anna Felipe", 7520000);
    Account bankAcc3("Quang Nhat Tran", 7670000);
    
}