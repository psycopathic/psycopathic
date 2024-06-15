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
int counter(int n)
{
    int maxi = INT_FAST8_MIN;
    int count = 0;
    while(n>0)
    {
        if((n&1)==1)
        count++;
        else{
            maxi = max(maxi,count);
            count = 0;
        }
        n = n>>1;
    }
    return maxi;
}
int main()
{
    int n;
    cin>>n;
    cout<<counter(n);
    return 0;
}