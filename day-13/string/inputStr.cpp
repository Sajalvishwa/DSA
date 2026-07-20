#include<iostream>
#include<cstring>
using namespace std;    

int main()
{
    char sentence[100];
    cout<<"Enter a sentence: ";
    cin.getline(sentence,100);

    cout<<"The sentence is: "<<sentence<<endl;
    cout<<"The length of the sentence is: "<<strlen(sentence)<<endl;
    return 0;
}