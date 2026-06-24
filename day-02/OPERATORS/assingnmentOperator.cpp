// Assignment Operators in C++
#include <iostream>
using namespace std;

int main() {
    int a = 10;

    cout << "Initial value of a = " << a << endl;

    // Simple assignment
    a = 20;
    cout << "After a = 20      : " << a << endl;

    // Add and assign
    a += 5;   // a = a + 5
    cout << "After a += 5      : " << a << endl;

    // Subtract and assign
    a -= 10;  // a = a - 10
    cout << "After a -= 10     : " << a << endl;

    // Multiply and assign
    a *= 3;   // a = a * 3
    cout << "After a *= 3      : " << a << endl;

    // Divide and assign
    a /= 5;   // a = a / 5
    cout << "After a /= 5      : " << a << endl;

    // Modulus and assign
    a %= 4;   // a = a % 4
    cout << "After a %= 4      : " << a << endl;

    return 0;
}