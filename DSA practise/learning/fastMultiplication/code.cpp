// jab bada number aaiga uske liye ye algo he.......



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

int multiply(int a, int b) {
    long long res = 0;
    while (b) {
        if (b & 1) {
            res = (res + a) % MOD;
        }
        a = (a * 2) % MOD;
        b = b>>1;
    }
    return res;
}

int main()
{
    int a, b;
    cin >> a >> b;
    int result = multiply(a, b);
    cout << result << endl;
    return 0;
}
