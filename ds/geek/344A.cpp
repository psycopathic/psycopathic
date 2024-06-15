		#include<bits/stdc++.h>
		using namespace std;
		int main(){
		  #ifndef ONLINE_JUDGE
    freopen("inputf.in", "r", stdin);
    freopen("outputf.in", "w", stdout);
    #endif 
    int n,count=1;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
    	cin>>arr[i];
    }
    for(int i=0;i<n-1;i++)
    {
    	if(arr[i]!=arr[i+1])
    	{
           ++count;
    	}
    }
    cout<<count<<endl;
    return 0;
}
