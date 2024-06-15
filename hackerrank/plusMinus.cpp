#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    float pos = 0, neg = 0, zero = 0;

    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] < 0) {
            neg++;
        } else if (arr[i] > 0) {
            pos++;
        } else {
            zero++;
        }
    }

    cout << fixed << setprecision(6);
    cout << pos / n << endl;
    cout << neg / n << endl;
    cout << zero / n << endl;

    return 0;
}
