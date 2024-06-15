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
int clearBit(int n,int i)
{
   return n & (~(1<<i));
}
int getIthBit(int n,int i)
{
   return n&(1<<i);
}
int setIthBit(int n,int i)
{
    return n|(1<<i);
}
int updateBit(int n,int i,int v)
{
    int num = clearBit(n,i);
    int mask = i<<i;
    return num|mask;
}
int clearLastBits(int n,int i)
{
    int mask = -1<<i;
    return n&mask;
}
int clearInASpecifiedRange(int n,int i,int j)
{
    int a = -1<<j+1;
    int b = 1<<i - 1;
    int mask = a|b;
    return n&mask;
}
int main()
{
    int n;
    cin>>n;
    // int i;
    // cin>>i;
    // int ans1 = clearBit(n,i);
    // int ans2 = setIthBit(n,i);
    // int ans = getIthBit(n,i);
    // cout<<ans1<<endl;
    // cout<<ans2<<endl;
    // (ans>0)?cout<<"1":cout<<"0";
    // int ans3 = updateBit(n,i,0);
    // cout<<ans3<<endl;
    // int ans4 = clearLastBits(n,i);
    // cout<<ans4<<endl;
    int ans5 = clearInASpecifiedRange(n,1,5);
    cout<<ans5<<endl;
    return 0;
}