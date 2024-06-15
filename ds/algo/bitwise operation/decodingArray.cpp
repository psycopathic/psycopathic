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
// vector<int>decode(vector<int>arr)
// {
//     int n = arr.size();
//     vector<int>res;
//     for(int i=0;i<n-1;i++)
//     {
//       res.push_back(arr[i]^arr[i+1]);
//     }
//     return res;
// }
vector<int> decode(vector<int> encoded, int first) {
    int n=encoded.size();
    vector<int>ans(n+1);
    ans[0]=first;
    int pre=ans[0];
    for(int i=1;i<=n;i++)
    {
        ans[i]=pre^encoded[i-1];
        pre=ans[i];
    }
    return ans;
}
int main()
{
    int n,first;
    cin>>n;
    cin>>first;
    vector<int>arr;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }
    vector<int>res = decode(arr,first);
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<" ";
    }
    return 0;
}