		#include<bits/stdc++.h>
		using namespace std;
		int main(){
		  #ifndef ONLINE_JUDGE
    freopen("inputf.in", "r", stdin);
    freopen("outputf.in", "w", stdout);
    #endif 
    int x;
    int a,b,c,d;
    cin>>x;
    a=x/1000;
    b=x/100%10;
    c=x/10%10;
    d=x%10;
    cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
    return 0;
		}
