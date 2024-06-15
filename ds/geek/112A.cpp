		#include<bits/stdc++.h>
		using namespace std;
		string casechanger(string str)
		{ 
			for(int i=0;str[i]!='\0';i++)
			{
				if(str[i]>=65 && str[i]<=100)
				{
					str[i]=str[i]+22;
				}
			}
			return str;
		}
		int main(){
	// 	  #ifndef ONLINE_JUDGE
    // freopen("inputf.in", "r", stdin);
    // freopen("outputf.in", "w", stdout);
    // #endif 
      string s1, s2;
    cin>>s1>>s2;
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    cout<<s1.compare(s2)<<endl;
    return 0;
}