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
int fact(int n,int product)
{
    if(n<=1)
    return product;

    return fact(n-1,product*n);
}
int main()
{
    int n;
    cin>>n;
    int z = fact(n,1);
    cout<<z<<endl;
    return 0;
}