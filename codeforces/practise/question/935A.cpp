#include<iostream>
using namespace std;

void solve(){
    int a,b,c;
    cin >> a >> b >> c;
    bool flag1=false, flag2=false, flag3=false; // Initialize flags to false
    int req1=0, req2=0, req3=0; // Initialize required values
    if(!a%1){
        flag1=true;
        req1 = a;
    }
    else if(!(b%2) && b>1){
        flag2=true;
        req2 = b/2;
    }
    else if(c>1){
        flag3=true;
        req3=1;
    }
    if(flag1 && flag2 && flag3)
        cout << req1 + req2 + req3 << endl;
    else
        cout << -1 << endl; // Print -1 with a newline
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
