#include<iostream>
using namespace std;

int main (){
    int number;
    cout << "Enter a number: ";
    cin >> number;
    int isEven = number % 2 == 0 ? 1 : 0;
    return 0;
}