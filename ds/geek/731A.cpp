		#include<bits/stdc++.h>
		using namespace std;
		int main(){
		  #ifndef ONLINE_JUDGE
    freopen("inputf.in", "r", stdin);
    freopen("outputf.in", "w", stdout);
    #endif 
    int sum=0;
    string str;
    cin>>str;
    int n=str.length();
    int x='a';
    for(int i=0;str[i]!='\0';i++)
    {
      int a=abs(str[i]-x);
      int b=26-a;
      sum+=min(a,b);
      x=str[i];
    }
    cout<<sum<<endl;
    return 0;
}