#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
using namespace std;
vector<vector<int>>twoSum(vector<int>&arr,int target)
{
   int n = arr.size();
   int k =0;
   sort(arr.begin(),arr.end());
   vector<vector<int>>ans;
   for(int i=0;i<n;i++)
   {
    if(i!=0 && arr[i]==arr[i-1])
    continue;
     for(int j=i+1;j<n;j++){
        if(j!=i+1 && arr[j]==arr[j-1])
          continue;
        //two pointer 
         k = j+1;
        int l = n-1;
    while(k<l)
    {
        int sum = arr[i];
        sum+=arr[j];
        sum+=arr[k];
        sum+=arr[l];

        if(sum==target){
         vector<int>temp = {arr[i],arr[j],arr[k],arr[l]};
        ans.push_back(temp);
        l--;
        k++;
        while(k<l && arr[k]==arr[k-1])k++;
        while(k<l && arr[l]==arr[l+1])l--;
        }
        else if(target<sum)
        l--;
        else k++;
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
    int k;
    cin>>k;
   vector<vector<int>>res = twoSum(arr,k);
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