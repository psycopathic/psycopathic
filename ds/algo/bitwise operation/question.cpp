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
int clearBit(int n,int i,int j)
{
    int a = -1<<j+1;
    int b = 1<<i-1;
    int mask = a|b;
    return n & mask;
}
void updating(int &n,int i,int j,int m)
{
    int req = clearBit(n,i,j);
    m = m<<i;
    int ans =  m|req;
    cout<<ans<<endl;
}
int main()
{
    int n = 15;
    int i = 1;
    int j = 3;
    int m = 2;
     updating(n,i,j,m);
    return 0;
}