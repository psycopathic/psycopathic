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
vector<int> leaderArray(vector<vector<int>>&arr)
{
    int l=0;
    int k=0;
    int m = arr.size();
    int n = arr[0].size();
    vector<int>res;
    while(l<m && k<n)
    {
        for(int i=l;i<n;i++)
        res.push_back(arr[k][i]);

        k++;
        
        for(int i=k;i<m;i++)
        res.push_back(arr[i][n-1]);

        n--;

        if(k<m){
        for(int i=n-1;i>=l;i--)
          res.push_back(arr[m-1][i]);
        m--;
         }

         if(l<n){
        for(int i=m-1;i>=k;i--)
        res.push_back(arr[i][l]);
        l++;
         }
    }
    return res;
}
int main()
{
    int n,m;
    cin>>m;
    cin>>n;
    vector<vector<int>>arr;
    for(int j = 0;j<m;j++){
        vector<int>temp;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        temp.push_back(x);
    }
    arr.push_back(temp);
    }
    vector<int>res = leaderArray(arr);
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<" ";
    }
    return 0;
}