#include<iostream>
using namespace std;

char characterFunction(char ch)
{

     if(ch == 'z')
     {
        return 'a';
      } else 
      {
        return ch + 1;
         }
}

int main()
{
    char inputChar = 'x';
    char result = characterFunction(inputChar);
    cout << "The next character after '" << inputChar << "' is: '" << result << "'" << endl;
    return 0;
}