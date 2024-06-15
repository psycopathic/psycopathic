		#include<bits/stdc++.h>
		using namespace std;
		int main(){
		  #ifndef ONLINE_JUDGE
    freopen("inputf.in", "r", stdin);
    freopen("outputf.in", "w", stdout);
    #endif 
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	string str;
    	cin>>str;
    	string s="Timru";
    	sort(str.begin(),str.end());
    	//cout<<str<<endl;
    	if(str==s)
    		cout<<"yes"<<endl;
    	else
    		cout<<"no"<<endl;
    }
    return 0;
}