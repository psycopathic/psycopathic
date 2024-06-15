#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;
    vector<int> arr(n);  // Using a vector instead of a variable-length array
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        mp[arr[i]]++;
    }

    int q;
    cin >> q;
    while (q--) {
        int number;
        cin >> number;
        cout << mp[number] << endl;
    }
    return 0;
}