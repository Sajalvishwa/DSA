#include<iostream>
using namespace std;

int largest(int a, int b, int c) {
    if (a > b && a > c) {
        return a;
    } else if (b > c) {
        return b;
    } else {
        return c;
    }
}

int main() {
    int num1 = 10;
    int num2 = 20;
    int num3 = 15;
    
    int result = largest(num1, num2, num3);
    cout << "The largest number among " << num1 << ", " << num2 << ", and " << num3 << " is: " << result << endl;
    
    return 0;
}