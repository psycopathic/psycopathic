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
vector<vector<int>> leaderArray(vector<vector<int>>&arr)
{
    int m = arr.size();
    int n = arr[0].size();
    vector<int>row(m,0);
    vector<int>col(n,0);
    for(int i = 0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i][j]==0)
            {
               row[i]=1;
               col[j]=1;
            }
        }
    }
    for(int i = 0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(row[i]==1||col[j]==1){
                 arr[i][j]=0;
            }
        }
    }
    return arr;
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
    vector<vector<int>>res = leaderArray(arr);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
   //cout<<res[i]<<" ";
    return 0;
}