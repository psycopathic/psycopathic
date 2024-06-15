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

bool powerOfFour(int n)
{
   if(n<=0)
   return false;  /*because power can never be negative if it is even*/
   else{
    return ((n & (n-1))==0 && (1431655765&n)==n);
   }
}
int main()
{
    int n;
    cin>>n;
    if(powerOfFour(n))
    cout<<"multiple of four"<<endl;
    else
    cout<<"not multiple of four"<<endl;
    return 0;
}