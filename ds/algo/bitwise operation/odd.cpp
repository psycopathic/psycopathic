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
bool check(int num)
{
    if(num&1)
    return true;
    else
    return false;
}
int main()
{
    int a;
    cout<<"enter the number "<<endl;
    cin>>a;
    if(check(a))
    cout<<"number input is odd"<<endl;
    else
    cout<<"number input is even"<<endl;
    return 0;
}