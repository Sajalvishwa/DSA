#include<iostream>
#include<string>
using namespace std;

bool isAnagram ( string s , string t ){

    if (s.length() != t.length()) return false;

    int count[26] = {0};

    for(int i=0; i<s.length(); i++){
        count[s[i]-'a']++;
        count[t[i]-'a']--;
    }

    for(int i=0; i<26; i++){
        if(count[i] != 0) return false;
    }

    return true;

}

int main () 
{
    string s , t ;

    cout<<"Enter the first string : ";
    cin>>s;

    cout<<"Enter the second string : ";
    cin>>t;

    if(isAnagram(s,t)){
        cout<<"The strings are anagrams of each other.";
    }
    else{
        cout<<"The strings are not anagrams of each other.";
    }

    return 0;
}