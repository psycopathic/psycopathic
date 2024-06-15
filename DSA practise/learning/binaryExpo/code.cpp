//method of finding square....
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
void pow(int a,int b){
    int res = 1;
    while(b){
        if(b&1)
        res*=a;
        a*=a;
        b = b>>1;
    }
    cout<<res<<endl;
}
int main()
{
    int a,b;
    cin>>a>>b;
    pow(a,b);
    return 0;
}