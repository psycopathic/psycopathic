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
    int count = 0;
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++){
       if(s[i]=='*' && s[i+1]=='*')
       break;
       if(s[i]=='@')
       count++;
    }
    cout<<count<<endl;
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