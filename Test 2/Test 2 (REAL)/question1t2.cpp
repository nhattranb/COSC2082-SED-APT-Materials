/*
  RMIT University Vietnam
  Course: EEET2482/COSC2082
  Semester: 2023-2
  Lab Assessment: 2 (REAL)
  Author: Tran Minh Nhat
  ID: s3926629
  Compiler used: g++ 8.1.0
  Created and working date: 09/9/2023
  Acknowledgements: Inspired by the Question2 code from the Mock test
*/

#include <iostream>
#include <fstream>
#include <sstream>
#include <cstring>
#include <iomanip>
#include <vector>
using namespace std;

class Place {
   private:
   string name;
   double distance;
   Place *nextPlace = nullptr;

   public:
   Place(string name="", double distance=0) {                // constructor is here!
      this->name = name;
      this->distance = distance;
   }

   void setNextPlace(Place *next) { nextPlace = next; }

   friend void showDistance(Place *head);     // make it accessible!
   friend void showTotal(Place *head);
   friend void showPartial(Place *head, Place *tail);
};

// question 1a
void showDistance(Place *head) {
   Place *curr = head;
   if(head == nullptr) {
        cout << "nothing to see here \n";
   } else {
       curr = curr->nextPlace;
       while (curr->nextPlace != nullptr) {
          cout << curr->name << " --> " << curr->nextPlace->name << ": " << curr->distance << "km \n";
          curr = curr->nextPlace;
          if (curr->nextPlace == head) {
             cout << curr->name << " --> " << curr->nextPlace->name << ": " << curr->distance << "km \n";
          }
       }
   }
}

// question 1b
void showTotal(Place *head) {
   Place *curr = head;            // this is the current node
   double total = 0;
   while (curr != nullptr) {
      total = total + curr->distance;
      curr = curr->nextPlace;
   }
   cout << "The total destination for the whole journey is " << total << "km \n";
}

// question 1c
void showPartial(Place *head, Place *tail) {
   Place *curr = head;
   double gap = 0;
   if (head == nullptr) {
      cout << "Invalid locations, please try again. \n";
   } else if (tail == nullptr) {
      cout << "Cannot find the finish line. \n";
   } else {
      while (curr != tail) {
        gap = gap + curr->distance;
        curr = curr->nextPlace;
      }
   }
   cout << "Hey Michael! Where are you now? " << head->name << "\n";
   cout << "Where do you want to go to? " << tail->name << "\n";
   cout << "Your destination length is " << gap << "km. \n";
}

int main() {
    cout << "question 1 is running. \n";
    
    // linked list creation
    Place p0("Beginning", 0.0), p1("RMIT", 3.0), p2("Lotte Mart", 3.1), p3("Go!", 1.8),
          p4("Crescent Mall", 2.5), p5("SC VivoCity", 1.2), p6("RMIT", 0.0);
    
    // implementation of the methods
    Place *head = &p0;
    p0.setNextPlace(&p1);
    p1.setNextPlace(&p2);
    p2.setNextPlace(&p3);
    p3.setNextPlace(&p4);
    p4.setNextPlace(&p5);
    p5.setNextPlace(&p6);
    p6.setNextPlace(nullptr);
    Place *tail = &p6;

    // results of the questions
    showDistance(head);
    showTotal(head);
    showPartial(head, tail);

    cout << "Thanks for using the software. Have a nice day! \n";
    return 0;
}