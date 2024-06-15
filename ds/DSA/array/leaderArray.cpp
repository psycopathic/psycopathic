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
    vector<int> ans;
    int n = arr.size();
  for (int i = 0; i < n; i++) {
    bool leader = true;
    for (int j = i + 1; j < n; j++){
      if (arr[j] > arr[i]) {
        leader = false;
        break;
      }
    }
    if (leader)
    ans.push_back(arr[i]);

  }
  
  return ans;
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