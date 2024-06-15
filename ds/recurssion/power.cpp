#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<stack>
#include<map>
#include<unordered_map>
#include<unordered_set>
using namespace std;
int power(int a,int pow)
{
    if(pow==0)
    return 1;
    else{
        return a*power(a,pow-1);
    }
}
int main()
{
    int a,pow;
    cin>>a>>pow;
    int num = power(a,pow);
    cout<<num<<endl;
    return 0;
}