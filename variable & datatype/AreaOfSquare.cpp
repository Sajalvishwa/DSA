#include <iostream>
using namespace std;

int main() {
    int n; // variable to store side of square

    // taking input from user
    cout << "Enter side of square: ";
    cin >> n;

    // calculating area of square
    int area = n * n;

    // printing result
    cout << "Area of square is: " << area << endl;

    return 0;
}