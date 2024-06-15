#include <iostream>
#include <vector>
#define ll long long
using namespace std;

void prime(vector<int>& arr) {
    // Mark 1 and 0 as not prime
    arr[1] = arr[0] = 0;

    // Start from 2 and mark all multiples of ith number (prime) as not prime
    for (ll i = 2; i * i < arr.size(); i++) {
        if (arr[i]) {
            for (ll j = i * i; j < arr.size(); j += i)
                arr[j] = 0;
        }
    }
}

int main() {
    const int n = 1000000;
    vector<int> arr(n, 1);
    prime(arr);
    for(int i=1;i<100;i++){
      if(arr[i])
      cout<<i<<" ";
    }
    return 0;
}
