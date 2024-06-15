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
const int MAX_N = 1000000;
long long res[MAX_N];
int sum(int x)
{
    int sum = 0;
    while(x){
        sum+=(x%10);
        x = x/10;
    }
    return sum;
}
void solve(){
    int n;
    cin>>n;
    cout<<res[n]<<'\n';
}
int main()
{
    res[0]=0;
    for(int i=1;i<MAX_N;i++)
    {
        res[i] = res[i-1]+sum(i);
    }
    int t;
    cin>>t;
    while(t--){
        solve();
    }
   return 0;
}
