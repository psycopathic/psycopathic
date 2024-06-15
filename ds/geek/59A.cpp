	#include<bits/stdc++.h>
		using namespace std;
		int main(){
		  #ifndef ONLINE_JUDGE
    freopen("inputf.in", "r", stdin);
    freopen("outputf.in", "w", stdout);
    #endif 
    string str,temp;
    getline(cin,str);
    int upper=0,lower=0;
    for(int i=0;str[i]!='\0';i++)
    {
    	if(str[i]>=65 && str[i]<=90)
    		upper++;
    	else
    		lower++;
    }
    if(lower>=upper){
    	transform(str.begin(), str.end(), str.begin(),::tolower);
}
    else{
    	transform(str.begin(), str.end(), str.begin(),::toupper);
}
    cout<<str<<endl;
    return 0;
}
