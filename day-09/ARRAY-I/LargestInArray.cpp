#include<iostream>
using namespace std;

int main()
{
    int arr[10]={5, 2, 9, 1, 5, 6, 3, 7, 8, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
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