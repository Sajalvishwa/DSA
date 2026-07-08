#include<iostream>
using namespace std;

int trappingWater (int arr[], int n)
{
    int leftmax[n];

    int rightmax[n];

    int water = 0;


    // leftmax array
    leftmax[0]= arr[0];

    for(int i=1; i<n; i++)
    {
        leftmax[i] = max(leftmax[i-1], arr[i]);
    }

    // rightmax array
    rightmax[n-1] = arr[n-1];
    for(int i=n-2; i>=0; i--)
    {
        rightmax[i] = max(rightmax[i+1], arr[i]);
    }

    // calculate water trapped
    for(int i=0; i<n; i++)
    {
        water += min(leftmax[i], rightmax[i]) - arr[i];
    }

    return water;
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Water trapped = " << trappingWater(arr, n) << endl;

    return 0;
}