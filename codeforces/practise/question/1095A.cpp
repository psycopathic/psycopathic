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
    cin>>n;
    string s,res="";
    cin>>s;
    int j=0;
    if(n==1)
    cout<<s<<endl;
    for(int i=0;i<n-1;i++){
        cout<<s.at(i);
        i+=j;
        j++;
    }
    return 0;
}