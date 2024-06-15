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
    	int n,sum=0;
    	cin>>n;
    	int arr[n];
    	for(int i=0;i<n;i++)
    	{
    		cin>>arr[i];
    	}
    	for(int i=0;i<n;i++)
    	{
    		sum+=arr[i];
    	}
    	if(sum%2==1 || sum==1)
    		cout<<"YES"<<endl;
    	else
    		cout<<"NO"<<endl;
    }
    return 0;
		}