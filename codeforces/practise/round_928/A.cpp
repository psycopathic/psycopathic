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
    while(t--){
        string s;
        cin>>s;
        int count = 0;
        char vari;
        for(int i=0;i<s.length();i++)
        {
            if(count==0){
                count = 1;
                vari = s[i];
            }
            else {
                if(s[i]==vari)
                count++;
                else
                count--;
            }
        }
        cout<<vari<<endl;
    }
    return 0;
}