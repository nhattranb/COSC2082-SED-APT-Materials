/*
  RMIT University Vietnam
  Course: EEET2482/COSC2082
  Semester: 2023-2
  Lab Assessment: 2 (REAL)
  Author: Tran Minh Nhat
  ID: s3926629
  Compiler used: g++ 8.1.0
  Created and working date: 09/9/2023
  Acknowledgements: Inspired from Question3 code from the Mock test
*/

#include <iostream>
#include <fstream>
#include <sstream>
#include <cstring>
#include <iomanip>
#include <vector>
#include <algorithm>
using namespace std;

class Fruit {
   private:                       // Attributes of the class
   string name;
   double price;

   public:
   Fruit(string name="", double price=0): name(name), price(price) {} // the fruit constructor

   void showInfo(){ cout << "\t" << name << ", $" << price << "\n";}  // print them out!

   friend class Shop;      // Granting access to others!
   friend class Receipt;
};

class Shop {                                      // second major class
   private:
   string name;
   vector<Fruit> fruits;

   public:
   Shop(string name="", vector<Fruit> fruits = {}): 
       name(name), fruits(fruits) {}

   void showShopInfo() {
      cout << "\nThe shop: " << name << ", selling the following items: \n";
      for (Fruit f: fruits) {
          f.showInfo();
      }
   }
};

class Order {
   private:
   string item;
   int quantity;
   vector<Fruit> fruits;

   public:
   Order(string item="", int quantity=0, vector<Fruit> fruits = {}):
       item(item), quantity(quantity), fruits(fruits) {}

   string toString() {
      return "This customer orders" + to_string(quantity) + item + "this time. \n";
   }

   void showOrderInfo() {
      cout << toString();
   }

   friend class Receipt;
};

class Receipt {
   private:
   int receiptID;
   double subtotal;
   vector<Order> orders;

   public:
   Receipt(int receiptID=0, double subtotal=0, vector<Order> orders = {}) {
      this->receiptID = receiptID;
      this->subtotal = subtotal;
      this->orders = orders;
   }

   string toString() {
      return "This order has a receipt ID of " + to_string(receiptID) + " and a subtotal of" + to_string(subtotal);
   }

   void showReceiptInfo() {
      cout << toString();
   }
};

int main() {
    cout << "question 2 testing. \n";

    // implementation of the methods
    Fruit f1("Banana", 1.80), f2("Apple", 0.90), f3("Avocado", 3.00);
    Shop s("NhatFruit", {f1, f2, f3});
    cout << "Welcome to NhatFruit - where we sell nothing but fruits!!! \n";
    s.showShopInfo();

    char item;
    int quantity;
    cout << "Enter your item: \n";
    cin >> item;
    switch (item) {
      case 'Q':
         cout << "Service ended. \n";
         break;
      default:
         cout << "Enter the quantity of your item: \n";
         cin >> quantity;
    }
    cout << "Thank you for using the system. Have a nice day! \n";
    return 0;
}