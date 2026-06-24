#include <iostream>
using namespace std;

int main(){
    double income;
    cout<<"Enter your income :";
    cin>>income;

    if(income < 500000){
        cout<<"No tax"<<endl;
    } else if (income >= 5,00,000 && income < 10,00,000){
        cout<<"Tax is 20%"<<endl;
    } else {
        cout<<"Tax is 30%"<<endl;
    }
}