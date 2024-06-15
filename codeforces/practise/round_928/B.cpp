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
void solve()
{
    int n;
    cin>>n;
     vector<string> board(n);
    for (int i = 0; i < n; ++i)
        cin >> board[i];

    bool check = false;
    for(int i=0;i<n;i++)
    {
        int count = 0;
        for(int j=0;j<n;j++)
        {
            if(board[i][j]=='1')
            count++;
        }
        if(count==1){
            check = true;
        }
        else if(count>1)
        break;
    }
    reverse(board.begin(),board.end());
    for(int i=0;i<n;i++)
    {
        int count = 0;
        for(int j=0;j<n;j++)
        {
            if(board[i][j]=='1')
            count++;
        }
        if(count==1){
            check = true;
        }
        else if(count>1)
        break;
    }
    if(check)
    cout<<"TRIANGLE"<<endl;
    else
    cout<<"SQUARE"<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}