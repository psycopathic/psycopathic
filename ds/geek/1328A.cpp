		#include<bits/stdc++.h>
		using namespace std;
		int main(){
		  #ifndef ONLINE_JUDGE
    freopen("inputf.in", "r", stdin);
    freopen("outputf.in", "w", stdout);
    #endif 
    int n;
    cin>>n;
    while(n--)
    {

    	int a,b;
    	cin>>a>>b;
    	if(a%b==0)
    	{
    		cout<<0<<endl;
    	}
    	else
    	{
    		cout<<b-(a%b)<<endl;
    	}
    } 
    return 0;
}