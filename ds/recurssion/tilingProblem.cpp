#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<stack>
#include<map>
#include<unordered_map>
#include<unordered_set>
using namespace std;
int noOfTiles(int n)
{
    if(n<=4)
    return 1;
    else{
        return noOfTiles(n-1)+noOfTiles(n-4);
    }
}
int main()
{
    int n;
    cin>>n;
    int num = noOfTiles(n);
    cout<<num<<endl;
    return 0;
}