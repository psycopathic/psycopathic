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
    string s;
    cin>>n;
    cin>>s;
    int count = 0;

    for(int i=0;i<s.length();i++){
        if(s[i]=='U'){
            count++;
        }
    }
    if(count%2==1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
int main()
{                   // output dekha.....
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}