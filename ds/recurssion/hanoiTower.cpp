#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<stack>
#include<map>
#include<unordered_map>
#include<unordered_set>
using namespace std;
void towerOfHanoi(int n , char A , char B , char C)
{
    if(n==0)
    return;
    else{
        towerOfHanoi(n-1,A,C,B);
        cout<<A<<" -> "<<C<<endl;
        towerOfHanoi(n-1,B,A,C);
    }
}
int main()
{
    int n;
    cin>>n;
    towerOfHanoi(n,'A','B','C');
    return 0;
}