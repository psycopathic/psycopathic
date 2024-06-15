#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> mergeArray(vector<int> arr1, vector<int> arr2) {
    int n = arr1.size();
    int m = arr2.size();
    vector<int> arr3;
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (arr1[i] <= arr2[j])
            arr3.push_back(arr1[i++]);
        else
            arr3.push_back(arr2[j++]);
    }
    while (i < n)
        arr3.push_back(arr1[i++]);
    while (j < m)
        arr3.push_back(arr2[j++]);
    return arr3;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr1, arr2;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr1.push_back(x);
    }
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr2.push_back(x);
    }
    vector<int> res = mergeArray(arr1, arr2);
    for (int i = 0; i < res.size(); i++)
        cout << res[i] << " ";
    return 0;
}
