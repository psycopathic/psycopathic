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
    long long n ,b,set=0;
    cin>>n>>b;
    for(int i=0;i<n;i++){
        char s;
        int a;
        cin>>s;
        cin>>a;

        if(s == '+'){  
            b+=a;
        }
        else if(b>=a){
            b-=a;
        }
        else{
            set++;
        }
    }
    cout<<b<<" "<<set<<endl;
    return 0;
}