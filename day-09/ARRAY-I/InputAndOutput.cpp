#include<iostream>
using namespace std;

int main()
{
    int arr[5];
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Enter 5 elements:\n";

    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "\nArray Elements:\n";

    for(int i = 0; i < size; i++)
    {
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }

    return 0;
}