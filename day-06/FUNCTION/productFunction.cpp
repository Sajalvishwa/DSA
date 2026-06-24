#include<iostream>
using namespace std;

void product(int a, int b) {
    int result = a * b;
    cout << "The product of " << a << " and " << b << " is: " << result << endl;
}

int main() {
    int num1 = 5;
    int num2 = 10;
    
    product(num1, num2);
    
    return 0;
}