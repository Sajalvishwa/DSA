#include <iostream>
using namespace std;

void CountSort(int *arr, int n)
{
    // Step 1 : Maximum find karo
    int max = arr[0];

    for(int i = 1; i < n; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }

    // Step 2 : Count array
    int count[100] = {0};   // 100 sirf example ke liye

    // Step 3 : Counting
    for(int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }

    // Step 4 : Original array me bhar do
    int index = 0;

    for(int i = 0; i <= max; i++)
    {
        while(count[i] > 0)
        {
            arr[index] = i;
            index++;
            count[i]--;
        }
    }

    // Print
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    
}

int main ()
{
    int arr[] = {4, 2, 2, 8, 3, 3, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    CountSort(arr, n);
}