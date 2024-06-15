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
    int n,count = 0;
    cin>>n;
    vector<int>arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    for(int i=0;i<n-1;i++){
        if(arr[i]==arr[i+1]){
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