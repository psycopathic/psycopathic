		#include<bits/stdc++.h>
		using namespace std;
		int main(){
      int t;
      cin>>t;
      while(t--){
    string str;
    getline(cin,str);
    if(str.length()<=10)
    {
    	cout<<str<<endl;
    }
    else
    {
    	int x=str.length()-2;
 
      cout<<str[0]<<x<<str[str.length()-1]<<endl;
    }
  }
    return 0;
		}