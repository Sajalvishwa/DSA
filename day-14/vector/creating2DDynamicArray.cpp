#include<iostream>
using namespace std;

int main()
{
    int rows, cols;
    cout<<"Enter the number of rows : ";
    cin>>rows;

    cout<<"Enter the number of columns : ";
    cin>>cols;

    int **matrix = new int*[rows];

    for(int i=0; i<rows; i++)
    {
        matrix[i] = new int[cols];
    }

    // Data storing
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            cout<<"Enter element for row "<<i+1<<" and column "<<j+1<<" : ";
            cin>>matrix[i][j];
        }
        cout<<endl;
    }

    // Data displaying
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    // Deleting memory
    for(int i=0; i<rows; i++)
    {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}