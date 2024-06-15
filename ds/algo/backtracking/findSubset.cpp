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
void findSubset(string s1,string s2,int i,int j){
    if(s1[i]=='\0')
    {
        s2[j]='\0';
        cout<<s2<<endl;
        return;
    }
    s2[j] = s1[i];
    findSubset(s1,s2,i+1,j+1);
    findSubset(s1,s2,i+1,j);
}
int main()
{
    string s1;
    cin>>s1;
     string s2(s1.size(), ' ');
    findSubset(s1,s2,0,0);
    return 0;
}