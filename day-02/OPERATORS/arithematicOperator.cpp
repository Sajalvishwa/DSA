#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 3;

    // Arithmetic Operators
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;
    cout << "a % b = " << a % b << endl;

    cout << "-----end of arithmetic operations-----" << endl;
    cout << "------start of unary operations------" << endl;

    // Reassign value to a
    a = 5;

    cout << "Initial value of a = " << a << endl;

    // Unary Operators
    cout << "Unary +a = " << +a << endl;
    cout << "Unary -a = " << -a << endl;
    cout << "++a = " << ++a << endl;
    cout << "a++ = " << a++ << endl;
    cout << "--a = " << --a << endl;
    cout << "a-- = " << a-- << endl;

    cout << "Final value of a = " << a << endl;

    return 0;
}