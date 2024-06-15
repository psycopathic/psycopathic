		#include<bits/stdc++.h>
		using namespace std;
		int main(){
		  #ifndef ONLINE_JUDGE
    freopen("inputf.in", "r", stdin);
    freopen("outputf.in", "w", stdout);
    #endif
    int a,b,count=0;
    cin>>a>>b;
    while(a<=b)
    {
      a=a*3;
      b=b*2;
      count++;
    } 
    cout<<count<<endl;
    return 0;
}
