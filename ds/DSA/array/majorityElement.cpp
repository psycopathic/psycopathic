#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<set>
using namespace std;
vector<int> majorityElement(vector<int>&arr)
{
    int n = arr.size();
    vector<int>ans;
    unordered_map<int,int>maps;
    set<int>s;
    for(auto x : arr)
    {
      maps[x]++;
      if(maps[x]>n/3)
      s.insert(x);
    }
    for(auto it = s.begin();it!=s.end();it++)
    ans.push_back(*it);
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
    vector<int>ans = majorityElement(arr);
    for(int i=0;i<ans.size();i++)
    cout<<ans[i]<<" ";
    return 0;
}