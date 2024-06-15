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

#define MOD 1000000007
#define ll long long

ll sumOfDigit(ll res){
    ll sum = 0;
    while(res){
        int rem = res % 10;
        sum += rem;
        res /= 10; 
    }
    return sum;
}

ll pow(ll a,ll n){
    ll res = 1;
    while(n){
        if(n & 1){
            res *= a % MOD; // Apply modulo operation here
            res %= MOD;     // Apply modulo operation here
        }
        a *= a % MOD;       // Apply modulo operation here
        a %= MOD;           // Apply modulo operation here
        n >>= 1;
    }
    return res;
}

int main()
{
    int a, n;
    cin >> a >> n;
    ll res = pow(a, n);

    while(res > 9){ // Keep calculating sum until result becomes a single-digit number
        res = sumOfDigit(res);
    }

    cout << res << endl;
    return 0;
}
