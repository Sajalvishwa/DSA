#include <iostream>
using namespace std;

int main() {

    /*
    Question:
    Write a program to calculate the area of a circle.

    Input:
    r (radius)

    Output:
    Area = PI * r * r
    */

    // variable for radius
    float radius;

    // constant value of PI
    const float PI = 3.14159;

    // input from user
    cout << "Enter radius of circle: ";
    cin >> radius;

    // calculating area
    float area = PI * radius * radius;

    // output result
    cout << "\n----- RESULT -----" << endl;
    cout << "Area of circle = " << area << endl;

    return 0;
}