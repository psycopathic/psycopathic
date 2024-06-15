#include <bits/stdc++.h>

using namespace std;

#define all(x) (x).begin(), (x).end()

using ll = signed long long int;

void solve() {
    int n;
    ll k;
    cin >> n >> k;
    vector<ll> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    int front = 0, back = n - 1;
    while (back > front && k) {
        ll mn = min(v[front], v[back]);
        if (k < 2 * mn) {
            v[front] -= k / 2 + k % 2;
            v[back] -= k / 2;
            k = 0;
        } else {
            v[front] -= mn;
            v[back] -= mn;
            k -= 2 * mn;
        }
        if (v[front] == 0) {
            front++;
        }
        if (v[back] == 0) {
            back--;
        }
    }
    int ans = n - (back - front + 1);
    cout << ans + ((back >= front) && (v[front] <= k)) << '\n';
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
