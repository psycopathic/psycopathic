		#include<bits/stdc++.h>
		using namespace std;
		int main(){
		  #ifndef ONLINE_JUDGE
    freopen("inputf.in", "r", stdin);
    freopen("outputf.in", "w", stdout);
    #endif 
    int n,m,count=0;
    cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++)
    {
    	cin>>arr[i];
    }
    int x=arr[m];
    for(int i=0;i<n;i++)
    {
    	if(arr[i]>=x && arr[i]>0)
    	{
    		count++;
    	}
    }
    cout<<count<<endl;
    return 0;
		}
