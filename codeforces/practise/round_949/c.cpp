#include <iostream>
#include <vector>
using namespace std;

bool completeSequence(vector<int>& a) {
    int n = a.size();
    vector<int> b(n);

    for (int i = 0; i < n; i++) {
        if (a[i] != -1) {
            b[i] = a[i];
        }
    }

    for (int i = 1; i < n; i++) {
        if (b[i] == -1 && b[i - 1] != -1) {
            b[i] = b[i - 1] * 2;
            if (b[i] > 1000000000) {
                return false;
            }
        }
        if (b[i] != -1 && b[i - 1] == -1) {
            b[i - 1] = (b[i] + 1) / 2;
        }
    }

    for (int i = 0; i < n - 1; i++) {
        if (!(b[i] == (b[i + 1] + 1) / 2 || b[i + 1] == b[i] * 2)) {
            return false;
        }
    }

    a = b;
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        if (completeSequence(arr)) {
            for (int i = 0; i < n; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}
