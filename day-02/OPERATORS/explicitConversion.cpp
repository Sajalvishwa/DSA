#include <iostream>
using namespace std;

int main() {
    double price = 99.99;

    // Explicit Conversion (Type Casting)
    int roundedPrice = (int)price;

    cout << "Original value: " << price << endl;
    cout << "After explicit conversion to int: " << roundedPrice << endl;

    return 0;
}