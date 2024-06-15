		#include<bits/stdc++.h>
		using namespace std;
		int main(){
		  #ifndef ONLINE_JUDGE
    freopen("inputf.in", "r", stdin);
    freopen("outputf.in", "w", stdout);
    #endif 
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    int i=0;
    int j=s2.length()-1;
    while(i<=j)
    {
    	char temp=s2[i];
    	s2[i]=s2[j];
    	s2[j]=temp;
    	i++;
    	j--;
    }
   if(s1==s2)
   {
   	cout<<"YES"<<endl;
   }
   else
   {
   	cout<<"NO"<<endl;
   }
    return 0;
}
