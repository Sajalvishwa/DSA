#include <iostream>
using namespace std;

int main (){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int sum = 0;
    int temp = n;
    while(temp>0){
        int digit = temp%10;
        sum += digit*digit*digit;
        temp /= 10;
    }
    if(sum == n){
        cout<<"The number is an Armstrong number."<<endl;
    }
    else{
        cout<<"The number is not an Armstrong number."<<endl;
    }
    return 0;
}