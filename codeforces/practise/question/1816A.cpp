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

void solve(){ int a,b;
    cin >> a >> b;
    cout << 2 << "\n" << a-1 << ' ' << 1 << "\n" << a << ' ' << b << "\n";
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