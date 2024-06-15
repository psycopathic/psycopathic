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
    string s1,s2;
    int x,y;
     cin>>x>>y;
    cin>>s1;
    cin>>s2;
    int k = 0;

    for(auto x : s2){
        if(x == s1[k]){
           k++;
        }
        if(k == s1.length()){
           break;
        }
    }
    cout<<k<<endl;
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