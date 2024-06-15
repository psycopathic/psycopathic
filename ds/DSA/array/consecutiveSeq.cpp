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
bool linearSearch(vector<int>&arr,int key)
{
    int n = arr.size();
    for(int i =0;i<n;i++)
    {
        if(arr[i] == key)
        return true;
    }
    return false;
}
int leaderArray(vector<int>&arr)
{
    int n = arr.size();
    int maxLen = 0;
    for(int i=0;i<n;i++)
    {
        int nums = arr[i];
        int count = 1;
        while(linearSearch(arr,nums+1) == true)
        {
           count++;
           nums++;
        }
        maxLen = max(count,maxLen);
    }
    return maxLen;
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
    int res = leaderArray(arr);
    cout<<res<<endl;
    return 0;
}