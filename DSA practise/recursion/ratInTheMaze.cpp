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
vector<string>result;
bool isSafe(int i,int j,int n)
{
    return i>=0 && i<n && j>=0 && j<n ;
}
void solve(int i,int j,vector<vector<int>>&m,int n,string &temp){
    if(!isSafe(i,j,n) || m[i][j]==0)
    return;
    if(i == n-1 && j == n-1)
    {
        result.push_back(temp);
        return;
    }
     m[i][j] = 0;
        
        temp.push_back('D');
        solve(i+1, j, m, n, temp);
        temp.pop_back();
        
        temp.push_back('R');
        solve(i, j+1, m, n, temp);
        temp.pop_back();
        
        temp.push_back('U');
        solve(i-1, j, m, n, temp);
        temp.pop_back();
        
        temp.push_back('L');
        solve(i, j-1, m, n, temp);
        temp.pop_back();
        
        m[i][j] = 1;

}
void findPath(vector<vector<int>>&m,int n)
{
    string temp = "";
    solve(0,0,m,n,temp);
}
int main()
{
    int m,n;
    cin>>m>>n;
    cout<<"Enter the path which rath has to follow : ";
   vector<vector<int>>arr;
    for(int i=0;i<m;i++)
    {
        vector<int>temp;
        for(int j=0;j<n;j++)
        {
            int x;
            cin>>x;
            temp.push_back(x);
        }
        arr.push_back(temp);
    }
    findPath(arr,n);
    for(int i=0;i<result.size();i++)
    cout<<result[i];
    return 0;
}