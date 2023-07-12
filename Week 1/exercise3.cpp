#include <array>
#include <iostream>
#include <string>
using namespace std;

char uppercase(char letter) {
    return letter >= 'a' && letter <= 'z' ? letter - 32 : letter;
}

char lowercase(char letter) {
    return letter >= 'A' && letter <= 'Z' ? letter + 32 : letter;
}

int main() {
    string test; //char str[MAX_LEN]; //if you are using array of characters
    int i;

    cout << "Please enter your string: ";
    /* getline function extracts characters from cin and 
    stores them into str until '\n' is entered (in this example) */
    getline(cin, test); 
    /* if you are using array of characters, then the correct function is
    cin.getline(str, MAX_LEN); */

    cout << "You have entered the string " << test << '\n';

    for(i=0; test[i] != '\0'; i++) // '\0' indicates the end of string
        if(test[i] >= 'a' && test[i] <= 'z')
            test[i] = test[i] - ('a' - 'A'); // minus 32 (i.e. 'a' - 'A') to convert lowercase to uppercase
        else if(test[i] >= 'A' && test[i] <= 'Z')
            test[i] = test[i] + ('a' - 'A'); // add 32 (i.e. 'a' - 'A') to convert uppercase to lowercase
        
    cout << "Result is " << test << '\n';
        
    return 0;
}