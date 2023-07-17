#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int arr[5] = {1,2,3,4,5};
    int *ptr = arr;
    ptr++;

    std::cout << *ptr << "\n";
}