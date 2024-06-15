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
    int flag=0;
   cin>>str;
    //sort(str,str+n);
    cout<<str<<endl;
    for(int i=1;str[i]!='\0';i++)
    {
    	if(str[i]!=str[i-1])
    	{
    		flag=1;
    		break;
    	}
    }
    if(flag==1)
    	cout<<"NO"<<endl;
    else
    	cout<<"YES"<<endl;
    return 0;
}
