#include <iostream>
#include <fstream>
using namespace std;

int main() {
    char word[50], str[50];

    std::fstream myfile;
    myfile.open("myFile.dat", std::ios::out);
    if (!myfile) {
        std::cerr << "Fail to create/open file \n";
        return -1;
    }

    int num = 10;
    myfile << num << " Make C++ Language Great Again ";
    myfile.close(); // close the file.
    cout << "Successfully wrote to the file ! \n";

    myfile.open("myFile.dat", std::ios::in);
    myfile >> num >> word;
    myfile.ignore(50, ' ');
    myfile.getline(str, sizeof(str));

    cout << "Read the file: " << std::endl;
    cout << num << " " << word << " " << str << "\n";
    myfile.close();
}