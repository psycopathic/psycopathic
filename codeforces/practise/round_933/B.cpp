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
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    bool check = true;
    int max = arr[0];
    int idx = -1;
    int i = 0;

    while(check) {
        for(i = 0; i < n; i++) {
            if(arr[i] > max) {
                max = arr[i];
                idx = i;
            }
        }
       if (idx < n - 1) {
    if (idx > 0) {
        arr[idx] -= 2;
        arr[idx - 1]--;
    }
    arr[idx + 1]--;
} else {
    arr[idx] -= 2;
    arr[idx - 1]--;
}
        for(i = 0; i < n; i++) {
            if(arr[i] < 0) {
                check = false;
                break;
            }
        }
    }
    string s = "YES";

    for(auto x : arr) {
        if(x != 0) {
            s = "NO";
            break; 
        }
    }
    cout << s << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
