#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<stack>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<cstring>

#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    vector<ll>arr(n);
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }

    ll count = 0;
    if(arr.size()<3){
        cout<<count<<endl;
        return 0;
    }

    for(ll i=1;i<arr.size()-1;i++){
        if((arr[i-1] < arr[i])  && (arr[i]<arr[i+1])){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}