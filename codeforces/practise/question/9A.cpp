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
    int y,w,count=0;
    cin>>y>>w;
    int n = max(y,w);
    for(int i=n;i<=6;i++){
        count++;
    }
    
    int deno=0,num=0;
    if(count % 2 == 0 && count<6){
         num = count/2;
         deno = 6/2;
    }
    else{
        if(6%count == 0){
            num = 1;
            deno = 6/count;
        }
        else if(count == 5){
           num = 5;
           deno = 6;
        }
        else if(count == 6){
            num = 1;
            deno = 1;
        }
        else if(count==1){
            num = 1;
            deno = 6;
        }
    }

    cout<<num<<"/"<<deno<<endl;
    return 0;
}