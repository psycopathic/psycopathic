#include<iostream>
using namespace std;
int main(){
    int a=5;
    int b=7;
    // cin>>a;
    // cin>>b;
    int c = a&b;
    int d = a|b;
    int e = a^b;
    int f = ~a;
    cout<<c<<endl;
    cout<<d<<endl;
    cout<<e<<endl;
    cout<<f<<endl;
    return 0;
}