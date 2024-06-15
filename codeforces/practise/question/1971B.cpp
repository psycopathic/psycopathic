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
    
    int check = 0;

    for(int i=1;i<s.length();i++){
        if(s[0]!=s[i]){
            swap(s[0],s[i]);
            check = 1;
            break;
        }
    }
    if(!check){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
        cout<<s<<endl;
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