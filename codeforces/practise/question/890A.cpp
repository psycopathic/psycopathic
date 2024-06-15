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

bool isSorted(vector<int>arr){
    for(int i=0;i<arr.size()-1;i++){
        if(arr[i]>arr[i+1]){
           return false;
        }
    }
    return true;
}


   void solve(int n){
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool check = true;
    ll count = 0;
    while(check){
        if(isSorted(arr)){
            check = false;
        }
        else{
            for(int i=0;i<n;i++){
                arr[i] = max(0,arr[i]-1);
            }
        }
        count++;
    }
    cout<<count<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        solve(n);
    }
    return 0;
}
