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
     string s1 = "hello";
   string s2;
   cin>>s2;
   
   int j = 0,count = 0;
   for(int i=0;i<s2.length();i++){
       if(s2[i]==s1[j]){
         j++;
         count++;
       }
   }
   if(count == 5){
    cout<<"YES"<<endl;
   }
   else{
    cout<<"NO"<<endl;
   }
}