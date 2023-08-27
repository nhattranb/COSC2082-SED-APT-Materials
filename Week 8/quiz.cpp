#include <iostream>
#include <fstream>
#include <sstream>
#include <cstring>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
    vector<string> sList = {"Tran", "Minh", "Nhat", "RMIT"};
    sList.erase(sList.begin()+2);

    void funct(int &pt, int *newAddr){
    pt = newAddr;

    int a = 10, b = 20;
    int *pt = &a;
    funct(pt, &b);
    cout << *pt;

    return 0;
}