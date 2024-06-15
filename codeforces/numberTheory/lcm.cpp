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
void solve(int n,int m){
    int result;
    for(int i = 2;i<=n*m;i++){
        if(n%i == 0 && m%i == 0){
            result = i;
            break;
        }
    }
    cout<<result<<endl;
}
int main()
{
    int n,m;
    cin>>n>>m;
    solve(n,m);
    return 0;
}