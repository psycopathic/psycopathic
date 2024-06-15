		#include<bits/stdc++.h>
		using namespace std;
		int main(){
		  #ifndef ONLINE_JUDGE
    freopen("inputf.in", "r", stdin);
    freopen("outputf.in", "w", stdout);
    #endif 
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
    	cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
    	if(arr[i]==1)
    	{
    		cout<<"HARD"<<endl;
    		return 0;
    	}
    }
    cout<<"easy"<<endl;

    return 0;
}