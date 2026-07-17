#include<iostream>
using namespace std;

int DiagonalSum(int arr[3][3], int n)
{
    int sum =0;

    for(int i=0;i<n;i++)
    {
       sum += arr[i][i]; // Primary diagonal
       if(i!=n-i-1) // Secondary diagonal
       {
           sum += arr[i][n-i-1];
       }
    }
    cout<<"Sum of diagonal elements is: "<<sum<<endl;

    return sum;
}

int main()
{
    int arr[3][3]={{1,2,3},
                 {4,5,6},
                 {7,8,9}};
    
    DiagonalSum(arr, 3);
}
