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
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        string s;
        cin>>s;
        sort(s.begin(),s.end());


        s[0]==s[s.length()-1] ? cout<<"-1":cout<<s;
        cout<<endl;
    }
    return 0;
}