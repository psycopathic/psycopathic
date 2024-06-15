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
void sieve(int n){
    vector<bool> arr(n+1,true);

    arr[0]=arr[1]=false;
    for(int i=2;i*i<=n;i++){
        if(arr[i]){
            for(int j=i*i;j<=n;j+=i){
                arr[j] = false;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(arr[i]){
            cout<<i<<" ";
        }
    }
}
int main()
{
    int n;
    cin>>n;
    sieve(n);
    return 0;
}
