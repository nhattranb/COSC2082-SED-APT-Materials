#include <iostream>
#include <fstream>
using namespace std;

int main() {
    char word[25], str[25];

    std::fstream myfile;
    myfile.open("myPass.dat", std::ios::out);
    if (!myfile) {
        std::cerr << "Fail to create/open file \n";
        return -1;
    }

    myfile << "ABirdInTheTheBush";
    myfile.close(); // close the file.
    cout << "Successfully wrote to the NEW version of file ! \n";

    myfile.open("myPass.dat", std::ios::in);
    myfile >> word;
    myfile.ignore(25, ' ');
    myfile.getline(str, sizeof(str));

    cout << "Read the file: " << std::endl;
    cout << word << " " << str << "\n";
    myfile.close();

    return 0;
}