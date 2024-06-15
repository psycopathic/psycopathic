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
void reverse(string s,int idx)
{
    if(idx>=s.length())
    return ;
    else{
        reverse(s,idx+1);
        cout<<s[idx];
    }
}
int main()
{
    string s;
    getline(cin,s);
    reverse(s,0);
    return 0;
}