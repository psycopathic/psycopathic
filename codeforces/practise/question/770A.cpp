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
    int n;
    int k;
    cin>>n>>k;
    string s = "abcdefghijklmnopqrstuvwxyz";
    string s1="",res="";
    for(int i=0;i<k;i++){
       s1+=s[i];
    }
    int j=0;
    for(int i=0;i<n;i++){
        res+=s[j++];
        if(j>k-1){
            j=0;
        }
    }
    cout<<res<<endl;
    return 0;
}