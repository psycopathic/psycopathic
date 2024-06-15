		#include<bits/stdc++.h>
		using namespace std;
		int main(){
		  #ifndef ONLINE_JUDGE
    freopen("inputf.in", "r", stdin);
    freopen("outputf.in", "w", stdout);
    #endif
    int n;
    float sum=0,entries=0;
    cin>>n;
    while(n--){
    float x;
    cin>>x;
    sum=sum+x/100;
    entries++;
}
float result=sum/entries;
cout<<result*100<<endl;
    return 0;
}