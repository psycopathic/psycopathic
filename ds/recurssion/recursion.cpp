		#include<bits/stdc++.h>
		using namespace std;
		int factoial(int n)
		{
			if(n==0 || n==1)
			{
				return 1;
			}
			else
			{
                return n*factoial(n-1);
			}
			return 0;		
		}
		int main(){
	// 	  #ifndef ONLINE_JUDGE
    // freopen("inputf.in", "r", stdin);
    // freopen("outputf.in", "w", stdout);
    // #endif 
        int n;
        cin>>n;
        int num = factoial(n);
        cout<<num<<endl;
    return 0;
}