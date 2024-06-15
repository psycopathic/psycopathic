		#include<bits/stdc++.h>
		using namespace std;
		int main(){
		  #ifndef ONLINE_JUDGE
    freopen("inputf.in", "r", stdin);
    freopen("outputf.in", "w", stdout);
    #endif 
    int n,count=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
    	cin>>arr[i];
    }
    int x=*(max_element(arr,arr+n));
    cout<<x<<endl;
    for(int i=0;i<n;i++)
    {
    	if(arr[i]!=x){
    		int y=x-arr[i];
    		arr[i]=arr[i]+y;
    		count=count+y;
    		y=0;
    	}
    }
    cout<<count<<endl;
    return 0;
}