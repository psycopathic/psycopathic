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
    int n;
    cin>>n;
    cin>>s;
    int count = 0;
    int len = s.length();
    for(int i=0;i<len-1;i++){
        if(s[i]==s[i+1])
        count++;
    }
    cout<<count<<endl;
    return 0;
}