#include<iostream>
using namespace std;

int problem (int a, int b)
{
    int result = (a*a)+(b*b) + (2*a*b);
    cout<<"answer is :"<<result<<endl;
    return result;
}

int main()
{
    int num1 = 3;
    int num2 = 4;
    
    problem(num1, num2);
    
    return 0;
}