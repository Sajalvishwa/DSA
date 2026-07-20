#include<iostream>
#include<cstring>
using namespace std;

void reverseCharArray( char str[],  int n)
{
    int start=0;
    int end = n-1;

    while(start<end)
    {
        swap(str[start], str[end]);
        start++;
        end--;
    }
}

int main()
{
    char str[100]="helloworld";
    int n = strlen(str);
    reverseCharArray(str,n);
    cout<<str;
}