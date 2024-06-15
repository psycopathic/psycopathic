#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<stack>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<cstring>
using namespace std;
vector<int>permutation(vector<int>&arr)
{
    int n = arr.size();
    int idx = -1;
    for(int i = n-2;i>=0;i--)
    {
        if(arr[i]<arr[i+1])
        {
            idx = i;
            break;
        }
    }
    if(idx == -1){
        reverse(arr.begin(),arr.end());
        return arr;
    }
    for(int i = n-1;i>idx;i--)
    {
        if(arr[i]>arr[idx])
        {
            swap(arr[i],arr[idx]);
            break;
        }
    }
    reverse(arr.begin()+idx+1,arr.end());
    return arr;
}
int main()
{
    int n;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }
    vector<int>res = permutation(arr);
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<" ";
    }
    return 0;
}