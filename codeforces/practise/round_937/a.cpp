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
    int a,b,c;
    cin>>a>>b>>c;
    if(a<b && b<c)
    cout<<"STAIR"<<endl;
    else if(a<b && b>c)
    cout<<"PEAK"<<endl;
    else
    cout<<"NONE"<<endl;

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