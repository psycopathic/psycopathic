#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<stack>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<cstring>
#include<cmath>
using namespace std;
int main()
{
    int t1,t2,n;
    cin>>t1>>t2>>n;
    int c = 0;
    int value = 0;
       if (n == 1) return t1;
    else if (n == 2) return t2;
    else {
        vector<long long> fib_sequence(n);
        fib_sequence[0] = t1;
        fib_sequence[1] = t2;
        for (int i = 2; i < n; ++i) {
            fib_sequence[i] = fib_sequence[i-2] + fib_sequence[i-1] * fib_sequence[i-1];
        }
    }
    return 0;
}