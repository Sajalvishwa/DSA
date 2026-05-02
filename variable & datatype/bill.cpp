#include <iostream>
using namespace std;

int main() {

    /*
    Question:
    Enter cost of 3 items from the user (using float data type) -
    a pencil, a pen and an eraser.

    You have to output the total cost of the items back to the user as their bill.

    (Add on): You can also try adding 18% GST tax to the items in the bill
    as an advanced problem.
    */

    // variables to store cost of items
    float pencil, pen, eraser;

    // input from user
    cout << "Enter cost of pencil: ";
    cin >> pencil;

    cout << "Enter cost of pen: ";
    cin >> pen;

    cout << "Enter cost of eraser: ";
    cin >> eraser;

    // total cost calculation
    float total = pencil + pen + eraser;

    // printing bill
    cout << "\n----- BILL -----" << endl;
    cout << "Total cost (without GST): " << total << endl;

    // GST calculation (18%)
    float gst = total * 0.18;
    float finalBill = total + gst;

    // final output
    cout << "GST (18%): " << gst << endl;
    cout << "Final Bill (with GST): " << finalBill << endl;

    return 0;
}