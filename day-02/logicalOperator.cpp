// Logical Operators in C++
#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20;

    // Logical AND (&&)
    cout << "(a < b && a > 5) = " << (a < b && a > 5) << endl;   // 1 (true)

    // Logical OR (||)
    cout << "(a > b || a < 15) = " << (a > b || a < 15) << endl; // 1 (true)

    // Logical NOT (!)
    cout << "!(a < b) = " << !(a < b) << endl;                   // 0 (false)

    return 0;
}