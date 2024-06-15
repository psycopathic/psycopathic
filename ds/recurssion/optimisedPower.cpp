#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<stack>
#include<map>
#include<unordered_map>
#include<unordered_set>
using namespace std;
int power(int a,int n)
{
    static int x=1;
    static int xSq=1;
    if(n==0)        //static is once created then its value does not return to initial;
    return 1;
          x = power(a,n/2);
          xSq = x*x;
    if(n & 1)
    return a*xSq;
    return xSq;
}
int main()
{
    int a,n;
    cin>>a>>n;
    int num = power(a,n);
    cout<<num<<endl;
    return 0;
}