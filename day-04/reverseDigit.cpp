#include <iostream>
using namespace std;

int main () {
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int res=0;
    while(num>0){
        int lastDigit= num%10;
        res=res*10+lastDigit;
        num=num/10;
    }
    cout<<"Reversed number is: "<<res<<endl;
    return 0;
}