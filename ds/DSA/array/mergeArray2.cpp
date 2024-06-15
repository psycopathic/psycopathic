#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void mergeArrayWithoutExtraSpace(vector<int> arr1, vector<int> arr2) {
    vector<int>arr3;
    int n = arr1.size();
    int m = arr2.size();
    int i = n-1;
    int j = 0;
    while(i>=0 && j < m)
    {
        if(arr1[i]>arr2[j])
        {
            swap(arr1[i],arr2[j]);
            i--;
            j++;
        }
        else{
            break;
        }
    }
    sort(arr1.begin(),arr1.end());
    sort(arr2.begin(),arr2.end());
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
     mergeArrayWithoutExtraSpace(arr1, arr2);
    for (int i = 0; i < arr1.size(); i++)
        cout << arr1[i] << " ";
        cout<<endl;
    for (int i = 0; i < arr1.size(); i++)
        cout << arr2[i] << " ";
    return 0;
}
