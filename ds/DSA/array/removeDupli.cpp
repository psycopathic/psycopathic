#include<vector>
#include<iostream>
#include<set>
using namespace std;
vector<int>dupli(vector<int>arr)
{
    int n = arr.size();
    set<int>s;
    for(int i=0;i<n;i++)
    {
       s.insert(arr[i]);
    }
    arr.clear();
    for(auto x : s)
    {
        arr.push_back(x);
    }
    return arr;
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
   vector<int>res = dupli(arr);
   for(int i = 0 ;i<res.size();i++)
   {
    cout<<res[i]<<" ";
   }
   return 0;
}