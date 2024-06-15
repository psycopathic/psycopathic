#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<stack>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<cstring>
using namespace std;

void solve(){
    string s;
    cin >> s;
    string s1 = s.substr(0, 2); 
    if(s1 == "00") {
        s[0] = '1';
        s[1] = '2';
        cout << s << " AM" << endl;
    } else if(s1 < "12") {
        cout << s << " AM" << endl;
    } else if(s1 > "12") {
        int m = stoi(s1);
        m -= 12;
        s[1] = m % 10 + '0';
        s[0] = m / 10 + '0';
        cout << s << " PM" << endl;
    } else if(s1 == "12") {
        cout << s << " PM" << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
