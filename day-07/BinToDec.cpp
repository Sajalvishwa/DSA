#include<iostream>      // Input/Output ke liye library
using namespace std;    // std:: likhne ki zarurat nahi padegi

// Binary number ko Decimal me convert karne wala function
int BinToDec (int n)
{
    // User ke input ko ek alag variable me store kiya
    int binnum = n;

    // Decimal answer ko store karega, shuru me 0
    int decnum = 0;

    // 2^0 se multiplication start hoga
    int power = 1;

    // Jab tak binary number khatam na ho jaye
    while (binnum > 0)
    {
        // Last digit nikal rahe hain (0 ya 1)
        int lastdigit = binnum % 10;

        // Agar last digit 1 hai to uska decimal value add karo
        // Formula: lastdigit × current power of 2
        decnum += lastdigit * power;

        // Agli binary position ke liye power ko double kar do
        // (1, 2, 4, 8, 16...)
        power *= 2;

        // Last digit hata do
        binnum /= 10;
    }

    // Decimal number print karo
    cout << "Decimal number is :" << decnum << endl;

    // Decimal value return karo
    return decnum;
}

int main ()
{
    // Binary number store karne ke liye variable
    int binary;

    // User se input lo
    cout << "Enter a binary number: ";

    // User ka binary input read karo
    cin >> binary;

    // Function call karke binary ko decimal me convert karo
    BinToDec(binary);

    // Program successfully end hua
    return 0;
}