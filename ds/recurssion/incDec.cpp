#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<stack>
#include<map>
#include<unordered_map>
#include<unordered_set>
using namespace std;
void inc(int n)
{
    if(n==1)
    cout<<1;
    else{
       cout<<n<<" ";
       inc(n-1);
    }
}
void dec(int n)
{
    if(n==1)
    cout<<1<<" ";
    else{
         dec(n-1);
       cout<<n<<" ";
    }
}
int main()
{
    int n;
    cin>>n;
    inc(n);
    cout<<endl;
    dec(n);
    return 0;
}