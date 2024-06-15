#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<stack>
#include<map>
#include<unordered_map>
#include<unordered_set>
using namespace std;
void revString(string &str,int s,int e)
{
    if(s>=e)
    return ;
    else{
        swap(str[s],str[e]);
        revString(str,s+1,e-1);
    }
}
int main()
{
    string s;
    getline(cin,s);
    revString(s,0,s.length()-1);
    cout<<s<<endl; 
    return 0;
}