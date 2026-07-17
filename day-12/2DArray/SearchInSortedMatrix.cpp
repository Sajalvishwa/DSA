#include<iostream>
using namespace std;

int searchInSortedMatrix(int arr[4][4], int n, int m, int key)
{
    int row=0;
    int col=m-1;

    while(row<n && col>=0)
    {
        if(arr[row][col]==key)
        {
            cout<<"Element found at index: "<<row<<","<<col<<endl;
            return 1;
        }
        else if(arr[row][col]>key)
        {
            col--;
        }
        else
        {
            row++;
        }
    }
    cout<<"Element not found"<<endl;
    return 0;
}

int main()
{
    int arr[4][4]={{10,20,30,40},
                   {15,25,35,45},
                   {27,29,37,48},
};

    int key=29;
    searchInSortedMatrix(arr,4,4,key);
    return 0;
}