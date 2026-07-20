#include<iostream>
#include<cstring>
using namespace std;

void toUpperCase(char str[] , int n)
{;
    for(int i=0; i<n; i++ )
    {
        
     int ch = str[i];
        if(ch>='A' && ch<='Z')
        {
            continue;
        }
        else{
            
            str[i] = ch -'a' + 'A';
        
        }
}
}

int main()
{
    char str[100]="helloworld";
    int n = strlen(str);
    toUpperCase(str,n);
    cout<<str;
}