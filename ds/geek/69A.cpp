		#include<bits/stdc++.h>
		using namespace std;
		int main(){
		  #ifndef ONLINE_JUDGE
    freopen("inputf.in", "r", stdin);
    freopen("outputf.in", "w", stdout);
    #endif 
int x,y,z,xaxis=0,yaxis=0,zaxis=0;
int n;
cin>>n;
while(n--)
{
   cin>>x>>y>>z;
   xaxis+=x;
   yaxis+=y;
   zaxis+=z;

}

 if(xaxis==0 && yaxis==0 && zaxis==0)
 {
    cout<<"YES"<<endl;
 }  
 else
 {
    cout<<"NO"<<endl;
 }
   return 0;
}