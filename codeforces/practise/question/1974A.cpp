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
    string s;
    cin>>s;
    map<char,char>m;
    vector<char>arr;
    for(int i=0;i<n;i++){
        if(m[s[i]] == 0){
            arr.push_back(s[i]);
            m[s[i]] = 1;
        }
    }
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
        for(int j=0;j<arr.size();j++){
            if(arr[j] == s[i]){
                s[i] = arr[arr.size()-j-1];
                break;
            }
        }
    }
    cout<<s<<endl;
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