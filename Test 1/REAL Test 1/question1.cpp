/*
  RMIT University Vietnam
  Course: EEET2482/COSC2082
  Semester: 2023-2
  Lab Assessment: 1 (REAL)
  Author: Tran Minh Nhat
  ID: s3926629
  Compiler used: g++ 8.1.0
  Created  date: 05/8/2023
  Acknowledgement: 1. https://www.geeksforgeeks.org/program-for-sum-of-the-digits-of-a-given-number/
  Acknowledgement: 2. Code reuse from "2022_q2.cpp" from Dr Ling Huo Chong
*/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

int SumDigit(int l) {                              // function a
    int sum = 0;
    while (l != 0) {
        sum = sum + l % 10;
        l = l / 10;
    }
    return sum;
}

bool CheckPal(int s, int v, int r) {                       // function b
    // check for palindrome
    int l, v, r;
    int s = SumDigit(l);
    v = s;
    while(s > 0) {
      r = r * 10 + s % 10;
      s = s / 10;
   }
   if(v == r) {
     cout << v << " is CONFIRMED a palindrome" << "\n";
     return true;
   } else {
     cout << v << " is NOT a palindrome" << "\n";
     return false;
   }

}

string recPal(int l, int s, int c) {
    if (c < 0) {
      cout << "add more... \n"; 
    } else {
      cout << "subtract more... \n";
    }
}

int main (int argc, char** argv) {                                   // client code
    cout << "Welcome to the test. Have a good day! \n";
    cout << "testing... \n";

    string filename = argv[1];
    int s, l;
    SumDigit(l);
    cout << SumDigit(l) << "\n";

    ifstream ifile(filename); 

    ifile.open("data1-1.dat", ios::out);               // opening the file
    
    if (ifile.is_open()) {                      // implementation
          int l;
          s = SumDigit(l);
          cout << s << "\n";
          bool b;
          if (b = true) {
            cout << l << "is a Palindrome!" << "\n";
          } else {
            cout << l << "is NOT a Palindrome!" << "\n";
          }
          ifile.close();
    } else {
      cerr << "File could NOT be opened :( sorry \n" << endl;
      return -1;
    }

    return 0;
}