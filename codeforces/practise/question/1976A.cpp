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
    int n;
    cin>>n;
    string s;
    cin>>s;
    string sst;
    sst = s; 
    sort(sst.begin(),sst.end());

    if(sst == s){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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