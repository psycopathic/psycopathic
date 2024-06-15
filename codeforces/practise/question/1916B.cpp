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
void solve(){
    int a,b;
    cin>>a>>b;
    int big = max(a,b);
    int small = min(a,b);
    int ans = 0;
    for(int i = big;;i+=big){
        if(i%small == 0){
            ans = i;
            break;
        }
    }
    if(ans!=big){
        cout<<ans<<endl;
    }
    else{
        cout<<b*(b/a)<<endl;
    }
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
