#include <iostream>
#include <vector>
#include <cmath>
#include <cstdint> // Add this header for INT_FAST8_MIN
using namespace std;

int maxSearch(vector<int>& arr) {
    int maxe = INT_FAST8_MIN;
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        maxe = max(maxe, arr[i]);
    }
    return maxe;
}

int totalHours(vector<int>& arr, int hour) {
    int n = arr.size();
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += ceil((double)(arr[i]) / (double)(hour));
    }
    return total;
}

int binarySearch(vector<int>& arr, int key) {
    int n = arr.size();
    int s = 1;
    int l = maxSearch(arr);
    while (s <= l) {
        int mid = l + (s - l) / 2;
        int hour = totalHours(arr, mid);
        if (hour <= key) {
            l = mid - 1;
        }
        else
            s = mid + 1;
    }
    return s;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    int key;
    cout << "input key\n";
    cin >> key;
    int res = binarySearch(arr, key);
    cout << res << endl;
    return 0;
}
