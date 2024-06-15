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
    string s,t;
    cin>>s;
    cin>>t;
  
    long long count =0 ;
    long long j=0;
    for(long long i=0;i<t.length();i++){
        if(t[i] == s[j]){
            count++;
            j++;
        }
    }
    cout<<count + 1<<endl;
    return 0;
}