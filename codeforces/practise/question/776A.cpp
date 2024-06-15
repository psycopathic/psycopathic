#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    if (s1 == s2) {
        cout << -1 << endl;
        return 0;
    }

    vector<long long> hashs1(26, 0), hashs2(26, 0);

    for (char c : s1) {
        hashs1[c - 'a']++;
    }

    for (char c : s2) {
        hashs2[c - 'a']++;
    }

    int hash1 = 0, hash2 = 0;

    for (int i = 0; i < 26; i++) {
        if (hashs1[i] == 1 && hashs2[i] == 0) {
            hash1++;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (hashs2[i] == 1 && hashs1[i] == 0) {
            hash2++;
        }
    }
    
    if(hash1>hash2){
        cout<<s1.length()<<endl;
    }
    else if(hash1 == hash2){
        cout<<max(s1.length(),s2.length());
    }
    else{
        cout<<s2.length()<<endl;
    }
    return 0;
}
