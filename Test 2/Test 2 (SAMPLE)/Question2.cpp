#include <iostream>
#include <fstream>
#include <sstream>
#include <cstring>
#include <iomanip>
#include <vector>
using namespace std;

class Broker {
private:
    string name;
    int buyPrice;
    Broker *nextBuyer;

public:
    // constructor is here
    Broker(string name = "", int buyPrice = 0) {
        this->name = name;
        this->buyPrice = buyPrice;
    }

    //function to set connection
    void setNextBuyer(Broker *next) { nextBuyer = next; }

    friend void show(Broker *head);
    friend void minProfit(Broker *head);
};

// Question a
void show(Broker *head) {
    Broker *curr = head;
    if(head == nullptr) {
        cout << "nothing here \n";
    } else {
        cout << curr->name << "bought the house by " << curr->buyPrice;
        curr = curr->nextBuyer;
        while (curr->nextBuyer != nullptr) {
            cout << curr->name << " --> " << curr->nextBuyer->name << ": price = $ " << curr->buyPrice << "\n";
            curr = curr->nextBuyer;
        }
    }
}

// Qb
void minProfit(Broker *head) {
    Broker *temp = head; // temp is the current node

    // Assume that the first broker has lowest profit
    int minProfit = (temp->nextBuyer)->buyPrice - temp->buyPrice; //profit of first broker
    Broker *minBroker = head;

    // Check with other broker
    while (temp != nullptr) {
        if (temp->nextBuyer != nullptr) { //already sold the house
            //Caculate and compare profit
            int profit = (temp->nextBuyer)->buyPrice - temp->buyPrice;
            if (profit < minProfit) {
                minProfit = profit;
                minBroker = temp;
            }
        } 
        temp = temp->nextBuyer; // go to the next node
    }

    if (minBroker != nullptr) {
        cout << "\nThe broker with the max profit is: \n"
                << "> name: " << minBroker->name << "\n> profit: " << minProfit
                << "\n\n";
    }
}

int main() {
    // create nodes
    Broker broker1("David", 800), broker2("John", 1000), broker3("Peter", 1200),
    broker4("Luna", 1800), broker5("Sophia", 3500);

    // link nodes
    Broker *head = &broker1; // pointer variable
    broker1.setNextBuyer(&broker2);
    broker2.setNextBuyer(&broker3);
    broker3.setNextBuyer(&broker4);
    broker4.setNextBuyer(&broker5);
    broker5.setNextBuyer(nullptr);
    Broker *tail = &broker5; // pointer variable

    show(head);

    // Qb. show brokers with min profit
    minProfit(head);

    return 0;
}