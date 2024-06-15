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
int majorityElement(vector<int>&arr)
{
    map<int,int>m;
    for(int i=0;i<arr.size();i++)
    {
        m[arr[i]]++;
    }
    for(auto x:m)
    {
        if(x.second>arr.size()/2)
        return x.first;
    }
    return -1;
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
   int res = majorityElement(arr);
    cout<<res<<endl;
    return 0;
}