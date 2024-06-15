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
    int result = min(n,m);
    while(result>0){
        if(n%result == 0 && m%result == 0){
            break;
        }
        result--;
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