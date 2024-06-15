		#include<bits/stdc++.h>
		using namespace std;
		int counter=0;
		int main(){
		  #ifndef ONLINE_JUDGE
    freopen("inputf.in", "r", stdin);
    freopen("outputf.in", "w", stdout);
    #endif 
    int t;
    cin>>t;
    while(t--)
    {
      int arr[3],count=0;
      for(int i=0;i<3;i++)
      {
      	cin>>arr[i];
      }
      for(int i=0;i<3;i++)
      {
      	if(arr[i]==1)
      	{
      		count++;
      	}
      }
      if(count>=2)
      {
        counter++;
      }
    }
    cout<<counter<<endl;
    return 0;
}
