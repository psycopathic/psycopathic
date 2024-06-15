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
void reverse(string &s,int i,int j)
{
    if(i>=j)
    return ;
    else
    {
        swap(s[i],s[j]);
         reverse(s,i+1,j-1);
    }
}
int main()
{
    string s;
    cout<<"Enter the string : ";
    getline(cin,s);
    reverse(s,0,s.length()-1);
    cout<<s<<endl;
    return 0;
}