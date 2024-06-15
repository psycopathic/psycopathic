		#include<bits/stdc++.h>
		using namespace std;
		int main(){
		  #ifndef ONLINE_JUDGE
    freopen("inputf.in", "r", stdin);
    freopen("outputf.in", "w", stdout);
    #endif 
    int f,n,count=0;
    cin>>n>>f;
    int arr[n];
    for(int i=0;i<n;i++)
    {
    	cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
    	if(arr[i]>f)
    		count=count+2;
    	else
    		count=count+1;
    }
    cout<<count<<endl;
    return 0;
}
