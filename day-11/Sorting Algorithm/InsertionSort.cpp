#include<iostream>
using namespace std;

void InsertionSort(int *arr, int n)
{
    // i = jis element ko uski sahi position par insert karna hai
    for (int i = 0; i < n; i++)
    {
        // Current element ko store kar lo
        int current = arr[i];

        // Current ke left wale element se compare karna start karenge
        int previous = i - 1;

        // Jab tak previous valid hai aur current se bada hai
        while (previous >= 0 && arr[previous] > current)
        {
            // Bade element ko ek position right shift karo
            swap(arr[previous], arr[previous + 1]);

            // Ab aur left jaake check karo
            previous--;
        }

        // Current element ko uski correct position par rakh do
        arr[previous + 1] = current;
    }
}

int main()
{
    // Unsorted array
    int arr[] = {64, 34, 25, 12, 22, 11, 90};

    // Array ka size nikalna
    int n = sizeof(arr) / sizeof(arr[0]);

    // Insertion Sort call
    InsertionSort(arr, n);

    // Sorted array print karna
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}