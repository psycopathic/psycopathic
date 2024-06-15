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
    unordered_map<int,int>mp;
    for(int i=0;i<9;i++){
        char t;
        cin>>t;
        mp[t]++;
    }
    for(auto x : mp){
        if(x.second == 2)
        cout<<(char)x.first<<endl;
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