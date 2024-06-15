#include<bits/stdc++.h>
using namespace std;

#define mod  1000000007

long long power(long long a,long long b){
    long long res = 1;
    while(b){
        if(b&1)
        res = (res*a)%mod;
        
        a = (a*a)%mod;
        b = b>>1;
    }
    return res;
}

int locker(int n){
   long long ans;
   if(n<2){
       ans = n;
   }
   else{
       int count = n/3;
       int rem = n%3;
       if(rem == 1){

           ans = (power(3,count-1)*4)%mod;
       }
       else{
           if(rem == 2){
               ans = (power(3,count)*2)%mod;
           }
           else{
               ans = power(3,count);
           }
       }
   }
   return ans;
}

int main(){
    int n;
    cin>>n;
    int a = locker(n);
    cout<<a<<endl;
    return 0;
}