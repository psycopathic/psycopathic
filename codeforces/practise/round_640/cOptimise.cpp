#include<iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        long long result = (k - 1) / (n - 1) + k;
        cout << result << endl;
    }
    return 0;
}
