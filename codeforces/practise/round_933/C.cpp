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
    int n,count=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]=='p'&&s[i+1]=='i'&&s[i+2]=='e'){
            count++;
            i+=2;
        }
        else if(i+4<s.length() && s[i]=='m' && s[i+1]=='a' && s[i+2]=='p' && s[i+3]=='i' && s[i+4]=='e'){
            count++;
            i+=4;
        }
        else if(s[i]=='m'&&s[i+1]=='a'&&s[i+2]=='p'){
            count++;
            i+=2;
        }
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