#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> arr1(n);
    vector<int> arr2(n + 1);

    for (int i = 0; i < n; ++i) {
        cin >> arr1[i];
    }

    for (int i = 0; i < n + 1; ++i) {
        cin >> arr2[i];
    }

    int operations = 0;

    // Calculate the difference for the first n elements
    for (int i = 0; i < n; ++i) {
        operations += abs(arr1[i] - arr2[i]);
    }

    // Find the minimum operations to match the last element of arr2
    int min_operations = INT8_MAX;
    for (int i = 0; i < n; ++i) {
        min_operations = min(min_operations, abs(arr1[i] - arr2[n]));
    }

    operations += min_operations;

    cout << operations + 1 << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
