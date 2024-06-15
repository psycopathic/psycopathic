#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<stack>
#include<map>
#include<unordered_map>
#include<unordered_set>
using namespace std;
int fibo(int n)
{
    if(n==1 || n==0)
    {
        return n;
    }
    else{
        return fibo(n-1)+fibo(n-2);
    }
}
int main()
{
    int n;
    cin>>n;
    int num = fibo(n);
    cout<<num<<endl;
    return 0;
}