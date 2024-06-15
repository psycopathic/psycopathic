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
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    string s = "";
    for(int i=1;i<=12;i++){
        if((i == a) || (i == b)){
            s+='r';
        }
        if((i==c) || (i==d)){
            s+='b';
        }
    }

    if((s == "rbrb") || (s == "brbr")){
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