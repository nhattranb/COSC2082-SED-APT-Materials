#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string str;
    cout << "Please type in your string \n";
    cin >> str;
    char string[] = str;
    cout << "Individual characters from given string: \n";
    //Iterate through the string and display individual character  
    for(int i = 0; i < str.length(); i++) {  
        cout << "%c " << string[i];  
    }  
    return 0;  
}