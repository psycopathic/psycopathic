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

void solve() {
     long n; scanf("%ld", &n);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        bool valid(true);
        for(long p = 0; valid && p + 2 < n; p++){
            if(a[p] < 0){valid = false;}
            a[p + 1] -= 2 * a[p];
            a[p + 2] -= a[p];
        }

        valid = valid && !a[n - 2] && !a[n - 1];
        puts(valid ? "YES" : "NO");
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
