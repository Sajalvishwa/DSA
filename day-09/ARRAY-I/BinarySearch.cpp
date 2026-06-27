#include<iostream>
using namespace std;

int BinSearch(int arr[], int n, int key)
 {
    int start = 0;
    int end = n - 1;

    while(start <= end) 
    {
        int mid = start + (end - start) / 2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1; // Key not found
}

int main()
{
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 45, 56, 67, 78};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 22;

    int result = BinSearch(arr, n, key);
    cout << "Element found at index: " << result << endl;
    return 0;
}