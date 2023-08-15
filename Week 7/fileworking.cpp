#include <iostream>
#include <fstream>
using namespace std;


int main() {
   cout << "personal development code \n";
   
   ifstream myfile("Results.txt", ios::binary);
   myfile.seekg(0, ios::end);
   int file_size = myfile.tellg();
   cout << "The size of the file is" << " " << file_size << " " <<" bytes \n";

   char* buffer = new char[100];
   myfile.read(buffer, 100);
   if(!myfile) {
      std::cerr << "Error reading file, could only read " << myfile.gcount() << " bytes" << std::endl;
   }
   myfile.close();
   delete[] buffer;

   return 0;
}