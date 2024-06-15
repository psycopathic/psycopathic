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
    int n,k;
    cin>>n>>k;

    if(k>=(n-1)){
        cout<<1<<endl;
    }
    else{
        cout<<n<<endl;
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