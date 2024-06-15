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
vector<int>leaderArray(vector<int>&arr)
{
   int n = arr.size();
   int max = arr[n-1];
   vector<int>res;
   res.push_back(arr[n-1]);
   for(int i=n-2;i>=0;i--){
     if(max<arr[i]){
        max = arr[i];
        res.push_back(arr[i]);
     }
   }
   reverse(res.begin(),res.end());
   return res;
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
    vector<int>res = leaderArray(arr);
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<" ";
    }
    return 0;
}