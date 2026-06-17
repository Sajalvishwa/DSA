#include<iostream>
using namespace std;

bool palindrome(int n)
{
    int original = n;
    int reversed = 0;

    while (n > 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }

    if(original == reversed)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main() {
    int num ;

    cout << "Enter a number: ";
    cin >> num;
    
    if (palindrome(num)) {
        cout << num << " is a palindrome." << endl;
    } else {
        cout << num << " is not a palindrome." << endl;
    }
    
    return 0;
}