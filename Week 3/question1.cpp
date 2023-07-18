#include <iostream>
#include <fstream>
using namespace std;

int main() {
    char str[50];

    std::fstream myfile;
    myfile.open("myFile.dat", std::ios::out);
    if (!myfile) {
        std::cerr << "Fail to create/open file \n";
        return -1;
    }

    int num = 10;
    myfile << num << " Writing to a .dat file !";
    myfile.close(); // close the file.
    cout << "Wrote to the file ! \n"
}