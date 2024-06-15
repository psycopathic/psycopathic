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
    int n,m,k,count=0;
    cin>>n>>m>>k;
    vector<int>pocketLeft(n);
    vector<int>pocketRight(m);

    for(int i=0;i<n;i++){
        cin>>pocketLeft[i];
    }
    for(int i=0;i<m;i++){
        cin>>pocketRight[i];
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(pocketLeft[i]>=k)
            break;
            else if(pocketLeft[i]+pocketRight[j]<=k)
            count++;
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