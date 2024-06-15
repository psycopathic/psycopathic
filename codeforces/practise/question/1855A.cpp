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
    vector<ll>arr;
    for(int i=2;i<n;i++){
       if(n%i==0)
       arr.push_back(i);
    }

    for(auto a : arr){
        cout<<a<<" ";
    }
    return 0;
}