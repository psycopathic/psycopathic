		#include<bits/stdc++.h>
		using namespace std;
		int main(){
		  #ifndef ONLINE_JUDGE
    freopen("inputf.in", "r", stdin);
    freopen("outputf.in", "w", stdout);
    #endif 
    int hh,mm,x,y;
    int t;
    cin>>t;
    while(t--){
    cin>>hh>>mm;
    if(hh==0 && mm==0)
    	cout<<"0"<<endl;
    else{
     x=abs(23-hh);
     y=abs(60-mm);
}
    cout<<x*60+y<<endl;
}
    return 0;
}