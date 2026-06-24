#include<iostream>
using namespace std;

int main () 
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(int);
    
    for(int i = 0; i<=size-1; i++)
    {
        cout << "Element at index " << i << ": " << arr[i] << endl;
    }
    return 0;
}