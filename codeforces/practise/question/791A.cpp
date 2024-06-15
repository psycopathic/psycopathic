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
    int a,b;
    cin>>a>>b;
    int count = 0;
    while(a<=b){
      a*=3;
      b*=2;
      count++;
    }
    cout<<count<<endl;
    return 0;
}