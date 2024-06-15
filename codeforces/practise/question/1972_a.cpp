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
    vector<int>arr1(n),arr2(n);


    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
     
    int ans = 0;
    int diff = 0;

    for(int i=0;i<n;i++){
        if(arr1[i-diff]>arr2[i]){
            ++ans;
            ++diff;
        }
    }

    cout<<ans<<endl;
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