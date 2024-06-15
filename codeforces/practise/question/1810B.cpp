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
    if(n%2==0){
        cout<<"-1"<<endl;
        return;
    }
    vector<int>v;
    int cn = 0;
    for(int i=29;i>=1;i--){
        if((n>>i) & 1){
            cn = 1;
            v.push_back(2);
        }
        else if(cn){
            v.push_back(1);
        }
    }
    cout<<v.size()<<endl;
    for(auto x : v){
        cout<<x<<" ";
    }
    cout<<endl;
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