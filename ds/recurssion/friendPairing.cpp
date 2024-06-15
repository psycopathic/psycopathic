#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<stack>
#include<map>
#include<unordered_map>
#include<unordered_set>
using namespace std;
int pairing(int n)
{
    if(n<1)
    return 1;
    else{
        return pairing(n-1)+(n-1)*pairing(n-2);
    }
}
int main()
{
    int n;
    cin>>n;
    int res = pairing(n);
    cout<<res<<endl;
    return 0;
}