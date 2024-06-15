		#include<bits/stdc++.h>
		using namespace std;
		int main(){
		  #ifndef ONLINE_JUDGE
    freopen("inputf.in", "r", stdin);
    freopen("outputf.in", "w", stdout);
    #endif
    string str;
    int count=1;
    getline(cin,str);
    sort(str.begin(),str.end());
    for(int i=0;i<str.length()-1;i++)
    {
        if(str[i]!=str[i+1])
        count++;
    }
    if(count%2==0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    else
    {
       cout<<"IGNORE HIM!"<<endl;
    }
    return 0;
}