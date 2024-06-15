#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<stack>
#include<map>
#include<unordered_map>
#include<unordered_set>
using namespace std;
int countBinary(int n,int last)
{
    if(n==0)
    return 1;
    if(last == 1)
    {
        return countBinary(n-1,0);
    }
    else{
       return countBinary(n-1,0)+countBinary(n-1,1);
    }
}
int main()
{
    int n;
    cin>>n;
    int res = countBinary(n,0);
    cout<<res<<endl;
    return 0;
}