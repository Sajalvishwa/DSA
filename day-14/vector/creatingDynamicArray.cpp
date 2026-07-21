#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;

    int *arr = new int[n];

    for(int i=0; i<n; i++)
    {
        cout<<"Enter element "<<i+1<<" : ";
        cin>>arr[i];
    }

    for(int i=0; i<n; i++)
    {
        cout<<"Element "<<i+1<<" : "<<arr[i]<<endl;
    }
    
    delete[] arr;
    return 0;
}