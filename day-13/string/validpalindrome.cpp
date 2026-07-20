#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isPalindrome(string s)
{
    int start = 0;
    int end = s.length() - 1;

    while (start < end)
    {
        // Left se special characters skip karo
        while (start < end && !isalnum(s[start]))
        {
            start++;
        }

        // Right se special characters skip karo
        while (start < end && !isalnum(s[end]))
        {
            end--;
        }

        // Case ignore karke compare karo
        if (tolower(s[start]) != tolower(s[end]))
        {
            return false;
        }

        start++;
        end--;
    }

    return true;
}

int main()
{
    string s;

    cout << "Enter a string: ";
    getline(cin, s);

    if (isPalindrome(s))
    {
        cout << "Valid Palindrome";
    }
    else
    {
        cout << "Not a Palindrome";
    }

    return 0;
}