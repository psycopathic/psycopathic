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
int main()
{
    int c = 4;
    int b = 5;
    int a = 6;

    cout<<(a+b)%c<<endl;
    cout<<((a%c)+(b%c))%c<<endl;
    return 0;
}