#include<iostream>
using namespace std;

int printarray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

int main () 
{
    int ar[5]={1,2,3,4,5};
    int n=sizeof(ar)/sizeof(ar[0]);

    int start=0;
    int end=n-1;

    while(start<end)
    {
        int temp=ar[start];
        ar[start]=ar[end];
        ar[end]=temp;
        start++;
        end--;
    }
    
    printarray(ar,n);
}