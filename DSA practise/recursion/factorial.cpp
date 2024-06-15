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
int factorial(int n)
{
    int f = 1;
    if(n==0)
    return 1;
    else
    return n*factorial(n-1);
}
int main()
{
    int n;
    cout<<"enter the number for calculating a factorial"<<endl;
    cin>>n;
    int num = factorial(n);
    cout<<num<<endl;
    return 0;
}