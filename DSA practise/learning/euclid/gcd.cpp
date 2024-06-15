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

int gcd(int a,int b){
    if(b==0)
    return a;

    return gcd(b,a%b);
}

int main()
{
    int n;
    cout<<"Enter the number 1 : ";
    cin>>n;
    int m;
    cout<<"Enter the number 2 : ";
    cin>>m;
    int a = gcd(n,m);
    cout<<a<<endl;
    return 0;
}


//o(nlogn).......