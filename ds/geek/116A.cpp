		#include<bits/stdc++.h>
		using namespace std;
		int main(){
		  #ifndef ONLINE_JUDGE
    freopen("inputf.in", "r", stdin);
    freopen("outputf.in", "w", stdout);
    #endif 
    int x,total=0,utare,chade,max=0;
    cin>>x;
    while(x--)
    {
      cin>>utare>>chade;
      total=(total-utare)+chade;
      if(max<total)
      	max=total;
    }
    cout<<max<<endl;
    return 0;
}