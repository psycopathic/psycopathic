#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t; // Read the number of test cases

    for (int i = 0; i < t; ++i) {
        int x, y;
        cin >> x >> y; // Read the two integers x and y
        
        if (x - y > 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
