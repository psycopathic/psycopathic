		#include<bits/stdc++.h>
		using namespace std;
		int main(){
		  #ifndef ONLINE_JUDGE
    freopen("inputf.in", "r", stdin);
    freopen("outputf.in", "w", stdout);
    #endif 
    int n;
    cin>>n;
    char str[n];
    int anton=0,danik=0;
    for(int i=0;i<n;i++)
    	{
    		cin>>str[i];
    	}
    for(int i=0;i<n;i++)
    {
    	if(str[i]=='A')
    		anton++;
    	else
    		danik++;
    }
    //cout<<anton<<" "<<danik<<endl;
    if(anton>danik)
    	cout<<"Anton"<<endl;
    else if(anton<danik)
    	cout<<"Danik"<<endl;
    else
    	cout<<"Friendship"<<endl;
    return 0;
}
