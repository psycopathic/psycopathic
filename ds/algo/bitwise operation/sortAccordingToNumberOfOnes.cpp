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
#include<bits/stdc++.h>
using namespace std;

#include<bits/stdc++.h>
using namespace std;

int counter(int n) { 
    int count = 0;
    while(n > 0) {
        int last = (n & 1);
        count += last;
        n = n >> 1;
    }
    return count;
}

vector<int> sortByBits(vector<int>& arr) {
    int n = arr.size();
    map<int,int> mp;
    for(int i = 0; i < n; i++) {
        mp[arr[i]] = counter(arr[i]);
    }
    vector<pair<int,int>> res;
    for(auto x : mp) {
        res.push_back({x.second, x.first}); 
    }
    sort(res.begin(), res.end());
    vector<int> sorted_arr;
    for(auto x : res) {
        sorted_arr.push_back(x.second); 
    }
    return sorted_arr;
}

int main(){
    vector<int>arr;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }
    vector<int>res = sortByBits(arr);
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<" ";
    }
    return 0;
}