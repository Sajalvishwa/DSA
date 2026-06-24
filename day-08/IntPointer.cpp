#include<iostream>
using namespace std;

int main()
{
    int a = 10;
    int *ptr = &a;

    cout<<"address of a is: "<<&a<<endl;
    cout<<"value of ptr is: "<<ptr<<endl;
    cout<<"value pointed to by ptr is: "<<*ptr<<endl;
    return 0;
}