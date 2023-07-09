#include <iostream>
#include <fstream>
using namespace std;

int size = 5;
int myInts[size];

void userInput() {
    cout<<"Enter your array elements: "<<endl;
    for(int i = 0; i < size; i++) {
        cin>>myInts[i];
    }
}

void print() {
    cout<<"The array elements are: "<<endl;
    for(int i = 0;i < size; i++) {
        cout<<myInts[i]<<" ";
    }
    cout<<endl;
}

int main() {
    cout << "Hello friends! this is question 1 of tut 2 \n";
    userInput();
    print();
    min = myInts[0];
    for(i = 0; i < size; i++){
        if(myInts[i] < min){
            min = myInts[i];
        }
    }
    cout << "the Minimum Element of this array is \n" << min;
    return 0;
}