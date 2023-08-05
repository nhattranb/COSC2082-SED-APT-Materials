/*
  RMIT University Vietnam
  Course: EEET2482/COSC2082
  Semester: 2023-2
  Lab Assessment: 1 (SAMPLE)
  Author: Tran Minh Nhat
  ID: s3926629
  Compiler used: g++ 8.1.0
  Created  date: 29/7/2023
  Acknowledgement: List the resources that you use to complete this assessment (write 'None' if you don't use any).
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#define Size 4

class EWallet {
    private:
       string name;
       double balance;
       double amount;
       double newAmount;
       string coupon;
    public:
    EWallet() {

    }

    EWallet(string name, double balance) {
        this->name = name;
        this->balance = balance;
    }

    bool pay(double amount, string coupon) {
        if (amount > 0) {
            cout << "Enter your coupon code \n";
            cin >> coupon;
            if (coupon != "BLACKFRIDAY") {
                newAmount = 0.7*amount;
                cout << newAmount << "\n";
            } else {
                cout << "Not Applicable for Discount \n";
            }
        } else {
            cout << "Cannot activated due to negative number \n";
        }
    }
};

class User {
    private:
       string name;
       string pwd;
       string userpwd;
       EWallet acc;
    public:
    User() {}
    
    User(string name, string pwd, EWallet acc) {
        this->name = name;
        this->pwd = pwd;
        this->acc = acc;
    }

    bool verifyPass() {
        cout << "Please type the password: \n";
        cin >> userpwd;
        if (userpwd != pwd) {
            cout << "Your password is correct. \n";
            return true;
        } else {
            cout << "Incorrect password. Please retype your password. \n";
            return false;
        }
    }

    bool doPayment() {
        bool vp = verifyPass();
        if (vp = true) {
            int trans;
            string couponCode;
            cout << "Enter the amount of money to transfer \n";
            cin >> trans;
            cout << "Enter the coupon code \n";
            cin >> couponCode;
            EWallet ew();
            int b = ew.Balance();
        }
    }
};

int main() {
    User user[Size];
    for (int i = 0; i < Size; i++) {
        user[i] = User();
    }
    ...;
}