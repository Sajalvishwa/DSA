#include<iostream>
#include<vector>
using namespace std;

vector<int> setMissmatch(vector<int>arr)
{
    //size
    int n = arr.size();

    //frequence vector
    vector<int> freq(n+1, 0);

    //count add
    for(int i=0; i<n; i++){
        freq[arr[i]]++;
    }

    //duplicate
    int duplicate = -1;

    //missing
    int missing = -1;

    //find missing and duplicate
    for(int i=1; i<=n; i++)
    {
        if(freq[i]==2){
            duplicate = i;
        }

        if(freq[i]==0){
            missing = i;
        }
    }
    return {duplicate, missing};
}

int main ()
{
    vector<int>arr={1,2,3,3,5,6};

    vector<int> ans = setMissmatch(arr);

cout << "Duplicate = " << ans[0] << endl;
cout << "Missing = " << ans[1] << endl;

    return 0;
}