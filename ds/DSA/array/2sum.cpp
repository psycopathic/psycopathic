#include<iostream>
#include<vector>
#include<map>
using namespace std;
vector<int>twoSum(vector<int>arr,int target)
{
   int n = arr.size();
   int sum = 0;
   map<int,int>m;
   for(int i=0;i<n;i++){
      int diff = target - arr[i];
      if(m.find(diff)!=m.end())
      {
        return {m[diff],i};
      }
      m[arr[i]] = i;
   }
    return {-1,-1};
}
int main(){
      int n;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }
    //cout<<endl;
    int k;
    cin>>k;
   vector<int>res = twoSum(arr,k);
   for(int i = 0 ;i<res.size();i++)
   {
    cout<<res[i]<<" ";
   }
   return 0;
}