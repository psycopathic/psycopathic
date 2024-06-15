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
int solve(int n){
    int maxSum = 0;
    int Osum = 2;
    for(int i = 2;i<=n;i++){
        int sum=0;
        for(int j=1;j*i<=n;j++){
            sum+=j*i;
        }
        if(sum>maxSum){
            maxSum = sum;
            Osum = i;
        }
    }
    // cout<<Osum<<endl;
    return Osum;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<solve(n)<<endl;
    }
    return 0;
}