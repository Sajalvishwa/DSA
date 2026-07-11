#include<iostream>
using namespace std;

void InsertionSort(int *arr, int n)
{
    for (int i=0; i<n; i++)
    {
        int current = arr[i];
        int pervious = i-1;
        while (pervious >= 0 && arr[pervious] > current)
        {
            swap(arr[pervious], arr[pervious+1]);
            pervious--;
        }
        arr[pervious+1] = current;
    }
}


int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    InsertionSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}