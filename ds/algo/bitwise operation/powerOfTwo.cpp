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
bool powerOfTwo(int n)
{
    if((n & (n-1)) == 0 )
    return true;
    else 
    return false;
}
int main()
{
    int n;
    cin>>n;
    if(powerOfTwo(n))
    cout<<"it is power of two";
    else
    cout<<"it is not a power of two";
    return 0;
}
// one of the best thing that i learned today was every even number has single one bit in its binary representation 