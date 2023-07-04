#include <iostream>
#include <fstream>
using namespace std;

int main () {
  ofstream myfile;
  myfile.open ("testing.txt");
  myfile << "Hi everyone, my name is Nhat Tran and I am owning this file.\n";
  myfile << "Have a nice day! \n";
  myfile.close();
  return 0;
}