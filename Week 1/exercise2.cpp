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
    int array[size], i, max, total = 0;

    cout << "Please enter values of 5 integers for your string : ";

    for(i=0; i< size; i++) {
        cin >> array[i];
    }
    
    max = array[0];
    for(i=0; i< size; i++)
    {
        if(array[i] > max)
        {
            max = array[i];
        }
        total += array[i];
    }

    cout << "Your 5 integers are as follows: ";
    for(i=0; i< size; i++)
    {
        cout << array[i] << ' ';
    }
    
    cout << "\nMax value of the array: " << max;
    cout << "\nAverage value of the array: " << (double)total/SIZE;
    cout << "\n";

    return 0;
}