#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<stack>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<cstring>
#include<set>
using namespace std;
int leaderArray(vector<int>&arr)
{
    set<int>s;
       int maxLen = 0;
    int n = arr.size();
    for(int i =0;i<n;i++)
    {
        s.insert(arr[i]);
    }
  
  for(int i=0;i<n;i++)
  {
    int count = 1;
    int num = arr[i];
    while(s.find(num+1)!=s.end())
    {
        count++;
        num++;
    }
    maxLen = max(maxLen,count);
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