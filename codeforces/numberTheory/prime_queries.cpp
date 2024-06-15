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
#define n 1000000
using namespace std;
void solve(vector<ll>arr){
    int a,b;
    cin>>a>>b;
   arr[0] = arr[1] = 0;

   for(int i=2;i<=b;i++){
    if(arr[i]){
        for(int j=i*i;j<=b;j=j+i){
           arr[j] = 0;
       }
    }
   }
   for(int i = a;i<=b;i++){
    if(arr[i]){
        cout<<i<<" ";
    }
   }
}

int main()
{
    vector<ll>arr(n,1);
    solve(arr);

    return 0;
}