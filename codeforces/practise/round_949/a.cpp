#include <iostream>
#include <algorithm>
#include <cmath>
#define ll long long
using namespace std;

ll countDivisions(ll l,ll r) {
    ll score = 0;
    while(r>1){
        r/=2;
        score++;
    }
    
    return score;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll l, r;
        cin >> l >> r;

        cout<<countDivisions(l,r)<<endl;
    }
    return 0;
}
