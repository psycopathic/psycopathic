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
    int n,even=0,odd=0;
    cin>>n;
    n=2*n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
    	cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
    	if(arr[i]%2==0)
    		even++;
    	else
    		odd++;
    }
    if(odd==even)
    	cout<<"YES"<<endl;
    else
    	cout<<"NO"<<endl;
}
    return 0;
}
