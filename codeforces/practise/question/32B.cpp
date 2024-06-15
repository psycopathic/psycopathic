#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<stack>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<cstring>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1;
    int len = s1.length();
   for(int i=0;i<len;i++)

{
	if(s1[i]=='.'){
		s2+='0';
	}
	if(s1[i]=='-'&&s1[i+1]=='.'){
		s2+='1';
		++i;
		
	}
	if(s1[i]=='-'&&s1[i+1]=='-'){
		s2+='2';
		++i;
	}
	
} 
 cout<<s2;
    return 0;
}