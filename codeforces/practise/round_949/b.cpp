#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--) {
    int n, m;
    cin >> n >> m;
    if(n == 0) {
      if(m == 0) {
        cout << 0 << "\n";
        continue;
      }
      int bit = 1;
      while(m>>bit) bit++;
      cout << (1<<bit)-1 << "\n";
      continue;
    }
    int ans = 0;
    for(int i = 0; i < 32; i++) {
      if((n>>i)&1) ans += (1<<i);
      else {
        int pos = (n-((n>>i)<<i));
        if(m >= (pos+1)) ans += (1<<i);
        else if(m >= (1<<i)-pos) ans += (1<<i);
      }
    }
    cout << ans << "\n";
  }
}