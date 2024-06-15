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
    string s;
    cin>>s;
    if(s == "abc" ||s == "acb" ||s == "bac" ||s == "cba")
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
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