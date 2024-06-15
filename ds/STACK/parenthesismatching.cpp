#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<stack>
using namespace std;
int main()
{
    stack<int>s;
    string str="{{(a+b)*(c+d)))";
    int n=str.length();
    for(int i=0;i<n;i++)
    {
        if(str[i]=='(' ||str[i]=='{' ||str[i]=='[')
         s.push(str[i]);
         else if(str[i]==')' ||str[i]=='}' ||str[i]==']'){
         if(s.empty()){
            cout<<str[i]<<" does'nt match any parenthesis\n";
          return 0;
         }
          s.pop();
        }
    }
    if(s.empty())
     cout<<"all parenthesis matched"<<endl;
     else
     cout<<"matching pairs are missing"<<endl;
    return 0;
}