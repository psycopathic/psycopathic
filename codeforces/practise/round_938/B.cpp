#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <cstring>

using namespace std;

void solve() {
    int n, c, d;
    cin >> n >> c >> d;
    vector<int> a(n * n);
    for (int i = 0; i < n * n; i++) {
        cin >> a[i];
    }
    int x = *min_element(a.begin(), a.end());
    vector<vector<int>> temp(n, vector<int>(n));
    temp[0][0] = x;
    for (int i = 0; i < n - 1; i++) {
        temp[0][i + 1] = temp[0][i] + d;
    }

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n;j++){
            temp[i+1][j]=temp[i][j]+c; 
        }
    }
    vector<int> b;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            b.push_back(temp[i][j]);
        }
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    if (a == b)
        cout << "yes" << endl;
    else
        cout << "no" << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
