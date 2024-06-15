		#include<bits/stdc++.h>
		using namespace std;
		int main(){
		  #ifndef ONLINE_JUDGE
    freopen("inputf.in", "r", stdin);
    freopen("outputf.in", "w", stdout);
    #endif 
    int n,count=0;
    cin>>n;
    while(n--)
    {
      int people,capacity;
      cin>>people>>capacity;
      if((capacity-people)>=2)
      {
         count++;
      }
    }
    cout<<count<<endl;
    return 0;
}