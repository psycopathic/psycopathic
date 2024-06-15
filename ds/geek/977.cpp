		#include<bits/stdc++.h>
		using namespace std;
		int main(){
		  #ifndef ONLINE_JUDGE
    freopen("inputf.in", "r", stdin);
    freopen("outputf.in", "w", stdout);
    #endif 
    long long x,y;
    cin>>x>>y;
   for(int i=0;i<y;i++){
   	if(x%10==0){
   		x=x/10;
   	}
   	else{
   		x--;
   	}
   }
    cout<<x<<endl;
    return 0;
}
