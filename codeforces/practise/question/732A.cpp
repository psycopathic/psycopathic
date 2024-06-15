#include<iostream>
using namespace std;

int main() {
    int k, r;
    cin >> k >> r;
    int x = 1;
    int value = 0;
    int price = 0;
    while (true) {
        if (k * x % 10 == 0 || k * x % 10 == r) {
            cout<<x<<endl;
            break;
        }
        x++; // update the value of x
    }
    return 0;
}
