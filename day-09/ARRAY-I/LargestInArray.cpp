#include<iostream>
using namespace std;

int main()
{
    int arr[10];
    int n = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int largest = arr[0];

    for(int i = 1; i < n; i++)
    {
        if(arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    cout << "Largest element: " << largest << endl;

    return 0;
}