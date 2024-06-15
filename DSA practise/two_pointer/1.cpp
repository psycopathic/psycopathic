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

void solve(vector<int>& a) { // Pass vector by reference to avoid copying
    int k;
    cin >> k;
    unordered_map<int,int> m;
    int count = 0;
    for (int i = 0; i < a.size(); i++) {
        if (m.find(k - a[i]) != m.end()) {
            count += m[k - a[i]];
        }
        m[a[i]]++;
    }
    cout << count << endl;
}

int main() {
    int n;
    cin >> n; // Read the size of the vector
    vector<int> a(n); // Initialize vector with size n
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    solve(a);
    return 0;
}
