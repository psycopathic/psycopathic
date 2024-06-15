#include <iostream>
using namespace std;

void solve(){
  long n; cin >> n;
        if(n % 2){
          cout << "NO" << endl;
         return;
         }
        cout << "YES" << endl;
        for(long p = 0; 2 * p < n; p++){
          cout << ((p % 2) ? "AA" : "BB");
        }
        cout << endl;
  }

int main(){

    ios_base::sync_with_stdio(false);

    int t; cin >> t;
    while(t--){
      solve();
    }
       
}