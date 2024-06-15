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
int fibo(int n)
{
     if(n==1)
    return 1;
    else if(n==0)
    return 0;
    else
        return fibo(n-1)+fibo(n-2);
}
int main()
{
    int n;
    cin>>n;
    int m = fibo(n);
    cout<<m<<endl;
    return 0;
}