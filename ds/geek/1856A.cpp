		#include<bits/stdc++.h>
		using namespace std;
		int main(){
		  #ifndef ONLINE_JUDGE
    freopen("inputf.in", "r", stdin);
    freopen("outputf.in", "w", stdout);
    #endif 
    int t;
    cin>>t;
    while(t--){
    int n,result=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
    	cin>>arr[i];
    }
    	for(int i=0;i<n-1;i++)
    	{
    		if(arr[i]>arr[i+1])
    			result=max(result,arr[i]);
    	}
    	cout<<result<<endl;
    
  }
    return 0;
}