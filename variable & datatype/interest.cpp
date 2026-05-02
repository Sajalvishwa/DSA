#include <iostream>
using namespace std;

int main() {

    /*
    Question:
    Build a Simple Interest Calculator.

    Input:
    P = Principal amount
    R = Rate of interest
    T = Time (in years)

    Output:
    Simple Interest = (P * R * T) / 100
    */

    // variables
    float P, R, T;

    // input from user
    cout << "Enter Principal (P): ";
    cin >> P;

    cout << "Enter Rate (R): ";
    cin >> R;

    cout << "Enter Time (T): ";
    cin >> T;

    // calculating simple interest
    float SI = (P * R * T) / 100;

    // output result
    cout << "\n----- RESULT -----" << endl;
    cout << "Simple Interest = " << SI << endl;

    return 0;
}