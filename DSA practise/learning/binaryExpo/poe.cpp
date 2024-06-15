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

int pow(int a, int b){
    int res = 1;
    while(b){
        if(b&1)
            res*=a;
        a*=a;
        b = b>>1;
    }
    return res;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int A = pow(a, c);
    int B = pow(b, c);
    if(A > B)
        cout << ">" << endl;
    else if(A < B)
        cout << "<" << endl;
    else
        cout << "=" << endl;
    return 0;
}
