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
    int f = 1;
    if(n==1)
    return 1;
    return n*solve(n-1);
}
int main()
{
    int n;
    cin>>n;
   int m = solve(n);
   cout<<m<<endl;
    return 0;
}