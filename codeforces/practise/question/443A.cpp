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
   string s,res;
   getline(cin,s);
   int count = 0;
   if(s == "{}")
   {
    cout<<count<<endl;
    return 0;
   }

   for(int i=0;i<s.length();i++){
      if(s[i] >='a'  && s[i]<='z'){
          res.push_back(s[i]);
      }
   }
   sort(res.begin(),res.end());
   for(int i=0;i<res.length()-1;i++){
    if(res[i]!=res[i+1]){
        count++;
    }
   }
   cout<<count+1<<endl;
    return 0;
}