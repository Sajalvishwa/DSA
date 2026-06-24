#include<iostream>
using namespace std;

int main () 
{
    int arr[5];
    int size = sizeof(arr) / sizeof(int);
    
    cout << "Enter 5 elements: ";
    for(int i = 0; i<=size-1; i++)
    {
        cin >> arr[i];
    }
    
    cout << "The elements of the array are: ";
    for(int i = 0; i<=size-1; i++)
    {
        cout << "Element at index " << i << ": " << arr[i] << endl;
    }
    return 0;
}