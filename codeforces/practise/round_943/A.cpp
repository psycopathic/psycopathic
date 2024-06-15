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
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

void solve () 
{
    int x;
    cin>>x;
    int maxY = 1;
    int maxSum = 1; 
    for (int y = 2; y < x; ++y) {
        int currentGCD = gcd(x, y);
        int currentSum = currentGCD + y;

        if (currentSum > maxSum) {
            maxY = y;
            maxSum = currentSum;
        }
    }

    cout<<maxY<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}