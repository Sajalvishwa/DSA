#include<iostream>
#include<cstring>
using namespace std;

bool validPalindrome(char str[], int n)
{
    int start=0;
    int end = n-1;

    while(start < end)
{
    if(str[start] != str[end])
    {
        return false;
    }
    start++;
    end--;
}

return true;
}

   

int main ()
{
    char str[100]="racecar";
    int n = strlen(str);
  
    cout<<validPalindrome(str,n);
}