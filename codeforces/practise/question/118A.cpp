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
    string s;
    cin>>s;
    string conso;
    for(int i=0;i<s.length();i++){
        if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u' && s[i]!='y' && s[i]!='A' && s[i]!='E' && s[i]!='I' && s[i]!='O' && s[i]!='U' && s[i]!='Y')
        conso.push_back(s[i]);
    }
     transform(conso.begin(), conso.end(), conso.begin(), ::tolower);
    int n = conso.length();
    string res;
    for(int i=0;i<2*n;i++){
        if(i%2==0)
        res.push_back('.');
        else
        res.push_back(conso[i/2]);
    }
    cout<<res<<endl;
    return 0;
}