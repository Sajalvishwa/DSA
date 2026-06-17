#include<iostream>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    for(int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int binomial(int n, int r)
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main()
{
    int n = 4, r = 2;
    cout << "The binomial coefficient C(" << n << ", " << r << ") is: " << binomial(n, r) << endl;
    return 0;
}