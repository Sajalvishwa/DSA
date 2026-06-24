#include<iostream>
using namespace std;

int main()
{
    int a = 10;
    int *ptr = &a;

    float b = 20.5;
    float *ptr2 = &b;

    cout<<"address of b is: "<<&b<<endl;
    cout<<"value of ptr2 is: "<<ptr2<<endl;
    cout<<"value pointed to by ptr2 is: "<<*ptr2<<endl;
    

    cout<<"address of a is: "<<&a<<endl;
    cout<<"value of ptr is: "<<ptr<<endl;
    cout<<"value pointed to by ptr is: "<<*ptr<<endl;
    return 0;
}