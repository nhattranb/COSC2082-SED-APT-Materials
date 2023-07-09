#include <iostream>
using namespace std;

int size = 5;
int arr[5];

void userInput() {
    cout<<"Enter your array elements: \n";
    for(int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
}

void print() {
    cout<<"The array elements are: \n";
    for(int i = 0;i < size; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

int sum(int arr[], int n) {
    int sum = 0; // initialize sum
    for (int i = 0; i < n; i++)
        sum += arr[i]; 
    return sum;
}

int main() {
    cout << "Hello friends! This is exercise 2, let's try some array! \n";
    userInput();
    print();
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Sum of the given array is " << sum(arr, n);
    return 0;
}