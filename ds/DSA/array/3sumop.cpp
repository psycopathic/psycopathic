#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
using namespace std;
vector<vector<int>>twoSum(vector<int>&arr)
{
   int n = arr.size();
   sort(arr.begin(),arr.end());
   vector<vector<int>>ans;
   for(int i=0;i<n;i++)
   {
    if(i!=0 && arr[i]==arr[i-1])
    continue;
    int j = i+1;
    int k = n-1;
    while (j<k)
    {
        int sum = arr[i]+arr[j]+arr[k];
        if(sum>0)
        k--;
        else if(sum<0)
        j++;
        else{
        vector<int>temp = {arr[i],arr[j],arr[k]};
        ans.push_back(temp);
        j++;
        k--;
        while(j<k && arr[j]==arr[j-1])j++;
        while(j<k && arr[k]==arr[k+1])k--;
        }
    }
    
   }
   return ans;
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
   vector<vector<int>>res = twoSum(arr);
   for(int i=0;i<res.size();i++)
   {
    for(int j=0;j<res[0].size();j++)
    {
        cout<<res[i][j]<<" ";
    }
    cout<<endl;
   }
   return 0;
}