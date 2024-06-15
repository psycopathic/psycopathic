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

void solve(){
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll x = a * d, y = b * c;
    if (x == y)
        cout << "0\n";
    else if (y != 0 && x % y == 0 || x != 0 && y % x == 0)
        cout << "1\n";
    else
        cout << "2\n";
}


int main()
{
   long long t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}