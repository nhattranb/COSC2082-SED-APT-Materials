/*
  RMIT University Vietnam
  Course: EEET2482/COSC2082
  Semester: 2023-2
  Lab Assessment: 1 (REAL)
  Author: Tran Minh Nhat
  ID: s3926629
  Compiler used: g++ 8.1.0
  Created  date: 05/8/2023
  Acknowledgement: Code reuse from code file "2022_q2.cpp" from Dr Ling Huo Chong.
*/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

#define ELEMENT_H
#define SIZE 4

ostream &operator << (ostream &output, Time &t){
    output << t.hour << ":" << t.minute << "\n";
    return output;
}

class Time {                                   // the class is here!
   private:
   int hour;
   int minute;

   public:

   friend ostream &operator << (ostream &output, Time &t);
   friend Time operator + (Time const &t);

   Time(int hour, int minute) {                 // the basic constructor (function a)
      if (hour > 23 || hour < 0) {
        hour = 0;
      } else {
        this->hour = hour;
      }
      if (minute > 59 || minute < 0) {
        minute = 0;
      } else {
        this->minute = minute;
      }
   }

   Time() {

   }

   Time operator + (Time const &t) {              // the operator of function b
     Time comb(hour, minute);
     comb.minute = this->minute + t.minute;
     comb.hour = this->hour + t.hour;
     return comb;
     if (comb.hour > 23) {
      comb.hour = 0;
     } else {
      comb.hour = this->hour + t.hour;
     if (comb.minute > 60) {
      comb.hour = comb.hour + 1;
      comb.minute = comb.minute - 60;
     } else {
      comb.minute = this->minute + t.minute;
     }
     this->hour = comb.hour;
     this->minute = comb.minute;
     return comb;
   }

};

int main()
{                                                // the client code
  cout << "Welcome to the test. Have a good day! \n";
  cout << "testing... \n";

   ifstream ifile;
   istringstream iss;
    int hour, minute;
    Time tArr[4];

    ifile.open("data2-1.dat");
    if (!ifile) {
        cerr << "File could not be opened\n" << endl;
        return -1;
    }
    
    while(ifile.peek()!=EOF) {
        iss.clear();

        string hour, minute;
        getline(ifile, hour);
        istringstream iss(hour);
        iss >> hour;
        getline(ifile, minute, '\n');
        istringstream iss(minute);
        iss >> minute;
    }

    ifile.close();

    cout << "end of the software \n";
    return 0;
}
