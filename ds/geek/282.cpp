		#include<bits/stdc++.h>
		using namespace std;
		int main(){
		  #ifndef ONLINE_JUDGE
    freopen("inputf.in", "r", stdin);
    freopen("outputf.in", "w", stdout);
    #endif 
    int t;
    string s;
    cin>>t;
    int x=0;
    while(t--)
    {
    	cin>>s;
    	if(s[1]=='+')
    	{
    		x++;
    	}
    	else
    	{
    		x--;
    	}
    }
    cout<<x<<endl;
    return 0;
}
