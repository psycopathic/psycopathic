/*find prime factorisation of the given number*/

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
    int n;
    cin>>n;
    for(int i=2;i<=n;i++){
        if(n%i == 0){
            int count = 0;
            while(n%i==0){
                count++;
                n=n/i;
            }
            n=n/i;
            cout<<i<<" ^ "<<count;
        }
    }
    return 0;
}