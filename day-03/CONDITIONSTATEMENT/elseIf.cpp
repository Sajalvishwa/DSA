#include <iostream>
using namespace std;

int main () {
    int marks;
    cout<<"enter marks :";
    cin>>marks;

    if(marks >= 90) {
        cout << "Grade A" << endl;
    } else if (marks >= 80) {
        cout << "Grade B" << endl;
    } else if (marks >= 70) {
        cout << "Grade C" << endl;
    } else {
        cout << "Grade D" << endl;
    }
}