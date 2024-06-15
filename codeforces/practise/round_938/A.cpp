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

#define ll long long 
void solve(){
    int n,a,b;
    cin>>n>>a>>b;
    int sum=0;
    if(n%2!=0){
      sum+=a;
      n--;
    }
   ll temp1 = n*a; 
   ll temp2 = (n/2)*b;
   ll ans = min(temp1,temp2)+sum;

    cout<<ans<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}