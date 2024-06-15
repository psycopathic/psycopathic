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
bool consonent(char ad){
     vector<char>c{'b','c','d'};
     for(int i=0;i<c.size();i++){
        if(ad == c[i])
        return true;
     }
     return false;
}
bool vowel(char ad){
     vector<char>v{'a','e'};
     for(int i=0;i<v.size();i++){
        if(ad == v[i])
        return true;
     }
     return false;
}
void solve(){
    int n;
    cin>>n;
   string s,res="";
   cin>>s;
   while(!s.empty()){
     int x;
     if(s.back()=='a' || s.back()=='e')
     x=2;
     else
     x=3;
     while(x--){
        res+=s.back();
        s.pop_back();
     }
     res+='.';
   }
   res.pop_back();
   cout<<res<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}