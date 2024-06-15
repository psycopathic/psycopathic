#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<stack>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<cstring>
#include<cmath>
using namespace std;

int main() {
    int n, m, last;
    double t, maximum = 0;
    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        cin >> t;
        if (ceil(t / m) >= maximum) {
            last = i;
            maximum = ceil(t / m);
        }
    }

    cout << last << endl;
    return 0;
}
