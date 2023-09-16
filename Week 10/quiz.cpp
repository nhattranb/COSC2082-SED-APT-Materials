#include <iostream>
#include <fstream>
#include <sstream>
#include <cstring>
#include <iomanip>
#include <vector>
using namespace std;

int main(int argc, char* argv[]) {
    if (argc == 3) {
        cout << argv[1] << "\n";
    } else if (argc == 1) {
        cout << argv[0] << "\n";
    } else if (argc == 2) {
        cout << "INVALID RESULTS!!!" << "\n";
    }
    return 0;
}