#include<iostream>
using namespace std;

int decToBin (int decnum)
{
    int n = decnum;
    int pow = 1;
    int binnum=0;

    while(n>0)
    {
        int rem = n%2;
        binnum += rem*pow;
        pow *= 10;
        n /= 2;
    }

    cout << "Binary number is: " << binnum << endl;
}

int main ()
{
    int decimal;

    cout << "Enter a decimal number: ";
    cin >> decimal;

    decToBin(decimal);

    return 0;
}