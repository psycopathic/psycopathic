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
int countBits(int n)
{
    int count = 0;
    while(n>0)
    {
        int last = (n&1);
        count+=last;
        n=n>>1;
    }
    return count;
}
int main()
{
    int a = 15;
    int nums = countBits(a);
    cout<<nums<<endl;
    return 0;
}