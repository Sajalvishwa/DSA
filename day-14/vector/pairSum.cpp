#include<iostream>
#include<vector>
using namespace std;

vector<int> pairSum(vector<int>arr, int target)
{
    int st=0;
    int end=arr.size()-1;

    int cursum=0;
    vector<int>ans;

    while(st<end)
    {
        cursum=arr[st]+arr[end];

        if(cursum==target)
        {
            ans.push_back(arr[st]);
            ans.push_back(arr[end]);
            return ans;
        }
        else if(cursum>target)
        {
            end--;
        }
        else
        {
            st++;
        }
    }
    return ans;
}

int main()
{
    vector<int>arr={1,2,3,4,5,6,7,8,9};
    int target=3;

    vector<int>ans=pairSum(arr,target);

    if(ans.size()==0)
    {
        cout<<"No pair found"<<endl;
    }
    else
    {
        cout<<"Pair found : "<<ans[0]<<" and "<<ans[1]<<endl;
    }

   
}