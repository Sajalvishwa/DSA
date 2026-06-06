#include <iostream>
using namespace std;

int main () {
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int sum=0;
    while(num>0){
        int lastDigit= num%10;
        if(lastDigit%2!=0){
             sum+=lastDigit;
        }
        num=num/10;
    }
    cout<<"Sum of odd digits is: "<<sum<<endl;
    return 0;
}