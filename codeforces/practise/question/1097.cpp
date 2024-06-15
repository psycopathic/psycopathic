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
    string res;
    cin>>res;
    string s;
    bool check = false;
    for(int i=0;i<5;i++){
        cin>>s;
        if(s[0]==res[0] || s[1]==res[1]){
            check = true;
            break;
        }
    }
    if(check)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}
int main()
{
    solve();
    return 0;
}