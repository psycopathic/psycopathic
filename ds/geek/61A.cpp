		#include<bits/stdc++.h>
		using namespace std;
		# define ull unsigned long long
		int decimalbinary(int x);
		int binarydecimal(int n)
		{
			   int remain,sum=0,k=0;
        while(n>0)
   {
     remain=n%10;
     sum=sum+remain*pow(2,k);
     k++;
     n=n/10;
   }
  return sum;
		}
	int decimalbinary(int N)
{
    ull B_Number = 0;
    int cnt = 0;
    while (N != 0) {
        int rem = N % 2;
        ull c = pow(10, cnt);
        B_Number += rem * c;
        N /= 2;
                cnt++;
    }
    return B_Number;
}
		int main(){
		  #ifndef ONLINE_JUDGE
    freopen("inputf.in", "r", stdin);
    freopen("outputf.in", "w", stdout);
    #endif
   long long x,y;
   cin>>x>>y;
   int a=binarydecimal(x);
   int b=binarydecimal(y);
   long long num=(a|b);
   cout<<a<<" "<<b<<endl;
   cout<<num<<endl;
   cout<<decimalbinary(num)<<endl;
    return 0;
}