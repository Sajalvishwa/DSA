#include<iostream>
using namespace std;

void assitantFunction() {
    cout << "This is an assistant function." << endl;
}

void printHello() {
    assitantFunction();
    cout << "Hello, World!" << endl;
}

int main() {
    printHello();
    return 0;
}