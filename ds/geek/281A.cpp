		#include<bits/stdc++.h>
		using namespace std;
		int main(){
		  #ifndef ONLINE_JUDGE
    freopen("inputf.in", "r", stdin);
    freopen("outputf.in", "w", stdout);
    #endif 
    string str;
    getline(cin,str);
    if(str[0]>=97 && str[0]<=122)
    {
    	str[0]=str[0]-32;
    	cout<<str;
    }
    else
    {
    	cout<<str;
    }
    return 0;
}