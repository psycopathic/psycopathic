#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<stack>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<cstring>
#include<cmath>
using namespace std;
void solve(){
    int a, b, c; 
		cin >> a >> b >> c; 
		int ans = a; 
		ans += ceil((b * 1.000) / 3);
		if(b % 3) b = 3 - b % 3;
		else b = 0;
		if(c < b) ans = -1;
		else{
			c -= b; 
			ans += ceil((c * 1.00) / 3.00);
		}
		cout << ans <<endl;
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