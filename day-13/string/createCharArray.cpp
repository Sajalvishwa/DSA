#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char arr[6] = "Hello";

    char arr2[6] = {'H','e','l','l','o','\0'};

    char arr3[] = "Hello";

    char arr4[] = {'H','e','l','l','o','\0'};


    cout<<strlen(arr)<<endl;
    cout<<strlen(arr2)<<endl;
    cout<<strlen(arr3)<<endl;
    cout<<strlen(arr4)<<endl;

    return 0;
}