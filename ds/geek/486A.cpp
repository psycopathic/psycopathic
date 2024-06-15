		#include<bits/stdc++.h>
		using namespace std;
		int main(){
		  #ifndef ONLINE_JUDGE
    freopen("inputf.in", "r", stdin);
    freopen("outputf.in", "w", stdout);
    #endif 
    long long n,sum=0;
    cin>>n;
       	if(n%2==0)
    		sum=n/2;
    	else
    		sum=-(n+1)/2;
    
    cout<<sum;
    return 0;
}
