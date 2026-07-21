#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char str[100]="helloworld";
    int n = strlen(str);
    cout<<n;

    strlen(str);

    strcpy(str,"hello");

    char str2[100];

    strcpy(str2,str);

    strcmp(str,str2);

    strcat(str,str2);

    cout<<str;
}