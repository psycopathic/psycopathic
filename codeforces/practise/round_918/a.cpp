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

int findDuplicate(int a,int b,int c) {
   if(a==b)
   return c;
   else if(b==c)
   return a;
   else if(a==c)
   return b;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a,b,c;
        cin>>a>>b>>c;
        int res = findDuplicate(a,b,c);
        cout << res << endl;
    }
    return 0;
}
