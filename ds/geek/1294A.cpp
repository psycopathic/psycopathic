		#include<bits/stdc++.h>
		using namespace std;
		int main(){
		  #ifndef ONLINE_JUDGE
    freopen("inputf.in", "r", stdin);
    freopen("outputf.in", "w", stdout);
    #endif 
    int t;
    cin>>t;
    while(t--)
    {
    	long long a,b,c,n,sum=0;
    	cin>>a>>b>>c>>n;
    	sum=a+b+c+n;
    	   if(sum%3!=0 || sum/3<a || sum/3<b || sum/3<c)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}