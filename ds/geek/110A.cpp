		#include<bits/stdc++.h>
		using namespace std;
		int main(){
		  #ifndef ONLINE_JUDGE
    freopen("inputf.in", "r", stdin);
    freopen("outputf.in", "w", stdout);
    #endif 
    long long x,copy;
    cin>>x;
    int lucky=0,digit=0,remain=0;
    copy=x;
    while(copy>0)
    {
    	copy=copy/10;
    	digit++;
    }
    remain=0;
    while(x>0)
    {
    	remain=x%10;
    	if(remain==4 || remain==7)
    	{
    		lucky++;
    	}
    	x=x/10;
    }
    if(lucky==4||lucky==7)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    return 0;
}