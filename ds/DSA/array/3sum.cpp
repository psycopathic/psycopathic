#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
using namespace std;
vector<vector<int>>twoSum(vector<int>&arr,int target)
{
   int n = arr.size();
   set<vector<int>>s1;
   for(int i=0;i<n;i++)
   {
    set<int>s2;
    for(int j = i+1;j<n;j++)
    {
        int num = -(arr[i]+arr[j]);
       if (s2.find(num) != s2.end()) {
    vector<int> temp = {arr[i], arr[j], num};
    sort(temp.begin(), temp.end());
    s1.insert(temp);
}
        s2.insert(arr[j]);
    }
   }
   vector<vector<int>>res(s1.begin(),s1.end());
   return res;

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